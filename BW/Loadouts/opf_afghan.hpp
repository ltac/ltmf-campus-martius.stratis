/*
 * Description:
 * Loadout definition for Afghan insurgent forces
 * Weapons: AK47/RPK/RPG/SVD
 * Uniforms: CAF Afghan fatigues
 * Extremely limited equipment
 *
 * Author:
 * BWMF
 * modified by Legion Tactical
 */
class opf_f {
 
    // Rifle
	#define EAST_RIFLE "rhs_weap_akm"
	#define EAST_RIFLE_MAG "rhs_30Rnd_762x39mm:8","rhs_30Rnd_762x39mm_tracer:2"
	// GL Rifle
	#define EAST_GLRIFLE "rhs_weap_akm_gp25"
	#define EAST_GLRIFLE_MAG "rhs_30Rnd_762x39mm:8","rhs_30Rnd_762x39mm_tracer:2"
	#define EAST_GLRIFLE_MAG_SMOKE "rhs_GRD40_White:4","rhs_GRD40_Green:2","rhs_GRD40_Red:3"
	#define EAST_GLRIFLE_MAG_HE "rhs_VOG25:8"
	#define EAST_GLRIFLE_MAG_FLARE "rhs_VG40OP_white:2","rhs_VG40OP_green:2"
	// Carbine
	#define EAST_CARBINE "rhs_weap_ak74m_npz"
	#define EAST_CARBINE_MAG "rhs_30Rnd_762x39mm:8","rhs_30Rnd_762x39mm_tracer:2"
	// AR
	#define EAST_AR "ibr_rpk"
	#define EAST_AR_MAG "40Rnd_762x39_ibr:2"
	#define EAST_AR_MAG2 "40Rnd_762x39_ibr:2"
	// AT
	#define EAST_AT "rhs_weap_rpg7"
	#define EAST_AT_MAG "rhs_rpg7_PG7VL_mag"
	// MMG
	#define EAST_MMG "rhs_weap_pkp"
	#define EAST_MMG_MAG "rhs_100Rnd_762x54mmR_green:5"
	// MAT
	#define EAST_MAT "rhs_weap_rpg7"
	#define EAST_MAT_MAG "rhs_rpg7_PG7VL_mag"
	// SAM
	#define EAST_SAM "rhs_weap_igla"
	#define EAST_SAM_MAG "rhs_mag_9k38_rocket:2"
	// Sniper Rifle
	#define EAST_SNIPER "ibr_svd"
	#define EAST_SNIPER_MAG "10Rnd_762x54R_ibr:8"
	// Spotter Rifle
	#define EAST_SPOTTER "rhs_weap_akm"
	#define EAST_SPOTTER_MAG "rhs_30Rnd_762x39mm:8"
	// SMG
	#define EAST_SMG "rhs_weap_akm"
	#define EAST_SMG_MAG "rhs_30Rnd_762x39mm:6"
	// Pistol
	#define EAST_PISTOL "rhs_weap_pya"
	#define EAST_PISTOL_MAG "rhs_mag_9x19_17:4"
	// Radio
	#define EAST_RADIO_RIFLEMAN "tf_pnr1000a"
	#define EAST_RADIO_SHORTWAVE "tf_fadak"
	#define EAST_RADIO_MANPACK "tf_mr3000"
	#define EAST_RADIO_AIRBORNE "tf_mr6000l"

	// Define the cargo for Vehicles
    class Car {
        TransportMagazines[] = {
            EAST_RIFLE_MAG,
			EAST_RIFLE_MAG,
			EAST_CARBINE_MAG,
			EAST_AR_MAG,
			EAST_AR_MAG,
			EAST_GLRIFLE_MAG_HE,
			EAST_AT_MAG
        };
        TransportItems[] = {
			"ACE_fieldDressing:12",
			"ACE_morphine:4"
		};
    };
	
	// Define the cargo for Tanks
    class Tank {
        TransportMagazines[] = {
			EAST_RIFLE_MAG,
			EAST_RIFLE_MAG,
			EAST_CARBINE_MAG,
			EAST_AR_MAG,
			EAST_AR_MAG,
			EAST_GLRIFLE_MAG_HE,
			EAST_AT_MAG
		};
        TransportItems[] = {
			"ACE_fieldDressing:12",
			"ACE_morphine:4"
		};
    };

