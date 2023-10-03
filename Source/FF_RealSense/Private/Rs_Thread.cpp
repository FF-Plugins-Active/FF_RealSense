// Fill out your copyright notice in the Description page of Project Settings.

#include "Rs_Thread.h"

// Custom Includes.
#include "Rs_Stream.h"

THIRD_PARTY_INCLUDES_START
#include <librealsense2/rs.hpp>
THIRD_PARTY_INCLUDES_END

#pragma region Main Thread Code
// This code will be run on the thread that invoked this thread (i.e. game thread)

// Sets default values
FRs_Thread::FRs_Thread(ARs_Stream* In_Parent_Actor)
{
	Parent_Actor = In_Parent_Actor;

	RunnableThread = FRunnableThread::Create(this, *Parent_Actor->ThreadName);
}

FRs_Thread::~FRs_Thread()
{
	if (RunnableThread)
	{
		RunnableThread->Kill();
		delete RunnableThread;
	}
}

#pragma endregion
// The code below will run on the new thread.

bool FRs_Thread::Init()
{
	bStartThread = true;
	return true;
}

uint32 FRs_Thread::Run()
{
	// Thread selector
	// FTaskTagScope Scope(ETaskTag::EGameThread);

	while (bStartThread)
	{
		rs2_frame* Rs_Frames = rs2_pipeline_wait_for_frames(Parent_Actor->Rs_Pipeline, 10, NULL);
		rs2_frame* First_Frame = rs2_extract_frame(Rs_Frames, 0, NULL);

		int64 Buffer_Size = rs2_get_frame_data_size(First_Frame, NULL);

		if (Buffer_Size != 0)
		{
			uint8_t* FrameBuffer = (uint8_t*)(rs2_get_frame_data(First_Frame, NULL));

			if (!Parent_Actor->Rs_Circ_Queue.Enqueue(FrameBuffer))
			{
				//bStartThread = false;
				UE_LOG(LogTemp, Warning, TEXT("RealSense Queue overloaded."));
			}

			rs2_release_frame(First_Frame);
			rs2_release_frame(Rs_Frames);
		}
	}

	return 0;
}

void FRs_Thread::Stop()
{
	UE_LOG(LogTemp, Warning, TEXT("RealSense thread stopped."));
	bStartThread = false;
}