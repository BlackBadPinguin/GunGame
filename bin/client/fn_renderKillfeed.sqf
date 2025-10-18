scriptName "fn_renderKillfeed";

#define __filename "fn_renderKillfeed.sqf"

if (isNil "gg_killfeed") exitWith {};

_out = "";
{
	_killerText = if ((_x select 0) == player) then {"<t color='#25DD00' shadow='2' font='PuristaMedium'>" + name (_x select 0) + "<t/>"} else {"<t color='#ff0000' shadow='2' font='PuristaMedium'>" + name (_x select 0) + "<t/>"};
	_killedText = if ((_x select 2) == player) then {"<t color='#25DD00' shadow='2' font='PuristaMedium'>" + name (_x select 2) + "<t/>"} else {"<t color='#ff0000' shadow='2' font='PuristaMedium'>" + name (_x select 2) + "<t/>"};
	_out = _out + _killerText + " <t color='#ffffff' shadow='2'>[" + ([(_x select 1)] call gg_fnc_parseWeaponText) + "]<t/> " + _killedText + "<br/>";
} forEach gg_killfeed;

(uiNamespace getVariable ["gg_killfeed", displayNull] displayCtrl 0) ctrlSetStructuredText (parseText _out);