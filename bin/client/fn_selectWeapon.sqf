scriptName "fn_selectWeapon";
#define __filename "fn_selectWeapon.sqf"

// Close dialogs
closeDialog 0;
disableSerialization;

// Note that I was in the map selection screen
gg_didSelectWeapon = 1;

// Smooth transition
50000 cutRsc ["gungame_selectmaptransition","PLAIN"];
sleep 3;

// Open map selection dialog
createDialog "gg_dialog_voteWeapon";

[] spawn {
	while {dialog} do {
		((findDisplay 5100) displayCtrl 3) ctrlSetText format["Spieler online: %1", (count allPlayers)];
		sleep 0.5;
	};
};

waitUntil {dialog};

// Clear listbox
_listbox = (findDisplay 5100) displayCtrl 1;
lbClear _listbox;

// Load arenas into listbox
private _listWhitelist = getArray(missionConfigFile >> "Arenas" >> gg_map >> "list_whitelist");
private _lists = [];
{
	if ( ((count _listWhitelist) isEqualTo 0) || (configName _x) in _listWhitelist ) then {
		private _index = _listbox lbAdd getText(_x >> "name");
		_listbox lbSetData [_index, (configName _x)];
	};
} forEach ("true" configClasses (missionConfigFile >> "CfgGungame" >> "Lists"));

// Select first weapon
_listbox lbSetCurSel 0;