using UnrealBuildTool;

public class VRArenaTemplateServerTarget : TargetRules
{
	public VRArenaTemplateServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("VRArenaTemplate");
	}
}
