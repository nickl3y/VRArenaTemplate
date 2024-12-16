using UnrealBuildTool;

public class VRArenaTemplateEditorTarget : TargetRules
{
	public VRArenaTemplateEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("VRArenaTemplate");
	}
}
