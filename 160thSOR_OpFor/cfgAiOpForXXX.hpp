/*
	Name: 160th OpFor AI XXXX Mod
	Author: XXXXX
	Date: XX/XX/XX
	Description: cfgAiOpForXXX.hpp 
	
	This is a template for new AI loadouts.
	
	These unit are designed for AI spawns only, they are not suitable as playable units
*/

////////////////////////////////		    
// SOR Enemy AI Faction Units //
////////////////////////////////
class SOR_OPFor_Base_XXX_AI	: SOR_Soldier_base_AI	
{
	scope = 0;
	scopeCurator = 0;
	editorCategory = "SOR_OPFor_Cat_Faction_XXX_AI";
	faction = SOR_OPFor_Faction_XXX_AI;
	uniformClass = "rhs_uniform_vdv_emr";		
	displayName = "SOR_OPFor_Base_XXX_AI";
	weapons[] = {"arifle_AKS_F","Throw","Put"};
	respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
	magazines[] = {AI_Standard_Mags};
	respawnMagazines[] = {AI_Standard_Mags};
	linkedItems[] = 
	{
		"rhs_6b28_green",
		"rhs_6b23_digi_6sh92",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{
		"rhs_6b28_green",
		"rhs_6b23_digi_6sh92",
		Standard_Equipment
	};
};

//Teamleader	
class SOR_OPFor_Teamleader_XXX_AI : SOR_OPFor_Base_XXX_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Team Leader";
	accuracy = 3.5;		
	backpack = "";
	weapons[] = {"arifle_AKS_F","launch_RPG7_F","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"arifle_AKS_F","launch_RPG7_F","Throw","Put","rhs_pdu4"};
	magazines[] = {SL_Mags,"RPG7_F"};
	respawnMagazines[] = {SL_Mags"RPG7_F"};
	Items[] = {};
	RespawnItems[] = {};
	linkedItems[] = 
	{	
		"rhs_6b23_digi_6sh92_vog_headset",
		"rhs_6b28", 
		"ItemGPS", 
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_6b23_digi_6sh92_vog_headset",
		"rhs_6b28", 
		"ItemGPS", 
		Standard_Equipment
	};			
};

//Combat Medics
class SOR_OPFor_Medic_XXX_AI : SOR_OPFor_Base_XXX_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Combat Medic";
	icon = "iconManMedic";
	backpack = "";
	weapons[] = {"arifle_AKS_F","Throw","Put"};
	respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};
	linkedItems[] = 
	{	
		"rhs_6b28_green",
		"rhs_6b23_digi_medic",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_6b28_green",
		"rhs_6b23_digi_medic",
		"ItemGPS",
		Standard_Equipment
	};
};

class SOR_OPFor_PKM_XXX_AI : SOR_OPFor_Base_XXX_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "AutoRifleman PKM";
	icon = "iconManMG";	
//Ammo should still work ///////////////
	backpack = "SOR_OpFor_AR_Pack_VDV_AI";
