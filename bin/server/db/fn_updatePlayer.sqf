if (getNumber(missionConfigFile >> "CfgGungame" >> "Basic" >> "db") isEqualTo 0 ) exitWith {};
/*
 * Author: RealLifeRPG Team
 *
 * Description:
 * Updates a players DB entry
 *
 * Arguments:
 * 0: STRING - pid
 * 1: STRING - name
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [getPlayerUID player,name player] remoteExec ['db_fnc_updatePlayer',2];
 *
 */
params[
	["_pid","",[""]],
	["_name","",[""]]
];

if (_pid isEqualTo "") exitWith { diag_log "GG_ERROR: updatePlayer.sqf - pid empty"; };
if (_name isEqualTo "") exitWith { diag_log "GG_ERROR: updatePlayer.sqf - name empty"; };

call compile ("extDB3" callExtension format ["1:%1:update_player:%2:%3", gg_sql_id, _pid,_name]);

