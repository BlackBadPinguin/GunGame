scriptName "fn_voteForWeapon";

#define __filename "fn_voteForWeapon.sqf"

disableSerialization;

private _index = lbCurSel ((findDisplay 5100) displayCtrl 1);
private _weaponConfig = ((findDisplay 5100) displayCtrl 1) lbData _index;

// Send vote to server
[_index] remoteExec ["mav_fnc_voteForWeapon", 2];

// Close dialog
closeDialog 0;

// Display what map he voted for
100 cutRsc ["gungame_weaponvotedfor", "PLAIN"];

private _display = uiNamespace getVariable "gg_weaponvotedfor";
private _ctrl = _display displayCtrl 0;

// Display text
_ctrl ctrlSetText format ["Du hast für %1 gestimmt. Warte auf andere Spieler...", getText(missionConfigFile >> "CfgGungame" >> "Lists" >> _weaponConfig >> "name")];
