/*
	Name: The_Fourth_Reich Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgAircraft.hpp
*/


class sfp_bo105_pah1;
class sfp_bo105_rmp;
class O_Plane_Fighter_02_Stealth_F;
class B_T_VTOL_01_armed_F;
class B_T_VTOL_01_vehicle_F;
class B_T_VTOL_01_infantry_F;

class Nazi_Bo105_Armed : sfp_bo105_pah1
{
    displayName = "Reich BO105 PAH1";
	side = 0;
	faction = "the_fourth_reich";
	crew="Reich_Pilot";
	typicalCargo[]=	{"Reich_Pilot"};
	class TransportItems 
	{

	};
	class TransportWeapons
	{

	};
	class TransportMagazines
	{

	};
	class TransportBackpacks
	{
		
	};
};

class Nazi_Bo105_rpm: sfp_bo105_rmp
{
    displayName = "Reich BO105 RMP 250 ";
	side = 0;
	faction = "the_fourth_reich";
	crew="Reich_Pilot";
	typicalCargo[]=	{"Reich_Pilot"};
	weapons[] = {"sfp_hmp250","sfp_hydraPod"};

	class TransportItems 
	{

	};
	class TransportWeapons
	{

	};
	class TransportMagazines
	{

	};
	class TransportBackpacks
	{
		
	};
};
class Nazi_Fighter: O_Plane_Fighter_02_Stealth_F
{
    displayName = "Nazi Fighter ";
	side = 0;
	faction = "the_fourth_reich";
	crew="Reich_Pilot";
	model = "A3\Air_F_Jets\Plane_Fighter_02\Plane_Fighter_02_F.p3d";
	textureList[]={"CamoBlue",1};
	hiddenSelectionsTextures[] = {"a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Grey_co.paa", "a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_02_Grey_co.paa", "a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Grey_co.paa", "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa", "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa", "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa","a3\data_f\clear_empty.paa"};
};
class Nazi_Gunship: B_T_VTOL_01_armed_F
{
    displayName = "Reich VTOL Gunship";
	side = 0;
	faction = "the_fourth_reich";
	crew="Reich_Pilot";
	armorStructural = 4;
	hiddenSelections[] = 
	{
		"Camo_1",
		"Camo_2",
		"Camo_3",
		"Camo_4",
	};
	hiddenSelectionsTextures[] = 
	{
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT01.paa",
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT02.paa",
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT03.paa",
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT04.paa"
	};
};
class Nazi_VTOL_Transport: B_T_VTOL_01_infantry_F
{
    displayName = "Reich VTOL INF Transport";
	side = 0;
	faction = "the_fourth_reich";
	crew="Reich_Pilot";
	armorStructural = 4;
	hiddenSelections[] = 
	{
		"Camo_1",
		"Camo_2",
		"Camo_3",
		"Camo_4",
	};
	hiddenSelectionsTextures[] = 
	{
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT01.paa",
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT02.paa",
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT03.paa",
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT04.paa"
	};
};
class Nazi_VTOL_Transport2: B_T_VTOL_01_vehicle_F
{
    displayName = "Reich VTOL VEH Transport";
	side = 0;
	faction = "the_fourth_reich";
	crew="Reich_Pilot";
	armorStructural = 4;
	hiddenSelections[] = 
	{
		"Camo_1",
		"Camo_2",
		"Camo_3",
		"Camo_4",
	};
	hiddenSelectionsTextures[] = 
	{
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT01.paa",
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT02.paa",
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT03.paa",
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT04.paa"
	};
};