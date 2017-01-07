/*
	Name: 160th OpFor AI Takistan Mod
	Author: Elliot Beckett
	Date: 02/01/17
	Description: cfgAiOpForTaki.hpp 
	
	These unit are designed for AI spawns only, they are not suitable as playable units
*/

////////////////////////////////		    
// SOR Enemy AI Faction Units //
////////////////////////////////
class SOR_OPFor_Base_Taki_AI	: SOR_Soldier_base_IND_AI	
{
	scope = 0;
	scopeCurator = 0;
	editorCategory = "SOR_OPFor_Cat_Faction_Taki_AI";
	faction = SOR_OPFor_Faction_Taki_AI;
	identityTypes[] =  {"LanguagePER_F","Head_TK","Head_Tanoan","G_GUERIL_default"};// Added to make AI more "Middle Eastern" with a random mix
	genericNames = "TakistaniMen";
	uniformClass = "U_I_C_Soldier_Para_4_F";		
	displayName = "SOR_OPFor_Base_Taki_AI";
	weapons[] = {"arifle_AKS_F","Throw","Put"};
	respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
	magazines[] = {AI_Standard_Mags};
	respawnMagazines[] = {AI_Standard_Mags};
	linkedItems[] = 
	{
		
		"V_BandollierB_cbr",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{
		
		"V_BandollierB_cbr",
		Standard_Equipment
	};
};

//Teamleader	
class SOR_OPFor_Teamleader_Taki_AI : SOR_OPFor_Base_Taki_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Team Leader";
	accuracy = 3.5;	
	uniform = "U_I_C_Soldier_Para_5_F";
	backpack = "";
	weapons[] = {"160_Opfor_AI_TL_Taki","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"160_Opfor_AI_TL_Taki","Throw","Put","rhs_pdu4"};
	magazines[] = {SL_Mags_Taki};
	respawnMagazines[] = {SL_Mags_Taki};
	Items[] = {};
	RespawnItems[] = {};
	linkedItems[] = 
	{	
		"H_ShemagOpen_tan",
		"V_BandollierB_rgr", 
		"ItemGPS", 
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"H_ShemagOpen_tan",
		"V_BandollierB_rgr",
		"ItemGPS", 
		Standard_Equipment
	};			
};

//Combat Medics
class SOR_OPFor_Medic_Taki_AI : SOR_OPFor_Base_Taki_AI
{
	scope = 2;
	scopeCurator = 2;
	uniformClass = "U_IG_Guerilla1_1";
	displayName = "Combat Medic";
	icon = "iconManMedic";
	backpack = "";
	weapons[] = {"arifle_AKS_F","Throw","Put"};
	respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};
	linkedItems[] = 
	{	
		"V_TacVest_brn",
		"H_Cap_tan",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"V_TacVest_brn",
		"H_Cap_tan",
		"ItemGPS",
		Standard_Equipment
	};
};