	// Define the cargo for Helicopters
    class Helicopter {
        TransportMagazines[] = {
			EAST_RIFLE_MAG,
			EAST_RIFLE_MAG,
			EAST_CARBINE_MAG,
			EAST_AR_MAG,
			EAST_AR_MAG,
			EAST_GLRIFLE_MAG_HE
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

    class O_Soldier_F {
		
		// Define the list of possible uniforms that units will wear
        uniform[] = {
            "U_CAF_AG_ME_FATIGUES_01",
            "U_CAF_AG_ME_FATIGUES_01a",
            "U_CAF_AG_ME_FATIGUES_01b",
            "U_CAF_AG_ME_FATIGUES_01c",
            "U_CAF_AG_ME_FATIGUES_01d",
            "U_CAF_AG_ME_ROBES_Mil_01",
            "U_CAF_AG_ME_ROBES_mil_01a",
            "U_CAF_AG_ME_ROBES_01",
            "U_CAF_AG_ME_ROBES_01a",
            "U_CAF_AG_ME_ROBES_01b",
            "U_CAF_AG_ME_ROBES_01c",
            "U_CAF_AG_ME_ROBES_01d",
            "U_CAF_AG_ME_ROBES_02",
            "U_CAF_AG_ME_ROBES_02a",
            "U_CAF_AG_ME_ROBES_02b",
            "U_CAF_AG_ME_ROBES_02c",
            "U_CAF_AG_ME_ROBES_03",
            "U_CAF_AG_ME_ROBES_03a",
            "U_CAF_AG_ME_ROBES_03b",
            "U_CAF_AG_ME_ROBES_03c",
            "U_CAF_AG_ME_ROBES_03d",
            "U_CAF_AG_ME_ROBES_04",
            "U_CAF_AG_ME_ROBES_04a",
            "U_CAF_AG_ME_ROBES_04b",
            "U_CAF_AG_ME_ROBES_04c",
            "U_CAF_AG_ME_ROBES_04d"
        };
		// Define the list of possible vests that units will wear
        vest[] = {
            "rhs_vydra_3m",
            "rhs_6sh46",
            "rhs_6b23",
            "rhs_6b23_ML_crewofficer",
            "rhs_6b23_ML_crew",
            "rhs_6sh92",
            "rhs_6sh92_vog",
            "rhs_6b23_rifleman",
            "V_Chestrig_blk",
            "V_Chestrig_rgr",
            "V_Chestrig_khk",
            "V_Chestrig_oli",
            "V_BandollierB_blk",
            "V_BandollierB_cbr",
            "V_BandollierB_rgr",
            "V_BandollierB_khk",
            "V_BandollierB_oli"
        };
		// Define the list of possible headgear that units will wear
        headgear[] = {
            "H_caf_ag_turban",
            "H_Shemag_olive",
            "H_ShemagOpen_tan",
            "H_ShemagOpen_khk",
            "H_caf_ag_paktol_04",
            "H_caf_ag_paktol",
            "H_caf_ag_paktol_03",
            "H_caf_ag_paktol_02",
            "H_caf_ag_paktol_04",
            "H_caf_ag_paktol_04",
            "ibr_mol_redberet",
            "H_caf_ag_fur2",
            "H_caf_ag_fur",
            "H_caf_ag_wrap"
        };
		// Define the list of possible facewear that units will wear
        facewear[] = {};
		// Define the list of possible backpacks that units will wear
        backpack[] = {
            "rhs_sidor",
            "B_TacticalPack_blk",
            "B_TacticalPack_rgr",
            "B_TacticalPack_oli",
            "rhs_assault_umbts_engineer_empty",
            "rhs_assault_umbts",
            "MNP_B_RU2_FP",
            "B_FieldPack_khk",
            "B_FieldPack_blk",
            "ibr_backpack"
        };
		// Define the list of possible primary weapons that units
		// will be assigned
        weapons[] = {EAST_RIFLE};
		// Define the list of possible launcher weapons that units
		// will be assigned
        launchers[] = {};
		// Define the list of possible sidearms that units
		// will be assigned
        handguns[] = {};
		/* END Randomized Gear */
		
		/*
		Gear lists
		
		These lists are not randomized; all items from these lists
		will selected and placed in the unit's inventory.
		Leave them empty {} to add nothing of that type by default.
		*/
		
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
            EAST_RIFLE_MAG,
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
			"ItemWatch"
		};
		// List the attachments that will be automatically added
		// to the unit's equipped weapons
        attachments[] = {};
		// Set the basic radio for the unit
        radio = EAST_RADIO_RIFLEMAN;
    };

