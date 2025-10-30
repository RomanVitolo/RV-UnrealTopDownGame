// Roman Vitolo

using UnrealBuildTool;
using System.Collections.Generic;

public class NightFallGameTarget : TargetRules
{
	public NightFallGameTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "NightFallGame" } );
	}
}
