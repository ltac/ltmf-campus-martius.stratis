/*
 * Description:
 * Loadout definition for USMC Woodland forces
 * Weapons: M4/M249/M240/M136 variants
 * Uniforms: RHS Frog Woodland MARPAT
 * Ubiquitous NVG and Optics
 *
 * Author:
 * BWMF
 * modified by Legion Tactical
 */
class blu_f {
 
    // Rifle
	#define WEST_RIFLE "rhs_weap_m4a1_carryhandle_grip2"
	#define WEST_RIFLE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","rhs_mag_m18_red:2"
	// GL Rifle
	#define WEST_GLRIFLE "rhs_weap_m4a1_carryhandle_m203S"
	#define WEST_GLRIFLE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","rhs_mag_m18_red:2"
	#define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:3"
	#define WEST_GLRIFLE_MAG_HE "rhs_mag_M433_HEDP:8"
	#define WEST_GLRIFLE_MAG_FLARE "UGL_FlareRed_F:2","UGL_FlareGreen_F:2"
	// Carbine
	#define WEST_CARBINE "rhs_weap_m4a1_carryhandle_grip"
	#define WEST_CARBINE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","rhs_mag_m18_red:2"
	// AR
	#define WEST_AR "rhs_weap_m249_pip_L"
	#define WEST_AR_MAG "rhsusf_200Rnd_556x45_soft_pouch:2"
	#define WEST_AR_MAG2 "rhsusf_200Rnd_556x45_soft_pouch:2"
	// AT
	#define WEST_AT "rhs_weap_M136"
	#define WEST_AT_MAG "rhs_m136_mag"
	// MMG
	#define WEST_MMG "rhs_weap_m240B"
	#define WEST_MMG_MAG "rhsusf_100Rnd_762x51:5"
	// MAT
	#define WEST_MAT "launch_B_Titan_short_F"
	#define WEST_MAT_MAG "Titan_AT:2","Titan_AP:1"
	// SAM
	#define WEST_SAM "rhs_weap_fim92"
	#define WEST_SAM_MAG "rhs_fim92_mag:2"
	// Sniper Rifle
	#define WEST_SNIPER "rhs_weap_m14ebrri"
	#define WEST_SNIPER_MAG "rhsusf_20Rnd_762x51_m993_Mag:8"
	// Spotter Rifle
    #define WEST_SPOTTER "rhs_weap_m4a1_blockII_grip2_KAC"
    #define WEST_SPOTTER_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8"
    // SMG
    #define WEST_SMG "hlc_smg_mp5a4"
    #define WEST_SMG_MAG "hlc_30Rnd_9x19_B_MP5:6"
    // Pistol
    #define WEST_PISTOL "rhsusf_weap_m1911a1"
    #define WEST_PISTOL_MAG "rhsusf_mag_7x45acp_MHP:4"
	// Radio
	#define WEST_RADIO_RIFLEMAN "tf_rf7800str"
	#define WEST_RADIO_SHORTWAVE "tf_anprc152"
	#define WEST_RADIO_MANPACK "tf_rt1523g_green"
	#define WEST_RADIO_AIRBORNE "tf_anarc210"

	// By default, BLUFOR uses White, Black, and Asian faces.
	// If you want something else, specify the list here.
	faces[] = {};
	
	// Define the cargo for Vehicles
    class Car {
        TransportMagazines[] = {
            WEST_RIFLE_MAG,
			WEST_RIFLE_MAG,
			WEST_CARBINE_MAG,
			WEST_AR_MAG,
			WEST_AR_MAG,
			WEST_GLRIFLE_MAG_HE,
			WEST_AT_MAG
        };
        TransportItems[] = {
			"ACE_fieldDressing:12",
			"ACE_morphine:4"
		};
    };
	
	// Define the cargo for Tanks
    class Tank {
        TransportMagazines[] = {
			WEST_RIFLE_MAG,
			WEST_RIFLE_MAG,
			WEST_CARBINE_MAG,
			WEST_AR_MAG,
			WEST_AR_MAG,
			WEST_GLRIFLE_MAG_HE,
			WEST_AT_MAG
		};
        TransportItems[] = {
			"ACE_fieldDressing:12",
			"ACE_morphine:4"
		};
    };

