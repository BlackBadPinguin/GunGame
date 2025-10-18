#include "\a3\editor_f\Data\Scripts\dikCodes.h" 

scriptName "fn_setupCBAKeys";

#define __filename "fn_setupCBAKeys.sqf"

private _modName = "Panthor GunGame";

[[_modName],"rl_open_settings", "Einstellungen öffnen", {[] call gg_fnc_openPlayerSettings;}, {}, [DIK_F2, [false, false, false]]] call CBA_fnc_addKeybind;