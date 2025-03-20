if (getNumber(missionConfigFile >> "CfgGungame" >> "Basic" >> "db") isEqualTo 0 ) exitWith {};
/*
 * Author: RealLifeRPG Team
 *
 * Description:
 * Logs Kill to DB
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
	["_pid","",[""]],
	["_victim_pid","",[""]]
];

call compile ("extDB3" callExtension format ["1:%1:log_kill:%2:%3", gg_sql_id, _pid,_victim_pid]);
