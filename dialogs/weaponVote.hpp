class gg_dialog_voteweapon {
    idd = 5100;
    movingEnable = 0;
    enableSimulation = 1;
    duration = 999999;
    class controls {
		class RscText_1000: RscText
		{
			idc = -1;
			x = 0.00499997 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.275 * safezoneH;
			colorBackground[] = {0.12,0.14,0.16,1};
		};
		class RscText_1001: RscText
		{
			idc = -1;
			x = 0.00499997 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class RscText_1002: RscText
		{
			idc = -1;
			text = "WEAPON VOTE"; //--- ToDo: Localize;
			x = 0.00706247 * safezoneW + safezoneX;
			y = 0.642 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {0,0,0,1};
			shadow = 0;
		};
		class RscText_1003: RscText
		{
			idc = 3;
			text = "Spieler online: 0";
			x = 0.00706247 * safezoneW + safezoneX;
			y = 0.612 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {1,1,1,1};
			shadow = 0;
		};
		class listbox: RscListbox
		{
			idc = 1;
			x = 0.0101562 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.253 * safezoneH;
			sizeEx = 0.05;
			onLBSelChanged = "";
		};
		class RscButtonMenu_2400: RscButtonMenu
		{
			idc = -1;
			text = "VOTE FÜR EINE WAFFENLISTE"; //--- ToDo: Localize;
			x = 0.00499997 * safezoneW + safezoneX;
			y = 0.9674 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			shadow = 0;
			colorBackground[] = {0.96,0.65,0.12,1};
			onButtonClick = "_this spawn gg_fnc_voteForWeapon;";
		};
    };
};