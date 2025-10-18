scriptName "fn_endRound";

#define __filename "fn_endRound.sqf"

// Play music
//playMusic "ending";

if (!isNil "gg_roundended") exitWith {};
gg_roundended = 1;

// Disable user input
disableUserInput true;
disableSerialization;

// Smooth transition
1000 cutRsc ["gungame_wintransition", "PLAIN"];
0.5 fadeMusic 0;

sleep 0.5;
playMusic "";
0 fadeMusic 1;

// Delete progression title
150 cutRsc ["Default", "PLAIN"];

// End screen
500 cutRsc ["EndScreen","PLAIN"];

[parseText "", [0,0,1,0.5], nil, 7, 0.7, 0] spawn BIS_fnc_textTiles;

// Fill with data
_display = uiNamespace getVariable ["gg_endscreen", displayNull];

(_display displayCtrl 0) ctrlSetStructuredText parseText format ["<t size='4' font='PuristaLight' align='center' shadow='2'>%1 HAT DIE RUNDE GEWONNEN</t>", name gg_winner];

// Personal data
(_display displayCtrl 1) ctrlSetText format["%1", gg_kills];
(_display displayCtrl 2) ctrlSetText format["%1", gg_deaths];
(_display displayCtrl 3) ctrlSetText format["%1", gg_level];


private _levelCount = count ("true" configClasses (missionConfigFile >> "CfgGungame" >> "Lists" >> gg_weaponList));

(_display displayCtrl 4) ctrlSetText format["%1", _levelCount];

// Final cam
gg_exitcam_object = "camera" camCreate (getPos player);
gg_exitcam_object cameraEffect ["Internal", "Back"];
gg_exitcam_object camSetFOV .65;
gg_exitcam_object camSetFocus [150, 1];
gg_exitcam_object camCommit 0;
sleep 0.05;
showCinemaBorder false;

// Proper cam animation
// Position, Name, Radius, Spawns
private _mapCenter = getArray(missionConfigFile >> "CfgGungame" >> "Arenas" >> gg_map >> "center");

gg_exitcam_object camPreparePos [(_mapCenter select 0) - 200,(_mapCenter select 1) - 200, 100];
gg_exitcam_object camPrepareTarget _mapCenter;
gg_exitcam_object camCommitPrepared 0;
gg_exitcam_object camPreparePos [(_mapCenter select 0) + 200,(_mapCenter select 1) - 200, 100];
gg_exitcam_object camPrepareTarget _mapCenter;
gg_exitcam_object camCommitPrepared 38;

sleep 0.05;

if (player == gg_winner) then {
    private _music = profileNamespace getVariable ["RL_GunGame_PlayerSettings_Music", (getText (missionConfigFile >> "CfgGungame" >> "Basic" >> "default_ending"))];
    private _musicChoices = getArray(missionConfigFile >> "CfgGungame" >> "PlayerSettings" >> "music_choices");

    if ((_musicChoices find _music) == -1) then { 
        _music = (getText (missionConfigFile >> "CfgGungame" >> "Basic" >> "default_ending"));
    };

    [_music] remoteExec ["playSound", allPlayers];
};

// Sleep
sleep 30;

10000 cutRsc ["gungame_blackoutlong","PLAIN"];
sleep 2.3;
disableUserInput false;
endMission "END1";