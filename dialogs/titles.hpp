class gungame_spawntransition
{
	idd = -1;
	movingEnable = true;
	enableSimulation = true;
	fadeout=1;
	fadein=1;
	duration = 0.5;

	class controlsBackground {};

	class controls
	{
		class blackbackground: RscText
		{
			idc = -1;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
			colorBackground[] = {0,0,0,2};
		};
	};
};

class gungame_respawn
{
	idd = -1;
	movingEnable = true;
	enableSimulation = true;
	fadeout=1;
	fadein=1;
	duration = 1;

	class controlsBackground {};

	class controls
	{
		class blackbackground: RscText
		{
			idc = -1;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
			colorBackground[] = {0,0,0,2};
		};
	};
};

class gungame_selectmaptransition
{
	idd = -1;
	movingEnable = true;
	enableSimulation = true;
	fadeout=0;
	fadein=0;
	duration = 4;

	class controlsBackground {};

	class controls
	{
		class blackbackground: RscText
		{
			idc = -1;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
			colorBackground[] = {0,0,0,2};
		};
	};
};

class gungame_blackout
{
	idd = -1;
	movingEnable = true;
	enableSimulation = true;
	fadeout=0;
	fadein=2;
	duration = 0.5;

	class controlsBackground {};

	class controls
	{
		class blackbackground: RscText
		{
			idc = -1;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
			colorBackground[] = {0,0,0,2};
		};
	};
};

class gungame_blackoutlong
{
	idd = -1;
	movingEnable = true;
	enableSimulation = true;
	fadeout=0;
	fadein=2;
	duration = 10;

	class controlsBackground {};

	class controls
	{
		class blackbackground: RscText
		{
			idc = -1;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
			colorBackground[] = {0,0,0,2};
		};
	};
};

class gungame_blackin
{
	idd = -1;
	movingEnable = true;
	enableSimulation = true;
	fadeout=2;
	fadein=0;
	duration = 0;

	class controlsBackground {};

	class controls
	{
		class blackbackground: RscText
		{
			idc = -1;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
			colorBackground[] = {0,0,0,2};
		};
	};
};

class gungame_mapvotedfor
{
	idd = 5200;
	movingEnable = true;
	enableSimulation = true;
	duration = 99999999;
	fadeout=0;
	fadein=1;
	onLoad = "uiNamespace setVariable ['gg_mapvotedfor',_this select 0]";

	class controlsBackground {};

	class controls
	{
		class RscText_1000: RscText
		{
			idc = 0;
			text = "DU HAST FÜR INSEL GEVOTET"; //--- ToDo: Localize;
			x = 0.0204688 * safezoneW + safezoneX;
			y = 0.9026 * safezoneH + safezoneY;
			w = 0.974531 * safezoneW;
			h = 0.088 * safezoneH;
			shadow = 2;
			sizeEx = 0.08;
		};
	};
};

class gungame_weaponvotedfor
{
	idd = 5200;
	movingEnable = true;
	enableSimulation = true;
	duration = 99999999;
	fadeout=0;
	fadein=1;
	onLoad = "uiNamespace setVariable ['gg_weaponvotedfor',_this select 0]";

	class controlsBackground {};

	class controls
	{
		class RscText_1000: RscText
		{
			idc = 0;
			text = "DU HAST FÜR WAFFEN GEVOTET"; //--- ToDo: Localize;
			x = 0.0204688 * safezoneW + safezoneX;
			y = 0.9026 * safezoneH + safezoneY;
			w = 0.974531 * safezoneW;
			h = 0.088 * safezoneH;
			shadow = 2;
			sizeEx = 0.08;
		};
	};
};

class gungame_black
{
	idd = -1;
	movingEnable = true;
	enableSimulation = true;
	fadeout=0;
	fadein=0;
	duration = 9999999;

	class controlsBackground {};

	class controls
	{
		class blackbackground: RscText
		{
			idc = -1;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
			colorBackground[] = {0,0,0,2};
		};
	};
};

class gungame_wintransition
{
	idd = -1;
	movingEnable = true;
	enableSimulation = true;
	fadeout=0.5;
	fadein=0.5;
	duration = 0.2;

	class controlsBackground {};

	class controls
	{
		class blackbackground: RscText
		{
			idc = -1;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
			colorBackground[] = {0,0,0,2};
		};
	};
};

class Default
{
	idd = -1;
	fadein = 0;
	fadeout = 0;
	duration = 0;
};

class Killfeed
{
	idd = -1;
	movingEnable = true;
	enableSimulation = true;
	fadeout=0;
	fadein=0;
	duration = 9999999;
	onLoad = "uiNamespace setVariable ['gg_killfeed',_this select 0]";
	class controls {
		class RscStructuredText_1100: RscStructuredText
		{
			idc = 0;
			x = 0.005 * safezoneW + safezoneX;
			y = 0.181 * safezoneH + safezoneY;
			w = 0.283594 * safezoneW;
			h = 0.231 * safezoneH;
		};
	};
};