	/* END RIFLEMAN BASE */
	
	/* RIFLEMAN EXTENSIONS */
	
	// CO and DC
	// Define gear additions and overrides for Officer units
    class O_Officer_F: O_Soldier_F {
        backpack[] = {EAST_RADIO_MANPACK};
        weapons[] = {EAST_GLRIFLE};
        magazines[] = {
			EAST_GLRIFLE_MAG,
			EAST_GLRIFLE_MAG_HE,
			EAST_GLRIFLE_MAG_SMOKE,
			EAST_PISTOL_MAG,
			"HandGrenade:2",
			"SmokeShell:2",
			"rhs_mag_m18_green:2"
		};
        handguns[] = {EAST_PISTOL};
        backpackItems[] += {"ACE_key_east"};
        linkedItems[] += {
			"Binocular"
		};
        items[] = {"ACE_MapTools"};
        radio = EAST_RADIO_SHORTWAVE;
    };

	// SL
	// Define gear additions and overrides for Squad Leader units
    class O_Soldier_SL_F: O_Officer_F {
        items[] = {"ACE_MapTools"};
        backpackItems[] += {"ACE_fieldDressing"};
        radio = EAST_RADIO_SHORTWAVE;
    };

	// UAV
	// Define gear additions and overrides for UAV Operator units
    class O_Soldier_UAV_F: O_Soldier_F {
		// Afghan should not have uav, so keep as normal soldier
    };

	// FTL
	// Define gear additions and overrides for Team Leader units
    class O_Soldier_TL_F: O_Soldier_F {
		vest[] = {"rhs_6sh92_vog"};
        weapons[] = {EAST_GLRIFLE};
        magazines[] = {
			EAST_GLRIFLE_MAG,
			EAST_GLRIFLE_MAG_HE,
			EAST_GLRIFLE_MAG_SMOKE,
			"rhs_mag_m18_green:2",
			"HandGrenade:2",
			"SmokeShell:2",
			"HandGrenade:1",
			"SmokeShell:2"
		};
        backpackItems[] += {"ACE_key_east"};
        linkedItems[] += {
			"Binocular"
		};
    };

	// AR
	// Define gear additions and overrides for Autorifleman units
    class O_Soldier_AR_F: O_Soldier_F {
        weapons[] = {EAST_AR};
        magazines[] = {
			EAST_AR_MAG,
			EAST_PISTOL_MAG,
			"HandGrenade:2",
			"SmokeShell:2"
		};
        handguns[] = {EAST_PISTOL};
    };

	// AAR
	// Define gear additions and overrides for Asst Autorifleman units
    class O_Soldier_AAR_F: O_Soldier_F {
        backpackItems[] += {EAST_AR_MAG2};
        linkedItems[] += {"Binocular"};
    };

	// RAT
	// Define gear additions and overrides for AT Rifleman units
    class O_Soldier_LAT_F: O_Soldier_F {
        weapons[] = {EAST_CARBINE};
        magazines[] = {
			EAST_CARBINE_MAG,
			EAST_AT_MAG,
			"HandGrenade:2",
			"SmokeShell:2"
		};
        launchers[] = {EAST_AT};
    };

