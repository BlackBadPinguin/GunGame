scriptName "fn_openPlayerSettings";

#define __filename "fn_openPlayerSettings.sqf"

if (!isNull findDisplay 6000) exitWith {};
createDialog "gg_playerSettings";

private _scopeChoices = getArray(missionConfigFile >> "CfgGungame" >> "PlayerSettings" >> "scopes_choices");
private _musicChoices = getArray(missionConfigFile >> "CfgGungame" >> "PlayerSettings" >> "music_choices");

private _playerScope = profileNamespace getVariable ["RL_GunGame_PlayerSettings_Scope", _scopeChoices#0];
private _playerMusic = profileNamespace getVariable ["RL_GunGame_PlayerSettings_Music", _musicChoices#0];

// scopes choice
{ 
    private _displayName = getText(configFile >> "CfgWeapons" >> _x >> "displayName");
    private _icon = getText(configFile >> "CfgWeapons" >> _x >> "picture");
    private _index = lbAdd [6010, _displayName]; 

    lbSetData [6010, _index, _x];
    lbSetPicture [6010, _index, _icon];
} forEach _scopeChoices;

// music choice
{ 
    private _displayName = getText(missionConfigFile >> "CfgSounds" >> _x >> "name");
    private _index = lbAdd [6020, _displayName]; 
    
    lbSetData [6020, _index, _x];
} forEach _musicChoices;

lbSetCurSel [6010, _scopeChoices find _playerScope];
lbSetCurSel [6020, _musicChoices find _playerMusic];