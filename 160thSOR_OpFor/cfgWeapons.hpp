/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 25/03/16
	Description: cfgWeapons.hpp
*/

class cfgWeapons 
{

	class rhs_weap_ak74m_pkas;
	class rhs_weap_ak74m_gp25_dtk;
	class rhs_weap_ak74m_camo;
	
	class 160_rhs_weap_ak74m_pkas: rhs_weap_ak74m_pkas 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "rhs_acc_1p78";
				slot = "CowsSlot";
			};
		};
	};	

	class 160_rhs_weap_ak74m_gp25_dtk: rhs_weap_ak74m_gp25_dtk 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "rhs_acc_1p78";
				slot = "CowsSlot";
			};
		};
	};		
	
	class 160_rhs_weap_ak74m_camo: rhs_weap_ak74m_camo 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "rhs_acc_1p29";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "rhs_acc_tgpa";
				slot = "MuzzleSlot";
			};
		};
	};	
	
	
	
/*	
	
	class 160_rhs_weap_sr25: rhs_weap_sr25_ec 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "rhsusf_acc_LEUPOLDMK4_2";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "rhsusf_acc_anpeq15side";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "rhsusf_acc_SR25S";
				slot = "MuzzleSlot";
			};
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_harris_bipod";
				slot = "UnderBarrelSlot";
			};			
		};
	};	
*/
};
