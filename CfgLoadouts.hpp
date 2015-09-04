/*
 * Defines which loadouts will be used for each side
 *
 * Author:
 * BWMF
 * modified by Legion Tactical
 */
class CfgLoadouts {
    //Only include one hpp per faction!
    //use (//) to comment out other files

    /* BLUFOR FACTION */

    #include "BW\Loadouts\blu_usarmy_ucp.hpp" // US Army, UCP, M4
    //#include "BW\Loadouts\blu_usarmy_ocp.hpp" // US Army, OCP, M4
    //#include "BW\Loadouts\blu_usmc_desert.hpp" // USMC, Desert MARPAT, M4
    //#include "BW\Loadouts\blu_usmc_woodland.hpp" // USMC, Woodland MARPAT, M4
    //#include "BW\Loadouts\blu_usmc_snow.hpp" // USMC, Arctic MARPAT, M4

    /* INDFOR FACTION */
    //#include "BW\Loadouts\ind_finland_snow.hpp" // WIP
    //#include "BW\Loadouts\ind_militia_desert.hpp" // WIP
    //#include "BW\Loadouts\ind_militia_woodland.hpp" // WIP
    //#include "BW\Loadouts\ind_pmc.hpp" // WIP
    #include "BW\Loadouts\ind_ukraine.hpp" // Ukraine, Woodland, AK47/74
    //#include "BW\Loadouts\ind_aaf.hpp" // AAF, Green Digi, F2000

    /* OPFOR FACTION */
    //#include "BW\Loadouts\opf_csat_snow.hpp" // WIP
    //#include "BW\Loadouts\opf_pla_desert.hpp" // WIP
    //#include "BW\Loadouts\opf_pla_woodland.hpp" // WIP
    //#include "BW\Loadouts\opf_russia_desert.hpp" // WIP
    //#include "BW\Loadouts\opf_russia_woodland.hpp" // Russia, Woodland Digital, AK74
    //#include "BW\Loadouts\opf_russia_snow.hpp" // WIP
    #include "BW\Loadouts\opf_afghan.hpp" // Afghani, AKM

    /* CIVILIAN FACTIONS */
	// Comment this out if you are using a different civilian faction
    #include "BW\Loadouts\civ_europe.hpp" // More randomized European civilians
};
