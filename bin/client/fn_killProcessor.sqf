scriptName "fn_killProcessor";

#define __filename "fn_killProcessor.sqf"

// Increase
gg_kills = gg_kills + 1;
gg_stagekills = gg_stagekills + 1;

player setVariable ["gg_kills",gg_kills, true];

// Broadcast vars
player setVariable ["gg_level", gg_level, true];

// Max kills of current stage
_killsRequired = getNumber( [gg_level] call gg_fnc_currentWeaponListEntry >> "kills");

// Check loadout
[] spawn gg_fnc_loadLevelLoadout;

// Check
if (gg_stagekills >= _killsRequired) then {
	gg_level = gg_level + 1;
	gg_stagekills = 0;
	playSound "levelup";

	if (gg_level >= (count ("true" configClasses (missionConfigFile >> "CfgGungame" >> "Lists" >> gg_weaponList)))) then {
		[player] remoteExec ["mav_fnc_win"];
	};

	if (gg_level >= ((count ("true" configClasses (missionConfigFile >> "CfgGungame" >> "Lists" >> gg_weaponList))) - 3) AND (isNil "gg_suspensemusic")) then {
		[] remoteExec ["gg_fnc_suspensemusic"];
	};
} else {
	playSound "kill";
};

// Check wether we are now the leading player
if (GG_LEADING_PLAYER != (getPlayerUID player)) then {
	private _countMoreKills = {
		(_x getVariable ["gg_kills", 0]) >= gg_kills && (_x != player)
	} count AllPlayers;

	if (_countMoreKills == 0) then {
		// Give Leading Player a Hat
		private _leadingPlayerHat = getText(missionConfigFile >> "CfgGungame" >> "Basic" >> "leading_player_hat");

		if ((headgear player) != _leadingPlayerHat) then {
			removeHeadgear player;
			player addHeadgear _leadingPlayerHat;
		};
				
		private _defaultPlayerHat = getText(missionConfigFile >> "CfgGungame" >> "Loadouts" >> gg_loadout >> "headgear");

		private _leadingPlayer = objNull;
		{
			if((getPlayerUID _x) isEqualTo GG_LEADING_PLAYER) exitWith {
				_leadingPlayer = _x;
			};
		} forEach allPlayers;
		
		if ((headgear _leadingPlayer) == _leadingPlayerHat) then {
			removeHeadgear _leadingPlayer;
			_leadingPlayer addHeadgear _defaultPlayerHat;
		};

		GG_LEADING_PLAYER = (getPlayerUID player);
		publicVariable "GG_LEADING_PLAYER";

		[player] remoteExec ["gg_fnc_leadingPlayer"];
	};
};

// Update list
[] spawn gg_fnc_progressionDisplayUpdate;

//heal player after kill
[player] call ace_medical_treatment_fnc_fullHealLocal;

//delete all dead corpses
{
    deleteVehicle _x;
} forEach allDeadMen;
