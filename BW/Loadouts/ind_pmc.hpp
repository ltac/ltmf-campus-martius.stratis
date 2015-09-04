/*
 * Description:
 * Loadout definition for PMC/mercenary style units
 *
 * Author:
 * BWMF
 * modified by Legion Tactical
 */
class ind_f {
    //Rifle
    #define IND_RIFLE "hlc_rifle_M4"
    #define IND_RIFLE_MAG "hlc_30rnd_556x45_EPR:8","30Rnd_556x45_Stanag_Tracer_Yellow:2"
    //GL Rifle
    #define IND_GLRIFLE "hlc_rifle_m4m203"
    #define IND_GLRIFLE_MAG "hlc_30rnd_556x45_EPR:8","30Rnd_556x45_Stanag_Tracer_Yellow:2"
    #define IND_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:3"
    #define IND_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:8"
    #define IND_GLRIFLE_MAG_FLARE "UGL_FlareRed_F:2","UGL_FlareGreen_F:2"
    //Carbine
    #define IND_CARBINE "hlc_rifle_CQBR"
    #define IND_CARBINE_MAG "hlc_30rnd_556x45_EPR:8","30Rnd_556x45_Stanag_Tracer_Yellow:2"
    // AR
    #define IND_AR "hlc_m249_pip3"
    #define IND_AR_MAG "hlc_200rnd_556x45_M_SAW:2"
    #define IND_AR_MAG2 "hlc_200rnd_556x45_T_SAW:2"
    // AT
    #define IND_AT "rhs_weap_rpg26"
    #define IND_AT_MAG "rhs_rpg26_mag"
    // MMG
    #define IND_MMG "hlc_lmg_M60E4"
    #define IND_MMG_MAG "hlc_100Rnd_762x51_M_M60E4:5"
    // MAT
    #define IND_MAT "ibr_rpg7v"
    #define IND_MAT_MAG "ibr_og7:1","ibr_pg7v:1"
    // SAM
    #define IND_SAM "rhs_weap_igla"
    #define IND_SAM_MAG "rhs_mag_9k38_rocket:2"
    // Sniper Rifle
    #define IND_SNIPER "hlc_rifle_m14sopmod"
    #define IND_SNIPER_MAG "hlc_20Rnd_762x51_mk316_M14:8"
    // Spotter Rifle
    #define IND_SPOTTER "hlc_rifle_M4"
    #define IND_SPOTTER_MAG "hlc_30rnd_556x45_EPR:8"
    // SMG
    #define IND_SMG "RH_sbr9"
    #define IND_SMG_MAG "RH_32Rnd_9mm_M822:6"
    // Pistol
    #define IND_PISTOL "RH_32Rnd_9mm_M822"
    #define IND_PISTOL_MAG "11Rnd_45ACP_Mag:4"
	// Radio
	#define IND_RADIO_RIFLEMAN "tf_rf7800str"
	#define IND_RADIO_SHORTWAVE "tf_anprc152"
	#define IND_RADIO_MANPACK "tf_rt1523g_black"
	#define IND_RADIO_AIRBORNE "tf_anarc210"

