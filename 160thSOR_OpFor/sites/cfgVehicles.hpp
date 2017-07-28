/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 12/07/17
	Description: cfgVehicles.hpp
*/

class Land_Radar_Small_F;

class SOR_OpFor_NoFlyZone4km : Land_Radar_Small_F
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_NoFlyZone";
	displayName="No Fly Zone 4km";
	class EventHandlers
	{
		init = "(_this select 0) spawn SOPFOR_fnc_NoFlySite4km;";
	};
};

class SOR_OpFor_NoFlyZone3km : Land_Radar_Small_F
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_NoFlyZone";
	displayName="No Fly Zone 3km";
	class EventHandlers
	{
		init = "(_this select 0) spawn SOPFOR_fnc_NoFlySite3km;";
	};
};