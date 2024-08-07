#pragma once

namespace GW {
    namespace Constants {
        enum class QuestID : uint32_t {
            None = 0,
            // Underworld
            UW_Chamber = 101,
            UW_Wastes,
            UW_UWG,
            UW_Mnt,
            UW_Pits,
            UW_Planes,
            UW_Pools,
            UW_Escort,
            UW_Restore,
            UW_Vale,

            // Fissure of woe
            Fow_Defend = 202,
            Fow_ArmyOfDarknesses,
            Fow_WailingLord,
            Fow_Griffons,
            Fow_Slaves,
            Fow_Restore,
            Fow_Hunt,
            Fow_Forgemaster,
            Fow_Tos = 211,
            Fow_Toc,
            Fow_Khobay = 224,

            //Doa
            Doa_DeathbringerCompany = 749,
            Doa_RiftBetweenUs = 752,
            Doa_ToTheRescue = 753,

            // city
            Doa_City = 751,

            // Veil
            Doa_BreachingStygianVeil = 742,
            Doa_BroodWars = 755,

            // Foundry
            Doa_FoundryBreakout = 743,
            Doa_FoundryOfFailedCreations = 744,

            // slavers
            The_Last_Hierophant = 917,

            // Prophecies
            ZaishenMission_The_Great_Northern_Wall = 936,
            ZaishenMission_Fort_Ranik = 937,
            ZaishenMission_Ruins_of_Surmia = 938,
            ZaishenMission_Nolani_Academy = 939,
            ZaishenMission_Borlis_Pass = 940,
            ZaishenMission_The_Frost_Gate = 941,
            ZaishenMission_Gates_of_Kryta = 942,
            ZaishenMission_DAlessio_Seaboard = 943,
            ZaishenMission_Divinity_Coast = 944,
            ZaishenMission_The_Wilds = 945,
            ZaishenMission_Bloodstone_Fen = 946,
            ZaishenMission_Aurora_Glade = 947,
            ZaishenMission_Riverside_Province = 948,
            ZaishenMission_Sanctum_Cay = 949,
            ZaishenMission_Dunes_of_Despair = 950,
            ZaishenMission_Thirsty_River = 951,
            ZaishenMission_Elona_Reach = 952,
            ZaishenMission_Augury_Rock = 953,
            ZaishenMission_The_Dragons_Lair = 954,
            ZaishenMission_Ice_Caves_of_Sorrow = 955,
            ZaishenMission_Iron_Mines_of_Moladune = 956,
            ZaishenMission_Thunderhead_Keep = 957,
            ZaishenMission_Ring_of_Fire = 958,
            ZaishenMission_Abaddons_Mouth = 959,
            ZaishenMission_Hells_Precipice = 960,

            // Factions
            ZaishenMission_Minister_Chos_Estate = 1119,
            ZaishenMission_Zen_Daijun = 961,
            ZaishenMission_Vizunah_Square = 962,
            ZaishenMission_Nahpui_Quarter = 963,
            ZaishenMission_Tahnnakai_Temple = 964,
            ZaishenMission_Arborstone = 965,
            ZaishenMission_Boreas_Seabed = 966,
            ZaishenMission_Sunjiang_District = 967,
            ZaishenMission_The_Eternal_Grove = 968,
            ZaishenMission_Gyala_Hatchery = 970,
            ZaishenMission_Unwaking_Waters = 969,
            ZaishenMission_Raisu_Palace = 971,
            ZaishenMission_Imperial_Sanctum = 972,

            // Nightfall
            ZaishenMission_Chahbek_Village = 978,
            ZaishenMission_Jokanur_Diggings = 979,
            ZaishenMission_Blacktide_Den = 980,
            ZaishenMission_Consulate_Docks = 981,
            ZaishenMission_Venta_Cemetery = 982,
            ZaishenMission_Kodonur_Crossroads = 983,
            ZaishenMission_Pogahn_Passage = 1181,
            ZaishenMission_Rilohn_Refuge = 984,
            ZaishenMission_Moddok_Crevice = 985,
            ZaishenMission_Tihark_Orchard = 986,
            ZaishenMission_Dasha_Vestibule = 988,
            ZaishenMission_Dzagonur_Bastion = 987,
            ZaishenMission_Grand_Court_of_Sebelkeh = 989,
            ZaishenMission_Jennurs_Horde = 990,
            ZaishenMission_Nundu_Bay = 991,
            ZaishenMission_Gate_of_Desolation = 992,
            ZaishenMission_Ruins_of_Morah = 993,
            ZaishenMission_Gate_of_Pain = 994,
            ZaishenMission_Gate_of_Madness = 995,
            ZaishenMission_Abaddons_Gate = 996,