class Progression
{
	idd = -1;
	movingEnable = true;
	enableSimulation = true;
	fadeout=0;
	fadein=0;
	duration = 9999999;
	onLoad = "uiNamespace setVariable ['gg_progression',_this select 0]";

	class controls {
		class RscText_1000: RscText
		{
			idc = -1;
			x = 0.845468 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {1,1,1,0.8};
		};

		class RscText_1001: RscText
		{
			idc = 0;
			text = "LEVEL BENÖTIGT"; //--- ToDo: Localize;
			x = 0.847531 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.033 * safezoneH;
			shadow = 0;
			colorText[] = {0,0,0,1};
		};

		class RscText_1002: RscText
		{
			idc = -1;
			x = 0.845468 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.132 * safezoneH;
			colorBackground[] = {0.96,0.65,0.12,0.8};
		};
		class RscText_1003: RscText
		{
			idc = -1;
			x = 0.845469 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.132 * safezoneH;
			colorBackground[] = {0.12,0.14,0.16,0.8};
		};
		class RscText_1004: RscText
		{
			idc = -1;
			x = 0.845469 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.132 * safezoneH;
			colorBackground[] = {0.12,0.14,0.16,0.8};
		};

		class RscText_1005: RscText
		{
			idc = 5;
			text = "1/42 Kills - Platz 1/8"; //--- ToDo: Localize;
			x = 0.847531 * safezoneW + safezoneX;
			y = 0.239 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.033 * safezoneH;
			shadow = 0;
			colorText[] = {1,1,1,1};
		};

		class RscText_1006: RscText
		{
			idc = 6;
			text = "Noch kein Leader"; //--- ToDo: Localize;
			x = 0.847531 * safezoneW + safezoneX;
			y = 0.216 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.033 * safezoneH;
			shadow = 0;
			colorText[] = {1,1,1,1};
		};

		class weapon_1: RscStructuredText
		{
			idc = 1;
			x = 0.845469 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.132 * safezoneH;
		};
		class weapon_2: RscStructuredText
		{
			idc = 2;
			x = 0.845469 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.132 * safezoneH;
		};
		class weapon_3: RscStructuredText
		{
			idc = 3;
			x = 0.845469 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.132 * safezoneH;
		};
	};
};

class gg_leadingplayer
{
	idd = -1;
	movingEnable = true;
	enableSimulation = true;
	fadeout=0.1;
	fadein=0.1;
	duration = 2;
	onLoad = "uiNamespace setVariable ['gg_leadingplayer',_this select 0]";

	class controls {
		class txt: RscStructuredText
		{
			idc = 0;
			x = 0.149375 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.70125 * safezoneW;
			h = 0.187 * safezoneH;
		};
	};
};

class EndScreen
{
	idd = -1;
	movingEnable = true;
	enableSimulation = true;
	fadeout=0;
	fadein=0;
	duration = 9999999;
	onLoad = "uiNamespace setVariable ['gg_endscreen',_this select 0]";

