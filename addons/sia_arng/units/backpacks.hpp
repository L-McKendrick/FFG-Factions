// === Backpacks ===
	// Engineer Bag
	class B_simc_pack_alice_0;
	class sia_simc_pack_alice_0_eng : B_simc_pack_alice_0 {
		scope = 1;
		scopeArsenal = 0;
		class TransportMagazines
		{
			MAG_XX(DemoCharge_Remote_Mag, 2);
			MAG_XX(SatchelCharge_Remote_Mag, 1);
		};

		class TransportItems
		{
			ITEM_XX(ToolKit, 1);
		};
	};

	// Medic bag
	class B_simc_pack_med_m5_flak;
	class sia_simc_pack_med_m5_flak_medic: B_simc_pack_med_m5_flak {
		scope = 1;
		scopeArsenal = 0;
		class TransportItems
		{
			ITEM_XX(FirstAidKit, 10);
			ITEM_XX(Medikit, 1);
		};
	};

	// Black Op bag
	class B_FieldPack_blk;
	class sia_FieldPack_blk_blackop : B_FieldPack_blk {
		scope = 1;
		scopeArsenal = 0;
		class TransportMagazines
		{
			MAG_XX(vn_mine_m112_remote_mag, 1);
			MAG_XX(SatchelCharge_Remote_Mag, 1);
			MAG_XX(vn_mine_m14_mag, 2);
			MAG_XX(vn_mine_m15_mag, 1);
		};

		class TransportItems
		{
			ITEM_XX(ToolKit, 1);
		};
	};

	// ASST MG
	class B_simc_pack_alice_flak_kobel_m81;
	class sia_simc_pack_alice_flak_kobel_m81_asstmg : B_simc_pack_alice_flak_kobel_m81 {
		cope = 1;
		scopeArsenal = 0;
		class TransportMagazines
		{
			MAG_XX(vn_m60_100_mag, 4);
		};
	};

	// AT Specialist
	class B_simc_pack_alice_flak_frame_1_alt;
	class sia_simc_pack_alice_flak_frame_1_alt_at : B_simc_pack_alice_flak_frame_1_alt {
		cope = 1;
		scopeArsenal = 0;
		class TransportMagazines
		{
			MAG_XX(gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf, 2);
			MAG_XX(gm_1Rnd_84x245mm_ILLUM_DM16_carlgustaf, 1);
		};
	};

// === Weapons ===