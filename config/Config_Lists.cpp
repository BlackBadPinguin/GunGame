class base_list_weapon {
	kills = 2;
	mag = "";
	mag_count = 5;
	scope = "DEFAULT"; //TODO remove specified scopes where not neccesary
};

class scopeless_base_list_weapon : base_list_weapon {
	scope = "";
};

class sniper_base_list_weapon : base_list_weapon{
	scope = "hlc_optic_ATACR";
};

class Lists {
	class update2 { //24 kills total
		name = "Update (24 Kills)";
		class MMG_02_black_F : base_list_weapon {};

		class srifle_EBR_F : base_list_weapon {};
		
		class hlc_rifle_falosw : base_list_weapon {};
		
		class hlc_rifle_416D20_wdl : base_list_weapon {};

		class HLC_rifle_XM8_Carbine : base_list_weapon {
				scope = "HLC_optic_RCO_PCAP";
		};

		class hlc_rifle_PSG1A1_RIS : base_list_weapon {};
		
		class RL_W_awm_BL : base_list_weapon {
				scope = "optic_dms";
		};
		
		class RL_MP7_Pistol_Black_20Rnd : base_list_weapon {
				scope = "ace_optic_lrps_2d";
		};
		
		class hlc_Pistol_M11 : base_list_weapon {};
		
		class hgun_Pistol_01_F : base_list_weapon {};
		
		class RL_SilverBaller : base_list_weapon {};
		
		class RL_Glock_17 : scopeless_base_list_weapon {};
	};

	class copShop {  //42 kills total
		name = "Polizeishop (42 Kills)";
		class hlc_rifle_RU556 : base_list_weapon {};

		class hlc_rifle_SAMR : base_list_weapon {};

		class hlc_rifle_416D20 : base_list_weapon {};

		class hlc_rifle_g3a3ris : base_list_weapon {};

		class hlc_rifle_ACR_MID_black : base_list_weapon {};

		class hlc_rifle_falosw : base_list_weapon {};

		class hlc_rifle_M27IAR : base_list_weapon {};

		class hlc_rifle_M14dmr_Rail : base_list_weapon {};

		class hlc_rifle_bcmjack : base_list_weapon {};

		class hlc_rifle_416D10 : base_list_weapon {};

		class hlc_rifle_M4 : base_list_weapon {};

		class hlc_rifle_SG551LB_TAC : base_list_weapon {};

		class hlc_rifle_G36KV : base_list_weapon {};

		class hlc_rifle_CQBR : base_list_weapon {};

		class hlc_rifle_SG550Sniper_RIS : base_list_weapon {};

		class hlc_rifle_m14sopmod : base_list_weapon {
			kills = 1;
			mag = "hlc_50Rnd_762x51_TDIM_M14";		
};

		class RL_W_awm_BL : base_list_weapon {
			kills = 3;
			scope = "optic_dms";
		};

		class hlc_mp510_tac : base_list_weapon {};

		class RL_MP7_Rifle_Green_40Rnd : base_list_weapon {
		kills = 3;
		mag = "RL_40Rnd_46x30_FMJ";
		};

		class RL_Glock_17 : scopeless_base_list_weapon {};

		class hlc_Pistol_P228 : base_list_weapon {
			kills = 1;
			scope = "hlc_optic228_docter_cadex";
		};
	};

	class russian {  //24 kills total
		name = "AKs (24 Kills)";
		class hlc_rifle_slr107u : base_list_weapon {};
		
		class hlc_rifle_ak47 : base_list_weapon {};
		
		class hlc_rifle_ak74 : base_list_weapon {};
		
		class hlc_rifle_ak74_dirty2 : base_list_weapon {};
		
		class hlc_rifle_ak74m : base_list_weapon {};
		
		class hlc_rifle_akm : base_list_weapon {};
		
		class hlc_rifle_aks74 : base_list_weapon {};
		
		class hlc_rifle_aks74u : base_list_weapon {};
		
		class hlc_rifle_rpk : base_list_weapon {};
		
		class hlc_rifle_RK62 : base_list_weapon {};
		
		class hlc_rifle_aek971 : base_list_weapon {};
		
		class hlc_rifle_aks74_GL : base_list_weapon {
			mag_count = 10;
			mag = "hlc_VOG25_AK";
		};
		class hlc_rifle_FN3011Modern : base_list_weapon {
			mag_count = 3;
			scope = "hlc_optic_vomz";
		};
	};
	
	class vanilla { //33 kills total
		name = "Vanilla (33 Kills)";

		class srifle_DMR_06_olive_F : base_list_weapon {
			mag = "hlc_20Rnd_762x51_B_M14";
			mag_count = 6;
		};

		class arifle_Katiba_F : base_list_weapon {};
		
		class arifle_Mk20_plain_F : base_list_weapon {};
		
		class arifle_MX_SW_Black_F : base_list_weapon {
			mag = "100Rnd_65x39_caseless_black_mag_tracer";
		};
		
		class SMG_03_TR_black : base_list_weapon {};
		
		class srifle_DMR_01_F : base_list_weapon {};	
		
		class srifle_DMR_02_F : base_list_weapon {
			mag = "ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag";
		};
		
		class srifle_DMR_03_F : base_list_weapon {};
		
		class LMG_03_F : base_list_weapon {};
		
		class arifle_SPAR_01_snd_F : base_list_weapon {};
		
		class arifle_CTAR_blk_F : base_list_weapon {};
		
		class arifle_ARX_blk_F : base_list_weapon {
			mag = "10Rnd_50BW_Mag_F";
		};
		
		class arifle_MSBS65_black_F : base_list_weapon {};
		
