scriptName "fn_selectMap";
#define __filename "fn_selectMap.sqf"

// Close dialogs
closeDialog 0;
disableSerialization;

// Create cam that hovers above arena
gg_introcam_object = "camera" camCreate (getPos player);
gg_introcam_object cameraEffect ["Internal", "Back"];
gg_introcam_object camSetFOV .65;
gg_introcam_object camSetFocus [150, 1];
gg_introcam_object camCommit 0;
sleep 0.05;
showCinemaBorder false;

// Note that I was in the map selection screen
gg_didSelectMap = 1;

// Smooth transition
50000 cutRsc ["gungame_selectmaptransition","PLAIN"];
sleep 3;

// Open map selection dialog
createDialog "gg_dialog_votemap";

[] spawn {
	while {dialog} do {
		private _count = (count allPlayers) + GG_FAKE_PLAYER_COUNT;
		
		if(_count <= 1) then {
			((findDisplay 5100) displayCtrl 3) ctrlSetText format["Spieler online: %1 - Warte auf min. 2 Spieler", _count];
		} else {
			((findDisplay 5100) displayCtrl 3) ctrlSetText format["Spieler online: %1", _count];
		};
	
		sleep 0.5;
	};
};

waitUntil {dialog};

// Clear listbox
_listbox = (findDisplay 5100) displayCtrl 1;
lbClear _listbox;

// Load arenas into listbox
{
	private _index = _listbox lbAdd getText(_x >> "name");
	_listbox lbSetData [_index, (configName _x)];
} forEach ("true" configClasses (missionConfigFile >> "CfgGungame" >> "Arenas"));

// Select first map
_listbox lbSetCurSel 0;
[0, 0] spawn gg_fnc_showArena;