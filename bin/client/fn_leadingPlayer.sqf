scriptName "fn_leadingPlayer";

#define __filename "fn_leadingPlayer.sqf"

disableSerialization;

_leading = param[0,objNull,[objNull]];

// Wat
if (isNull _leading) exitWith {};

// Display on layer 50
50 cutRsc ["gg_leadingplayer", "PLAIN"];

// Get display
_display = uiNamespace getVariable ["gg_leadingplayer", displayNull];

// Display text
(_display displayCtrl 0) ctrlSetStructuredText parseText format ["<t size='2' font='PuristaMedium' align='center' shadow='2'>%1 IST NUN AM FÜHREN!</t>", name _leading];