	class controls {
		class txtWinner: RscStructuredText
		{
			idc = 0;
			x = 0.149375 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.70125 * safezoneW;
			h = 0.187 * safezoneH;
		};
		class RscText_1000: RscText
		{
			idc = -1;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.165 * safezoneH;
			colorBackground[] = {0.12,0.14,0.16,1};
		};
		class RscText_1001: RscText
		{
			idc = -1;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class RscText_1002: RscText
		{
			idc = -1;
			text = "STATS"; //--- ToDo: Localize;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.033 * safezoneH;
			shadow = 0;
			colorText[] = {0,0,0,1};
		};
		class RscText_1003: RscText
		{
			idc = -1;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0.96,0.65,0.12,1};
		};
		class RscText_1004: RscText
		{
			idc = -1;
			text = "Nächste Runde startet..."; //--- ToDo: Localize;
			x = 0.400875 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.033 * safezoneH;
			shadow = 0;
			colorText[] = {0,0,0,1};
		};
		class RscText_1005: RscText
		{
			idc = -1;
			text = "Kills"; //--- ToDo: Localize;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.033 * safezoneH;
			shadow = 2;
		};
		class kills: RscText
		{
			idc = 1;
			text = "45"; //--- ToDo: Localize;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
			shadow = 2;
		};
		class deaths: RscText
		{
			idc = 2;
			text = "45"; //--- ToDo: Localize;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
			shadow = 2;
		};
		class RscText_1008: RscText
		{
			idc = -1;
			text = "Tode"; //--- ToDo: Localize;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.033 * safezoneH;
			shadow = 2;
		};
		class levelreached: RscText
		{
			idc = 3;
			text = "30"; //--- ToDo: Localize;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.033 * safezoneH;
			shadow = 2;
		};
		class RscText_1010: RscText
		{
			idc = -1;
			text = "Level erreicht"; //--- ToDo: Localize;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.033 * safezoneH;
			shadow = 2;
		};
		class levelneeded: RscText
		{
			idc = 4;
			text = "31"; //--- ToDo: Localize;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.033 * safezoneH;
			shadow = 2;
		};
		class RscText_1012: RscText
		{
			idc = -1;
			text = "Level zum Sieg"; //--- ToDo: Localize;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.1773437 * safezoneW;
			h = 0.033 * safezoneH;
			shadow = 2;
		};
	};
};












































	// HIT DIRECTION INDICATORS
	class cu
	{
		idd = -1;
		name= "cu";
		movingEnable = true;
		enableSimulation = true;
		fadeout=0;
		fadein=0;
		duration = 0.5;
		onLoad="uiNamespace setVariable ['cu',_this select 0]";

		class controlsBackground {};

		class controls {
			class RscText211000: RscPicture
			{
				idc = 1101;
				text = "pictures\cu.paa"; //--- ToDo: Localize;
				x = 0 * safezoneW + safezoneX;
				y = 0 * safezoneH + safezoneY;
				w = 1 * safezoneW;
				h = 1 * safezoneH;
			};
		};
	};

	class cr
	{
		idd = -1;
		name= "cr";
		movingEnable = true;
		enableSimulation = true;
		fadeout=0;
		fadein=0;
		duration = 0.5;
		onLoad="uiNamespace setVariable ['cr',_this select 0]";

		class controlsBackground {};

		class controls {
			class RscText211000: RscPicture
			{
				idc = 1101;
				text = "pictures\cr.paa"; //--- ToDo: Localize;
				x = 0 * safezoneW + safezoneX;
				y = 0 * safezoneH + safezoneY;
				w = 1 * safezoneW;
				h = 1 * safezoneH;
			};
		};
	};

	class cl
	{
		idd = -1;
		name= "cl";
		movingEnable = true;
		enableSimulation = true;
		fadeout=0;
		fadein=0;
		duration = 0.5;
		onLoad="uiNamespace setVariable ['cl',_this select 0]";

		class controlsBackground {};

		class controls {
			class RscText211000: RscPicture
			{
				idc = 1101;
				text = "pictures\cl.paa"; //--- ToDo: Localize;
				x = 0 * safezoneW + safezoneX;
				y = 0 * safezoneH + safezoneY;
				w = 1 * safezoneW;
				h = 1 * safezoneH;
			};
		};
	};

	class cd
	{
		idd = -1;
		name= "cd";
		movingEnable = true;
		enableSimulation = true;
		fadeout=0;
		fadein=0;
		duration = 0.5;
		onLoad="uiNamespace setVariable ['cd',_this select 0]";

		class controlsBackground {};

		class controls {
			class RscText211000: RscPicture
			{
				idc = 1101;
				text = "pictures\cd.paa"; //--- ToDo: Localize;
				x = 0 * safezoneW + safezoneX;
				y = 0 * safezoneH + safezoneY;
				w = 1 * safezoneW;
				h = 1 * safezoneH;
			};
		};
	};

	class hm_kill
	{
		idd = -1;
		movingEnable = true;
		enableSimulation = true;
		fadeout=0;
		fadein=0;
		duration = 0.3;

		class controlsBackground {};

		class controls {

			class RscText2131000: RscPicture
			{
				idc = -1;
				x = 0.455656 * safezoneW + safezoneX;
				y = 0.422 * safezoneH + safezoneY;
				w = 0.0886877 * safezoneW;
				h = 0.154 * safezoneH;
				text = "pictures\hm_kill.paa";
			};
		};
	};

	class hm_headshot
	{
		idd = -1;
		movingEnable = true;
		enableSimulation = true;
		fadeout=0.0;
		fadein=0;
		duration = 0.3;

		class controlsBackground {};

		class controls {

			class RscText2131000: RscPicture
			{
				idc = -1;
				x = 0.455656 * safezoneW + safezoneX;
				y = 0.422 * safezoneH + safezoneY;
				w = 0.0886877 * safezoneW;
				h = 0.154 * safezoneH;
				text = "pictures\hm_headshot.paa";
			};
		};
	};

	class hm_hit
	{
		idd = -1;
		movingEnable = true;
		enableSimulation = true;
		fadeout=0.0;
		fadein=0;
		duration = 0.3;

		class controlsBackground {};

		class controls {

			class RscText2131000: RscPicture
			{
				idc = -1;
				x = 0.455656 * safezoneW + safezoneX;
				y = 0.422 * safezoneH + safezoneY;
				w = 0.0886877 * safezoneW;
				h = 0.154 * safezoneH;
				text = "pictures\hm_hit.paa";
			};
		};
	};