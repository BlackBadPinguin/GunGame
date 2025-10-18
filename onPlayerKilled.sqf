scriptName "onPlayerKilled";
#define __filename "onPlayerKilled.sqf"

_oldbody = _this select 0;
_killer = _this select 1;

gg_deaths = gg_deaths + 1;

_weaponHolder = nearestObject [_oldbody, "GroundWeaponHolder"];
if (!isNull _weaponHolder) then {
	deleteVehicle _weaponHolder;
};
deleteVehicle _oldbody;

[_killer] spawn
{
	DEATHCAMERA = "camera" camCreate (getPos player);
	showCinemaBorder false;
	DEATHCAMERA cameraEffect ["Internal", "Back"];
	DEATHCAMERA camSetTarget player;
	DEATHCAMERA camSetRelPos [0,0,1.6];
	DEATHCAMERA camSetPos getPos player;
	DEATHCAMERA camSetFOV .90;
	DEATHCAMERA camSetFocus [50, 0];
	DEATHCAMERA camCommit 0;
	DEATHCAMERA camSetTarget (_this select 0);
	DEATHCAMERA camCommit 0;
	_playerPos = getPos player;
	_direction = ((_playerPos select 0) - ((getPos (_this select 0)) select 0)) atan2 ((_playerPos select 1) - ((getPos (_this select 0)) select 1));
	DEATHCAMERA camSetRelPos [5 * sin(_direction),5 * cos(_direction),1.6];
	DEATHCAMERA camCommit 3;
	showCinemaBorder false;
};

sleep 3.5;

// Do not run if match is done
if (gg_gamestatus != 3) then {
	10000 cutRsc ["gungame_respawn", "PLAIN"];
};