class SOR_OPFor_PKM_Taki_AI : SOR_OPFor_Base_Taki_AI
{
	scope = 2;
	scopeCurator = 2;
	uniformClass = "U_I_C_Soldier_Bandit_5_F";
	displayName = "AutoRifleman PKM";
	icon = "iconManMG";	
//Ammo should still work ///////////////
	backpack = "SOR_OpFor_AR_Pack_C_Taki_AI";
/////////////////////////////////////////
	weapons[] = {"rhs_weap_pkm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
	magazines[] =
	{

		"HandGrenade", 
		"HandGrenade", 
		"SmokeShell", 
		"rhs_100Rnd_762x54mmR_green"
	};
	respawnMagazines[] =
	{

		"HandGrenade", 
		"HandGrenade", 
		"SmokeShell", 
		"rhs_100Rnd_762x54mmR_green"
	};
	linkedItems[] = 
	{
		"V_TacVest_brn",
		"H_Booniehat_tan",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{
		"V_TacVest_brn",
		"H_Booniehat_tan",
		Standard_Equipment
	};
};

class SOR_OPFor_PKP_Taki_AI : SOR_OPFor_Base_Taki_AI
{
	scope = 2;
	scopeCurator = 2;
	uniformClass = "U_I_C_Soldier_Bandit_1_F";
	displayName = "AutoRifleman PKP";
	icon = "iconManMG";	
//Ammo should still work ///////////////
	backpack = "SOR_OpFor_AR_Pack_C_Taki_AI";
/////////////////////////////////////////
	weapons[] = {"rhs_weap_pkp","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkp","Throw","Put"};
	magazines[] =
	{

		"HandGrenade", 
		"HandGrenade", 
		"SmokeShell", 
		"rhs_100Rnd_762x54mmR_green"
	};
	respawnMagazines[] =
	{
		"HandGrenade", 
		"HandGrenade", 
		"SmokeShell", 
		"rhs_100Rnd_762x54mmR_green"
	};
	linkedItems[] = 
	{
		"rhs_6b28_green",
		"V_HarnessO_brn",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{
		"rhs_6b28_green",
		"V_HarnessO_brn",
		Standard_Equipment
	};
};

class SOR_OPFor_Grenadier_Taki_AI : SOR_OPFor_Base_Taki_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	uniformClass = "U_I_C_Soldier_Bandit_2_F";
	backpack = "";
	weapons[] = {"160_Opfor_AI_GL_PMC","launch_RPG7_F","Throw","Put"};
	respawnWeapons[] = {"160_Opfor_AI_GL_PMC","launch_RPG7_F","Throw","Put"};
	magazines[] = {"RPG7_F",AI_GL_Mags_PMC};
	respawnMagazines[] = {"RPG7_F",AI_GL_Mags_PMC};
	linkedItems[] = 
	{
		"H_Beret_blk",
		"rhsusf_iotv_ocp_Grenadier",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{
		"H_Beret_blk",
		"rhsusf_iotv_ocp_Grenadier",
		Standard_Equipment
	};
};

class SOR_OPFor_Rifleman_Taki_AI : SOR_OPFor_Base_Taki_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	backpack = "";
};					
	
//Heli Pilot & CO-Pilot
class SOR_OPFor_Pilot_Taki_AI : SOR_OPFor_Base_Taki_AI
{
	scope = 2;
	scopeCurator = 2;
	editorSubcategory = "SOR_OPFor_SubCat_Infantry_AIR";
	vehicleclass = "SOR_OPFor_Infantry_AIR";
	uniformClass = "U_IG_Guerrilla_6_1";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair 
	displayName = "Pilot";
	backpack = "B_Parachute";
	weapons[] = {"rhs_weap_makarov_pmm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_makarov_pmm","Throw","Put"};
	Items[] = {Standard_Meds};  
	RespawnItems[] = {Standard_Meds}; 
	magazines[] = 
	{
		AI_Std_Pistol,
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		AI_Std_Pistol,
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white"
	};	
	linkedItems[] = 
	{	
		"rhs_vest_commander", 
		"rhs_zsh7a_mike",
		"G_Aviator",
		Airborne_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"rhs_vest_commander", 
		"rhs_zsh7a_mike",
		"G_Aviator",
		Airborne_Equipment
	};
};



//Recon Units
class SOR_OPFor_ReconLeader_Taki_AI : SOR_OPFor_Base_Taki_AI	
{
	scope = 2;
	scopeCurator = 2;
	uniformClass = "U_I_C_Soldier_Bandit_1_F";
	displayName = "Recon Lead";
	accuracy = 3.5;
	cost = 500000;
	camouflage = 0.6;
	threat[] = {1.2,0.2,0.2};
	weapons[] = {"160_rhs_weap_ak74m_camo","launch_RPG7_F","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_camo","launch_RPG7_F","Throw","Put","Laserdesignator_02"};
	Items[] = {Recon_Equip,Recon_Meds};                
	RespawnItems[] = {Recon_Equip,Recon_Meds};   
	magazines[] = {Recon_Mags,"Laserbatteries","RPG7_F"};
	respawnMagazines[] = {Recon_Mags,"Laserbatteries","RPG7_F"};
	linkedItems[] = 
	{	
		"rhs_6b23_ML_sniper", 
		"H_Bandanna_khk_hs", 
		"G_Bandanna_oli",
		Recon_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"rhs_6b23_ML_sniper", 
		"H_Bandanna_khk_hs", 
		"G_Bandanna_oli",
		Recon_Equipment
	};	
};

class SOR_OPFor_ReconJTAC_Taki_AI : SOR_OPFor_ReconLeader_Taki_AI	
{
	icon =  "iconMan";
	backpack = "tf_mr3000_rhs";
	displayName = "Recon JTAC";	
	weapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};		
};

class SOR_OPFor_ReconRifleman_Taki_AI : SOR_OPFor_ReconLeader_Taki_AI	
{
	icon =  "iconMan";
	displayName = "Recon Rifleman";
	weapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};
	magazines[] = {Recon_Mags};						
	respawnMagazines[] = {Recon_Mags};	
};

