scriptName "initClient";

#define __filename "initClient.sqf"

[] call gg_fnc_setupCBAKeys;

waitUntil {!isNull player && player == player};
// Variables
gg_kills = 0;
gg_deaths = 0;
gg_killfeed_own = "";
gg_currentWeapon = "";
gg_level = 0;
gg_stagekills = 0;
gg_killfeed = [];

// Broadcasted vars
player setVariable ["gg_level", 0, true];

[getPlayerUID player,name player] remoteExec ['db_fnc_updatePlayer',2];

// Handlers
[] spawn gg_fnc_setupEventHandlers;

// Wait until server is ready
waitUntil { (!(isNil "gg_server_ready") && {gg_server_ready}) };

switch (gg_gamestatus) do {
	case 0: {
		[] spawn gg_fnc_selectMap;
		playMusic "LeadTrack02_F_EPC";
	};
	case 1: {
		[] spawn gg_fnc_selectWeapon;
	};
	default {
		[true] spawn gg_fnc_startGame;
	};
};