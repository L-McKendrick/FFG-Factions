/* MACROS DEFINITION */

#define Macro_scope scope = 2;\
					scopeCurator = 2;

#define AUTHOR_MACRO author="Soldiers in Arms";

#define MACRO_SIDE 	side = 1;\
					faction = "sia_faction_arng";\
					editorPreview = "";
					
#define Standard_Equipment ItemMap,ItemCompass,ItemWatch,ItemRadio

#define MAG_2(a) a, a
#define MAG_3(a) a, a, a
#define MAG_4(a) a, a, a, a
#define MAG_5(a) a, a, a, a, a
#define MAG_6(a) a, a, a, a, a, a
#define MAG_7(a) a, a, a, a, a, a, a
#define MAG_8(a) a, a, a, a, a, a, a, a
#define MAG_9(a) a, a, a, a, a, a, a, a, a
#define MAG_10(a) a, a, a, a, a, a, a, a, a, a

#define MAG_XX(a,b) class _xx_##a { magazine = a; count = b; }
#define WEAP_XX(a,b) class _xx_##a { weapon = a; count = b; }
#define ITEM_XX(a,b) class _xx_##a { name = a; count = b; }

class cfgVehicles {
	#include "units\backpacks.hpp"
    #include "units\infantry.hpp"

	#include "vehicles\cars.hpp"
};