    class Car {
        TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE,IND_AT_MAG};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
    };
    class Tank {
        TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE,IND_AT_MAG};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
    };
    class Helicopter {
        TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
    };
    class Plane {
        TransportMagazines[] = {};
    };
    class Ship_F {
        TransportMagazines[] = {};
    };


    class I_Soldier_F {// rifleman
        uniform[] = {
			"MNP_CombatUniform_ASA_GC3_B",
			"MNP_CombatUniform_ASA_GC3",
			"MNP_CombatUniform_ASA_GC2_B",
			"MNP_CombatUniform_ASA_GC2",
			"MNP_CombatUniform_ASA_GC_B",
			"MNP_CombatUniform_ASA_GC"
		};  /// randomized
        vest[] = {
			"MNP_Vest_M81b",
			"MNP_Vest_M81",
			"MNP_Vest_OD_A",
			"MNP_Vest_OD_B",
			"MNP_Vest_Black_Tac_B",
			"MNP_Vest_Black_Tac_A"
		}; /// randomized
        headgear[] = {
			"rhsusf_ach_bare",
			"rhsusf_ach_bare_semi",
			"rhsusf_ach_bare_headset",
			"rhsusf_ach_bare_headset_ess",
			"rhsusf_ach_helmet_M81",
			"rhsusf_ach_bare_wood_headset_ess",
			"rhsusf_ach_bare_wood",
			"MNP_Helmet_OD"
		};
        backpack[] = {
			"B_AssaultPack_blk",
			"B_AssaultPack_rgr"
		};
        backpackItems[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_IR_Strobe_item",
			"ACE_earplugs"
		};
        weapons[] = {IND_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {
			IND_RIFLE_MAG,
			"HandGrenade:2",
			"SmokeShell:2"
		};
        items[] = {};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        attachments[] = {};
		radio = IND_RADIO_RIFLEMAN;
    };
    class I_officer_F: I_Soldier_F {// CO and DC
        vest[] = {"MNP_V_M81_Harness","MNP_Vest_OD_B"};
		backpack[] = {IND_RADIO_MANPACK};
        weapons[] = {IND_GLRIFLE};
        magazines[] = {IND_GLRIFLE_MAG,IND_GLRIFLE_MAG_HE,IND_GLRIFLE_MAG_SMOKE,IND_GLRIFLE_MAG_FLARE,IND_PISTOL_MAG,"HandGrenade:2","SmokeShell:2","rhs_mag_m18_green:2"};
        handguns[] = {IND_PISTOL}; /// randomized
        backpackItems[] += {"ACE_key_west"};
        linkedItems[] += {"ItemGPS","ACE_Vector"};
        items[] = {"ACE_MapTools"};
		radio = IND_RADIO_SHORTWAVE;
    };
    class I_Soldier_SL_F: I_Officer_F {// SL
        vest[] = {"MNP_V_OD_GL_Harness","MNP_V_M81_GL_Harness"};
		backpack[] = {IND_RADIO_MANPACK};
        linkedItems[] += {"Binocular"};
        items[] = {"ACE_MapTools"};
        backpackItems[] = {"ACE_fieldDressing:4","ACE_morphine","ACE_IR_Strobe_item","ACE_earplugs"};
		radio = IND_RADIO_SHORTWAVE;
    };
    class I_Soldier_UAV_F: I_Soldier_F {
        backpack[] = {"B_rhsusf_B_BACKPACK"}; /// randomized
        linkedItems[] += {"B_uavterminal"};
		radio = IND_RADIO_SHORTWAVE;
    };
    class I_Soldier_TL_F: I_Soldier_F {// FTL
        vest[] = {"MNP_V_OD_GL_Harness","MNP_V_M81_GL_Harness"};
        weapons[] = {IND_GLRIFLE};
        magazines[] = {IND_GLRIFLE_MAG,IND_GLRIFLE_MAG_HE,IND_GLRIFLE_MAG_SMOKE,IND_GLRIFLE_MAG_FLARE,"rhs_mag_m18_green:2","HandGrenade:2","SmokeShell:2","HandGrenade:1","SmokeShell:2"};
        backpackItems[] += {"ACE_key_west"};
        linkedItems[] += {"ItemGPS","Binocular"};
    };
    class I_Soldier_AR_F: I_Soldier_F {// AR
        weapons[] = {IND_AR};
        magazines[] = {IND_AR_MAG,IND_PISTOL_MAG,"HandGrenade:2","SmokeShell:2"};
        handguns[] = {IND_PISTOL}; /// randomized
    };
    class I_Soldier_AAR_F: I_Soldier_F {// AAR
        backpackItems[] += {IND_AR_MAG2};
        attachments[] = {"rhsusf_acc_ACOG_USMC"};
        linkedItems[] += {"Binocular"};
    };
    class I_Soldier_LAT_F: I_Soldier_F {// RAT
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,IND_AT_MAG,"HandGrenade:2","SmokeShell:2"};
        launchers[] = {IND_AT}; /// randomized
    };
    class I_medic_F: I_Soldier_F {// Medic
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,"SmokeShell:6"};
        backpackItems[] = {"ACE_fieldDressing:31","ACE_epinephrine:8","ACE_bloodIV:2","ACE_morphine:14", "ACE_earplugs"};
    };
    class I_support_MG_F: I_Soldier_F {// MMG
        weapons[] = {IND_MMG};
        magazines[] = {IND_MMG_MAG,IND_PISTOL_MAG,"HandGrenade:1","SmokeShell:2"};
        handguns[] = {IND_PISTOL}; /// randomized
        attachments[] = {};
    };
    class I_Soldier_A_F: I_Soldier_F {// MMG Spotter/Ammo Bearer
		backpack[] = {"B_Kitbag_rgr"};
        backpackItems[] += {IND_MMG_MAG};
        linkedItems[] += {"ACE_Vector"};
    };
    class I_Soldier_AT_F: I_Soldier_F {// MAT Gunner
        weapons[] = {IND_CARBINE};
        magazines[] = {
			IND_CARBINE_MAG,
			"HandGrenade:2",
			"SmokeShell:2"
		};
        launchers[] = {IND_MAT}; /// randomized
        items[] += {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
		backpack[] = {"rhs_rpg_empty"};
        backpackItems[] = {IND_MAT_MAG};
    };
    class I_Soldier_AAT_F: I_Soldier_F {// MAT Spotter/Ammo Bearer
		backpack[] = {"rhs_rpg_empty"};
        backpackItems[] = {IND_MAT_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
    };
    class I_Soldier_AA_F: I_Soldier_F {// SAM Gunner
		backpack[] = {"B_Carryall_oli"};
        weapons[] = {IND_CARBINE};
        magazines[] = {
			IND_CARBINE_MAG,
			"HandGrenade:2",
			"MiniGrenade:1",
			"SmokeShell:2"
		};
        launchers[] = {IND_SAM}; /// randomized
        backpackItems[] += {IND_SAM_MAG};
    };
    class I_Soldier_AAA_F: I_Soldier_F {// SAM Spotter/Ammo Bearer
		backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {IND_SAM_MAG};
        linkedItems[] += {"ACE_Vector"};
    };
    class I_support_Mort_F: I_Soldier_F {// Mortar Gunner
        weapons[] = {IND_CARBINE};
        magazines[] = {
			IND_CARBINE_MAG,
			"HandGrenade:2",
			"SmokeShell:2"
		};
        items[] += {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        backpack[] = {"B_Mortar_01_weapon_F"}; /// randomized
    };
    class I_support_AMort_F: I_Soldier_F {// Assistant Mortar
        backpack[] = {"B_Mortar_01_support_F"}; /// randomized
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
    };
    class I_spotter_F {// Spotter
        weapons[] = {IND_SPOTTER}; /// randomized
        magazines[] = {IND_SPOTTER_MAG,"SmokeShell:2","HandGrenade:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        linkedItems[] += {"itemGPS","LaserDesignator"};
        attachments[] = {"rhsusf_acc_eotech_552","rhsusf_acc_anpeq15side"};
		radio = IND_RADIO_SHORTWAVE;
    };
    class I_sniper_F {// Sniper
        weapons[] = {IND_SNIPER}; /// randomized
        magazines[] = {IND_SNIPER_MAG,"SmokeShell:2","HandGrenade:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        linkedItems[] += {"itemGPS"};
        attachments[] = {"rhsusf_acc_LEUPOLDMK4_2","rhsusf_acc_anpeq15side","RH_m110sd_t"};
		radio = IND_RADIO_SHORTWAVE;
    };
    class I_Helipilot_F {// Pilot
		uniform[] = {"U_BG_Guerrilla_6_1"};
        headgear[] = {"rhsusf_cvc_green_helmet"}; /// randomized
        weapons[] = {IND_SMG}; /// randomized
        magazines[] = {IND_SMG_MAG,"SmokeShell:2"};
        backpackItems[] += {"ACE_key_west"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        linkedItems[] = {
			"ItemWatch",
			"ItemMap",
			"ItemCompass",
			"itemGPS",
			"NVgoggles"
		};
		radio = IND_RADIO_SHORTWAVE;
    };
    class I_helicrew_F: I_Helipilot_F { // Pilot

    };
    class I_crew_F {// Crew
		uniform[] = {"U_BG_Guerrilla_6_1"};
        headgear[] = {"rhsusf_cvc_green_helmet"};
		vest[] = {"MNP_Vest_OD_B"};
        weapons[] = {IND_SMG};
        magazines[] = {IND_SMG_MAG,"SmokeShell:2"};
		backpack[] = {
			"B_AssaultPack_blk",
			"B_AssaultPack_rgr"
		};
        backpackItems[] = {"ACE_key_west"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        linkedItems[] = {
			"ItemWatch",
			"ItemMap",
			"ItemCompass",
			"itemGPS",
			"NVgoggles"
		};
		radio = IND_RADIO_SHORTWAVE;
    };
    class I_Soldier_repair_F: I_crew_F {// Repair Specialist
		backpack[] = {"B_Kitbag_rgr"};
        backpackItems[] = {"Toolkit"};
    };
    class I_Soldier_exp_F: I_Soldier_repair_F {// Explosive Specialist
        backpackItems[] = {
			"Toolkit",
			"ACE_DefusalKit",
			"ACE_Clacker",
			"MineDetector"
		};
        magazines[] = {
			IND_CARBINE_MAG,
			"DemoCharge_Remote_Mag:3",
			"SatchelCharge_Remote_Mag:2"
		};
    };
    class I_engineer_F: I_Soldier_repair_F {// Mine Specialist
        backpackItems[] = {
			"Toolkit",
			"ACE_DefusalKit",
			"ACE_Clacker",
			"MineDetector"
		};
        magazines[] = {
			IND_CARBINE_MAG,
			"ATMine_Range_Mag:2",
			"APERSBoundingMine_Range_Mag:2",
			"APERSMine_Range_Mag:2"
		};
    };
};