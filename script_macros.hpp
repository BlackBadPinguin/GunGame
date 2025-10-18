#define RL_DIALOG_POSITION(X,Y,W,H) \
    x = #((((X * (getResolution select 0)) / 1920) * safeZoneW) / (getResolution select 0) + safeZoneX); \
    y = #((((Y * (getResolution select 1)) / 1080) * safeZoneH) / (getResolution select 1) + safeZoneY); \
    w = #((((W * (getResolution select 0)) / 1920) * safeZoneW) / (getResolution select 0)); \
    h = #((((H * (getResolution select 1)) / 1080) * safeZoneH) / (getResolution select 1));

#define RL_DIALOG_FONTSIZE(S) sizeEx = ((0.55 / ((getResolution select 5))) * S)
#define RL_DIALOG_COLOR {"((profilenamespace getvariable ['rl_color_ui',[0.898,0.133,0.133]]) select 0)","((profilenamespace getvariable ['rl_color_ui',[0.898,0.133,0.133]]) select 1)","((profilenamespace getvariable ['rl_color_ui',[0.898,0.133,0.133]]) select 2)",1}
#define RL_DIALOG_FONTSIZE_COMMON(S) sizeEx = ((0.55 / ((getResolution select 5))) * S)
#define RLRPG_Color_2 {0.898,0.133,0.133,1}

#define HINT(loc,txt,err,time) [loc,txt,err,time] call RL_main_fnc_hintSystem