scriptName "fn_loadLevelLoadout";

#define __filename "fn_loadLevelLoadout.sqf"

// Clear loadout
removeAllItems player;
removeAllAssignedItems player;

private _loadoutConfig  = (missionConfigFile >> "CfgGungame" >> "Loadouts" >> gg_loadout);

// Player Inventar nach Respawn

removeBackpack player;
removeHeadgear player;
removeGoggles player;

private _uniform = getText(_loadoutConfig >> "uniform");
if !((uniform player) isEqualTo _uniform) then {
	removeUniform player;
	player addUniform _uniform;
};

private _vest = getText(_loadoutConfig >> "vest");
if !((vest player) isEqualTo _vest) then {
	removeVest player;
	player addVest _vest;
};

private _backpack = getText(_loadoutConfig >> "backpack");
if !((backpack player) isEqualTo _backpack) then {
	removeBackpack player;
	player addBackpack _backpack;
};

private _headgear = getText(_loadoutConfig >> "headgear");
if !((headgear player) isEqualTo _headgear) then {
	removeHeadgear player;
	player addHeadgear _headgear;
};

private _goggles = getText(_loadoutConfig >> "goggles");
if !((goggles player) isEqualTo _goggles) then {
	removeGoggles player;
	player addGoggles _goggles;
};

player addItemToBackpack "RL_ID_CARD";
player addItemToBackpack "ACE_EarPlugs";

// assign nightvision and rangefinder
player linkItem "TAC_SG_SK";

// Get current weapon info to be spawned with
if (isNull ([gg_level] call gg_fnc_currentWeaponListEntry)) exitWith {};

private _weapon = configName ([gg_level] call gg_fnc_currentWeaponListEntry);
private _magazineType = getText( [gg_level] call gg_fnc_currentWeaponListEntry >> "mag");
private _magazineCount = getNumber( [gg_level] call gg_fnc_currentWeaponListEntry >> "mag_count");

gg_currentWeapon = _weapon;

if (_magazineType isEqualTo "") then {
	_magazineType = (getArray(configFile >> "CfgWeapons" >> _weapon >> "magazines") select 0);
};

// Add weapon
player addMagazines [_magazineType, _magazineCount];

if !((currentWeapon player) isEqualTo _weapon) then {

	if !(_weapon isEqualTo "") then {
		player addWeaponGlobal _weapon;

		[] spawn {
			sleep 0.08;

			private _muzzles = getArray(configFile >> "CfgWeapons" >> gg_currentWeapon >> "muzzles");

			if (count _muzzles > 1) then {
				player selectWeapon (_muzzles select 0);
			} else {
				player selectWeapon gg_currentWeapon;
			};
			
			player switchMove "";
			player playMoveNow "";
		};
		
	};

	{
		if (!(_x in ["Rangefinder"]) && ! (_x isEqualTo _weapon)) then {
			player removeWeaponGlobal _x;
		};
	} forEach (weapons player);
};

private _scope = getText( [gg_level] call gg_fnc_currentWeaponListEntry >> "scope");

if !(_scope in (primaryWeaponItems player)) then {
	player addPrimaryWeaponItem _scope;
};

player enableStamina false;
player setCustomAimCoef 0;


