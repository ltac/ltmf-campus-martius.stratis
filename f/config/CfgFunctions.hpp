class F // Defines the "owner"
{
	class common // category
	{
		file = "f\common";
		// Defines the function to preInit (the paramArray dosent seem to be constructed at preInit stage).
		class processParamsArray
		{
			preInit = 1;
			postInit = 1;
		};

		class nearPlayer{};
	};
	class mpEnd
	{
		file = "f\mpEnd";
		class mpEnd{};
		class mpEndReceiver{};
	};
	class assignGear
	{
		// Defines the functions to preInit the compling of the assignGear function used by units.
		file = "f\assignGear";
		class assignGearMan{};
		class assignGearVehicle{};
	};
	class setGroupID
	{
		file = "f\setGroupID";
		class setGroupID{};
	};
	class missionConditions
	{
		file = "f\missionConditions";
		class SetTime{};
		class SetFog{};
		class SetWeather{};
	};
	class groupMarkers {
		file = "f\groupMarkers";
		class localGroupMarker{};
		class localSpecialistMarker{};
	};
	class preMount
	{
		file = "f\preMount";
		class mountGroups{};
	};
	class tfr
	{
		file = "f\radios\tfr";
		class tfr_configureSpectatorChat{};
	};
	class safeStart
	{
		file = "f\safeStart";
		class safety{};
	};
};
