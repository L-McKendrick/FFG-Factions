			
class CfgGroups {
    class WEST {

        class sia_arng {
            name = "US Army National Guard (80s)";

            class Infantry {
                name = "Infantry";

                class sia_arng_infantry_squad {
                    name = "Squad";
                    side = 1;
                    faction = "sia_arng";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "sia_arng_squadleader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_autorifleman_rhsusaf";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_rifleman";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_rifleman_at_rhsusaf";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "sia_arng_teamleader";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_machinegunner";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_machinegunner_asst";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_medic";
                    };
                };

                class sia_arng_infantry_team {
                    name = "Fireteam";
                    side = 1;
                    faction = "sia_arng";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "sia_arng_teamleader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_autorifleman_rhsusaf";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_rifleman";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_rifleman_lat";
                    };
                };

                class sia_arng_infantry_team_at {
                    name = "Fireteam (AT)";
                    side = 1;
                    faction = "sia_arng";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "sia_arng_teamleader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_autorifleman_rhsusaf";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_at_specialist";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_rifleman_3";
                    };
                };

                class sia_arng_infantry_team_mg {
                    name = "Fireteam (MG)";
                    side = 1;
                    faction = "sia_arng";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "sia_arng_teamleader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_machinegunner";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_machinegunner_asst";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_rifleman_4";
                    };
                };

                class sia_arng_infantry_squad_weap {
                    name = "Squad (Weapons)";
                    side = 1;
                    faction = "sia_arng";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "sia_arng_squadleader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_autorifleman_rhsusaf";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_at_specialist";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_rifleman_4";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "sia_arng_teamleader";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_machinegunner";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_machinegunner_asst";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_medic";
                    };
                };

                class sia_arng_infantry_team_support {
                    name = "Fireteam (Support)";
                    side = 1;
                    faction = "sia_arng";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "sia_arng_teamleader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_autorifleman_rhsusaf";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_rifleman";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_medic";
                    };
                };

                class sia_arng_infantry_sentry {
                    name = "Sentry";
                    side = 1;
                    faction = "sia_arng";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "sia_arng_grenadier";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_rifleman_2";
                    };
                };

                class sia_arng_infantry_sentry_at {
                    name = "Sentry (AT)";
                    side = 1;
                    faction = "sia_arng";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "sia_arng_at_specialist";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_rifleman_3";
                    };
                };

                class sia_arng_infantry_sentry_mg {
                    name = "Sentry (MG)";
                    side = 1;
                    faction = "sia_arng";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "sia_arng_machinegunner";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_machinegunner_asst";
                    };
                };

            };

            class SpecOps {
                name = "Special Forces";

                class sia_arng_infantry_sf_patrol {
                    name = "Recon Patrol";
                    side = 1;
                    faction = "sia_arng";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "sia_arng_teamleader_sf";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "sia_arng_marksman_sf";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_sf_soldier";
                    };
                };

                class sia_arng_infantry_sf_sentry {
                    name = "Recon Sentry";
                    side = 1;
                    faction = "sia_arng";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "sia_arng_marksman_sf";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_sf_soldier";
                    };
                };

                class sia_arng_infantry_sf_team {
                    name = "Recon Team";
                    side = 1;
                    faction = "sia_arng";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "sia_arng_teamleader_sf";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_sf_soldier";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_sf_soldier";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "sia_arng_marksman_sf";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_sf_soldier";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "sia_arng_sf_soldier";
                    };
                };

            };

        };

    };
};
