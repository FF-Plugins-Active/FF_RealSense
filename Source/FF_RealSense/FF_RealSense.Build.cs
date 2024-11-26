// Some copyright should be here...

using System;
using System.IO;
using UnrealBuildTool;

public class FF_RealSense : ModuleRules
{
	public FF_RealSense(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        UndefinedIdentifierWarningLevel = WarningLevel.Off;
        bEnableExceptions = true;

        bUseUnity = false;

        if (UnrealTargetPlatform.Win64 == Target.Platform)
        {
            PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "ThirdParty", "Win64", "include"));
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "ThirdParty", "Win64", "lib", "realsense2.lib"));
			RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "ThirdParty", "Win64", "lib", "realsense2.dll"));
			PublicDelayLoadDLLs.Add("realsense2.dll");
        }

        if (UnrealTargetPlatform.Android == Target.Platform)
        {
            PrivateDependencyModuleNames.Add("Launch");

            PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "ThirdParty", "Android", "include"));
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "ThirdParty", "Android", "libs", "librealsense2.so"));
            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(ModuleDirectory, "FF_RealSense_UPL_Android.xml"));
        }

        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "FF_QR_Processor",
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
                "RenderCore",
                "RHI",
                "Projects",
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