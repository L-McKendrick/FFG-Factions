class CfgPatches
{
	class sia_faction_arng_rhsusaf
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "sia_arng";

		requiredVersion = 2.14;
		requiredAddons[] = { 
            "rhsusf_c_weapons",
            "rhsusf_vehicles"
        };
		units[] = {
			"sia_arng_rifleman_at_rhsusaf",
			"sia_arng_autorifleman_rhsusaf",
			"sia_arng_m1025",
            "sia_arng_m998_2dr_fulltop",
            "sia_arng_m998_2dr_halftop",
            "sia_arng_m1025_mk19",
            "sia_arng_m1025_m2",
            "sia_arng_m1045"
		};
		weapons[] = {};

        skipWhenMissingDependencies = 1;
	};
};

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"