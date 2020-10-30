using UnrealBuildTool;

public class ArduinoKit : ModuleRules
{
    public ArduinoKit(ReadOnlyTargetRules Target) : base(Target)
    {
        PrivateIncludePaths.AddRange(new[] { "ArduinoKit/Private" });

        PrivateDependencyModuleNames.AddRange(
            new[]
            {
                "Engine",
                "InputCore",
                "Core",
                "Slate",
                "SlateCore",
                "EditorStyle",
                "CoreUObject"
            }
        );
    }
}
