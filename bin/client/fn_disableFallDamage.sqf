/*/
File: fn_monitorHeight.sqf
Author:
    S034, IndigoFox
Last Modified:
    2021-01-17 A3 2.06 by IndigoFox
Description:
    prevent_falldamage
Usage:
  Executes automatically clientside on postInit.
___________________________________________/*/

#define DEBUG false
#define PLAYER_HEIGHT (getpos player select 2)
#define HEIGHT_THRESHOLD 1
#define PFD_BOOL (player getVariable ["NFD_preventfalldamage", false])

if (!hasInterface) exitWith {};

_landingsound = selectRandom[
  "A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_1.wss",
  "A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_2.wss",
  "A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_3.wss",
  "A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_4.wss",
  "A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_5.wss",
  "A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_6.wss",
  "A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_7.wss",
  "A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_8.wss"
];

waitUntil {!isNull player};
player setVariable ["NFD_preventfalldamage",false];

NFD_monitor_handle = [_landingsound] spawn {
  params [["_landingSound", "A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_1.wss"]];
  while {true} do {
    if (alive player) then {
      if ((PLAYER_HEIGHT > HEIGHT_THRESHOLD) && (vehicle player isEqualTo player) && !PFD_BOOL) then {
        player setVariable ["NFD_preventfalldamage",true];
        if (DEBUG) then {systemChat "Set NFD_BOOL true"};

        waitUntil {PLAYER_HEIGHT < HEIGHT_THRESHOLD};
        player allowDamage false;
        if (DEBUG) then {systemChat "Set allowDamage false"};

        waitUntil {isTouchingGround player};
        // addCamShake [20, 1, 5];
        playsound3d [_landingsound, player, false, getPosASL player, 3, 1, 50];
        player allowDamage true;
        player setVariable ["NFD_preventfalldamage",false];
        if (DEBUG) then {systemChat "Set NFD_BOOL false"};
      };
      sleep 0.05;
    } else {
      sleep 0.5;
    };
  };
};