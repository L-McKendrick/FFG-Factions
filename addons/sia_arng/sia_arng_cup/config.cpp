class CfgPatches
{
	class sia_faction_arng_cup
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "sia_arng";

		requiredVersion = 2.14;
		requiredAddons[] = { 
            "CUP_Weapons_M249",
			"CUP_Weapons_M136",
			"CUP_Weapons_Ammunition"
        };
		units[] = {
			"sia_arng_rifleman_at_cup",
			"sia_arng_autorifleman_cup"
		};
		weapons[] = {};

        skipWhenMissingDependencies = 1;
	};
};

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"