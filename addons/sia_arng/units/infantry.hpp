
class B_soldier_F;
class sia_arng_rifleman : B_soldier_F {

	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_rifleman_3.jpg";

	identityTypes[] = {"LanguageENG_F","Head_NATO","vn_g_macv_default"};

	uniformClass = "U_Simc_bdu_erla";

	linkedItems[] = {"V_Simc_vest_pasgt_lbv_1","H_Simc_pasgt_m81",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_pasgt_lbv_1","H_Simc_pasgt_m81",Standard_Equipment};

	weapons[] = {"gm_m16a2_blk","vn_m1911","Throw","Put"};
	respawnWeapons[] = {"gm_m16a2_blk","vn_m1911","Throw","Put"};

	magazines[] = 
	{
		MAG_10(vn_m16_30_mag),
		MAG_3(vn_m1911_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green),
		MAG_2(vn_m67_grenade_mag)
	};
	respawnMagazines[] = 
	{
		MAG_10(vn_m16_30_mag),
		MAG_3(vn_m1911_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green),
		MAG_2(vn_m67_grenade_mag)
	};

};

class B_Soldier_GL_F;
class sia_arng_grenadier : B_Soldier_GL_F {
	
	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_grenadier.jpg";

	identityTypes[] = {"LanguageENG_F","Head_NATO","vn_g_macv_default"};

	uniformClass = "U_Simc_bdu_erla_low";

	linkedItems[] = {"V_Simc_vest_pasgt_nade_lc2","H_Simc_pasgt_m81_scrim_SWDG",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_pasgt_nade_lc2","H_Simc_pasgt_m81_scrim_SWDG",Standard_Equipment};

	weapons[] = {"vn_m16_m203","vn_m1911","Throw","Put"};
	respawnWeapons[] = {"vn_m16_m203","vn_m1911","Throw","Put"};

	magazines[] = 
	{
		MAG_6(vn_m16_30_mag),
		MAG_3(vn_m1911_mag),
		MAG_3(vn_40mm_m406_he_mag),
		MAG_3(vn_40mm_m433_hedp_mag),
		MAG_2(vn_m67_grenade_mag),
		MAG_2(vn_v40_grenade_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green),
		MAG_2(vn_40mm_m680_smoke_w_mag),
		"vn_40mm_m651_cs_mag",
		"vn_40mm_m715_smoke_g_mag",
		"vn_m34_grenade_mag"
	};
	respawnMagazines[] = 
	{
		MAG_6(vn_m16_30_mag),
		MAG_3(vn_m1911_mag),
		MAG_3(vn_40mm_m406_he_mag),
		MAG_3(vn_40mm_m433_hedp_mag),
		MAG_2(vn_m67_grenade_mag),
		MAG_2(vn_v40_grenade_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green),
		MAG_2(vn_40mm_m680_smoke_w_mag),
		"vn_40mm_m651_cs_mag",
		"vn_40mm_m715_smoke_g_mag",
		"vn_m34_grenade_mag"
	};

};

class B_Soldier_TL_F;
class sia_arng_teamleader : B_Soldier_TL_F {

	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_teamleader.jpg";

	identityTypes[] = {"LanguageENG_F","Head_NATO","vn_g_macv_default"};

	uniformClass = "U_Simc_bdu_eto";

