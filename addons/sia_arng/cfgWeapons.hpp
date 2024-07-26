class cfgWeapons {
	
	class vn_xm177_stock;
	class sia_xm177_stock_sql: vn_xm177_stock {
		scope = 1;
		scopeArsenal = 0;

		class LinkedItems {
			class LinkedItemsOptic {
				item = "vn_o_4x_m16";
				slot = "CowsSlot";
			};
		};
	};

	class gm_mp5sd5_blk;
	class sia_mp5sd5_blk_blackop: gm_mp5sd5_blk {
		scope = 1;
		scopeArsenal = 0;

		class LinkedItems {
			class LinkedItemsAcc {
				item = "gm_surefire_l60_ir_hoseclamp_blk";
				slot = "PointerSlot";
			};
		};
	};
};