			
class CfgGroups {
    class WEST {

        class sia_arng;
        class sia_arng {
            class Infantry {
                name = "Infantry";

                class sia_arng_infantry_squad;
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
                        vehicle = "sia_arng_autorifleman_csla";
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
                        vehicle = "sia_arng_rifleman_at_csla";
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

                class sia_arng_infantry_team;
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
                        vehicle = "sia_arng_autorifleman_csla";
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

                class sia_arng_infantry_team_at;
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
                        vehicle = "sia_arng_autorifleman_csla";
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

                class sia_arng_infantry_squad_weap;
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
                        vehicle = "sia_arng_autorifleman_csla";
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

                class sia_arng_infantry_team_support;
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
                        vehicle = "sia_arng_autorifleman_csla";
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

            };
        };
    };
}
