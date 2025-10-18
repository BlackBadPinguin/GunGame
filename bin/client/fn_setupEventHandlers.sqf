scriptName "fn_setupEventHandlers";

#define __filename "fn_setupEventHandlers.sqf"

// Automatic magazine recombination
player addEventHandler ["Take",
{
	_magInfo = magazinesAmmoFull player;
	_curMag = currentMagazine player;
	_bulletCount = 0;
	{
		if ((_x select 0) == _curMag AND !(_x select 2)) then {
			_bulletCount = _bulletCount + (_x select 1);
			player removeMagazine _curMag;
		};
	} forEach _magInfo;

	if (_bulletCount == 0) exitWith {};

	_maxBulletCountPerMag = getNumber(configfile >> "CfgMagazines" >> _curMag >> "count");
	_fillMags = true;
	while {_fillMags} do
	{
		if (_bulletCount > _maxBulletCountPerMag) then
		{
			_bulletCount = _bulletCount - _maxBulletCountPerMag;
			player addMagazine [_curMag, _maxBulletCountPerMag];
		} else {
			player addMagazine [_curMag, _bulletCount];
			_fillMags = false;
		};
	};
}];

// Direction indicators and damage handler
player addEventHandler ["InventoryOpened", {closeDialog 0;true;}];

player addEventHandler ["Hit",{
	_d = [_this select 0, _this select 1] call BIS_fnc_relativeDirTo;
	if (_d >= 315 || _d <= 45) then {351 cutRsc ["cu","PLAIN"];};
	if (_d >= 45 AND _d <= 135) then {352 cutRsc ["cr","PLAIN"];};
	if (_d >= 135 AND _d <= 225) then {353 cutRsc ["cd","PLAIN"];};
	if (_d >= 225 AND _d <= 315) then {354 cutRsc ["cl","PLAIN"];};
	if ((_this select 1) == player) then {
		351 cutRsc ["cu","PLAIN"];
		352 cutRsc ["cr","PLAIN"];
		353 cutRsc ["cd","PLAIN"];
		354 cutRsc ["cl","PLAIN"];
	};
}];

player addEventHandler["HandleDamage",{_this call gg_fnc_handleDamage;}];

player addEventHandler ["Hit",
{
	(_this select 2) remoteExec ["gg_fnc_MPHit",_this select 1];
}];

player addEventHandler ["Respawn", {
	if (gg_gamestatus != 3) then {
		[] spawn gg_fnc_spawn;

		// Destroy cam
		DEATHCAMERA cameraEffect ["TERMINATE","BACK"];
		camDestroy DEATHCAMERA;
		player switchCamera "INTERNAL";
	};
}];


