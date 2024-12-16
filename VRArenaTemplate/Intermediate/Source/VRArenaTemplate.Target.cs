using UnrealBuildTool;

public class VRArenaTemplateTarget : TargetRules
{
	public VRArenaTemplateTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("VRArenaTemplate");
	}
}
