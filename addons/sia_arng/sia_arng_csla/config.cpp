class CfgPatches
{
	class sia_faction_arng_csla
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "sia_arng";

		requiredVersion = 2.14;
		requiredAddons[] = { 
            "US85"
        };
		units[] = {
			"sia_arng_rifleman_at_csla",
			"sia_arng_autorifleman_csla",
			"sia_arng_M1043_ua",
            "sia_arng_M1043_M60",
            "sia_arng_M1043_M2",
            "sia_arng_M923a",
            "sia_arng_M923cargo",
            "sia_arng_M923f",
            "sia_arng_M923r",
            "sia_arng_M923o",
            "sia_arng_M923c",
            "sia_arng_M923a1o",
            "sia_arng_M923a1c"
		};
		weapons[] = {};

        skipWhenMissingDependencies = 1;
	};
};

#include "CfgVehicles.hpp"