	// Medic
	// Define gear additions and overrides for Medic units
    class O_medic_F: O_Soldier_F {
		vest[] = {"rhs_6b23_medic"};
        weapons[] = {EAST_CARBINE};
        magazines[] = {
			EAST_CARBINE_MAG,
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
    class O_support_MG_F: O_Soldier_F {
        weapons[] = {EAST_MMG};
        magazines[] = {
			EAST_MMG_MAG,
			EAST_PISTOL_MAG,
			"HandGrenade:1",
			"SmokeShell:2"
		};
        handguns[] = {EAST_PISTOL}; /// randomized
        attachments[] = {};
    };

	// MMG Asst
	// Define gear additions and overrides for MMG Spotter units
    class O_Soldier_A_F: O_Soldier_F {
        backpack[] = {
			"B_Kitbag_rgr",
			"B_Kitbag_cbr"
		};
        backpackItems[] += {EAST_MMG_MAG};
        linkedItems[] += {"Binocular"};
    };

	// Medium AT
	// Define gear additions and overrides for MAT Gunner units
    class O_Soldier_AT_F: O_Soldier_F {
        weapons[] = {EAST_CARBINE};
        magazines[] = {
            EAST_CARBINE_MAG,
            "HandGrenade:2",
            "SmokeShell:2"
        };
        launchers[] = {EAST_MAT};
        items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_earplugs"
		};
        backpack[] = {"rhs_rpg_empty"};
        backpackItems[] = {EAST_MAT_MAG};
    };

	// Medium AT Asst
	// Define gear additions and overrides for MAT Spotter units
    class O_Soldier_AAT_F: O_Soldier_F {
        backpack[] = {"rhs_rpg_empty"};
        backpackItems[] = {EAST_MAT_MAG};
        linkedItems[] += {"Binocular"};
        items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_earplugs"
		};
    };

	// AA Gunner
	// Define gear additions and overrides for AA Gunner units
    class O_Soldier_AA_F: O_Soldier_F {
        backpack[] = {"MNP_B_RU2_CA"};
        weapons[] = {EAST_CARBINE};
        magazines[] = {
            EAST_CARBINE_MAG,
            "HandGrenade:2",
            "MiniGrenade:1",
            "SmokeShell:2"
        };
        launchers[] = {EAST_SAM};
        backpackItems[] += {EAST_SAM_MAG};
    };

	// AA Asst
	// Define gear additions and overrides for AA Spotter units
    class O_Soldier_AAA_F: O_Soldier_F {
        backpack[] = {"MNP_B_RU2_CA"};
        backpackItems[] = {EAST_SAM_MAG};
        linkedItems[] += {"Binocular"};
    };

	// Mortar Gunner
	// Define gear additions and overrides for Mortar Gunner units
    class O_support_Mort_F: O_Soldier_F {
        weapons[] = {EAST_CARBINE};
        magazines[] = {
            EAST_CARBINE_MAG,
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
    class O_support_AMort_F: O_Soldier_F {
        backpack[] = {"B_Mortar_01_support_F"};
        linkedItems[] += {"Binocular"};
        items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_earplugs"
		};
    };

	/* END RIFLEMAN EXTENSIONS */
	
	/* SPOTTER BASE */
	
	// Define the base class for Spotter units
    class O_spotter_F {
		uniform[] = {
            "U_CAF_AG_ME_FATIGUES_01",
            "U_CAF_AG_ME_FATIGUES_01a",
            "U_CAF_AG_ME_FATIGUES_01b",
            "U_CAF_AG_ME_FATIGUES_01c",
            "U_CAF_AG_ME_FATIGUES_01d",
            "U_CAF_AG_ME_ROBES_Mil_01",
            "U_CAF_AG_ME_ROBES_mil_01a",
            "U_CAF_AG_ME_ROBES_01",
            "U_CAF_AG_ME_ROBES_01a",
            "U_CAF_AG_ME_ROBES_01b",
            "U_CAF_AG_ME_ROBES_01c",
            "U_CAF_AG_ME_ROBES_01d",
            "U_CAF_AG_ME_ROBES_02",
            "U_CAF_AG_ME_ROBES_02a",
            "U_CAF_AG_ME_ROBES_02b",
            "U_CAF_AG_ME_ROBES_02c",
            "U_CAF_AG_ME_ROBES_03",
            "U_CAF_AG_ME_ROBES_03a",
            "U_CAF_AG_ME_ROBES_03b",
            "U_CAF_AG_ME_ROBES_03c",
            "U_CAF_AG_ME_ROBES_03d",
            "U_CAF_AG_ME_ROBES_04",
            "U_CAF_AG_ME_ROBES_04a",
            "U_CAF_AG_ME_ROBES_04b",
            "U_CAF_AG_ME_ROBES_04c",
            "U_CAF_AG_ME_ROBES_04d"
        };
		vest[] = {
            "rhs_vydra_3m",
            "rhs_6sh46",
            "rhs_6b23",
            "rhs_6b23_ML_crewofficer",
            "rhs_6b23_ML_crew",
            "rhs_6sh92",
            "rhs_6sh92_vog",
            "rhs_6b23_rifleman",
            "V_Chestrig_blk",
            "V_Chestrig_rgr",
            "V_Chestrig_khk",
            "V_Chestrig_oli",
            "V_BandollierB_blk",
            "V_BandollierB_cbr",
            "V_BandollierB_rgr",
            "V_BandollierB_khk",
            "V_BandollierB_oli"
        };
		headgear[] = {
            "H_caf_ag_turban",
            "H_Shemag_olive",
            "H_ShemagOpen_tan",
            "H_ShemagOpen_khk",
            "H_caf_ag_paktol_04",
            "H_caf_ag_paktol",
            "H_caf_ag_paktol_03",
            "H_caf_ag_paktol_02",
            "H_caf_ag_paktol_04",
            "H_caf_ag_paktol_04",
            "ibr_mol_redberet",
            "H_caf_ag_fur2",
            "H_caf_ag_fur",
            "H_caf_ag_wrap"
        };
		facewear[] = {};
		backpack[] = {
            "rhs_sidor",
            "B_TacticalPack_blk",
            "B_TacticalPack_rgr",
            "B_TacticalPack_oli",
            "rhs_assault_umbts_engineer_empty",
            "rhs_assault_umbts",
            "MNP_B_RU2_FP",
            "B_FieldPack_khk",
            "B_FieldPack_blk",
            "ibr_backpack"
        };
		
