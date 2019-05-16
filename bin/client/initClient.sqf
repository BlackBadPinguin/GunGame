scriptName "initClient";

#define __filename "initClient.sqf"

// Variables
gg_kills = 0;
gg_deaths = 0;
gg_killfeed_own = "";
gg_currentWeapon = "";
gg_level = 0;
gg_stagekills = 0;
gg_killfeed = [];
gg_leadingplayer = objNull;

// Broadcasted vars
player setVariable ["gg_level", 0, true];

// Disable saving
enableSaving [false, false];

// Handlers
[] spawn gg_fnc_setupEventHandlers;

// Wait until server is ready
waitUntil {!isNil "gg_weaponList"};

if (gg_gamestatus == 0) then {
	// Open map selection
	[] spawn gg_fnc_selectMap;
	playMusic "LeadTrack02_F_EPC";
} else {
	[true] spawn gg_fnc_startGame;
};

gg_kills_required = 0;
{
	gg_kills_required = gg_kills_required + getNumber(_x >> "kills");
} forEach ("true" configClasses (missionConfigFile >> "CfgGungame" >> "Lists" >> gg_weaponList));

[] spawn {
	disableSerialization;

	while {true} do {
		_display = uiNamespace getVariable ["gg_progression", displayNull];

		_rank = 1;
		{
			if (_x getVariable ["gg_kills",0] > gg_kills) then {
				_rank = _rank + 1;
			};
		} forEach allPlayers;


		(_display displayCtrl 5) ctrlSetText format["%1/%2 Kills - Platz %3/%4",gg_kills,gg_kills_required,_rank,(count allPlayers)];

		if !(isNull gg_leadingplayer) then {
			(_display displayCtrl 6) ctrlSetText format["Leader %1/%2 Kills",(gg_leadingplayer getVariable ["gg_kills",0]),gg_kills_required];
		};
		
		if !(gg_currentWeapon isEqualTo "") then {
			if (!(gg_currentWeapon isEqualTo (currentWeapon player)) && !((currentWeapon player) in ["", "Rangefinder"])) then {
				[] call gg_fnc_loadLevelLoadout;
				hint "Das aufheben von Waffen ist Verboten (und armselig)!";
			};
		};

		sleep 2;
	};
	
};