/*
 * Description:
 * Loadout definition for Finland Arctic units
 * Uniforms: MNP Finland
 * Weapons: FN and HK series
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
	#define IND_RADIO_MANPACK "tf_rt1523g_black"
	#define IND_RADIO_AIRBORNE "tf_anarc164"

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
			"MNP_CombatUniform_Finarctic_A",
			"MNP_CombatUniform_Finarctic_B"
		};  /// randomized
        vest[] = {
			"MNP_Vest_FIN_2",
			"MNP_Vest_FIN_1"
		}; /// randomized
        headgear[] = {"MNP_Helmet_FIN_A"};
        backpack[] = {"MNP_B_WB_AP"}; /// randomized
        backpackItems[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_IR_Strobe_item","ACE_earplugs"};
        weapons[] = {IND_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {IND_RIFLE_MAG,"HandGrenade:2","SmokeShell:2"};
        items[] = {};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhsusf_ANPVS_14"};
        attachments[] = {"rhsusf_acc_eotech_552","rhsusf_acc_anpeq15side"};
		radio = IND_RADIO_RIFLEMAN;
    };
    class I_officer_F: I_Soldier_F {// CO and DC
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
		backpack[] = {"MNP_B_WB_KB"};
        backpackItems[] += {IND_MMG_MAG};
        linkedItems[] += {"ACE_Vector"};
    };
    class I_Soldier_AT_F: I_Soldier_F {// MAT Gunner
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,"HandGrenade:2","SmokeShell:2"};
        launchers[] = {IND_MAT}; /// randomized
        items[] += {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        backpackItems[] = {IND_MAT_MAG};
    };
    class I_Soldier_AAT_F: I_Soldier_F {// MAT Spotter/Ammo Bearer
		backpack[] = {"MNP_B_WB_KB"};
        backpackItems[] = {IND_MAT_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
    };
    class I_Soldier_AA_F: I_Soldier_F {// SAM Gunner
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
        launchers[] = {IND_SAM}; /// randomized
        backpackItems[] += {IND_SAM_MAG};
    };
    class I_Soldier_AAA_F: I_Soldier_F {// SAM Spotter/Ammo Bearer
		backpack[] = {"MNP_B_WB_KB"};
        backpackItems[] = {IND_SAM_MAG};
        linkedItems[] += {"ACE_Vector"};
    };
    class I_support_Mort_F: I_Soldier_F {// Mortar Gunner
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,"HandGrenade:2","SmokeShell:2"};
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
        headgear[] = {"H_PilotHelmetHeli_B"}; /// randomized
        weapons[] = {IND_SMG}; /// randomized
        magazines[] = {IND_SMG_MAG,"SmokeShell:2"};
        backpackItems[] += {"ACE_key_west"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        linkedItems[] += {"itemGPS","NVgoggles"};
		radio = IND_RADIO_SHORTWAVE;
    };
    class I_helicrew_F: I_Helipilot_F { // Pilot

    };
    class I_crew_F {// Crew
        backpack[] = {"MNP_B_RUW_CA"};
        weapons[] = {IND_CARBINE}; /// randomized
        magazines[] = {IND_CARBINE_MAG,"SmokeShell:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        backpackItems[] += {"ACE_key_west"};
        linkedItems[] += {"itemGPS"};
    };
    class I_Soldier_repair_F: I_crew_F {// Repair Specialist
        backpackItems[] = {"Toolkit"};
    };
    class I_Soldier_exp_F: I_Soldier_repair_F {// Explosive Specialist
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {IND_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };
    class I_engineer_F: I_Soldier_repair_F {// Mine Specialist
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {IND_CARBINE_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
    };
};