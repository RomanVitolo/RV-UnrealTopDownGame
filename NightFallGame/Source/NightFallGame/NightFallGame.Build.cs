// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NightFallGame : ModuleRules
{
	public NightFallGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"NavigationSystem",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"Niagara",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"NightFallGame",
			"NightFallGame/Variant_Strategy",
			"NightFallGame/Variant_Strategy/UI",
			"NightFallGame/Variant_TwinStick",
			"NightFallGame/Variant_TwinStick/AI",
			"NightFallGame/Variant_TwinStick/Gameplay",
			"NightFallGame/Variant_TwinStick/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
