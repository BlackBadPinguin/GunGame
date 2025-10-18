scriptName "fn_kill";

#define __filename "fn_kill.sqf"

// Display hit marker
-0.03184 call gg_fnc_MPHit;

// Killer
_killer = _this select 0;
if (currentWeapon player == "") exitWith {};
_weaponinfo = [currentWeapon player] call gg_fnc_weaponDetails;

[] spawn gg_fnc_killProcessor;

// Add to own killfeed
gg_killfeed_own = gg_killfeed_own + ("<t align='center' shadow='2' size='1.3' font='PuristaMedium'>[" + ([(_weaponinfo#1)] call gg_fnc_parseWeaponText) + "] <t color='#FF0000'>" + (name _killer) + "</t></t><br/>");

// Global killfeed
[player, (_weaponinfo select 1), _killer] remoteExec ["gg_fnc_addKillfeed"];

// Display board
[parseText gg_killfeed_own, [0,0,1,0.5], nil, 7, 0.7, 0] spawn BIS_fnc_textTiles;

// Terminate old script if necessary
if (!isNil "gg_killfeed_own_scriptthread") then {
	terminate gg_killfeed_own_scriptthread;
};

// Delete kill feed after seconds
gg_killfeed_own_scriptthread = [] spawn {
	sleep 8;
	gg_killfeed_own = ""; // Reset own killfeed
};