/////////////////////////////////////////
	weapons[] = {"rhs_weap_pkm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
	magazines[] =
	{
		"rhs_mag_rgo",
		"rhs_mag_rgo",
		"rhs_mag_rgo",
		"rhs_mag_rgo",		
		"rhs_mag_rdg2_white",
		"rhs_100Rnd_762x54mmR_green"
	};
	respawnMagazines[] =
	{
		"rhs_mag_rgo",
		"rhs_mag_rgo",
		"rhs_mag_rgo",
		"rhs_mag_rgo",		
		"rhs_mag_rdg2_white",
		"rhs_100Rnd_762x54mmR_green"
	};
	linkedItems[] = 
	{
		"rhs_6b28_green_ess",
		"rhs_6b23_digi",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{
		"rhs_6b28_green_ess",
		"rhs_6b23_digi",
		Standard_Equipment
	};
};

class SOR_OPFor_PKP_XXX_AI : SOR_OPFor_Base_XXX_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "AutoRifleman PKP";
	icon = "iconManMG";	
//Ammo should still work ///////////////
	backpack = "SOR_OpFor_AR_Pack_VDV_AI";
/////////////////////////////////////////
	weapons[] = {"rhs_weap_pkp","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkp","Throw","Put"};
	magazines[] =
	{
		"rhs_mag_rgo",
		"rhs_mag_rgo",		
		"rhs_mag_rdg2_white",
		"rhs_100Rnd_762x54mmR_green"
	};
	respawnMagazines[] =
	{
		"rhs_mag_rgo",
		"rhs_mag_rgo",
		"rhs_mag_rgo",
		"rhs_mag_rgo",		
		"rhs_mag_rdg2_white",
		"rhs_100Rnd_762x54mmR_green"
	};
	linkedItems[] = 
	{
		"rhs_6b28_green_ess",
		"rhs_6b23_digi",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{
		"rhs_6b28_green_ess",
		"rhs_6b23_digi",
		Standard_Equipment
	};
};

class SOR_OPFor_Grenadier_XXX_AI : SOR_OPFor_Base_XXX_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	backpack = "";
	weapons[] = {"160_Opfor_AI_GL","Throw","Put"};
	respawnWeapons[] = {"160_Opfor_AI_GL","Throw","Put"};
	magazines[] = 
	{
		AI_GL_Mags
	};
	respawnMagazines[] = 
	{
		AI_GL_Mags
	};
};

class SOR_OPFor_Rifleman_XXX_AI : SOR_OPFor_Base_XXX_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	backpack = "";
};					
	
//Heli Pilot & CO-Pilot
class SOR_OPFor_HeliPilot_XXX_AI : SOR_OPFor_Base_XXX_AI
{
	scope = 2;
	scopeCurator = 2;
	editorSubcategory = "SOR_OPFor_SubCat_Infantry_AIR";
	vehicleclass = "SOR_OPFor_Infantry_AIR";
	uniformClass = "rhs_uniform_df15";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair 
	displayName = "Heli Pilot";
	backpack = "";
	weapons[] = {"rhs_weap_makarov_pmm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_makarov_pmm","Throw","Put"};
	Items[] = {};  
	RespawnItems[] = {}; 
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
		"rhs_vest_pistol_holster", 
		"rhs_zsh7a_mike",
		"G_Aviator",
		Airborne_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"rhs_vest_pistol_holster", 
		"rhs_zsh7a_mike",
		"G_Aviator",
		Airborne_Equipment
	};
};

//Heli Crew Engineers
class SOR_OPFor_HeliCrew_XXX_AI : SOR_OPFor_HeliPilot_XXX_AI
{
	displayName = "Heli Crew";
	backpack = "";
	weapons[] = {"rhs_weap_ak74m_folded_dtk","rhsusf_weap_m9","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"rhs_weap_ak74m_folded_dtk","rhsusf_weap_m9","Throw","Put","Laserdesignator_02"};
	magazines[] = 
	{
		AI_Std_Pistol,
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		AI_Std_Pistol,
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"Laserbatteries"
	};		
	linkedItems[] = 
	{	
		"rhs_vest_commander", 
		"rhs_zsh7a_mike", 
		Airborne_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"rhs_vest_commander", 
		"rhs_zsh7a_mike", 
		Airborne_Equipment
	};
};

//Jet Pilots
class SOR_OPFor_JetPilot_XXX_AI : SOR_OPFor_HeliPilot_XXX_AI
{
	displayName = "Jet Pilot";		
	backpack = "B_Parachute";
	linkedItems[] = 
	{	
		"rhs_vest_pistol_holster",
		"rhs_zsh7a",
		"G_Aviator",		
		Airborne_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_vest_pistol_holster", 
		"rhs_zsh7a",
		"G_Aviator",		
		Airborne_Equipment
	};
};

// MEV Pilot & CO-Pilot
class SOR_OPFor_MEVPilot_XXX_AI : SOR_OPFor_HeliPilot_XXX_AI
{
	displayName = "MEV Pilot";
};

//Recon Units
class SOR_OPFor_ReconLeader_XXX_AI : SOR_OPFor_Base_XXX_AI	
{
	scope = 2;
	scopeCurator = 2;
	uniformClass = "rhs_uniform_vdv_emr";
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
		"rhs_6b23_digi_6sh92_radio", 
		"rhs_6b28_green_ess_bala", 
		Recon_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"rhs_6b23_digi_6sh92_radio", 
		"rhs_6b28_green_ess_bala", 
		Recon_Equipment
	};	
};

