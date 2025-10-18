#include "..\..\script_macros.hpp"
scriptName "fn_savePlayerSettings";

#define __filename "fn_savePlayerSettings.sqf"

private _indexScope = lbCurSel 6010;
private _playerScope = lbData [6010, _indexScope];

private _indexMusic = lbCurSel 6020;
private _playerMusic = lbData [6020, _indexMusic];

profileNamespace setVariable ["RL_GunGame_PlayerSettings_Scope", _playerScope];
profileNamespace setVariable ["RL_GunGame_PlayerSettings_Music", _playerMusic];
saveProfileNamespace; 

[] call gg_fnc_loadLevelLoadout; 

HINT(false, "Gespeichert!", false, 3);

closeDialog 0;