scriptName "fn_win";

#define __filename "fn_win.sqf"

_winner = _this select 0;

if (!isNil "gg_winner") exitWith {};

// Set winner
gg_winner = _winner;

// Update game status
gg_gamestatus = 3;
publicVariable "gg_gamestatus";

// Stop all players and display ending screen
[] remoteExec ["gg_fnc_endRound"];