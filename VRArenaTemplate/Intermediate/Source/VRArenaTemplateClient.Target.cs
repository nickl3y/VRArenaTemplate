using UnrealBuildTool;

public class VRArenaTemplateClientTarget : TargetRules
{
	public VRArenaTemplateClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("VRArenaTemplate");
	}
}
