// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

// UE Includes.
#include "HAL/Runnable.h"

// Fordward Declerations.
class FRunnableThread;
class ARs_Stream;

class FRs_Thread : public FRunnable
{
	
public:	

	// Sets default values for this actor's properties.
	FRs_Thread(ARs_Stream* In_Parent_Actor);

	// Destructor.
	virtual ~FRs_Thread() override;

	virtual bool Init() override;

	virtual uint32 Run() override;

	virtual void Stop() override;

private:

	// Functions.

	void Callback_Stream();

	void Callback_Distance();

private:
	
	// Variables.

	FRunnableThread* RunnableThread = nullptr;
	
	ARs_Stream* Parent_Actor = nullptr;

	bool bStartThread = false;

	ERsStreamType StreamType;

};
