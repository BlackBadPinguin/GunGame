class CfgGungame {

	class Basic {
		voteTime = 30; // 30

		// 0 disables all database functions
		db = 0;

		arena_zones[] = {"trigger_1","trigger_2","trigger_3","trigger_4","trigger_5","trigger_6","trigger_7","trigger_8","trigger_9","trigger_10","trigger_11","trigger_12","trigger_13","trigger_14",}; 
	
		leading_player_hat = "RL_mask_crown";

		default_scope = "optic_Arco_blk_F";

		default_ending = "ending_ratatata";
	};

	#include "Config_PlayerSettings.cpp"
	#include "Config_Arenas.cpp"
	#include "Config_Loadouts.cpp"
	#include "Config_Lists.cpp"
};