	// Define the cargo for Helicopters
    class Helicopter {
        TransportMagazines[] = {
			WEST_RIFLE_MAG,
			WEST_RIFLE_MAG,
			WEST_CARBINE_MAG,
			WEST_AR_MAG,
			WEST_AR_MAG,
			WEST_GLRIFLE_MAG_HE
		};
        TransportItems[] = {
			"ACE_fieldDressing:12",
			"ACE_morphine:4"
		};
    };

	// Define the cargo for Jets
    class Plane {
        TransportMagazines[] = {};
    };

	// Define the cargo for Boats
    class Ship_F {
        TransportMagazines[] = {};
    };

	/* RIFLEMAN BASE */

    class B_Soldier_F {
		
		// Define the list of possible uniforms that units will wear
        uniform[] = {
            "rhs_uniform_FROG01_wd"
        };
		// Define the list of possible vests that units will wear
        vest[] = {
            "rhsusf_spc",
			"MNP_Vest_USMC",
			"MNP_Vest_USMC_2"
        };
		// Define the list of possible headgear that units will wear
        headgear[] = {
            "rhsusf_mich_helmet_marpatwd",
            "rhsusf_mich_helmet_marpatwd_alt",
            "rhsusf_mich_helmet_marpatwd_norotos",
            "rhsusf_mich_helmet_marpatwd_norotos_arc"
        };
		// Define the list of possible facewear that units will wear
        facewear[] = {};
		// Define the list of possible backpacks that units will wear
        backpack[] = {
            "rhsusf_assault_eagleaiii_coy"
        };
		// Define the list of possible primary weapons that units
		// will be assigned
        weapons[] = {WEST_RIFLE};
		// Define the list of possible launcher weapons that units
		// will be assigned
        launchers[] = {};
		// Define the list of possible sidearms that units
		// will be assigned
        handguns[] = {};
		
		// List the items (along with the amount) that will be placed
		// specifically in the unit's backpack
		backpackItems[] = {
            "ACE_fieldDressing:3",
            "ACE_morphine",
            "ACE_IR_Strobe_item",
            "ACE_earplugs"
        };
		// List the magazines, explosives, and throwables
		// that will be placed wherever there is room in the unit's
		// inventory
        magazines[] = {
            WEST_RIFLE_MAG,
            "HandGrenade:2",
            "SmokeShell:2"
        };
		// List the items (along with the amount) that will be placed
		// wherever there is room in the unit's inventory
        items[] = {
			"ACE_Banana" // In case of emergency.
		};
		// List the gear items txhat should be automatically slotted
		// correctly for the unit (like Map, Watch, NVG, etc)
        linkedItems[] = {
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"rhsusf_ANPVS_14"
		};
		// List the attachments that will be automatically added
		// to the unit's equipped weapons
        attachments[] = {
			"rhsusf_acc_eotech_552",
			"rhsusf_acc_anpeq15A"
		};
		// Set the basic radio for the unit
        radio = WEST_RADIO_RIFLEMAN;
    };

	/* END RIFLEMAN BASE */
	
	/* RIFLEMAN EXTENSIONS */
	
	// CO and DC
	// Define gear additions and overrides for Officer units
    class B_officer_F: B_Soldier_F {
        backpack[] = {WEST_RADIO_MANPACK};
        weapons[] = {WEST_GLRIFLE};
        magazines[] = {
			WEST_GLRIFLE_MAG,
			WEST_GLRIFLE_MAG_HE,
			WEST_GLRIFLE_MAG_SMOKE,
			WEST_GLRIFLE_MAG_FLARE,
			WEST_PISTOL_MAG,
			"HandGrenade:2",
			"SmokeShell:2",
			"rhs_mag_m18_green:2"
		};
        handguns[] = {WEST_PISTOL}; /// randomized
        backpackItems[] += {"ACE_key_west"};
        linkedItems[] += {
			"ItemGPS",
			"ACE_Vector"
		};
        items[] = {"ACE_MapTools"};
		attachments[] += {"rhsusf_acc_ACOG_USMC"};
        radio = WEST_RADIO_SHORTWAVE;
    };