class SOR_OPFor_Sniper_Taki_AI : SOR_OPFor_ReconLeader_Taki_AI
{
	uniformClass = "U_IG_Guerilla2_3";
	displayName = "Sniper";
	weapons[] = {"160_Opfor_AI_SP_Taki","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"160_Opfor_AI_SP_Taki","Throw","Put","rhs_pdu4"};
	magazines[] = {SP_Mags_Taki,"Laserbatteries"};
	respawnMagazines[] = {SP_Mags_Taki,"Laserbatteries"};
	linkedItems[]=
	{
		"V_Chestrig_oli",
		"H_ShemagOpen_khk",
		Recon_Equipment
	};
	respawnLinkedItems[]=
	{
		"V_Chestrig_oli",
		"H_ShemagOpen_khk",
		Recon_Equipment
	};
	
};

//Mechanised Crew/Driver/Gunner Engineers
class SOR_OPFor_MechCrew_Taki_AI : SOR_OPFor_Base_Taki_AI
{
	scope = 2;
	scopeCurator = 2;
	editorSubcategory = "SOR_OPFor_SubCat_Infantry_MECH";
	vehicleclass = "SOR_OPFor_Infantry_MECH";
	displayName = "Mechanised Gunner";
	backpack = "";
	weapons[] = {"rhs_weap_makarov_pmm","Throw", "Put"};
	respawnWeapons[] = {"rhs_weap_makarov_pmm","Throw", "Put"};
	magazines[] = {AI_Std_Pistol};
	respawnMagazines[] = {AI_Std_Pistol};
	Items[] = {Standard_Meds};  
	RespawnItems[] = {Standard_Meds};  
	linkedItems[] = 
	{	
		"rhs_vydra_3m",
		"H_Cap_marshal",
		"G_Lowprofile",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_vydra_3m",
		"H_Cap_marshal",
		"G_Lowprofile",
		"ItemGPS",
		Standard_Equipment
	};
};

class SOR_OPFor_MechOperator_Taki_AI : SOR_OPFor_MechCrew_Taki_AI
{
	displayName = "Mechanised Operator";
	backpack = "SOR_OPFor_Mech_Radio";
	weapons[] = {"rhs_weap_ak74m_folded_dtk","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"rhs_weap_ak74m_folded_dtk","Throw","Put","Laserdesignator_02"};
	magazines[] = 	
	{
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"Laserbatteries",
		AI_Std_Pistol
	};						
	respawnMagazines[] =
	{
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"Laserbatteries",
		AI_Std_Pistol
	};
	linkedItems[] = 
	{	
		"rhs_vydra_3m",
		"H_Cap_marshal",
		"G_Lowprofile",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_vydra_3m",
		"H_Cap_marshal",
		"G_Lowprofile",
		"ItemGPS",
		Standard_Equipment
	};
};

class SOR_OPFor_MechCrewCommander_Taki_AI : SOR_OPFor_MechOperator_Taki_AI
{
	displayName = "Mechanised Crew Commander";
	backpack = "SOR_OPFor_Mech_Radio";
	cost = 100000;
};	

class SOR_OPFor_MechDriver_Taki_AI : SOR_OPFor_MechCrew_Taki_AI
{
	displayName = "Mechanised Driver";
// Standard backpack///////////////////////	
	backpack = "SOR_OPFor_Repair_Pack_VDV";
///////////////////////////////////////////	
};	

//HMG Team
class SOR_OPFor_HMGActual_Taki_AI : SOR_OPFor_Teamleader_Taki_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Actual";
	uniformClass = "U_I_C_Soldier_Bandit_3_F";
	icon =  "iconManLeader";
	backpack = "tf_mr3000_rhs";
	linkedItems[] = 
	{	
		"rhsusf_bowman_cap",
		"V_TacChestrig_grn_F", 
		"ItemGPS", 
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_bowman_cap",
		"V_TacChestrig_grn_F",
		"ItemGPS", 
		Standard_Equipment
	};	
};
class SOR_OPFor_HMGGunner_Taki_AI : SOR_OPFor_Rifleman_Taki_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Gunner";
	uniformClass = "U_I_C_Soldier_Bandit_3_F";
	backpack = "RHS_DShkM_Gun_Bag";
	linkedItems[] = 
	{	
		"rhs_6sh46",
		"H_Cap_surfer",  
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_6sh46",
		"H_Cap_surfer", 
		Standard_Equipment
	};
};	