class SOR_OPFor_ReconJTAC_XXX_AI : SOR_OPFor_ReconLeader_XXX_AI	
{
	icon =  "iconMan";
	backpack = "tf_mr3000_rhs";
	displayName = "Recon JTAC";	
	weapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};		
};

class SOR_OPFor_ReconRifleman_XXX_AI : SOR_OPFor_ReconLeader_XXX_AI	
{
	icon =  "iconMan";
	displayName = "Recon Rifleman";
	weapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};
	magazines[] = {Recon_Mags};						
	respawnMagazines[] = {Recon_Mags};	
};

//Mechanised Crew/Driver/Gunner Engineers
class SOR_OPFor_MechCrew_XXX_AI : SOR_OPFor_Base_XXX_AI
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
		"rhs_vest_pistol_holster",
		"rhs_tsh4",
		"G_Balaclava_blk",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_vest_pistol_holster",
		"rhs_tsh4",
		"G_Balaclava_blk",
		"ItemGPS",
		Standard_Equipment
	};
};

class SOR_OPFor_MechOperator_XXX_AI : SOR_OPFor_MechCrew_XXX_AI
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
		"rhs_tsh4_ess", 
		"G_Balaclava_blk",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_vydra_3m",
		"rhs_tsh4_ess", 
		"G_Balaclava_blk",
		"ItemGPS",
		Standard_Equipment
	};
};

class SOR_OPFor_MechCrewCommander_XXX_AI : SOR_OPFor_MechOperator_XXX_AI
{
	displayName = "Mechanised Crew Commander";
	backpack = "SOR_OPFor_Mech_Radio";
	cost = 100000;
};	

class SOR_OPFor_MechDriver_XXX_AI : SOR_OPFor_MechCrew_XXX_AI
{
	displayName = "Mechanised Driver";
// Standard backpack///////////////////////	
	backpack = "SOR_OPFor_Repair_Pack_VDV";
///////////////////////////////////////////	
};	

//HMG Team
class SOR_OPFor_HMGActual_XXX_AI : SOR_OPFor_Teamleader_XXX_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Actual";
	icon =  "iconManLeader";
	backpack = "tf_mr3000_rhs";
};

class SOR_OPFor_HMGGunner_XXX_AI : SOR_OPFor_Rifleman_XXX_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Gunner";
	backpack = "RHS_DShkM_Gun_Bag";
};	

class SOR_OPFor_HMGCarrier_XXX_AI : SOR_OPFor_Rifleman_XXX_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Carrier";
	backpack = "RHS_DShkM_TripodLow_Bag";
};

class SOR_OPFor_HMGRFL_XXX_AI : SOR_OPFor_Grenadier_XXX_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Rifleman M320";
// Same ammo should be used////////////////////////	
	backpack = "SOR_OPFor_GD_Pack_VDV";
//////////////////////////////////////////////////	
};	

//Mortar Team
class SOR_OPFor_MORActual_XXX_AI : SOR_OPFor_Teamleader_XXX_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Actual";
	backpack = "tf_mr3000_rhs";
};

class SOR_OPFor_MORGunner_XXX_AI : SOR_OPFor_Rifleman_XXX_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Gunner";
	backpack = "RHS_Podnos_Gun_Bag";
};	

class SOR_OPFor_MORCarrier_XXX_AI : SOR_OPFor_Rifleman_XXX_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Carrier";
	backpack = "RHS_Podnos_Bipod_Bag";
};

class SOR_OPFor_MORRFL_XXX_AI : SOR_OPFor_Grenadier_XXX_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Rifleman M320";
// Same ammo should be used////////////////////////	
	backpack = "SOR_OPFor_GD_Pack_VDV";
//////////////////////////////////////////////////	
};		


//Repair Team
class SOR_OPFor_Engineer_XXX_AI : SOR_OPFor_Base_XXX_AI
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