	// SL
	// Define gear additions and overrides for Squad Leader units
    class B_Soldier_SL_F: B_Officer_F {
        backpack[] = {WEST_RADIO_MANPACK};
        linkedItems[] += {
			"Binocular"
		};
        items[] = {"ACE_MapTools"};
        backpackItems[] += {"ACE_fieldDressing"};
		attachments[] += {"rhsusf_acc_ACOG_USMC"};
        radio = WEST_RADIO_SHORTWAVE;
    };

	// UAV
	// Define gear additions and overrides for UAV Operator units
    class B_Soldier_UAV_F: B_Soldier_F {
        backpack[] = {"B_rhsusf_B_BACKPACK"};
        linkedItems[] += {
			"B_uavterminal"
		};
        radio = WEST_RADIO_SHORTWAVE;
    };

	// FTL
	// Define gear additions and overrides for Team Leader units
    class B_Soldier_TL_F: B_Soldier_F {
        weapons[] = {WEST_GLRIFLE};
        magazines[] = {
			WEST_GLRIFLE_MAG,
			WEST_GLRIFLE_MAG_HE,
			WEST_GLRIFLE_MAG_SMOKE,
			WEST_GLRIFLE_MAG_FLARE,
			"rhs_mag_m18_green:2",
			"HandGrenade:2",
			"SmokeShell:2",
			"HandGrenade:1",
			"SmokeShell:2"
		};
        backpackItems[] += {"ACE_key_west"};
		attachments[] += {"rhsusf_acc_ACOG_USMC"};
        linkedItems[] += {
			"ItemGPS",
			"Binocular"
		};
    };

	// AR
	// Define gear additions and overrides for Autorifleman units
    class B_Soldier_AR_F: B_Soldier_F {
        weapons[] = {WEST_AR};
        magazines[] = {
			WEST_AR_MAG,
			WEST_PISTOL_MAG,
			"HandGrenade:2",
			"SmokeShell:2"
		};
        handguns[] = {WEST_PISTOL}; /// randomized
    };

	// AAR
	// Define gear additions and overrides for Asst Autorifleman units
    class B_Soldier_AAR_F: B_Soldier_F {
        backpackItems[] += {WEST_AR_MAG2};
        attachments[] += {"rhsusf_acc_ACOG_USMC"};
        linkedItems[] += {"Binocular"};
    };

	// RAT
	// Define gear additions and overrides for AT Rifleman units
    class B_Soldier_LAT_F: B_Soldier_F {
        weapons[] = {WEST_CARBINE};
        magazines[] = {
			WEST_CARBINE_MAG,
			WEST_AT_MAG,
			"HandGrenade:2",
			"SmokeShell:2"
		};
        launchers[] = {WEST_AT};
    };

	// Medic
	// Define gear additions and overrides for Medic units
    class B_medic_F: B_Soldier_F {
        weapons[] = {WEST_CARBINE};
        magazines[] = {
			WEST_CARBINE_MAG,
			"SmokeShell:6"
		};
        backpackItems[] = {
			"ACE_fieldDressing:31",
			"ACE_epinephrine:8",
			"ACE_bloodIV:2",
			"ACE_morphine:14",
			"ACE_earplugs"
		};
    };

	// MMG
	// Define gear additions and overrides for MMG Gunner units
    class B_support_MG_F: B_Soldier_F {
        weapons[] = {WEST_MMG};
        magazines[] = {
			WEST_MMG_MAG,
			WEST_PISTOL_MAG,
			"HandGrenade:1",
			"SmokeShell:2"
		};
        handguns[] = {WEST_PISTOL}; /// randomized
        attachments[] = {};
    };

	// MMG Asst
	// Define gear additions and overrides for MMG Spotter units
    class B_Soldier_A_F: B_Soldier_F {
        backpack[] = {"B_Kitbag_cbr"};
        backpackItems[] += {WEST_MMG_MAG};
        linkedItems[] += {"ACE_Vector"};
    };

