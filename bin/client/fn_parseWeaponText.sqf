scriptName "fn_parseWeaponText";

#define __filename "fn_parseWeaponText.sqf"

params [
    ["_name", "", [""]]
];

(_name regexReplace ["&", "&AMP;"])