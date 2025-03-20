/*
 * Author: RealLifeRPG Team
 *
 * Description:
 * Initializes DB connection
 *
 * Arguments:
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * N/A
 *
 */
if (getNumber(missionConfigFile >> "CfgGungame" >> "Basic" >> "db") isEqualTo 0 ) exitWith {};

//gg_sql_id = round(random(9999));

"extDB3" callExtension "9:ADD_DATABASE:GunGame";
"extDB3" callExtension format["9:ADD_DATABASE_PROTOCOL:GunGame:SQL_CUSTOM:%1:gg_sql.ini",gg_sql_id];

if (isDedicated) then {
	"extDB3" callExtension "9:LOCK";
};