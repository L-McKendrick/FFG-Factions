#define MACRO_FACTION faction = "sia_faction_arng";

#define CREW_M1043(DRIVER,GUNNER) \
		crew = DRIVER; \
		typicalCargo[] = {}; \
		class Turrets : Turrets { \
			class MainTurret : MainTurret { \
				gunnerType = GUNNER; \
			}; \
		};

// Humvee
	class US85_M1043_ua;
	class sia_arng_M1043_ua : US85_M1043_ua {
		crew = "sia_arng_rifleman";
		MACRO_FACTION
		Macro_scope
	};

// Humvee m60
	class US85_M1043_M60;
	class sia_arng_M1043_M60_BASE0 : US85_M1043_M60 {
		scope = 0;
		scopeCurator = 0;
		class Turrets;
	};

	class sia_arng_M1043_M60_BASE1 : sia_arng_M1043_M60_BASE0 {
		class Turrets : Turrets {
				class MainTurret;
		};
	};

	class sia_arng_M1043_M60_BASE2: sia_arng_M1043_M60_BASE1 {
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				class Turrets;
			};
		};
	};

	class sia_arng_M1043_M60 : sia_arng_M1043_M60_BASE2 {
		MACRO_FACTION
		Macro_scope
		CREW_M1043(sia_arng_rifleman,sia_arng_rifleman_2)
	};

// Humvee m2
	class US85_M1043_M2;
	class sia_arng_M1043_M2_BASE0 : US85_M1043_M2 {
		scope = 0;
		scopeCurator = 0;
		class Turrets;
	};

	class sia_arng_M1043_M2_BASE1 : sia_arng_M1043_M2_BASE0 {
		class Turrets : Turrets {
				class MainTurret;
		};
	};

	class sia_arng_M1043_M2_BASE2: sia_arng_M1043_M2_BASE1 {
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				class Turrets;
			};
		};
	};

	class sia_arng_M1043_M2 : sia_arng_M1043_M2_BASE2 {
		MACRO_FACTION
		Macro_scope
		CREW_M1043(sia_arng_rifleman,sia_arng_rifleman_2)
	};

// Unarmed Trucks

class US85_M923a;
class sia_arng_M923a : US85_M923a {
	crew = "sia_arng_rifleman_lite";
	MACRO_FACTION
	Macro_scope
};

class US85_M923cargo;
class sia_arng_M923cargo : US85_M923cargo {
	crew = "sia_arng_rifleman_lite";
	MACRO_FACTION
	Macro_scope
};

class US85_M923f;
class sia_arng_M923f : US85_M923f {
	crew = "sia_arng_rifleman_lite";
	MACRO_FACTION
	Macro_scope
};

class US85_M923r;
class sia_arng_M923r : US85_M923r {
	crew = "sia_arng_engineer";
	MACRO_FACTION
	Macro_scope
};

class US85_M923o;
class sia_arng_M923o : US85_M923o {
	crew = "sia_arng_rifleman";
	MACRO_FACTION
	Macro_scope
};

class US85_M923c;
class sia_arng_M923c : US85_M923c {
	crew = "sia_arng_rifleman";
	MACRO_FACTION
	Macro_scope
};

class US85_M923a1o;
class sia_arng_M923a1o : US85_M923a1o {
	crew = "sia_arng_rifleman";
	MACRO_FACTION
	Macro_scope
};

class US85_M923a1c;
class sia_arng_M923a1c : US85_M923a1c {
	crew = "sia_arng_rifleman";
	MACRO_FACTION
	Macro_scope
};