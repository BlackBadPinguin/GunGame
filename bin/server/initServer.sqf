scriptName "initServer";

#define __filename "initServer.sqf"

call db_fnc_initDb;

// Different vars
gg_gamestatus = 0; // Waiting for weapon list
publicVariable "gg_gamestatus";
gg_mapvotes = [];
{
	gg_mapvotes pushBack 0;
} forEach ("true" configClasses (missionConfigFile >> "CfgGungame" >> "Arenas"));

gg_server_ready = true;
publicVariable "gg_server_ready";

// Wait defined seconds
sleep (getNumber(missionConfigFile >> "CfgGungame" >> "Basic" >> "voteTime"));

// Determine winning map
_winindex = -1;
if (true) then {
	_lowest = -1;
	{
		if (_x > _lowest) then {
			_winindex = _forEachIndex;
			_lowest = _x;
		};
	} forEach gg_mapvotes;
};

private "_arena";
{
	if (_forEachIndex isEqualTo _winindex) exitWith {
		gg_map = configName _x;
		publicVariable "gg_map";
		_arena = _x;
	};
} forEach ("true" configClasses (missionConfigFile >> "CfgGungame" >> "Arenas"));

// select weapon list
private _listWhitelist = getArray(_arena >> "list_whitelist");
private _lists = [];
{
	if ( ((count _listWhitelist) isEqualTo 0) OR (configName _x) in _listWhitelist ) then {
		_lists pushBack (configName _x);
	};
} forEach ("true" configClasses (missionConfigFile >> "CfgGungame" >> "Lists"));

gg_weaponList = _lists call BIS_fnc_selectRandom;
publicVariable "gg_weaponList";

// select player loadout (apperance)
private _loadoutWhitelist = getArray(_arena >> "loadout_whitelist");
private _loadouts = [];
{
	if ( ((count _loadoutWhitelist) isEqualTo 0) OR (configName _x) in _loadoutWhitelist ) then {
		_loadouts pushBack (configName _x);
	};
} forEach ("true" configClasses (missionConfigFile >> "CfgGungame" >> "Loadouts"));

gg_loadout = _loadouts call BIS_fnc_selectRandom;
publicVariable "gg_loadout";


// Start game for all players
[] remoteExec ["gg_fnc_startGame"];

// Set game status to running
gg_gamestatus = 1;
publicVariable "gg_gamestatus";