if (getNumber(missionConfigFile >> "CfgGungame" >> "Basic" >> "db") isEqualTo 0 ) exitWith {};
/*
 * Author: RealLifeRPG Team
 *
 * Description:
 * Logs the current game to DB. Also retrives the game id so that other things can be logged for the game
 *
 * Arguments:
 * 0: STRING - pid of killer
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * ['1234','4321'] remoteExec ['db_fnc_logKill',2];
 *
 */
params[
	["_map","",[""]]
];

//private _result = call compile ("extDB3" callExtension format ["1:%1:log_game:%2", gg_sql_id, _map]);

//waitUntil { _result };