		class sgun_HunterShotgun_01_F : base_list_weapon {};
		
		class arifle_RPK12_F : base_list_weapon {};
		
		class LMG_Mk200_black_F : base_list_weapon {};
		
		class arifle_SPAR_03_blk_F : base_list_weapon {};
		
		class MMG_02_camo_F : base_list_weapon {};
		
		class srifle_GM6_F : base_list_weapon {
			kills = 3;
		};
		
	};

	class pistols {  // 19 kills total
		name = "Pistolen (19 Kills)";
		class hlc_smg_mp5k : scopeless_base_list_weapon {};

		class RL_MP7_Pistol_Black_20Rnd : scopeless_base_list_weapon {};

		class RL_W_glock19 : scopeless_base_list_weapon {};

		class RL_Desert_Eagle : scopeless_base_list_weapon {}; 

		class hgun_Pistol_heavy_01_green_F : scopeless_base_list_weapon {};		

		class hlc_pistol_P239_40 : scopeless_base_list_weapon {};
								
		class hlc_Pistol_M11 : scopeless_base_list_weapon {};

		class RL_Colt_1911 : scopeless_base_list_weapon {};

		class RL_Glock_17 : scopeless_base_list_weapon {}; //Schild

		class RL_W_Desert_Eagle_Gold : scopeless_base_list_weapon {
			kills = 1;
		};
	};

	class german {  // 29 kills total
		name = "Deutschland (29 Kills)";
		class RL_MP7_Rifle_Black_40Rnd : base_list_weapon {
			mag = "RL_40Rnd_46x30_FMJ";
			kills = 3;		
		};

		class hlc_smg_mp5a2 : base_list_weapon {
			kills = 3;
		};

		class hlc_smg_mp5sd6 : base_list_weapon {
			kills = 1;
		};

		class hlc_rifle_MG36 : base_list_weapon {
			mag = "hlc_100rnd_556x45_EPR_G36";
			magcount = 2;
		};

		class hlc_rifle_G36MLIC : base_list_weapon {};

		class HLC_rifle_XM8_Carbine : base_list_weapon {
			scope = "HLC_optic_RCO_PCAP";
		};

		class hlc_rifle_416D10 : base_list_weapon {
			kills = 4;
		};

		class hlc_rifle_G36C : base_list_weapon {
			kills = 4;
		};

		class hlc_rifle_g3a3 : base_list_weapon {
			scope = "hlc_optic_ZF95_g3";
		};

		class hlc_rifle_SG550 : base_list_weapon {
			scope = "hlc_optic_ZF95";
		};

		class hlc_rifle_psg1 : base_list_weapon {};			

		class hlc_rifle_stgw57_commando : base_list_weapon {};

		class hlc_Pistol_P228 : scopeless_base_list_weapon {
			kills = 1;
		};	

		class hlc_pistol_C96_Wartime : scopeless_base_list_weapon {
			kills = 1;
		};	
	};

	class sniper { // 24 Kills
		name = "Sniper (24 Kills)";

		class srifle_GM6_F : sniper_base_list_weapon {
			mag = "5Rnd_127x108_APDS_Mag";
		};

		class srifle_DMR_02_F : sniper_base_list_weapon {};

		class srifle_LRR_F : sniper_base_list_weapon {};

		class RL_W_awm_BL : sniper_base_list_weapon {
			mag = "RL_M_5Rnd_300WM_FMJ_AWM";
		};

		class RL_W_Sword_Mk18 : sniper_base_list_weapon {};

		class srifle_DMR_04_Tan_F : sniper_base_list_weapon {};

		class srifle_DMR_05_blk_F : sniper_base_list_weapon {};

		class hlc_rifle_FN3011Tactical_green : sniper_base_list_weapon {};

		class hlc_rifle_M1903A1_unertl : scopeless_base_list_weapon {};

		class hlc_rifle_PSG1A1_RIS : sniper_base_list_weapon {};

		class srifle_DMR_06_hunter_F : sniper_base_list_weapon {};

		class srifle_DMR_01_F : sniper_base_list_weapon {};
	};

	class funny { // 21 Kills
		name = "Funny (21 Kills)";

		class sgun_HunterShotgun_01_sawedoff_F : scopeless_base_list_weapon {
			mag = "2Rnd_12Gauge_Pellets";
			mag_count = 10;
		};

		class hlc_wp_SCARH_cqc_EGLM : base_list_weapon {
			mag = "1Rnd_HE_Grenade_shell";
			mag_count = 10;
		};

		class arifle_MSBS65_UBS_F : base_list_weapon {
			mag = "6Rnd_12Gauge_Pellets";
			mag_count = 10;
		};

		class RL_W_MCR_Carbine_Gold : base_list_weapon {};

		class hlc_rifle_BAB : base_list_weapon {
			kills = 1;
		};

		class sgun_HunterShotgun_01_F : scopeless_base_list_weapon {
			mag = "2Rnd_12Gauge_Slug";
			mag_count = 10;
		};

		class arifle_ARX_blk_F : base_list_weapon {
			mag = "10Rnd_50BW_Mag_F";
		};

		class HLC_Rifle_XM8_MWSF_Carbine_GL : base_list_weapon {
			mag = "1Rnd_HE_Grenade_shell";
			mag_count = 10;
		};

		class arifle_MSBS65_UBS_black_F : scopeless_base_list_weapon {
			mag = "6Rnd_12Gauge_Slug";
			mag_count = 10;
		};

		class RL_crossbow_black : scopeless_base_list_weapon {
			kills = 1;
		};
		class HLC_wp_M134Painless : scopeless_base_list_weapon {
			mag_count = 1;
			kills = 3;
		};
	};
};