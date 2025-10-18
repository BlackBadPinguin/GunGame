class rl_gungame_scoreboard {
	idd = 7000;
	class ControlsBackground {
		class background_1: RscText {
			idc = -1;
			RL_DIALOG_POSITION(460,200,1000,625)
			colorBackground[] = {0,0,0,0.5};
		};
		class background_2: RscText {
			idc = -1;
			RL_DIALOG_POSITION(538,306,844,457)
			colorBackground[] = {0,0,0,0.5};
		};
		class edge_back_1: RscText {
			idc = -1;
			RL_DIALOG_POSITION(460,200,1000,10)
			colorBackground[] = {0.16863,0.24314,0.31373,1};
		};
		class edge_back_1_border_1: RscText {
			idc = -1;
			RL_DIALOG_POSITION(645,209,814,1)
			colorBackground[] = RL_DIALOG_COLOR;
		};
		class edge_back_2: RscText {
			idc = -1;
			RL_DIALOG_POSITION(460,210,185,30)
			colorBackground[] = {0.16863,0.24314,0.31373,1};
		};
		class edge_back_2_border_1: RscText {
			idc = -1;
			RL_DIALOG_POSITION(460,239,185,1)
			colorBackground[] = RL_DIALOG_COLOR;
		};
		class box_button_5: RscText {
			idc = -1;
			RL_DIALOG_POSITION(1404,825,55,56)
			colorBackground[] = {0,0,0,0.5};
		};
		class box_back_1_border_4: RscText {
			idc = -1;
			RL_DIALOG_POSITION(1404,825,1,56)
			colorBackground[] = {0.16863,0.24314,0.31373,1};
		};
		class box_back_1_border_5: RscText {
			idc = -1;
			RL_DIALOG_POSITION(1459,825,1,55)
			colorBackground[] = {0.16863,0.24314,0.31373,1};
		};
		class box_back_1_border_6: RscText {
			idc = -1;
			RL_DIALOG_POSITION(1404,880,56,1)
			colorBackground[] = {0.16863,0.24314,0.31373,1};
		};
		class box_back_1_border_1: RscText {
			idc = -1;
			RL_DIALOG_POSITION(1459,210,1,615)
			colorBackground[] = {0.16863,0.24314,0.31373,1};
		};
		class border_28: RscText {
			idc = -1;
			RL_DIALOG_POSITION(537,305,846,1)
			colorBackground[] = RL_DIALOG_COLOR;
		};
		class border_27: RscText {
			idc = -1;
			RL_DIALOG_POSITION(537,306,1,458)
			colorBackground[] = RL_DIALOG_COLOR;
		};
		class border_26: RscText {
			idc = -1;
			RL_DIALOG_POSITION(537,763,846,1)
			colorBackground[] = RL_DIALOG_COLOR;
		};
		class border_25: RscText {
			idc = -1;
			RL_DIALOG_POSITION(1382,306,1,458)
			colorBackground[] = RL_DIALOG_COLOR;
		};
		class menu_title: RscText {
			idc = -1;
			RL_DIALOG_POSITION(461,211,183,27)
			text = "Scoreboard";
		};
		class box_back_1_border_7: RscText {
			idc = -1;
			RL_DIALOG_POSITION(460,825,944,1)
			colorBackground[] = {0.16863,0.24314,0.31373,1};
		};
		class box_back_1_border_8: RscText {
			idc = -1;
			RL_DIALOG_POSITION(460,239,1,587)
			colorBackground[] = {0.16863,0.24314,0.31373,1};
		};
	};
	class Controls {
		class scoreboard: RscListNBox {
			idc = 7001;
			RL_DIALOG_POSITION(538,306,844,457)
		};
		class button_5: RscButton {
			idc = -1;
			style = 48;
			text = "r\RL\addons\textures\UI\player_menu\close.paa";
			tooltip = "Schließen";
			onButtonClick = "closeDialog 0;";
			RL_DIALOG_POSITION(1407,829,48,48)
		};
	};
};