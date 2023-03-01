// Some copyright should be here...

using System;
using System.IO;
using UnrealBuildTool;

public class FF_RealSense : ModuleRules
{
	public FF_RealSense(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        if (UnrealTargetPlatform.Win64 == Target.Platform)
        {
            string Location_Realsense = "../Source/FF_RealSense/ThirdParty/Windows/include";
            PrivateIncludePaths.Add(Location_Realsense);

            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "ThirdParty", "Windows", "libs", "realsense2.lib"));
            RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "ThirdParty", "Windows", "libs", "realsense2.dll"));
            PublicDelayLoadDLLs.Add("realsense2.dll");
        }

        if (UnrealTargetPlatform.Android == Target.Platform)
        {
            PrivateDependencyModuleNames.Add("Launch");

            string Location_Realsense = "../Source/FF_RealSense/ThirdParty/Android/include";
            PrivateIncludePaths.Add(Location_Realsense);

            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "ThirdParty", "Android", "libs", "librealsense2.so"));

            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(ModuleDirectory, "FF_RealSense_UPL_Android.xml"));
        }

        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"Projects",
                "MediaAssets",		// UMediaTexture : Base
				"RHI",				// UMediaTexture : FRHICommandListImmediate
				"RenderCore",		// UMediaTexture : GetImmediateCommandList_ForRenderCommand()
				"UMG",
				// ... add private dependencies that you statically link with here ...	
			}
			);

		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