        weapons[] = {EAST_SPOTTER};
        launchers[] = {};
        handguns[] = {};
		
        magazines[] = {
			EAST_SPOTTER_MAG,
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
			"Binocular"
		};
        radio = EAST_RADIO_SHORTWAVE;
    };

	/* SNIPER BASE */
	
	// Define the base class for Sniper units
    class O_sniper_F {
		uniform[] = {
            "U_CAF_AG_ME_FATIGUES_01",
            "U_CAF_AG_ME_FATIGUES_01a",
            "U_CAF_AG_ME_FATIGUES_01b",
            "U_CAF_AG_ME_FATIGUES_01c",
            "U_CAF_AG_ME_FATIGUES_01d",
            "U_CAF_AG_ME_ROBES_Mil_01",
            "U_CAF_AG_ME_ROBES_mil_01a",
            "U_CAF_AG_ME_ROBES_01",
            "U_CAF_AG_ME_ROBES_01a",
            "U_CAF_AG_ME_ROBES_01b",
            "U_CAF_AG_ME_ROBES_01c",
            "U_CAF_AG_ME_ROBES_01d",
            "U_CAF_AG_ME_ROBES_02",
            "U_CAF_AG_ME_ROBES_02a",
            "U_CAF_AG_ME_ROBES_02b",
            "U_CAF_AG_ME_ROBES_02c",
            "U_CAF_AG_ME_ROBES_03",
            "U_CAF_AG_ME_ROBES_03a",
            "U_CAF_AG_ME_ROBES_03b",
            "U_CAF_AG_ME_ROBES_03c",
            "U_CAF_AG_ME_ROBES_03d",
            "U_CAF_AG_ME_ROBES_04",
            "U_CAF_AG_ME_ROBES_04a",
            "U_CAF_AG_ME_ROBES_04b",
            "U_CAF_AG_ME_ROBES_04c",
            "U_CAF_AG_ME_ROBES_04d"
        };
		vest[] = {
            "rhs_vydra_3m",
            "rhs_vest_commander",
            "rhs_6sh46",
            "rhs_6b23",
            "rhs_6b23_ML_crewofficer",
            "rhs_6b23_ML_crew",
            "rhs_6sh92",
            "rhs_6sh92_vog",
            "rhs_6b23_rifleman",
            "V_Chestrig_blk",
            "V_Chestrig_rgr",
            "V_Chestrig_khk",
            "V_Chestrig_oli",
            "V_BandollierB_blk",
            "V_BandollierB_cbr",
            "V_BandollierB_rgr",
            "V_BandollierB_khk",
            "V_BandollierB_oli"
        };
		headgear[] = {
            "H_caf_ag_turban",
            "H_Shemag_olive",
            "H_ShemagOpen_tan",
            "H_ShemagOpen_khk",
            "H_caf_ag_paktol_04",
            "H_caf_ag_paktol",
            "H_caf_ag_paktol_03",
            "H_caf_ag_paktol_02",
            "H_caf_ag_paktol_04",
            "H_caf_ag_paktol_04",
            "ibr_mol_redberet",
            "H_caf_ag_fur2",
            "H_caf_ag_fur",
            "H_caf_ag_wrap"
        };
		facewear[] = {};
		backpack[] = {
            "rhs_sidor",
            "B_TacticalPack_blk",
            "B_TacticalPack_rgr",
            "B_TacticalPack_oli",
            "rhs_assault_umbts_engineer_empty",
            "rhs_assault_umbts",
            "MNP_B_RU2_FP",
            "B_FieldPack_khk",
            "B_FieldPack_blk",
            "ibr_backpack"
        };
		
