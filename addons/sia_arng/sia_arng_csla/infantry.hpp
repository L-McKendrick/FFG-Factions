class B_soldier_LAT_F;
class sia_arng_rifleman_at_csla : B_soldier_LAT_F {

	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_rifleman_3.jpg";

	identityTypes[] = {"LanguageENG_F","Head_NATO","vn_g_macv_default"};

	uniformClass = "U_Simc_bdu_erla";

	linkedItems[] = {"V_Simc_vest_pasgt_alice_mc_alt","H_Simc_pasgt_m81_b",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_pasgt_alice_mc_alt","H_Simc_pasgt_m81_b",Standard_Equipment};

	weapons[] = {"gm_m16a2_blk","vn_m1911","US85_M136","Throw","Put"};
	respawnWeapons[] = {"gm_m16a2_blk","vn_m1911","US85_M136","Throw","Put"};

	magazines[] = 
	{
		MAG_6(vn_m16_30_mag),
		MAG_3(vn_m1911_mag),
		"US85_M136_Mag",
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green)
	};
	respawnMagazines[] = 
	{
		MAG_6(vn_m16_30_mag),
		MAG_3(vn_m1911_mag),
		"US85_M136_Mag",
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green)
	};

	backpack = "";	
};

class B_soldier_AR_F;
class sia_arng_autorifleman_csla : B_soldier_AR_F {
	
	AUTHOR_MACRO
	MACRO_SIDE

	editorPreview = "\sia_arng\data\preview\sia_arng_rifleman_3.jpg";

	identityTypes[] = {"LanguageENG_F","Head_NATO","vn_g_macv_default"};

	uniformClass = "U_Simc_bdu_erla_tee";

	linkedItems[] = {"V_Simc_vest_pasgt_alice_249","H_Simc_pasgt_m81_scrim_alt",Standard_Equipment};
	respawnlinkedItems[] = {"V_Simc_vest_pasgt_alice_249","H_Simc_pasgt_m81_scrim_alt",Standard_Equipment};

	weapons[] = {"US85_M249","vn_m1911","Throw","Put"};
	respawnWeapons[] = {"US85_M249","vn_m1911","Throw","Put"};

	magazines[] = 
	{
		MAG_3(US85_200Rnd_556x45),
		MAG_3(vn_m1911_mag),
		"vn_m67_grenade_mag",
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green)
	};
	respawnMagazines[] = 
	{
		MAG_3(US85_200Rnd_556x45),
		MAG_3(vn_m1911_mag),
		"vn_m67_grenade_mag",
		"vn_m18_white_mag",
		"vn_m18_green_mag",
		MAG_2(Chemlight_green)
	};

	backpack = "";
};