            // Eye of the North
            ZaishenMission_Finding_the_Bloodstone = 1000,
            ZaishenMission_The_Elusive_Golemancer = 1001,
            ZaishenMission_G_O_L_E_M = 1002,
            ZaishenMission_Against_the_Charr = 1003,
            ZaishenMission_Warband_of_Brothers = 1004,
            ZaishenMission_Assault_on_the_Stronghold = 1005,
            ZaishenMission_Curse_of_the_Nornbear = 1006,
            ZaishenMission_A_Gate_Too_Far = 1008,
            ZaishenMission_Blood_Washes_Blood = 1007,
            ZaishenMission_Destructions_Depths = 1009,
            ZaishenMission_A_Time_for_Heroes = 1010,

            ZaishenBounty_Urgoz = 1025,
            ZaishenBounty_Ilsundur_Lord_of_Fire = 1048,
            ZaishenBounty_Chung_The_Attuned = 1026,
            ZaishenBounty_Mungri_Magicbox = 1029,
            ZaishenBounty_The_Stygian_Lords = 1046,
            ZaishenBounty_Rragar_Maneater = 1049,
            ZaishenBounty_Murakai_Lady_of_the_Night = 1050,
            ZaishenBounty_Prismatic_Ooze = 1051,
            ZaishenBounty_Havok_Soulwail = 1052,
            ZaishenBounty_Frostmaw_the_Kinslayer = 1053,
            ZaishenBounty_Remnant_of_Antiquities = 1054,
            ZaishenBounty_Plague_of_Destruction = 1055,
            ZaishenBounty_Zoldark_the_Unholy = 1056,
            ZaishenBounty_Khabuus = 1057,
            ZaishenBounty_Zhim_Monns = 1058,
            ZaishenBounty_Eldritch_Ettin = 1059,
            ZaishenBounty_Fendi_Nin = 1060,
            ZaishenBounty_TPS_Regulator_Golem = 1061,
            ZaishenBounty_Arachni = 1062,
            ZaishenBounty_Forgewight = 1063,
            ZaishenBounty_Selvetarm = 1064,
            ZaishenBounty_Justiciar_Thommis = 1065,
            ZaishenBounty_Rand_Stormweaver = 1066,
            ZaishenBounty_Duncan_the_Black = 1067,
            ZaishenBounty_Fronis_Irontoe = 1068,
            ZaishenBounty_Magmus = 1070,
            ZaishenBounty_Lord_Khobay = 1086,
                
