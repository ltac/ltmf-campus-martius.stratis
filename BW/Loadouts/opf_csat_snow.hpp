/*
 * Description:
 * Loadout definition for Russian Woodland forces
 * Weapons: AK47/74/PKP/RPG variants
 * Uniforms: MNP Russian Digital Flora
 * Ubiquitous NVG, GPS, and Optics
 *
 * Author:
 * BWMF
 * modified by Legion Tactical
 */
class opf_f {
	/*
	 * NOTE This comment can be deleted when copied in actual loadout files
	 * Template file for INDFOR faction loadouts.
	 *
	 * All objects are specified by their classname. Classnames can be
	 * found easily by creating a loadout in the Virtual Arsenal
	 * (ARMA 3 Main Menu > Learn > Virtual Arsenal), clicking Export,
	 * then pasting into a text document.
	 *
	 * For placing multiples of some object in inventory, type the
	 * classname, a colon, then the number of that item to place.
	 * For example, if we want the Car class to contain 12 ACE Bandages,
	 * then we include "ACE_fieldDressing:12".
	 *
	 * When #define-ing the standard magazine loadouts, you can list
	 * multiple magazine types and counts by separating them with a comma.
	 * For example:
	 * #define EAST_RIFLE_MAG "hlc_30rnd_556x45_EPR:8","30Rnd_556x45_Stanag_Tracer_Yellow:2"
	 *
	 * This will add 8 EPR magazines and 2 yellow tracer magazines to
	 * the loadout.
	 */
 
    // Rifle
	#define EAST_RIFLE "rhs_weap_ak74m_npz"
	#define EAST_RIFLE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK_green:2"
	// GL Rifle
	#define EAST_GLRIFLE "rhs_weap_ak74m_gp25_npz"
	#define EAST_GLRIFLE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK_green:2"
	#define EAST_GLRIFLE_MAG_SMOKE "rhs_GRD40_White:4","rhs_GRD40_Green:2","rhs_GRD40_Red:3"
	#define EAST_GLRIFLE_MAG_HE "rhs_VOG25:8"
	#define EAST_GLRIFLE_MAG_FLARE "rhs_VG40OP_white:2","rhs_VG40OP_green:2"
	// Carbine
	#define EAST_CARBINE "rhs_weap_ak74m_npz"
	#define EAST_CARBINE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK_green:2"
	// AR
	#define EAST_AR "rhs_weap_pkm"
	#define EAST_AR_MAG "rhs_100Rnd_762x54mmR:2"
	#define EAST_AR_MAG2 "rhs_100Rnd_762x54mmR_green:2"
	// AT
	#define EAST_AT "rhs_weap_rshg2"
	#define EAST_AT_MAG "rhs_rshg2_mag"
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
	#define EAST_SNIPER "rhs_weap_svdp","rhs_weap_svds"
	#define EAST_SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
	// Spotter Rifle
	#define EAST_SPOTTER "rhs_weap_ak74m_npz"
	#define EAST_SPOTTER_MAG "rhs_30Rnd_545x39_AK:8"
	// SMG
	#define EAST_SMG "hlc_smg_mp5k_PDW"
	#define EAST_SMG_MAG "hlc_30Rnd_9x19_B_MP5:6"
	// Pistol
	#define EAST_PISTOL "rhs_weap_pya"
	#define EAST_PISTOL_MAG "rhs_mag_9x19_17:4"
	// Radio
	#define EAST_RADIO_RIFLEMAN "tf_pnr1000a"
	#define EAST_RADIO_SHORTWAVE "tf_fadak"
	#define EAST_RADIO_MANPACK "tf_mr3000_rhs"
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

	/*
	NOTE This comment can be deleted when copied in actual loadout files
	-Rifleman
	-Officer
	-Squad leader
	-Team leader
	-Autorifleman
	-UAV Operator
	-Assistant Autorifleman
	-AT Rifleman
	-Medic
	-MMG Gunner
	-MMG Spotter
	-MAT Gunner
	-MAT Assistant
	-SAM Gunner
	-SAM Assistant
	-Mortar Gunner
	-Mortar Assistant
	
	Each specific class can add to or completely override the
	loadouts defined by this base
	*/
    class O_Soldier_F {
		/* Randomized gear
		One item from each of these lists will be chosen at
		random when the unit spawns.
		
		If you want "nothing" to be one of the random options,
		just include nil in the list
		
		Leave the list empty {} to add nothing of that type.
		*/
		
