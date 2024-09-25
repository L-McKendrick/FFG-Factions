#define MACRO_FACTION faction = "sia_faction_arng";

#define CREW_M1025(DRIVER,GUNNER) \
		crew = DRIVER; \
		typicalCargo[] = {}; \
		class Turrets : Turrets { \
			class M2_Turret : M2_Turret { \
				gunnerType = GUNNER; \
			}; \
			class CargoTurret_01: CargoTurret_01 {}; \
			class CargoTurret_02: CargoTurret_02 {}; \
			class CargoTurret_03: CargoTurret_03 {} \
		};

#define CREW_M220A2(DRIVER,GUNNER) \
		crew = DRIVER; \
		typicalCargo[] = {}; \
		class Turrets : Turrets { \
			class TOW_Turret : TOW_Turret { \
				gunnerType = GUNNER; \
			}; \
			class CargoTurret_01: CargoTurret_01 {}; \
			class CargoTurret_02: CargoTurret_02 {}; \
			class CargoTurret_03: CargoTurret_03 {} \
		};

// Humvee
	class rhsusf_m1025_w;
	class sia_arng_m1025 : rhsusf_m1025_w {
		crew = "sia_arng_rifleman";
		MACRO_FACTION
		Macro_scope
	};

	class rhsusf_m998_w_2dr_fulltop;
	class sia_arng_m998_2dr_fulltop : rhsusf_m998_w_2dr_fulltop {
		crew = "sia_arng_rifleman";
		MACRO_FACTION
		Macro_scope
	};

	class rhsusf_m998_w_2dr_halftop;
	class sia_arng_m998_2dr_halftop : rhsusf_m998_w_2dr_halftop {
		crew = "sia_arng_rifleman";
		MACRO_FACTION
		Macro_scope
	};

// Humvee mk19
	class rhsusf_m1025_w_mk19;
	class sia_arng_m1025_mk19_BASE0 : rhsusf_m1025_w_mk19 {
		scope = 0;
		scopeCurator = 0;
		class Turrets;
	};

	class sia_arng_m1025_mk19_BASE1 : sia_arng_m1025_mk19_BASE0 {
		class Turrets : Turrets {
			class M2_Turret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
		};
	};

	class sia_arng_m1025_mk19_BASE2: sia_arng_m1025_mk19_BASE1 {
		class Turrets : Turrets {
			class M2_Turret : M2_Turret {
				class Turrets;
			};
			class CargoTurret_01 : CargoTurret_01 {};
			class CargoTurret_02 : CargoTurret_02 {};
			class CargoTurret_03 : CargoTurret_03 {};
		};
	};

	class sia_arng_m1025_mk19 : sia_arng_m1025_mk19_BASE2 {
		MACRO_FACTION
		Macro_scope
		CREW_M1025(sia_arng_rifleman,sia_arng_rifleman_2)
	};


// Humvee m2
	class rhsusf_m1025_w_m2;
	class sia_arng_m1025_m2_BASE0 : rhsusf_m1025_w_m2 {
		scope = 0;
		scopeCurator = 0;
		class Turrets;
	};

	class sia_arng_m1025_m2_BASE1 : sia_arng_m1025_m2_BASE0 {
		class Turrets : Turrets {
				class M2_Turret;
				class CargoTurret_01;
				class CargoTurret_02;
				class CargoTurret_03;
		};
	};

	class sia_arng_m1025_m2_BASE2: sia_arng_m1025_m2_BASE1 {
		class Turrets : Turrets {
			class M2_Turret : M2_Turret {
				class Turrets;
			};
			class CargoTurret_01 : CargoTurret_01 {};
			class CargoTurret_02 : CargoTurret_02 {};
			class CargoTurret_03 : CargoTurret_03 {};
		};
	};

	class sia_arng_m1025_m2 : sia_arng_m1025_m2_BASE2 {
		MACRO_FACTION
		Macro_scope
		CREW_M1025(sia_arng_rifleman,sia_arng_rifleman_2)
	};

// Humvee TOW
	class rhsusf_m1045_w;
	class sia_arng_m1045_BASE0 : rhsusf_m1045_w {
		scope = 0;
		scopeCurator = 0;
		class Turrets;
	};

	class sia_arng_m1045_BASE1 : sia_arng_m1045_BASE0 {
		class Turrets : Turrets {
				class TOW_Turret;
				class CargoTurret_01;
				class CargoTurret_02;
				class CargoTurret_03;
		};
	};

	class sia_arng_m1045_BASE2: sia_arng_m1045_BASE1 {
		class CargoTurret;
		class Turrets : Turrets {
			class TOW_Turret : TOW_Turret {
				class Turrets;
			};
			class CargoTurret_01 : CargoTurret_01 {};
			class CargoTurret_02 : CargoTurret_02 {};
			class CargoTurret_03 : CargoTurret_03 {};
		};
	};

	class sia_arng_m1045 : sia_arng_m1045_BASE2 {
		MACRO_FACTION
		Macro_scope
		CREW_M220A2(sia_arng_rifleman,sia_arng_rifleman_2)
	};