        weapons[] = {EAST_SNIPER};
        launchers[] = {};
        handguns[] = {};
		
        magazines[] = {
			EAST_SNIPER_MAG,
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
			"Binocular"
		};
        attachments[] = {
			"rhs_acc_1pn93_1"
		};
        radio = EAST_RADIO_SHORTWAVE;
    };

	/* HELICOPTER CREW BASE */
	
	// Heli Pilot
	// Define the base class for all Helicopter pilot and crew units
    class O_Helipilot_F {
        uniform[] = {
            "U_CAF_AG_ME_FATIGUES_01",
            "U_CAF_AG_ME_FATIGUES_01a",
            "U_CAF_AG_ME_FATIGUES_01b",
            "U_CAF_AG_ME_FATIGUES_01c",
            "U_CAF_AG_ME_FATIGUES_01d",
            "U_CAF_AG_ME_ROBES_Mil_01",
            "U_CAF_AG_ME_ROBES_mil_01a",
            "U_CAF_AG_ME_ROBES_01",
            "U_CAF_AG_ME_ROBES_01a",
            "U_CAF_AG_ME_ROBES_01b",
            "U_CAF_AG_ME_ROBES_01c",
            "U_CAF_AG_ME_ROBES_01d",
            "U_CAF_AG_ME_ROBES_02",
            "U_CAF_AG_ME_ROBES_02a",
            "U_CAF_AG_ME_ROBES_02b",
            "U_CAF_AG_ME_ROBES_02c",
            "U_CAF_AG_ME_ROBES_03",
            "U_CAF_AG_ME_ROBES_03a",
            "U_CAF_AG_ME_ROBES_03b",
            "U_CAF_AG_ME_ROBES_03c",
            "U_CAF_AG_ME_ROBES_03d",
            "U_CAF_AG_ME_ROBES_04",
            "U_CAF_AG_ME_ROBES_04a",
            "U_CAF_AG_ME_ROBES_04b",
            "U_CAF_AG_ME_ROBES_04c",
            "U_CAF_AG_ME_ROBES_04d"
        };
        headgear[] = {
			"rhs_gssh18"
		};
		vest[] = {
			"rhs_6b23_ML_crewofficer",
		};
		facewear[] = {};
		backpack[] = {
            "rhs_sidor"
        };
		
        weapons[] = {EAST_SMG};
		launchers[] = {};
        handguns[] = {EAST_PISTOL};
		
        magazines[] = {
			EAST_SMG_MAG,
			EAST_PISTOL_MAG,
			"SmokeShell:2"
		};
        backpackItems[] += {"ACE_key_east"};
        items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_earplugs"
		};
        linkedItems[] = {
            "ItemWatch",
            "ItemMap",
            "ItemCompass"
        };
		attachments[] = {};
        radio = EAST_RADIO_SHORTWAVE;
    };

	// Heli crew
	// Define gear additions and overrides for Helicopter Crew units
    class O_helicrew_F: O_Helipilot_F {
		vest[] = {
			"rhs_6b23_ML_crew",
		};
    };

	/* VEHICLE CREW BASE */
	
