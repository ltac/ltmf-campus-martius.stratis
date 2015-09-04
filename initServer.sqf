/*
 * Name: initServer.sqf
 *
 * Description:
 * All code here executes during mission initialization only on server-side.
 * See for more details.
 *
 * Author:
 * Legion Tactical
 */

// Run TFAR frequency initialization code
if (f_var_radios != 0) then {
	[] execVM "L\radios\radioInit.sqf";
};

// Add all player units to Zeus
zeusModule addCuratorEditableObjects [allPlayers];
