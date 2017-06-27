/*
	Name: 160th SOR Mod
	Author: Scooby, Yettie
	Date: 25/03/16
	Description: cfgPatches.hpp
*/

class CfgPatches 
{
	class SOR_OpFor_Loadouts 
	{
		author="160th SOR";
		url="http://www.160th.net";		
		units[] = 
		{
			#include "4th_Reich\cfgPatches.hpp"
			#include "Rus_VDV\cfgPatches.hpp"
		};
		weapons[] = 
		{
			"160_rhs_weap_ak74m_pkas",
			"160_rhs_weap_ak74m_gp25_dtk",
			"160_rhs_weap_ak74m_camo",
			"160_rhs_weap_ak74m_1p63"
		};
		version="1.1.0";
		requiredAddons[] = 
		{
			"160th_SOR_Loadouts",
			"a3_characters_F",
			"a3_characters_F_beta",
			"A3_Characters_F_Common",
			"task_force_radio_items",
			"a3_characters_f_beta",
			"a3_characters_f_gamma",
			"rhs_weapons",
			"rhs_weapons2",
			"rhs_weapons3",
			"rhsusf_weapons",
			"rhsusf_weapons2",
			"rhsusf_weapons3",
			"rhs_infantry",
			"rhs_infantry2",
			"rhsusf_infantry",
			"rhsusf_infantry2",
			"rhsgref_infantry",
			"rhsgref_c_weapons",
			"sfp_bo105",
			"Smillbrit_mod"			
		};
	};
};