		// Define the list of possible uniforms that units will wear
        uniform[] = {
            "MNP_CombatUniform_RU_Med",
            "MNP_CombatUniform_RU_Med_B"
        };
		// Define the list of possible vests that units will wear
        vest[] = {
            "MNP_Vest_RU_T",
            "MNP_Vest_RU_T2",
			"MNP_Vest_Light_R2"
        };
		// Define the list of possible headgear that units will wear
        headgear[] = {
            "MNP_Helmet_PAGST_RT",
			"MNP_Helmet_RU_LT"
        };
		// Define the list of possible facewear that units will wear
        facewear[] = {
            nil,
			"G_Balaclava_oli",
			"G_Shades_Black",
			"G_Shades_Blue",
			"G_Shades_Green",
			"G_Shades_Red",
			"G_Lady_Blue",
			"G_Spectacles",
			"G_Squares",
			"G_Tactical_Clear",
			"G_Bandanna_oli",
			"G_Bandanna_blk",
			"G_Bandanna_shades",
			"G_Bandanna_sport",
			"G_Bandanna_beast",
			"G_Sport_BlackWhite",
			"G_Sport_Checkered",
			"G_Sport_Blackred",
			"G_Sport_Greenblack",
			"G_Goggles_VR",
			"G_Sport_Blackyellow"
        };
		// Define the list of possible backpacks that units will wear
        backpack[] = {
            "MNP_B_RU2_FP"
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
			"ItemWatch",
			"rhsusf_ANPVS_15"
		};
		// List the attachments that will be automatically added
		// to the unit's equipped weapons
        attachments[] = {"RH_barska_rds"};
		// Set the basic radio for the unit
        radio = EAST_RADIO_RIFLEMAN;
    };

	/* END RIFLEMAN BASE */
	
	/* RIFLEMAN EXTENSIONS */
	
	/*
	The next set of units all copy their gear from the Rifleman Base,
	as defined with the : in the class definition. For example,
	
	    class O_officer_F : O_Soldier_F
		
	says that O_officer_F will have the same properties and data
	as O_Soldier_F unless specifically set otherwise.
	
	You can override a certain type of gear by setting it to something
	new using =
	For example:
	backpack[] = {EAST_RADIO_MANPACK};
	
	Instead of replacing gear, you can also add to gear by using +=
	For example, to add GPS in addition to the base Watch, Map,
	and Compass:
	linkedItems[] += {"ItemGPS"};
	*/
	
	// CO and DC
	// Define gear additions and overrides for Officer units
    class O_Officer_F: O_Soldier_F {
        backpack[] = {EAST_RADIO_MANPACK};
        weapons[] = {EAST_GLRIFLE};
        magazines[] = {
			EAST_GLRIFLE_MAG,
			EAST_GLRIFLE_MAG_HE,
			EAST_GLRIFLE_MAG_SMOKE,
			EAST_GLRIFLE_MAG_FLARE,
			EAST_PISTOL_MAG,
			"HandGrenade:2",
			"SmokeShell:2",
			"rhs_mag_m18_green:2"
		};
        handguns[] = {EAST_PISTOL};
        backpackItems[] += {"ACE_key_east"};
        linkedItems[] += {
			"ItemGPS",
			"ACE_Vector"
		};
        items[] = {"ACE_MapTools"};
        radio = EAST_RADIO_SHORTWAVE;
    };

	// SL
	// Define gear additions and overrides for Squad Leader units
    class O_Soldier_SL_F: O_Officer_F {
        linkedItems[] += {
			"Binocular"
		};
        items[] = {"ACE_MapTools"};
        backpackItems[] += {"ACE_fieldDressing"};
        radio = EAST_RADIO_SHORTWAVE;
    };

	// UAV
	// Define gear additions and overrides for UAV Operator units
    class O_Soldier_UAV_F: O_Soldier_F {
        backpack[] = {"B_rhsusf_B_BACKPACK"};
        linkedItems[] += {
			"O_uavterminal"
		};
        radio = EAST_RADIO_SHORTWAVE;
    };

