/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 12/07/17
	Description: cfgVehicles.hpp
*/

class Land_Radar_Small_F;
class Land_Barracks_01_grey_F;

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

class SOR_Land_HelipadCircle_F  : Land_Barracks_01_grey_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Reich Barracks (R:1K,A:600,S:80)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 40, 1000, 600, configfile >> 'CfgGroups' >> 'East' >> 'reich_groups' >> 'Infantry' >> 'the_fourth_reich_FT_2']  execvm '160thSOR_OpFor\functions\fn_buildingSpawn.sqf';";
	};
};