class SOR_OPFor_HMGCarrier_Taki_AI : SOR_OPFor_Rifleman_Taki_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Carrier";
		backpack = "RHS_DShkM_TripodLow_Bag";
	linkedItems[] = 
	{	
		"rhsusf_bowman_cap",
		"V_TacChestrig_grn_F",  
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_bowman_cap",
		"V_TacChestrig_grn_F",
		Standard_Equipment
	};
};

class SOR_OPFor_HMGRFL_Taki_AI : SOR_OPFor_Grenadier_Taki_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Rifleman M320";
// Same ammo should be used////////////////////////	
	backpack = "SOR_OPFor_GD_Pack_VDV";
//////////////////////////////////////////////////	

};	

//Mortar Team
class SOR_OPFor_MORActual_Taki_AI : SOR_OPFor_Teamleader_Taki_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Actual";
	backpack = "tf_mr3000_rhs";
};

class SOR_OPFor_MORGunner_Taki_AI : SOR_OPFor_Rifleman_Taki_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Gunner";
	backpack = "RHS_Podnos_Gun_Bag";
};	

class SOR_OPFor_MORCarrier_Taki_AI : SOR_OPFor_Rifleman_Taki_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Carrier";
	backpack = "RHS_Podnos_Bipod_Bag";
};

class SOR_OPFor_MORRFL_Taki_AI : SOR_OPFor_Grenadier_Taki_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Rifleman M320";
// Same ammo should be used////////////////////////	
	backpack = "SOR_OPFor_GD_Pack_VDV";
//////////////////////////////////////////////////	
};		


//Repair Team
class SOR_OPFor_Engineer_Taki_AI : SOR_OPFor_Base_Taki_AI
{
	editorSubcategory = "SOR_OPFor_SubCat_Infantry_Support";
	vehicleclass = "SOR_OPFor_Infantry_Support";
// Same backpack should be used/////////////	
	backpack = "SOR_OPFor_Repair_Pack_VDV";
////////////////////////////////////////////	
	weapons[] = {"Throw", "Put"};
	respawnWeapons[] = {"Throw", "Put"};
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
	magazines[] = {};
	respawnMagazines[] = {};	
};	