	// FTL
	// Define gear additions and overrides for Team Leader units
    class O_Soldier_TL_F: O_Soldier_F {
        weapons[] = {EAST_GLRIFLE};
        magazines[] = {
			EAST_GLRIFLE_MAG,
			EAST_GLRIFLE_MAG_HE,
			EAST_GLRIFLE_MAG_SMOKE,
			EAST_GLRIFLE_MAG_FLARE,
			"rhs_mag_m18_green:2",
			"HandGrenade:2",
			"SmokeShell:2",
			"HandGrenade:1",
			"SmokeShell:2"
		};
        backpackItems[] += {"ACE_key_east"};
        linkedItems[] += {
			"ItemGPS",
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
        attachments[] = {"optic_MRCO"};
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
        backpack[] = {"B_Kitbag_rgr"};
        backpackItems[] += {EAST_MMG_MAG};
        linkedItems[] += {"ACE_Vector"};
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
        linkedItems[] += {"ACE_Vector"};
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
        linkedItems[] += {"ACE_Vector"};
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
    class O_spotter_F {
		uniform[] = {
            "MNP_CombatUniform_RU_Med",
            "MNP_CombatUniform_RU_Med_B"
        };
		vest[] = {
            "MNP_Vest_RU_T",
            "MNP_Vest_RU_T2",
			"MNP_Vest_Light_R2"
        };
		headgear[] = {
            "MNP_Helmet_PAGST_RT",
			"MNP_Helmet_RU_LT"
        };
		facewear[] = {
            nil,
			"G_Balaclava_oli",
			"G_Shades_Black",
			"G_Shades_Blue",
			"G_Shades_Green",
			"G_Shades_Red",
			"G_Lady_Blue",
			"G_Spectacles",
			"G_Squares",
			"G_Tactical_Clear",
			"G_Bandanna_oli",
			"G_Bandanna_blk",
			"G_Bandanna_shades",
			"G_Bandanna_sport",
			"G_Bandanna_beast",
			"G_Sport_BlackWhite",
			"G_Sport_Checkered",
			"G_Sport_Blackred",
			"G_Sport_Greenblack",
			"G_Goggles_VR",
			"G_Sport_Blackyellow"
        };
		backpack[] = {
            "MNP_B_RU2_FP"
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
			"itemGPS",
			"LaserDesignator",
			"rhsusf_ANPVS_15"
		};
        attachments[] = {"RH_barska_rds"};
        radio = EAST_RADIO_SHORTWAVE;
    };

	/* SNIPER BASE */
	
	// Define the base class for Sniper units
    class O_sniper_F {
		uniform[] = {
            "MNP_CombatUniform_RU_Med",
            "MNP_CombatUniform_RU_Med_B"
        };
		vest[] = {
            "MNP_Vest_RU_T",
            "MNP_Vest_RU_T2",
			"MNP_Vest_Light_R2"
        };
		headgear[] = {
            "MNP_Helmet_PAGST_RT",
			"MNP_Helmet_RU_LT"
        };
		facewear[] = {
            nil,
			"G_Balaclava_oli",
			"G_Shades_Black",
			"G_Shades_Blue",
			"G_Shades_Green",
			"G_Shades_Red",
			"G_Lady_Blue",
			"G_Spectacles",
			"G_Squares",
			"G_Tactical_Clear",
			"G_Bandanna_oli",
			"G_Bandanna_blk",
			"G_Bandanna_shades",
			"G_Bandanna_sport",
			"G_Bandanna_beast",
			"G_Sport_BlackWhite",
			"G_Sport_Checkered",
			"G_Sport_Blackred",
			"G_Sport_Greenblack",
			"G_Goggles_VR",
			"G_Sport_Blackyellow"
        };
		backpack[] = {
            "MNP_B_RU2_FP"
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
			"itemGPS",
			"LaserDesignator",
			"rhsusf_ANPVS_15"
		};
        attachments[] = {
			"rhs_acc_pso1m2"
		};
        radio = EAST_RADIO_SHORTWAVE;
    };

	/* HELICOPTER CREW BASE */
	
	// Heli Pilot
	// Define the base class for all Helicopter pilot and crew units
    class O_Helipilot_F {
        uniform[] = {
            "MNP_CombatUniform_RU_Med",
            "MNP_CombatUniform_RU_Med_B"
        };
        headgear[] = {
			"rhs_zsh7a_mike",
			"rhs_gssh18",
			"MNP_Helmet_STPilot"
		};
		vest[] = {
			"MNP_Vest_Light_R2"
		};
		facewear[] = {};
		backpack[] = {
            "MNP_B_RU2_FP"
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
            "ItemCompass",
            "itemGPS",
            "rhsusf_ANPVS_15"
        };
		attachments[] = {};
        radio = EAST_RADIO_SHORTWAVE;
    };

	// Heli crew
	// Define gear additions and overrides for Helicopter Crew units
    class O_helicrew_F: O_Helipilot_F {
		// No changes
    };

	/* VEHICLE CREW BASE */
	
	// Define the base class for all vehicle crew and engineer units
    class O_crew_F {
        uniform[] = {
            "MNP_CombatUniform_RU_Med",
            "MNP_CombatUniform_RU_Med_B"
        };
        headgear[] = {
            "MNP_Helmet_PAGST_RT",
			"MNP_Helmet_RU_LT"
        };
        vest[] = {
            "MNP_Vest_Light_R2"
        };
		facewear[] = {
            nil,
			"G_Balaclava_oli",
			"G_Shades_Black",
			"G_Shades_Blue",
			"G_Shades_Green",
			"G_Shades_Red",
			"G_Lady_Blue",
			"G_Spectacles",
			"G_Squares",
			"G_Tactical_Clear",
			"G_Bandanna_oli",
			"G_Bandanna_blk",
			"G_Bandanna_shades",
			"G_Bandanna_sport",
			"G_Bandanna_beast",
			"G_Sport_BlackWhite",
			"G_Sport_Checkered",
			"G_Sport_Blackred",
			"G_Sport_Greenblack",
			"G_Goggles_VR",
			"G_Sport_Blackyellow"
        };
		backpack[] = {
            "MNP_B_RU2_FP"
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
            "ItemCompass",
            "itemGPS"
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
        backpack[] = {"B_Kitbag_rgr"};
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
};
