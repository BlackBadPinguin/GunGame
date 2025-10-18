scriptName "fn_voteForWeapon";

#define __filename "fn_voteForWeapon.sqf"

private _index = _this#0;

gg_weaponvotes set [_index, (gg_weaponvotes#_index) + 1];