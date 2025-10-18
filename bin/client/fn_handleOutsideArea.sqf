if (!hasInterface) exitWith {};

waitUntil {!isNull player};
waitUntil {!isNil "gg_gamestatus"};

[] spawn {
    while {true} do {
        if (gg_gamestatus == 2) then {
            private _inZone = false;
            {
                if(player inArea (missionNamespace getVariable [_x, objNull])) exitWith {
                    _inZone = true;
                };
            } forEach (getArray(missionConfigFile >> "CfgGungame" >> "Basic" >> "arena_zones"));

            if(!_inZone) then {
                player setDamage 1;
            };
        };

        sleep 1;
    };
};