	// Medium AT
	// Define gear additions and overrides for MAT Gunner units
    class B_Soldier_AT_F: B_Soldier_F {
        weapons[] = {WEST_CARBINE};
        magazines[] = {
            WEST_CARBINE_MAG,
            "HandGrenade:2",
            "SmokeShell:2"
        };
        launchers[] = {WEST_MAT};
        items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_earplugs"
		};
        backpack[] = {"B_Kitbag_cbr"};
        backpackItems[] = {WEST_MAT_MAG};
    };

	// Medium AT Asst
	// Define gear additions and overrides for MAT Spotter units
    class B_Soldier_AAT_F: B_Soldier_F {
        backpack[] = {"B_Kitbag_cbr"};
        backpackItems[] = {WEST_MAT_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_earplugs"
		};
    };

	// AA Gunner
	// Define gear additions and overrides for AA Gunner units
    class B_Soldier_AA_F: B_Soldier_F {
        backpack[] = {"B_Carryall_oli"};
        weapons[] = {WEST_CARBINE};
        magazines[] = {
            WEST_CARBINE_MAG,
            "HandGrenade:2",
            "MiniGrenade:1",
            "SmokeShell:2"
        };
        launchers[] = {WEST_SAM};
        backpackItems[] += {WEST_SAM_MAG};
    };

	// AA Asst
	// Define gear additions and overrides for AA Spotter units
    class B_Soldier_AAA_F: B_Soldier_F {
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {WEST_SAM_MAG};
        linkedItems[] += {"ACE_Vector"};
    };

	// Mortar Gunner
	// Define gear additions and overrides for Mortar Gunner units
    class B_support_Mort_F: B_Soldier_F {
        weapons[] = {WEST_CARBINE};
        magazines[] = {
            WEST_CARBINE_MAG,
            "HandGrenade:2",
            "SmokeShell:2"
        };
        items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_earplugs"
		};
        backpack[] = {"B_Mortar_01_weapon_F"};
    };

	// Mortar Asst
	// Define gear additions and overrides for Mortar Asst units
    class B_support_AMort_F: B_Soldier_F {
        backpack[] = {"B_Mortar_01_support_F"};
        linkedItems[] += {"ACE_Vector"};
        items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_earplugs"
		};
    };

	/* END RIFLEMAN EXTENSIONS */
	
	/* SPOTTER BASE */
	
	// Define the base class for Spotter units
    class B_spotter_F {
		uniform[] = {
            "rhs_uniform_FROG01_wd"
        };
		vest[] = {
            "rhsusf_spc",
			"MNP_Vest_USMC",
			"MNP_Vest_USMC_2"
        };
        headgear[] = {
            "rhs_Booniehat_marpatwd"
        };
		facewear[] = {};
		backpack[] = {
            "rhsusf_assault_eagleaiii_coy"
        };
		
        weapons[] = {WEST_SPOTTER};
        launchers[] = {};
        handguns[] = {};
		
        magazines[] = {
			WEST_SPOTTER_MAG,
			"SmokeShell:2",
			"HandGrenade:2"
		};
        items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_earplugs"
		};
		backpackItems[] = {};
        linkedItems[] = {
			"itemWatch",
			"itemMap",
			"itemCompass",
			"itemGPS",
			"LaserDesignator",
			"rhsusf_ANPVS_15"
		};
        attachments[] = {
			"rhsusf_acc_eotech_552",
			"rhsusf_acc_anpeq15side"
		};
        radio = WEST_RADIO_SHORTWAVE;
    };

	/* SNIPER BASE */
	
	// Define the base class for Sniper units
    class B_sniper_F {
		uniform[] = {
            "rhs_uniform_FROG01_wd"
        };
		vest[] = {
            "rhsusf_spc",
			"MNP_Vest_USMC",
			"MNP_Vest_USMC_2"
        };
        headgear[] = {
            "rhs_Booniehat_marpatwd"
        };
		facewear[] = {};
		backpack[] = {
            "rhsusf_assault_eagleaiii_coy"
        };
		
        weapons[] = {WEST_SNIPER};
        launchers[] = {};
        handguns[] = {};
		
        magazines[] = {
			WEST_SNIPER_MAG,
			"SmokeShell:2",
			"HandGrenade:2"
		};
        items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_earplugs"
		};
		backpackItems[] = {};
        linkedItems[] = {
			"itemWatch",
			"itemMap",
			"itemCompass",
			"itemGPS",
			"LaserDesignator",
			"rhsusf_ANPVS_15"
		};
        attachments[] = {
			"rhsusf_acc_LEUPOLDMK4_2",
			"rhsusf_acc_anpeq15side",
			"RH_m110sd_t"
		};
        radio = WEST_RADIO_SHORTWAVE;
    };

	/* HELICOPTER CREW BASE */
	
	// Heli Pilot
	// Define the base class for all Helicopter pilot and crew units
    class B_Helipilot_F {
        uniform[] = {
            "rhs_uniform_FROG01_wd"
        };
        headgear[] = {"H_PilotHelmetHeli_B"};
		vest[] = {
            "rhsusf_spc",
			"MNP_Vest_USMC",
			"MNP_Vest_USMC_2"
        };
		facewear[] = {};
		backpack[] = {
            "rhsusf_assault_eagleaiii_coy"
        };
		
        weapons[] = {WEST_SMG};
		launchers[] = {};
        handguns[] = {WEST_PISTOL};
		
        magazines[] = {
			WEST_SMG_MAG,
			WEST_PISTOL_MAG,
			"SmokeShell:2"
		};
        backpackItems[] += {"ACE_key_west"};
        items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_earplugs"
		};
        linkedItems[] = {
            "ItemWatch",
            "ItemMap",
            "ItemCompass",
            "itemGPS",
            "rhsusf_ANPVS_15"
        };
		attachments[] = {};
        radio = WEST_RADIO_SHORTWAVE;
    };

	// Heli crew
	// Define gear additions and overrides for Helicopter Crew units
    class B_helicrew_F: B_Helipilot_F {
		// No changes
    };

	/* VEHICLE CREW BASE */
	
	// Define the base class for all vehicle crew and engineer units
    class B_crew_F {
        uniform[] = {
            "rhs_uniform_FROG01_wd"
        };
        vest[] = {
            "rhsusf_spc",
			"MNP_Vest_USMC",
			"MNP_Vest_USMC_2"
        };
        headgear[] = {
            "rhsusf_mich_helmet_marpatwd",
            "rhsusf_mich_helmet_marpatwd_alt",
            "rhsusf_mich_helmet_marpatwd_norotos",
            "rhsusf_mich_helmet_marpatwd_norotos_arc"
        };
		facewear[] = {};
		backpack[] = {
            "rhsusf_assault_eagleaiii_coy"
        };
		
        weapons[] = {WEST_SMG};
		launchers[] = {};
        handguns[] = {};
		
        magazines[] = {
			WEST_SMG_MAG,
			"SmokeShell:2"
		};
        backpackItems[] = {"ACE_key_west"};
        items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_earplugs"
		};
        linkedItems[] = {
            "ItemWatch",
            "ItemMap",
            "ItemCompass",
            "itemGPS",
            "rhsusf_ANPVS_15"
        };
		attachments[] = {};
        radio = WEST_RADIO_SHORTWAVE;
    };

	// Repair Specialist
	// Define gear additions and overrides for Repair Specialist units
	// as well as the base class for all Explosive/Mine specialists
    class B_Soldier_repair_F: B_crew_F {
		weapons[] = {WEST_CARBINE};
		magazines[] = {
            WEST_CARBINE_MAG,
            "HandGrenade:2",
            "SmokeShell:2"
        };
        backpack[] = {"B_Kitbag_rgr"};
        backpackItems[] = {"Toolkit"};
    };

	// Explosive Specialist
	// Define gear additions and overrides for Explosive Specialist units
    class B_Soldier_exp_F: B_Soldier_repair_F {
        backpackItems[] = {
            "Toolkit",
            "ACE_DefusalKit",
            "ACE_Clacker",
            "MineDetector"
        };
        magazines[] = {
            WEST_CARBINE_MAG,
            "DemoCharge_Remote_Mag:3",
            "SatchelCharge_Remote_Mag:2"
        };
    };

	// Mine Specialist
	// Define gear additions and overrides for Mine Specialist units
    class B_engineer_F: B_Soldier_repair_F {
        backpackItems[] = {
            "Toolkit",
            "ACE_DefusalKit",
            "ACE_Clacker",
            "MineDetector"
        };
        magazines[] = {
            WEST_CARBINE_MAG,
            "ATMine_Range_Mag:2",
            "APERSBoundingMine_Range_Mag:2",
            "APERSMine_Range_Mag:2"
        };
    };

    // Default if no other loadout can be found
    class fallback: B_soldier_f {
    	// Same as normal rifleman
    };
};