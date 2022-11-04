// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Homework_1_aradiuk : ModuleRules
{
	public Homework_1_aradiuk(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