	linkedItems[] = {"V_Simc_vest_pasgt_nade","H_Simc_pasgt_m81_b",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_pasgt_nade","H_Simc_pasgt_m81_b",Standard_Equipment};

	weapons[] = {"vn_m16_m203","vn_m1911","Binocular","Throw","Put"};
	respawnWeapons[] = {"vn_m16_m203","vn_m1911","Binocular","Throw","Put"};

	magazines[] = 
	{
		MAG_4(vn_m16_30_mag),
		MAG_2(vn_m16_30_t_mag),
		MAG_3(vn_m1911_mag),
		MAG_2(vn_v40_grenade_mag),
		MAG_6(vn_40mm_m406_he_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		"vn_m18_purple_mag",
		"vn_m18_red_mag",
		MAG_2(Chemlight_green),
		MAG_2(vn_40mm_m680_smoke_w_mag),
		"vn_40mm_m715_smoke_g_mag",
		"vn_40mm_m583_flare_w_mag",
		"vn_40mm_m662_flare_r_mag",
		"vn_40mm_m661_flare_g_mag"
	};
	respawnMagazines[] = 
	{
		MAG_6(vn_m16_30_mag),
		MAG_3(vn_m1911_mag),
		MAG_6(vn_40mm_m406_he_mag),
		MAG_2(vn_m67_grenade_mag),
		MAG_2(vn_v40_grenade_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green),
		MAG_2(vn_40mm_m680_smoke_w_mag),
		"vn_40mm_m583_flare_w_mag",
		"vn_40mm_m715_smoke_g_mag",
		"vn_40mm_m662_flare_r_mag"
	};

};

class B_Soldier_lite_F;
class sia_arng_rifleman_lite : B_Soldier_lite_F {

	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_rifleman_lite.jpg";

	identityTypes[] = {"LanguageENG_F","Head_NATO","vn_g_macv_default"};

	uniformClass = "U_Simc_bdu_erla_tee";

	linkedItems[] = {"V_Simc_Alice_mc_alt","H_Simc_Hat_Patrol_m81",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_Alice_mc_alt","H_Simc_Hat_Patrol_m81",Standard_Equipment};

	weapons[] = {"gm_m16a2_blk","vn_m1911","Throw","Put"};
	respawnWeapons[] = {"gm_m16a2_blk","vn_m1911","Throw","Put"};

	magazines[] = 
	{
		MAG_6(vn_m16_30_mag),
		MAG_3(vn_m1911_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green)
	};
	respawnMagazines[] = 
	{
		MAG_6(vn_m16_30_mag),
		MAG_3(vn_m1911_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green)
	};

};

class sia_arng_rifleman_2 : sia_arng_rifleman {
	
	displayName = "Rifleman 2";

	editorPreview = "\sia_arng\data\preview\sia_arng_rifleman_2.jpg";

	uniformClass = "U_Simc_bdu_eto_roll";

	linkedItems[] = {"V_Simc_vest_pasgt_alice_mc_45","H_Simc_pasgt_m81_b",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_pasgt_alice_mc_45","H_Simc_pasgt_m81_b",Standard_Equipment};

};

class sia_arng_rifleman_3 : sia_arng_rifleman {
	
	displayName = "Rifleman (Backpack)";

	editorPreview = "\sia_arng\data\preview\sia_arng_rifleman_3.jpg";

	uniformClass = "U_Simc_bdu_eto";

	linkedItems[] = {"V_Simc_vest_pasgt_alice_lc2_45_ligt","H_Simc_pasgt_m81",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_pasgt_alice_lc2_45_ligt","H_Simc_pasgt_m81",Standard_Equipment};

	backpack = "B_simc_pack_alice_flak_kobel_m81";
};

class sia_arng_rifleman_4 : sia_arng_rifleman {

	displayName = "Rifleman (M16A1)";

	editorPreview = "\sia_arng\data\preview\sia_arng_rifleman_4.jpg";

	linkedItems[] = {"V_Simc_vest_pasgt_alice_mc","H_Simc_pasgt_m81_scrim_alt",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_pasgt_alice_mc","H_Simc_pasgt_m81_scrim_alt",Standard_Equipment};

	weapons[] = {"vn_m16_bayo","vn_m1911","Throw","Put"};
	respawnWeapons[] = {"vn_m16_bayo","vn_m1911","Throw","Put"};

};

class B_soldier_LAT2_F;
class sia_arng_rifleman_lat : B_soldier_LAT2_F {
	
	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_rifleman_lat.jpg";

	identityTypes[] = {"LanguageENG_F","Head_NATO","vn_g_macv_default"};

	uniformClass = "U_Simc_bdu_erla_roll";

	linkedItems[] = {"V_Simc_vest_pasgt_lbv_2","H_Simc_pasgt_m81_b",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_pasgt_lbv_2","H_Simc_pasgt_m81_b",Standard_Equipment};

	weapons[] = {"vn_m16","vn_m1911","vn_m72","Throw","Put"};
	respawnWeapons[] = {"vn_m16","vn_m1911","vn_m72","Throw","Put"};

	magazines[] = 
	{
		MAG_6(vn_m16_30_mag),
		MAG_3(vn_m1911_mag),
		"vn_m72_mag",
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green)
	};
	respawnMagazines[] = 
	{
		MAG_6(vn_m16_30_mag),
		MAG_3(vn_m1911_mag),
		"vn_m72_mag",
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green)
	};

	backpack = "";

};


class B_engineer_F;
class sia_arng_engineer : B_engineer_F {
	
	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_engineer.jpg";

	identityTypes[] = {"LanguageENG_F","Head_NATO","vn_g_macv_default"};

	uniformClass = "U_Simc_bdu_erla_trop";

	weapons[] = {"vn_m16","vn_m1911","Throw","Put"};
	respawnWeapons[] = {"vn_m16","vn_m1911","Throw","Put"};

	Items[] = {"FirstAidKit","ToolKit","CUP_PipeBomb_M","CUP_PipeBomb_M","CUP_MineE_M","CUP_MineE_M"};
	RespawnItems[] = {"FirstAidKit","ToolKit","CUP_PipeBomb_M","CUP_PipeBomb_M","CUP_MineE_M","CUP_MineE_M"};

	linkedItems[] = {"V_Simc_vest_pasgt_alice_etool","H_Simc_pasgt_m81_b_SWDG",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_pasgt_alice_etool","H_Simc_pasgt_m81_b_SWDG",Standard_Equipment};

	magazines[] = 
	{
		MAG_6(vn_m16_30_mag),
		MAG_3(vn_m1911_mag),
		MAG_2(vn_m67_grenade_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		"vn_m18_purple_mag",
		"vn_m18_red_mag",
		MAG_2(Chemlight_green)
	};
	respawnMagazines[] = 
	{
		MAG_6(vn_m16_30_mag),
		MAG_3(vn_m1911_mag),
		MAG_2(vn_m67_grenade_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		"vn_m18_purple_mag",
		"vn_m18_red_mag",
		MAG_2(Chemlight_green)
	};

	backpack = "sia_simc_pack_alice_0_eng";

};

class B_HeavyGunner_F;
class sia_arng_machinegunner : B_HeavyGunner_F {
	
	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_machinegunner.jpg";

	identityTypes[] = {"LanguageENG_F","Head_NATO","vn_g_macv_default"};

	displayName = "Machinegunner";

	uniformClass = "U_Simc_bdu_eto";

	linkedItems[] = {"V_Simc_vest_pasgt_alice_lc2_60","H_Simc_pasgt_m81_scrim",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_pasgt_alice_lc2_60","H_Simc_pasgt_m81_scrim",Standard_Equipment};

	weapons[] = {"vn_m60","vn_m1911","Throw","Put"};
	respawnWeapons[] = {"vn_m60","vn_m1911","Throw","Put"};

	magazines[] = 
	{
		MAG_3(vn_m60_100_mag),
		MAG_3(vn_m1911_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green)
	};
	respawnMagazines[] = 
	{
		MAG_3(vn_m60_100_mag),
		MAG_3(vn_m1911_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green)
	};

	backpack = "";

};


class B_soldier_M_F;
class sia_arng_marksman : B_soldier_M_F {
	
	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_marksman.jpg";

	identityTypes[] = {"LanguageENG_F","Head_NATO","vn_g_macv_default"};

	uniformClass = "U_Simc_bdu_eto_low";

	linkedItems[] = {"V_Simc_vest_pasgt_lbv_belt_45_1","H_Simc_pasgt_m81_scrim_panama",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_pasgt_lbv_belt_45_1","H_Simc_pasgt_m81_scrim_panama",Standard_Equipment};

	weapons[] = {"vn_m21","vn_m1911","Throw","Put"};
	respawnWeapons[] = {"vn_m21","vn_m1911","Throw","Put"};

	magazines[] = 
	{
		MAG_8(vn_m14_mag),
		MAG_2(vn_m1911_mag),
		MAG_2(vn_m67_grenade_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green)
	};
	respawnMagazines[] = 
	{
		MAG_8(vn_m14_mag),
		MAG_2(vn_m1911_mag),
		MAG_2(vn_m67_grenade_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green)
	};

};

class B_medic_F;
class sia_arng_medic : B_medic_F {
	
	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_medic.jpg";

	identityTypes[] = {"LanguageENG_F","Head_NATO","vn_g_macv_default"};

	uniformClass = "U_Simc_bdu_eto_tee";

	linkedItems[] = {"V_Simc_vest_pasgt_lbv_belt_mc_1","H_Simc_pasgt_m81_scrim_SWDG",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_pasgt_lbv_belt_mc_1","H_Simc_pasgt_m81_scrim_SWDG",Standard_Equipment};

	weapons[] = {"gm_m16a2_blk","vn_m1911","Throw","Put"};
	respawnWeapons[] = {"gm_m16a2_blk","vn_m1911","Throw","Put"};

	magazines[] = 
	{
		MAG_6(vn_m16_30_mag),
		MAG_2(vn_m1911_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		"vn_m18_purple_mag",
		"vn_m18_red_mag",
		MAG_2(Chemlight_green)
	};
	respawnMagazines[] = 
	{
		MAG_6(vn_m16_30_mag),
		MAG_2(vn_m1911_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		"vn_m18_purple_mag",
		"vn_m18_red_mag",
		MAG_2(Chemlight_green)
	};

	backpack = "sia_simc_pack_med_m5_flak_medic";

};

class B_Soldier_SL_F;
class sia_arng_squadleader : B_Soldier_SL_F {
	
	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_squadleader.jpg";

	identityTypes[] = {"LanguageENG_F","Head_NATO","vn_g_macv_default"};

	uniformClass = "U_Simc_bdu_veldjas_trop";

	linkedItems[] = {"V_Simc_vest_pasgt_lbv_belt_45_mc_2","H_Simc_pasgt_m81_b_SWDG",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_pasgt_lbv_belt_45_mc_2","H_Simc_pasgt_m81_b_SWDG",Standard_Equipment};

	weapons[] = {"sia_xm177_stock_sql","vn_m1911","Binocular","Throw","Put"};
	respawnWeapons[] = {"sia_xm177_stock_sql","vn_m1911","Binocular","Throw","Put"};

	magazines[] = 
	{
		MAG_4(vn_m16_30_mag),
		MAG_2(vn_m16_30_t_mag),
		MAG_3(vn_m1911_mag),
		MAG_2(vn_m67_grenade_mag),
		"vn_m14_grenade_mag",
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		"vn_m18_purple_mag",
		"vn_m18_red_mag",
		MAG_2(Chemlight_green)
	};
	respawnMagazines[] = 
	{
		MAG_4(vn_m16_30_mag),
		MAG_2(vn_m16_30_t_mag),
		MAG_3(vn_m1911_mag),
		MAG_2(vn_m67_grenade_mag),
		"vn_m14_grenade_mag",
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		"vn_m18_purple_mag",
		"vn_m18_red_mag",
		MAG_2(Chemlight_green)
	};

};

class B_crew_F;
class sia_crew_F_base : B_crew_F { class EventHandlers; };
class sia_arng_crewman : sia_crew_F_base {
	
	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_crewman.jpg";

	identityTypes[] = {"LanguageENG_F","Head_NATO","vn_g_macv_default"};
	
	uniformClass = "U_Simc_bdu_raid_blench_nomex";

	headgearList[] = {
		"H_Simc_CVC", 0.9,
		"H_Simc_CVC_G", 0.4,
		"H_Simc_CVC_G_low", 0.4,
	};

	linkedItems[] = {"V_Simc_vest_pasgt_grun","H_Simc_CVC",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_pasgt_grun","H_Simc_CVC",Standard_Equipment};

	weapons[] = {"vn_m3a1","vn_m1911","Throw","Put"};
	respawnWeapons[] = {"vn_m3a1","vn_m1911","Throw","Put"};

	magazines[] = 
	{
		MAG_6(vn_m3a1_mag),
		MAG_3(vn_m1911_mag),
		MAG_2(vn_m67_grenade_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green)
	};
	respawnMagazines[] = 
	{
		MAG_6(vn_m3a1_mag),
		MAG_3(vn_m1911_mag),
		MAG_2(vn_m67_grenade_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green)
	};

	class EventHandlers : EventHandlers
	{
		init = "if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; };";
	};

};

class B_Helipilot_F;
class sia_arng_pilot : B_Helipilot_F {
	
	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_pilot.jpg";

	identityTypes[] = {"LanguageENG_F","Head_NATO","vn_g_macv_default"};

	uniformClass = "vn_b_uniform_heli_01_01";

	linkedItems[] = {"V_Simc_flak_M69_open_alt","gm_ge_headgear_sph4_oli",Standard_Equipment,"gm_nsg66_oli"};
	respawnlinkedItems[] = {"V_Simc_flak_M69_open_alt","gm_ge_headgear_sph4_oli",Standard_Equipment,"gm_nsg66_oli"};

	weapons[] = {"gm_mp5a3_blk","vn_m1911","Throw","Put"};
	respawnWeapons[] = {"gm_mp5a3_blk","vn_m1911","Throw","Put"};

	magazines[] = 
	{
		MAG_4(gm_30Rnd_9x19mm_B_DM51_mp5a3_blk),
		MAG_3(vn_m1911_mag),
		"vn_m18_green_mag",
		"vn_m18_purple_mag",
		"vn_m18_red_mag",
		MAG_2(Chemlight_green)
	};
	respawnMagazines[] = 
	{
		MAG_4(gm_30Rnd_9x19mm_B_DM51_mp5a3_blk),
		MAG_3(vn_m1911_mag),
		"vn_m18_green_mag",
		"vn_m18_purple_mag",
		"vn_m18_red_mag",
		MAG_2(Chemlight_green)
	};

};

class B_officer_F;
class sia_arng_officer : B_officer_F {
	
	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_officer.jpg";

	identityTypes[] = {"LanguageENG_F","Head_NATO","vn_g_macv_default"};

	uniformClass = "U_simc_bdu_veldjas_m81_trop";

	linkedItems[] = {"V_Simc_vest_pasgt_alice_lc2_45_ligt","H_Simc_Hat_Patrol_m81",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_pasgt_alice_lc2_45_ligt","H_Simc_Hat_Patrol_m81",Standard_Equipment};

	weapons[] = {"gm_m16a2_blk","vn_m1911","Binocular","Throw","Put"};
	respawnWeapons[] = {"gm_m16a2_blk","vn_m1911","Binocular","Throw","Put"};

	magazines[] = 
	{
		MAG_4(vn_m16_30_mag),
		MAG_3(vn_m1911_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green)
	};
	respawnMagazines[] = 
	{
		MAG_4(vn_m16_30_mag),
		MAG_3(vn_m1911_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green)
	};

};

class B_recon_F;
class sia_arng_sf_soldier : B_recon_F {

	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_sf_soldier.jpg";

	uniformClass = "U_Simc_bdu_raid_trop";

	identityTypes[] = {"LanguageENG_F","vn_b_camo_us","vn_g_macv_sf"};

	linkedItems[] = {"V_Simc_vest_rba_mk1_alice_45_1","H_Simc_pasgt_m81_b",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_rba_mk1_alice_45_1","H_Simc_pasgt_m81_b",Standard_Equipment};

	weapons[] = {"vn_xm177","vn_m1911","Binocular","Throw","Put"};
	respawnWeapons[] = {"vn_xm177","vn_m1911","Binocular","Throw","Put"};
	
	magazines[] = 
	{
		MAG_10(vn_m16_30_mag),
		MAG_3(vn_m1911_mag),
		MAG_2(vn_v40_grenade_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		"vn_m14_grenade_mag",
		MAG_2(Chemlight_green)
	};
	respawnMagazines[] = 
	{
		MAG_10(vn_m16_30_mag),
		MAG_3(vn_m1911_mag),
		MAG_2(vn_v40_grenade_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		"vn_m14_grenade_mag",
		MAG_2(Chemlight_green)
	};

	backpack = "B_simc_USMCFLAK_M68";

};

class B_recon_TL_F;
class sia_arng_teamleader_sf : B_recon_TL_F {

	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_teamleader_sf.jpg";

	uniformClass = "U_Simc_bdu_raid_knee";

	identityTypes[] = {"LanguageENG_F","vn_b_camo_us","vn_g_macv_sf"};
	
	headgearList[] = {
		"H_Simc_Boon_m81_1", 0.9,
		"H_Simc_Boon_m81_2", 0.9,
		"H_Simc_Boon_m81_3", 0.9,
		"H_Simc_Boon_m81_4", 0.9,
		"H_Simc_Boon_m81_5", 0.8,
		"H_Simc_Boon_m81_6", 0.9,
		"H_Simc_Boon_m81_7", 0.9,
		"H_Simc_Boon_m81_8", 0.8
	};

	linkedItems[] = {"V_Simc_vest_rba_mk1_LBV_belt_1","H_Simc_Boon_m81_3",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_rba_mk1_LBV_belt_1","H_Simc_Boon_m81_3",Standard_Equipment};

	weapons[] = {"vn_m16_sniper_sd","vn_m1911","Binocular","Throw","Put"};
	respawnWeapons[] = {"vn_m16_sniper_sd","vn_m1911","Binocular","Throw","Put"};

	magazines[] = 
	{
		MAG_4(vn_m16_30_mag),
		MAG_2(vn_m16_30_t_mag),
		MAG_2(vn_m1911_mag),
		MAG_2(vn_v40_grenade_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		"vn_m18_purple_mag",
		"vn_m18_red_mag",
		"vn_satchelcharge_02_throw_mag",
		MAG_2(Chemlight_green)
	};
	respawnMagazines[] = 
	{
		MAG_4(vn_m16_30_mag),
		MAG_2(vn_m16_30_t_mag),
		MAG_2(vn_m1911_mag),
		MAG_2(vn_v40_grenade_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		"vn_m18_purple_mag",
		"vn_m18_red_mag",
		"vn_satchelcharge_02_throw_mag",
		MAG_2(Chemlight_green)
	};

	backpack = "B_simc_rajio_flak_2_a";

	class EventHandlers
	{
		init = "if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; };";
	};
};

class B_recon_M_F;
class sia_arng_marksman_sf : B_recon_M_F {

	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_marksman_sf.jpg";

	uniformClass = "U_Simc_bdu_raid_knee_trop";

	identityTypes[] = {"LanguageENG_F","vn_b_camo_us","vn_g_macv_sf"};

	headgearList[] = {
		"H_Simc_Boon_m81_1", 0.9,
		"H_Simc_Boon_m81_2", 0.9,
		"H_Simc_Boon_m81_3", 0.9,
		"H_Simc_Boon_m81_4", 0.9,
		"H_Simc_Boon_m81_5", 0.9,
		"H_Simc_Boon_m81_6", 0.9,
		"H_Simc_Boon_m81_7", 0.9,
		"H_Simc_Boon_m81_8", 0.8
	};

	linkedItems[] = {"V_Simc_LBV_88_alice_45_mc_2","H_Simc_Boon_m81_5",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_LBV_88_alice_45_mc_2","H_Simc_Boon_m81_5",Standard_Equipment};

	weapons[] = {"vn_m21","vn_m1911","Binocular","Throw","Put"};
	respawnWeapons[] = {"vn_m21","vn_m1911","Binocular","Throw","Put"};

	magazines[] = 
	{
		MAG_6(vn_m14_mag),
		MAG_3(vn_m1911_mag),
		MAG_2(vn_v40_grenade_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		"vn_m34_grenade_mag",
		MAG_2(Chemlight_green)
	};
	respawnMagazines[] = 
	{
		MAG_6(vn_m14_mag),
		MAG_3(vn_m1911_mag),
		MAG_2(vn_v40_grenade_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		"vn_m34_grenade_mag",
		MAG_2(Chemlight_green)
	};

	class EventHandlers
	{
		init = "if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; };";
	};
};

class B_recon_exp_F;
class sia_arng_sf_blackop : B_recon_exp_F {

	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_sf_blackop.jpg";
	
	displayName = "Black Op";
	identityTypes[] = {"LanguageENG_F","vn_b_camo_us","vn_g_macv_sf"};

	headgearList[] = {
		"H_Simc_protec_half_nvo", 0.9,
		"H_Simc_protec_half_nvo_ir", 0.9,
		"H_Simc_protec_half_nvo_ir_swdg", 0.9,
		"H_Simc_protec_half_nvo_ir_swdg_low", 0.9,
		"H_Simc_protec_half_nvo_swdg", 0.9,
		"H_Simc_protec_half_nvo_swdg_low", 0.8
	};

	uniformClass = "U_Simc_CDO_bdu";

	linkedItems[] = {"V_Simc_vest_fauf_2","H_Simc_protec_half_nvo_swdg",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_fauf_2","H_Simc_protec_half_nvo_swdg",Standard_Equipment};

	weapons[] = {"sia_mp5sd5_blk_blackop","vn_welrod","Binocular","Throw","Put"};
	respawnWeapons[] = {"sia_mp5sd5_blk_blackop","vn_welrod","Binocular","Throw","Put"};
	
	magazines[] = 
	{
		MAG_10(gm_30Rnd_9x19mm_BSD_DM81_mp5a3_blk),
		MAG_3(vn_welrod_mag),
		MAG_2(vn_v40_grenade_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		"vn_molotov_grenade_mag",
		MAG_2(Chemlight_green),
		"B_IR_Grenade"
	};
	respawnMagazines[] = 
	{
		MAG_10(vn_m16_30_mag),
		MAG_3(vn_m1911_mag),
		MAG_2(vn_v40_grenade_mag),
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		"vn_molotov_grenade_mag",
		MAG_2(Chemlight_green),
		"B_IR_Grenade"
	};

	backpack = "sia_FieldPack_blk_blackop";

	class EventHandlers	
	{
		init = "if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; };";
	};
};

class sia_arng_machinegunner_asst : sia_arng_rifleman_3 {

	displayName = "Asst. Machinegunner";

	editorPreview = "\sia_arng\data\preview\sia_arng_machinegunner_asst.jpg";

	uniformClass = "U_Simc_bdu_erla";

	linkedItems[] = {"V_Simc_vest_pasgt_alice_249","H_Simc_pasgt_m81",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_pasgt_alice_249","H_Simc_pasgt_m81",Standard_Equipment};

	backpack = "sia_simc_pack_alice_flak_kobel_m81_asstmg";
 
 };

class sia_arng_at_specialist : sia_arng_rifleman_lat {

	displayName = "AT Specialist";

	editorPreview = "\sia_arng\data\preview\sia_arng_at_specialist.jpg";

	weapons[] = {"gm_m16a2_blk","gm_pzf84_oli","Binocular","Throw","Put"};
	respawnWeapons[] = {"gm_m16a2_blk","gm_pzf84_oli","Binocular","Throw","Put"};

	magazines[] = 
	{
		MAG_7(vn_m16_30_mag),
		MAG_3(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf),
		MAG_2(SmokeShell),
		MAG_2(Chemlight_green)
	};
	respawnMagazines[] = 
	{
		MAG_7(vn_m16_30_mag),
		MAG_3(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf),
		MAG_2(SmokeShell),
		MAG_2(Chemlight_green)
	};

	backpack = "sia_simc_pack_alice_flak_frame_1_alt_at";
};
