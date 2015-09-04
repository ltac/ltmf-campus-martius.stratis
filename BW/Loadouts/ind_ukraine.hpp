/*
 * Description:
 * Loadout definition for Ukrainian forces
 * Weapons: AK-47/74/PKM/RPG variants
 * Uniforms: MNP Ukrainian
 * Limited NVG, GPS, and Optics
 *
 * Author:
 * BWMF
 * modified by Legion Tactical
 */
class ind_f {
    //Rifle
    #define IND_RIFLE "hlc_rifle_ak74"
    #define IND_RIFLE_MAG "hlc_30Rnd_545x39_B_AK:8","hlc_30Rnd_545x39_t_ak:2"
    //GL Rifle
    #define IND_GLRIFLE "hlc_rifle_aks74_GL"
    #define IND_GLRIFLE_MAG "hlc_30Rnd_545x39_B_AK:8","hlc_30Rnd_545x39_t_ak:2"
    #define IND_GLRIFLE_MAG_SMOKE "hlc_GRD_White:4","hlc_GRD_green:2","hlc_GRD_Red:3"
    #define IND_GLRIFLE_MAG_HE "hlc_VOG25_AK:14"
	#define IND_GLRIFLE_MAG_FLARE "UGL_FlareRed_F:2","UGL_FlareGreen_F:2"
    //Carbine
    #define IND_CARBINE "hlc_rifle_ak74"
    #define IND_CARBINE_MAG "hlc_30Rnd_545x39_B_AK:8","hlc_30Rnd_545x39_t_ak:2"
    // AR
    #define IND_AR "hlc_rifle_rpk74n"
    #define IND_AR_MAG "hlc_45Rnd_545x39_t_rpk:9"
    #define IND_AR_MAG2 "hlc_45Rnd_545x39_t_rpk:5"
    // AT
    #define IND_AT "rhs_weap_rpg7"
    #define IND_AT_MAG "rhs_rpg7_PG7VL_mag:3"
    // MMG
    #define IND_MMG "rhs_weap_pkm"
    #define IND_MMG_MAG "rhs_100Rnd_762x54mmR:5"
    // MAT
    #define IND_MAT "rhs_weap_rpg7"
    #define IND_MAT_MAG "rhs_rpg7_PG7VR_mag:2","rhs_rpg7_PG7VL_mag:1"
    // SAM
    #define IND_SAM "rhs_weap_igla"
    #define IND_SAM_MAG "rhs_mag_9k38_rocket:2"
    // Sniper Rifle
    #define IND_SNIPER "rhs_weap_svdp"
    #define IND_SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
    // Spotter Rifle
    #define IND_SPOTTER "rhs_weap_svdp"
    #define IND_SPOTTER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
    // SMG
    #define IND_SMG "hlc_rifle_aks74u"
    #define IND_SMG_MAG "hlc_30Rnd_545x39_B_AK:6"
    // Pistol
    #define IND_PISTOL "rhs_weap_makarov_pmm"
    #define IND_PISTOL_MAG "rhs_mag_9x18_12_57N181S:4"
	// Radio
	#define IND_RADIO_RIFLEMAN "tf_anprc154"
	#define IND_RADIO_SHORTWAVE "tf_anprc148jem"
	#define IND_RADIO_MANPACK "tf_anprc155"
	#define IND_RADIO_AIRBORNE "tf_anarc164"

	// Define the cargo for Vehicles
    class Car {
        TransportMagazines[] = {
            IND_RIFLE_MAG,
			IND_RIFLE_MAG,
			IND_CARBINE_MAG,
			IND_AR_MAG,
			IND_AR_MAG,
			IND_GLRIFLE_MAG_HE,
			IND_AT_MAG
        };
        TransportItems[] = {
			"ACE_fieldDressing:12",
			"ACE_morphine:4"
		};
    };
	
	// Define the cargo for Tanks
    class Tank {
        TransportMagazines[] = {
			IND_RIFLE_MAG,
			IND_RIFLE_MAG,
			IND_CARBINE_MAG,
			IND_AR_MAG,
			IND_AR_MAG,
			IND_GLRIFLE_MAG_HE,
			IND_AT_MAG
		};
        TransportItems[] = {
			"ACE_fieldDressing:12",
			"ACE_morphine:4"
		};
    };