	// Define the base class for all vehicle crew and engineer units
    class O_crew_F {
        uniform[] = {
            "U_CAF_AG_ME_FATIGUES_01",
            "U_CAF_AG_ME_FATIGUES_01a",
            "U_CAF_AG_ME_FATIGUES_01b",
            "U_CAF_AG_ME_FATIGUES_01c",
            "U_CAF_AG_ME_FATIGUES_01d",
            "U_CAF_AG_ME_ROBES_Mil_01",
            "U_CAF_AG_ME_ROBES_mil_01a",
            "U_CAF_AG_ME_ROBES_01",
            "U_CAF_AG_ME_ROBES_01a",
            "U_CAF_AG_ME_ROBES_01b",
            "U_CAF_AG_ME_ROBES_01c",
            "U_CAF_AG_ME_ROBES_01d",
            "U_CAF_AG_ME_ROBES_02",
            "U_CAF_AG_ME_ROBES_02a",
            "U_CAF_AG_ME_ROBES_02b",
            "U_CAF_AG_ME_ROBES_02c",
            "U_CAF_AG_ME_ROBES_03",
            "U_CAF_AG_ME_ROBES_03a",
            "U_CAF_AG_ME_ROBES_03b",
            "U_CAF_AG_ME_ROBES_03c",
            "U_CAF_AG_ME_ROBES_03d",
            "U_CAF_AG_ME_ROBES_04",
            "U_CAF_AG_ME_ROBES_04a",
            "U_CAF_AG_ME_ROBES_04b",
            "U_CAF_AG_ME_ROBES_04c",
            "U_CAF_AG_ME_ROBES_04d"
        };
        headgear[] = {
            "H_caf_ag_turban",
            "H_Shemag_olive",
            "H_ShemagOpen_tan",
            "H_ShemagOpen_khk",
            "H_caf_ag_paktol_04",
            "H_caf_ag_paktol",
            "H_caf_ag_paktol_03",
            "H_caf_ag_paktol_02",
            "H_caf_ag_paktol_04",
            "H_caf_ag_paktol_04",
            "ibr_mol_redberet",
            "H_caf_ag_fur2",
            "H_caf_ag_fur",
            "H_caf_ag_wrap"
        };
        vest[] = {"rhs_6b23_ML_crew"};
		facewear[] = {};
		backpack[] = {
            "rhs_sidor"
        };
		
        weapons[] = {EAST_SMG};
		launchers[] = {};
        handguns[] = {};
		
        magazines[] = {
			EAST_SMG_MAG,
			"SmokeShell:2"
		};
        backpackItems[] = {"ACE_key_east"};
        items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_earplugs"
		};
        linkedItems[] = {
            "ItemWatch",
            "ItemMap",
            "ItemCompass"
        };
		attachments[] = {};
        radio = EAST_RADIO_SHORTWAVE;
    };

	// Repair Specialist
	// Define gear additions and overrides for Repair Specialist units
	// as well as the base class for all Explosive/Mine specialists
    class O_Soldier_repair_F: O_crew_F {
		weapons[] = {EAST_CARBINE};
		magazines[] = {
            EAST_CARBINE_MAG,
            "HandGrenade:2",
            "SmokeShell:2"
        };
        backpack[] = {
			"B_Kitbag_rgr",
			"B_Kitbag_cbr"
		};
        backpackItems[] = {"Toolkit"};
    };

	// Explosive Specialist
	// Define gear additions and overrides for Explosive Specialist units
    class O_Soldier_exp_F: O_Soldier_repair_F {
        backpackItems[] = {
            "Toolkit",
            "ACE_DefusalKit",
            "ACE_Clacker",
            "MineDetector"
        };
        magazines[] = {
            EAST_CARBINE_MAG,
            "DemoCharge_Remote_Mag:3",
            "SatchelCharge_Remote_Mag:2"
        };
    };

	// Mine Specialist
	// Define gear additions and overrides for Mine Specialist units
    class O_engineer_F: O_Soldier_repair_F {
        backpackItems[] = {
            "Toolkit",
            "ACE_DefusalKit",
            "ACE_Clacker",
            "MineDetector"
        };
        magazines[] = {
            EAST_CARBINE_MAG,
            "ATMine_Range_Mag:2",
            "APERSBoundingMine_Range_Mag:2",
            "APERSMine_Range_Mag:2"
        };
    };

    // Default if no other loadout can be found
    class fallback: O_soldier_f {
    	// Same as normal rifleman
    };
};
