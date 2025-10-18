scriptName "fn_stringReplace";

#define __filename "fn_stringReplace.sqf"

params [
    ["_string", "", [""]],
    ["_replace", "", [""]],
    ["_replaceWith", "", [""]]
];
_strar = toArray (_string);
_replaceAr = toArray (_replace);
_replaceWithAr = toArray (_replaceWith);
_newStrAr = [];
for[{_i = 0}, {_i < count(_strar)}, {_i = _i + 1}] do {
	if((_strar select _i) == (_replaceAr select 0)) then {
		_match = true;
		for[{_k = 0}, {((_k + _i) < count(_strar)) && (_k < count(_replaceAr))}, {_k = _k + 1}] do {
			if((_strar select (_k + _i)) != (_replaceAr select _k)) then {
				_match = false;
			};
		};
		if(_match) then {
			for[{_j = 0}, {_j < count(_replaceWithAr)}, {_j = _j + 1}] do {
				_newStrAr = _newStrAr + [_replaceWithAr select _j];
			};
			_i = _i + count(_replaceAr) - 1;
		} else {
			_newStrAr = _newStrAr + [_strar select _i];
		};
	} else {
		_newStrAr = _newStrAr + [_strar select _i];
	};
};
toString (_newStrAr);