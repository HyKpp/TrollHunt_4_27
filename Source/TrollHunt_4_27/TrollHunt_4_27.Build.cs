// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TrollHunt_4_27 : ModuleRules
{
	public TrollHunt_4_27(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