            ZaishenVanquish_Dejarin_Estate = 1201,
            ZaishenVanquish_Watchtower_Coast = 1202,
            ZaishenVanquish_Arbor_Bay = 1203,
            ZaishenVanquish_Barbarous_Shore = 1204,
            ZaishenVanquish_Deldrimor_Bowl = 1205,
            ZaishenVanquish_Boreas_Seabed = 1206,
            ZaishenVanquish_Cliffs_of_Dohjok = 1207,
            ZaishenVanquish_Diessa_Lowlands = 1208,
            ZaishenVanquish_Bukdek_Byway = 1209,
            ZaishenVanquish_Bjora_Marches = 1210,
            ZaishenVanquish_Crystal_Overlook = 1211,
            ZaishenVanquish_Diviners_Ascent = 1212,
            ZaishenVanquish_Dalada_Uplands = 1213,
            ZaishenVanquish_Drazach_Thicket = 1214,
            ZaishenVanquish_Fahranur_the_First_City = 1215,
            ZaishenVanquish_Dragons_Gullet = 1216,
            ZaishenVanquish_Ferndale = 1217,
            ZaishenVanquish_Forum_Highlands = 1218,
            ZaishenVanquish_Dreadnoughts_Drift = 1219,
            ZaishenVanquish_Drakkar_Lake = 1220,
            ZaishenVanquish_Dry_Top = 1221,
            ZaishenVanquish_Tears_of_the_Fallen = 1222,
            ZaishenVanquish_Gyala_Hatchery = 1223,
            ZaishenVanquish_Ettins_Back = 1224,
            ZaishenVanquish_Gandara_the_Moon_Fortress = 1225,
            ZaishenVanquish_Grothmar_Wardowns = 1226,
            ZaishenVanquish_Flame_Temple_Corridor = 1227,
            ZaishenVanquish_Haiju_Lagoon = 1228,
            ZaishenVanquish_Frozen_Forest = 1229,
            ZaishenVanquish_Garden_of_Seborhin = 1230,
            ZaishenVanquish_Grenths_Footprint = 1231,
            ZaishenVanquish_Jaya_Bluffs = 1232,
            ZaishenVanquish_Holdings_of_Chokhin = 1233,
            ZaishenVanquish_Ice_Cliff_Chasms = 1234,
            ZaishenVanquish_Griffons_Mouth = 1235,
            ZaishenVanquish_Kinya_Province = 1236,
            ZaishenVanquish_Issnur_Isles = 1237,
            ZaishenVanquish_Jaga_Moraine = 1238,
            ZaishenVanquish_Ice_Floe = 1239,
            ZaishenVanquish_Maishang_Hills = 1240,
            ZaishenVanquish_Jahai_Bluffs = 1241,
            ZaishenVanquish_Riven_Earth = 1242,
            ZaishenVanquish_Icedome = 1243,
            ZaishenVanquish_Minister_Chos_Estate = 1244,
            ZaishenVanquish_Mehtani_Keys = 1245,
            ZaishenVanquish_Sacnoth_Valley = 1246,
            ZaishenVanquish_Iron_Horse_Mine = 1247,
            ZaishenVanquish_Morostav_Trail = 1248,
            ZaishenVanquish_Plains_of_Jarin = 1249,
            ZaishenVanquish_Sparkfly_Swamp = 1250,
            ZaishenVanquish_Kessex_Peak = 1251,
            ZaishenVanquish_Mourning_Veil_Falls = 1252,
            ZaishenVanquish_The_Alkali_Pan = 1253,
            ZaishenVanquish_Varajar_Fells = 1254,
            ZaishenVanquish_Lornars_Pass = 1255,
            ZaishenVanquish_Pongmei_Valley = 1256,
            ZaishenVanquish_The_Floodplain_of_Mahnkelon = 1257,
            ZaishenVanquish_Verdant_Cascades = 1258,
            ZaishenVanquish_Majestys_Rest = 1259,
            ZaishenVanquish_Raisu_Palace = 1260,
            ZaishenVanquish_The_Hidden_City_of_Ahdashim = 1261,
            ZaishenVanquish_Rheas_Crater = 1262,
            ZaishenVanquish_Mamnoon_Lagoon = 1263,
            ZaishenVanquish_Shadows_Passage = 1264,
            ZaishenVanquish_The_Mirror_of_Lyss = 1265,
            ZaishenVanquish_Saoshang_Trail = 1266,
            ZaishenVanquish_Nebo_Terrace = 1267,
            ZaishenVanquish_Shenzun_Tunnels = 1268,
            ZaishenVanquish_The_Ruptured_Heart = 1269,
            ZaishenVanquish_Salt_Flats = 1270,
            ZaishenVanquish_North_Kryta_Province = 1271,
            ZaishenVanquish_Silent_Surf = 1272,
            ZaishenVanquish_The_Shattered_Ravines = 1273,
            ZaishenVanquish_Scoundrels_Rise = 1274,
            ZaishenVanquish_Old_Ascalon = 1275,
            ZaishenVanquish_Sunjiang_District = 1276,
            ZaishenVanquish_The_Sulphurous_Wastes = 1277,
            ZaishenVanquish_Magus_Stones = 1278,
            ZaishenVanquish_Perdition_Rock = 1279,
            ZaishenVanquish_Sunqua_Vale = 1280,
            ZaishenVanquish_Turais_Procession = 1281,
            ZaishenVanquish_Norrhart_Domains = 1282,
            ZaishenVanquish_Pockmark_Flats = 1283,
            ZaishenVanquish_Tahnnakai_Temple = 1284,
            ZaishenVanquish_Vehjin_Mines = 1285,
            ZaishenVanquish_Poisoned_Outcrops = 1286,
            ZaishenVanquish_Prophets_Path = 1287,
            ZaishenVanquish_The_Eternal_Grove = 1288,
            ZaishenVanquish_Tascas_Demise = 1289,
            ZaishenVanquish_Respendent_Makuun = 1290,
            ZaishenVanquish_Reed_Bog = 1291,
            ZaishenVanquish_Unwaking_Waters = 1292,
            ZaishenVanquish_Stingray_Strand = 1293,
            ZaishenVanquish_Sunward_Marches = 1294,
            ZaishenVanquish_Regent_Valley = 1295,
            ZaishenVanquish_Wajjun_Bazaar = 1296,
            ZaishenVanquish_Yatendi_Canyons = 1297,
            ZaishenVanquish_Twin_Serpent_Lakes = 1298,
            ZaishenVanquish_Sage_Lands = 1299,
            ZaishenVanquish_Xaquang_Skyway = 1300,
            ZaishenVanquish_Zehlon_Reach = 1301,
            ZaishenVanquish_Tangle_Root = 1302,
            ZaishenVanquish_Silverwood = 1303,
            ZaishenVanquish_Zen_Daijun = 1304,
            ZaishenVanquish_The_Arid_Sea = 1305,
            ZaishenVanquish_Nahpui_Quarter = 1306,
            ZaishenVanquish_Skyward_Reach = 1307,
            ZaishenVanquish_The_Scar = 1308,
            ZaishenVanquish_The_Black_Curtain = 1309,
            ZaishenVanquish_Panjiang_Peninsula = 1310,
            ZaishenVanquish_Snake_Dance = 1311,
            ZaishenVanquish_Travelers_Vale = 1312,
            ZaishenVanquish_The_Breach = 1313,
            ZaishenVanquish_Lahtenda_Bog = 1314,
            ZaishenVanquish_Spearhead_Peak = 1315
        };
    }
}
