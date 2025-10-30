// Roman Vitolo

using UnrealBuildTool;
using System.Collections.Generic;

public class NightFallGameEditorTarget : TargetRules
{
	public NightFallGameEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "NightFallGame" } );
	}
}