	// Define the cargo for Helicopters
    class Helicopter {
        TransportMagazines[] = {
			IND_RIFLE_MAG,
			IND_RIFLE_MAG,
			IND_CARBINE_MAG,
			IND_AR_MAG,
			IND_AR_MAG,
			IND_GLRIFLE_MAG_HE
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
    class I_Soldier_F {
		/* Randomized gear
		One item from each of these lists will be chosen at
		random when the unit spawns.
		
		If you want "nothing" to be one of the random options,
		just include nil in the list
		
		Leave the list empty {} to add nothing of that type.
		*/
		
		// Define the list of possible uniforms that units will wear
        uniform[] = {
            "MNP_CombatUniform_Ukrainian"
        };
		// Define the list of possible vests that units will wear
        vest[] = {
            "MNP_Vest_UKR_A",
            "MNP_Vest_UKR_B"
        };
		// Define the list of possible headgear that units will wear
        headgear[] = {
            "MNP_Helmet_PAGST_UKR"
        };
		// Define the list of possible facewear that units will wear
        facewear[] = {
            nil,
			"rhs_balaclava",
			"G_Balaclava_oli",
			"G_Shades_Black",
			"G_Shades_Blue",
			"G_Shades_Green",
			"G_Shades_Red",
			"rhs_scarf",
			"G_Bandanna_oli",
			"G_Bandanna_blk",
			"G_Bandanna_shades"
        };
		// Define the list of possible backpacks that units will wear
        backpack[] = {
            "B_AssaultPack_rgr",
			"B_AssaultPack_blk"
        };
		
		// Define the list of possible primary weapons that units
		// will be assigned
        weapons[] = {IND_RIFLE};
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
            IND_RIFLE_MAG,
            "rhs_mag_m67:2",
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
        attachments[] = {"acc_flashlight"};
		// Set the basic radio for the unit
        radio = IND_RADIO_RIFLEMAN;
    };

	/* END RIFLEMAN BASE */
	
	/* RIFLEMAN EXTENSIONS */
	
	// CO and DC
	// Define gear additions and overrides for Officer units
    class I_officer_F: I_Soldier_F {
        backpack[] = {IND_RADIO_MANPACK};
        weapons[] = {IND_GLRIFLE};
        magazines[] = {
			IND_GLRIFLE_MAG,
			IND_GLRIFLE_MAG_HE,
			IND_GLRIFLE_MAG_SMOKE,
			IND_GLRIFLE_MAG_FLARE,
			IND_PISTOL_MAG,
			"rhs_mag_m67:2",
			"SmokeShell:2",
			"rhs_mag_m18_green:2"
		};
        handguns[] = {IND_PISTOL}; /// randomized
        backpackItems[] += {"ACE_key_indp"};
        linkedItems[] += {
			"ItemGPS",
			"ACE_Vector",
            "rhsusf_ANPVS_15"
		};
        items[] = {"ACE_MapTools"};
        radio = IND_RADIO_SHORTWAVE;
    };

	// SL
	// Define gear additions and overrides for Squad Leader units
    class I_Soldier_SL_F: I_Officer_F {
        backpack[] = {IND_RADIO_MANPACK};
        linkedItems[] += {
			"Binocular",
            "rhsusf_ANPVS_15"
		};
        items[] = {"ACE_MapTools"};
        backpackItems[] += {"ACE_fieldDressing"};
        radio = IND_RADIO_SHORTWAVE;
    };

	// UAV
	// Define gear additions and overrides for UAV Operator units
    class I_Soldier_UAV_F: I_Soldier_F {
        backpack[] = {"B_rhsusf_B_BACKPACK"};
        linkedItems[] += {
			"I_uavterminal"
		};
        radio = IND_RADIO_SHORTWAVE;
    };

	// FTL
	// Define gear additions and overrides for Team Leader units
    class I_Soldier_TL_F: I_Soldier_F {
        weapons[] = {IND_GLRIFLE};
        magazines[] = {
			IND_GLRIFLE_MAG,
			IND_GLRIFLE_MAG_HE,
			IND_GLRIFLE_MAG_SMOKE,
			IND_GLRIFLE_MAG_FLARE,
			"rhs_mag_m18_green:2",
			"rhs_mag_m67:2",
			"SmokeShell:2",
			"rhs_mag_m67:1",
			"SmokeShell:2"
		};
        backpackItems[] += {"ACE_key_indp"};
        linkedItems[] += {
			"ItemGPS",
			"Binocular"
		};
    };

	// AR
	// Define gear additions and overrides for Autorifleman units
    class I_Soldier_AR_F: I_Soldier_F {
        weapons[] = {IND_AR};
        magazines[] = {
			IND_AR_MAG,
			IND_PISTOL_MAG,
			"rhs_mag_m67:2",
			"SmokeShell:2"
		};
        handguns[] = {IND_PISTOL}; /// randomized
    };

	// AAR
	// Define gear additions and overrides for Asst Autorifleman units
    class I_Soldier_AAR_F: I_Soldier_F {
        backpackItems[] += {IND_AR_MAG2};
        attachments[] = {"optic_MRCO"};
        linkedItems[] += {"Binocular"};
    };

	// RAT
	// Define gear additions and overrides for AT Rifleman units
    class I_Soldier_LAT_F: I_Soldier_F {
        weapons[] = {IND_CARBINE};
        magazines[] = {
			IND_CARBINE_MAG,
			IND_AT_MAG,
			"rhs_mag_m67:2",
			"SmokeShell:2"
		};
        launchers[] = {IND_AT};
    };

	// Medic
	// Define gear additions and overrides for Medic units
    class I_medic_F: I_Soldier_F {
        weapons[] = {IND_CARBINE};
        magazines[] = {
			IND_CARBINE_MAG,
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
    class I_support_MG_F: I_Soldier_F {
        weapons[] = {IND_MMG};
        magazines[] = {
			IND_MMG_MAG,
			IND_PISTOL_MAG,
			"rhs_mag_m67:1",
			"SmokeShell:2"
		};
        handguns[] = {IND_PISTOL}; /// randomized
        attachments[] = {};
    };

	// MMG Asst
	// Define gear additions and overrides for MMG Spotter units
    class I_Soldier_A_F: I_Soldier_F {
        backpack[] = {"B_Kitbag_rgr"};
        backpackItems[] += {IND_MMG_MAG};
        linkedItems[] += {"ACE_Vector"};
    };

	// Medium AT
	// Define gear additions and overrides for MAT Gunner units
    class I_Soldier_AT_F: I_Soldier_F {
        weapons[] = {IND_CARBINE};
        magazines[] = {
            IND_CARBINE_MAG,
            "rhs_mag_m67:2",
            "SmokeShell:2"
        };
        launchers[] = {IND_MAT};
        items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_earplugs"
		};
        backpack[] = {"rhs_rpg_empty"};
        backpackItems[] = {IND_MAT_MAG};
    };

	// Medium AT Asst
	// Define gear additions and overrides for MAT Spotter units
    class I_Soldier_AAT_F: I_Soldier_F {
        backpack[] = {"rhs_rpg_empty"};
        backpackItems[] = {IND_MAT_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_earplugs"
		};
    };

	// AA Gunner
	// Define gear additions and overrides for AA Gunner units
    class I_Soldier_AA_F: I_Soldier_F {
        backpack[] = {"B_Carryall_oli"};
        weapons[] = {IND_CARBINE};
        magazines[] = {
            IND_CARBINE_MAG,
            "rhs_mag_m67:2",
            "MiniGrenade:1",
            "SmokeShell:2"
        };
        launchers[] = {IND_SAM};
        backpackItems[] += {IND_SAM_MAG};
    };

	// AA Asst
	// Define gear additions and overrides for AA Spotter units
    class I_Soldier_AAA_F: I_Soldier_F {
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {IND_SAM_MAG};
        linkedItems[] += {"ACE_Vector"};
    };

	// Mortar Gunner
	// Define gear additions and overrides for Mortar Gunner units
    class I_support_Mort_F: I_Soldier_F {
        weapons[] = {IND_CARBINE};
        magazines[] = {
            IND_CARBINE_MAG,
            "rhs_mag_m67:2",
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
    class I_support_AMort_F: I_Soldier_F {
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
    class I_spotter_F {
		uniform[] = {
            "MNP_CombatUniform_Ukrainian"
        };
		vest[] = {
            "MNP_Vest_UKR_A",
            "MNP_Vest_UKR_B"
        };
		headgear[] = {
            "MNP_Helmet_PAGST_UKR"
        };
		facewear[] = {
            nil,
			"G_Balaclava_oli",
			"G_Shades_Black",
			"G_Shades_Blue",
			"G_Shades_Green",
			"G_Shades_Red",
			"rhs_scarf",
			"G_Bandanna_oli",
			"G_Bandanna_blk",
			"G_Bandanna_shades"
        };
		backpack[] = {
            "B_AssaultPack_rgr",
			"B_AssaultPack_blk"
        };
		
        weapons[] = {IND_SPOTTER};
        launchers[] = {};
        handguns[] = {};
		
        magazines[] = {
			IND_SPOTTER_MAG,
			"SmokeShell:2",
			"rhs_mag_m67:2"
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
        radio = IND_RADIO_SHORTWAVE;
    };

	/* SNIPER BASE */
	
	// Define the base class for Sniper units
    class I_sniper_F {
		uniform[] = {
            "MNP_CombatUniform_Ukrainian"
        };
		vest[] = {
            "MNP_Vest_UKR_A",
            "MNP_Vest_UKR_B"
        };
		headgear[] = {
            "MNP_Helmet_PAGST_UKR"
        };
		facewear[] = {
            nil,
			"G_Balaclava_oli",
			"G_Shades_Black",
			"G_Shades_Blue",
			"G_Shades_Green",
			"G_Shades_Red",
			"rhs_scarf",
			"G_Bandanna_oli",
			"G_Bandanna_blk",
			"G_Bandanna_shades"
        };
		backpack[] = {
            "B_AssaultPack_rgr",
			"B_AssaultPack_blk"
        };
		
        weapons[] = {IND_SNIPER};
        launchers[] = {};
        handguns[] = {};
		
        magazines[] = {
			IND_SNIPER_MAG,
			"SmokeShell:2",
			"rhs_mag_m67:2"
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
        radio = IND_RADIO_SHORTWAVE;
    };

	/* HELICOPTER CREW BASE */
	
	// Heli Pilot
	// Define the base class for all Helicopter pilot and crew units
    class I_Helipilot_F {
        uniform[] = {
            "MNP_CombatUniform_Ukrainian"
        };
        headgear[] = {"rhsusf_cvc_green_helmet"};
		vest[] = {};
		facewear[] = {};
		backpack[] = {
            "B_AssaultPack_rgr",
			"B_AssaultPack_blk"
        };
		
        weapons[] = {IND_SMG};
		launchers[] = {};
        handguns[] = {IND_PISTOL};
		
        magazines[] = {
			IND_SMG_MAG,
			IND_PISTOL_MAG,
			"SmokeShell:2"
		};
        backpackItems[] += {"ACE_key_indp"};
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
        radio = IND_RADIO_SHORTWAVE;
    };

	// Heli crew
	// Define gear additions and overrides for Helicopter Crew units
    class I_helicrew_F: I_Helipilot_F {
		// No changes
    };

	/* VEHICLE CREW BASE */
	
	// Define the base class for all vehicle crew and engineer units
    class I_crew_F {
        uniform[] = {
            "MNP_CombatUniform_Ukrainian"
        };
        headgear[] = {
            "MNP_Helmet_PAGST_UKR"
        };
        vest[] = {
            "MNP_Vest_UKR_A",
            "MNP_Vest_UKR_B"
        };
		facewear[] = {
            nil,
			"G_Balaclava_oli",
			"G_Shades_Black",
			"G_Shades_Blue",
			"G_Shades_Green",
			"G_Shades_Red",
			"rhs_scarf",
			"G_Bandanna_oli",
			"G_Bandanna_blk",
			"G_Bandanna_shades"
        };
		backpack[] = {
            "B_AssaultPack_rgr",
			"B_AssaultPack_blk"
        };
		
        weapons[] = {IND_SMG};
		launchers[] = {};
        handguns[] = {};
		
        magazines[] = {
			IND_SMG_MAG,
			"SmokeShell:2"
		};
        backpackItems[] = {"ACE_key_indp"};
        items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_earplugs"
		};
        linkedItems[] = {
            "ItemWatch",
            "ItemMap",
            "ItemCompass",
            "itemGPS"
        };
		attachments[] = {};
        radio = IND_RADIO_SHORTWAVE;
    };

	// Repair Specialist
	// Define gear additions and overrides for Repair Specialist units
	// as well as the base class for all Explosive/Mine specialists
    class I_Soldier_repair_F: I_crew_F {
		weapons[] = {IND_CARBINE};
		magazines[] = {
            IND_CARBINE_MAG,
            "rhs_mag_m67:2",
            "SmokeShell:2"
        };
        backpack[] = {"B_Kitbag_rgr"};
        backpackItems[] = {"Toolkit"};
    };

	// Explosive Specialist
	// Define gear additions and overrides for Explosive Specialist units
    class I_Soldier_exp_F: I_Soldier_repair_F {
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

	// Mine Specialist
	// Define gear additions and overrides for Mine Specialist units
    class I_engineer_F: I_Soldier_repair_F {
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

    // Default if no other loadout can be found
    class fallback: I_soldier_f {
    	// Same as normal rifleman
    };
};