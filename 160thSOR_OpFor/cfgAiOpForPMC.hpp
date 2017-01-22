/*
	Name: 160th OpFor AI PMC Mod
	Author: Scooby
	Date: 25/12/16
	Description: cfgAiOpForPMC.hpp 
	
	This is a template for new AI loadouts.
	
	These unit are designed for AI spawns only, they are not suitable as playable units
*/

////////////////////////////////		    
// SOR Enemy AI Faction Units //
////////////////////////////////
class SOR_OPFor_Base_PMC_AI	: SOR_Soldier_base_AI	
{
	scope = 0;
	scopeCurator = 0;
	editorCategory = "SOR_OPFor_Cat_Faction_PMC_AI";
	faction = SOR_OPFor_Faction_PMC_AI;
	uniformClass = "U_BG_Guerilla2_1";		
	displayName = "SOR_OPFor_Base_PMC_AI";
	weapons[] = {"arifle_CTAR_blk_F","hgun_Rook40_F","Throw","Put"};
	respawnWeapons[] = {"arifle_CTAR_blk_F","hgun_Rook40_F","Throw","Put"};
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
	magazines[] = {AI_Standard_Mags_PMC_PMC};
	respawnMagazines[] = {AI_Standard_Mags_PMC};
	linkedItems[] = 
	{
		"H_MilCap_gry",
		"V_TacVestIR_blk",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{
		"H_MilCap_gry",
		"V_TacVestIR_blk",
		Standard_Equipment
	};
};

//Teamleader	
class SOR_OPFor_Teamleader_PMC_AI : SOR_OPFor_Base_PMC_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Team Leader";
	accuracy = 3.5;		
	backpack = "";
	weapons[] = {"160_Opfor_AI_TL_PMC","hgun_Rook40_F","launch_NLAW_F","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"160_Opfor_AI_TL_PMC","hgun_Rook40_F","launch_NLAW_F","Throw","Put","rhs_pdu4"};
	magazines[] = {SL_Mags,"RPG7_F"};
	respawnMagazines[] = {SL_Mags"RPG7_F"};
	Items[] = {};
	RespawnItems[] = {};
	linkedItems[] = 
	{	
		"H_Watchcap_blk",
		"V_PlateCarrier1_blk", 
		"ItemGPS", 
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"H_Watchcap_blk",
		"V_PlateCarrier1_blk", 
		"ItemGPS", 
		Standard_Equipment
	};			
};

/*
//Combat Medics
class SOR_OPFor_Medic_PMC_AI : SOR_OPFor_Base_PMC_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Combat Medic";
	icon = "iconManMedic";
	backpack = "";
	weapons[] = {"160_Opfor_AI_TL_PMC","Throw","Put"};
	respawnWeapons[] = {"160_Opfor_AI_TL_PMC","Throw","Put"};
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
*/

class SOR_OPFor_LMG_PMC_AI : SOR_OPFor_Base_PMC_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "AutoRifleman";
	icon = "iconManMG";	
	backpack = "SOR_OpFor_AR_Pack_PMC_AI";
	weapons[] = {"160_Opfor_AI_LMG_PMC","hgun_Rook40_F","Throw","Put"};
	respawnWeapons[] = {"160_Opfor_AI_LMG_PMC","hgun_Rook40_F","Throw","Put"};
	magazines[] =
	{
		"HandGrenade",
		"HandGrenade",
		"HandGrenade",
		"HandGrenade",		
		"SmokeShell",
		"SmokeShell",
		"100Rnd_580x42_Mag_Tracer_F"
	};
	respawnMagazines[] =
	{
		"HandGrenade",
		"HandGrenade",
		"HandGrenade",
		"HandGrenade",		
		"SmokeShell",
		"SmokeShell",
		"100Rnd_580x42_Mag_Tracer_F"
	};
	linkedItems[] = 
	{
		"H_Watchcap_blk",
		"V_PlateCarrier2_blk",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{
		"H_Watchcap_blk",
		"V_PlateCarrier2_blk",
		Standard_Equipment
	};
};

class SOR_OPFor_Grenadier_PMC_AI : SOR_OPFor_Base_PMC_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	backpack = "";
	weapons[] = {"160_Opfor_AI_GL_PMC","hgun_Rook40_F","Throw","Put"};
	respawnWeapons[] = {"160_Opfor_AI_GL_PMC","hgun_Rook40_F","Throw","Put"};
	magazines[] = 
	{
		AI_GL_Mags_PMC
	};
	respawnMagazines[] = 
	{
		AI_GL_Mags_PMC
	};
};

class SOR_OPFor_Rifleman_PMC_AI : SOR_OPFor_Base_PMC_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	backpack = "";
};					
	
//Heli Pilot & CO-Pilot
class SOR_OPFor_HeliPilot_PMC_AI : SOR_OPFor_Base_PMC_AI
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
	weapons[] = {"hgun_Rook40_F","Throw","Put"};
	respawnWeapons[] = {"hgun_Rook40_F","Throw","Put"};
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

//Recon Units
class SOR_OPFor_ReconLeader_PMC_AI : SOR_OPFor_Base_PMC_AI	
{
	scope = 2;
	scopeCurator = 2;
	uniformClass = "rhs_uniform_vdv_emr";
	displayName = "Recon Lead";
	accuracy = 3.5;
	cost = 500000;
	camouflage = 0.6;
	threat[] = {1.2,0.2,0.2};
	weapons[] = {"160_rhs_weap_ak74m_camo","launch_NLAW_F","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_camo","launch_NLAW_F","Throw","Put","Laserdesignator_02"};
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

class SOR_OPFor_ReconJTAC_PMC_AI : SOR_OPFor_ReconLeader_PMC_AI	
{
	icon =  "iconMan";
	backpack = "tf_mr3000_rhs";
	displayName = "Recon JTAC";	
	weapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};		
};

class SOR_OPFor_ReconRifleman_PMC_AI : SOR_OPFor_ReconLeader_PMC_AI	
{
	icon =  "iconMan";
	displayName = "Recon Rifleman";
	weapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};
	magazines[] = {Recon_Mags};						
	respawnMagazines[] = {Recon_Mags};	
};
