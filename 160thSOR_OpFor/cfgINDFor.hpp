/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 25/03/16
	Description: cfgINDForVdv.hpp
*/

//////////////////////		
//Base Soldier Class//
//////////////////////

class I_Soldier_base_F;

////////////////////////////		    
//SOR Enemy Faction Units//
////////////////////////////
class SOR_INDfor_Base : I_Soldier_base_F	
{
	scope = 0;
	scopeCurator = 0;
	editorCategory = "SOR_INDfor_Cat_Faction";
	editorSubcategory = "SOR_INDfor_SubCat_Infantry";
	vehicleclass = "SOR_INDfor_Infantry";
	faction = SOR_INDfor_Faction;
	uniformClass = "rhs_uniform_vdv_emr";		
	displayName = "SOR_INDfor_Base";
	weapons[] = {"160_rhs_weap_ak74m_pkas","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_pkas","Throw","Put"};
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
	magazines[] = {Standard_Mags};
	respawnMagazines[] = {Standard_Mags};
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

//Commander		
class SOR_INDfor_Commander : SOR_INDfor_Base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Havoc Commander";
	accuracy = 3.5;
	icon = "iconManOfficer";
	backpack = "tf_mr3000_rhs";
	weapons[] = {"160_rhs_weap_ak74m_1p63","rhs_weap_makarov_pmm","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_1p63","rhs_weap_makarov_pmm","Throw","Put","Laserdesignator_02"};
	Items[] = {Standard_Meds,SL_Equip};  
	RespawnItems[] = {Standard_Meds,SL_Equip};  
	magazines[] = {Standard_Mags,Std_Pistol,"Laserbatteries"};
	respawnMagazines[] = {Standard_Mags,Std_Pistol,"Laserbatteries"};
	linkedItems[] = 
	{
		"rhs_fieldcap_digi",
		"rhs_vest_commander",
		"ItemGPS", 
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{
		"rhs_fieldcap_digi",
		"rhs_vest_commander",
		"ItemGPS", 
		Standard_Equipment
	};
};

//Mechanised Commander 
class SOR_INDfor_MechCommand : SOR_INDfor_Commander
{
	editorSubcategory = "SOR_INDFor_SubCat_Infantry_MECH";
	vehicleclass = "SOR_INDFor_Infantry_MECH";
	displayName = "Mechanised Commander";
	linkedItems[] = 
	{	
		"rhs_tsh4",
		"G_Balaclava_blk",
		"rhs_vest_commander",
		"ItemGPS", 
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{
		"rhs_tsh4",
		"G_Balaclava_blk",
		"rhs_vest_commander",
		"ItemGPS", 
		Standard_Equipment
	};
};	

//Air Commander 
class SOR_INDfor_AirCommand : SOR_INDfor_Commander
{
	editorSubcategory = "SOR_INDfor_SubCat_Infantry_AIR";
	vehicleclass = "SOR_INDfor_Infantry_AIR";
	displayName = "Airborne Commander";
	backpack = "tf_mr6000l";		
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair 
	weapons[] = {"rhs_weap_makarov_pmm","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"rhs_weap_makarov_pmm","Throw","Put","Laserdesignator_02"};
	magazines[] = {Std_Pistol,"Laserbatteries"};
	respawnMagazines[] = {Std_Pistol,"Laserbatteries"};
	linkedItems[] = 
	{	
		"rhs_vest_pistol_holster", 
		"rhs_zsh7a_mike",
		"G_Aviator",
		"ItemGPS", 
		Airborne_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"rhs_vest_pistol_holster", 
		"rhs_zsh7a_mike",
		"G_Aviator",
		"ItemGPS", 
		Airborne_Equipment
	};
};	

//Squad Actual	
class SOR_INDfor_Actual : SOR_INDfor_Commander
{
	displayName = "Squad Actual";
	backpack = "tf_mr3000_rhs";
	linkedItems[] = 
	{	
		"rhs_6b23_digi_6sh92_headset_mapcase",
		"rhs_6b28", 
		"ItemGPS", 
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_6b23_digi_6sh92_headset_mapcase",
		"rhs_6b28", 
		"ItemGPS", 
		Standard_Equipment
	};
};


//Platoon RTO
class SOR_INDfor_RTO : SOR_INDfor_Actual
{
	displayName = "RTO";
	backpack = "SOR_OPFor_RTO_Pack_VDV";
	weapons[] = {"160_rhs_weap_ak74m_gp25_dtk","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_gp25_dtk","Throw","Put","Laserdesignator_02"};
	magazines[] = {Standard_Mags,"Laserbatteries"};
	respawnMagazines[] = {Standard_Mags,"Laserbatteries"};
	linkedItems[] = 
	{	
		"rhs_6b23_digi_6sh92_vog",
		"rhs_6b28", 
		"ItemGPS", 
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_6b23_digi_6sh92_vog",
		"rhs_6b28", 
		"ItemGPS", 
		Standard_Equipment
	};		
};


//Teamleader	
class SOR_INDfor_Teamleader : SOR_INDfor_Base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Team Leader";
	accuracy = 3.5;		
	backpack = "rhs_assault_umbts";
	weapons[] = {"160_rhs_weap_ak74m_pkas","rhs_weap_makarov_pmm","rhs_weap_rpg26","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_pkas","rhs_weap_makarov_pmm","rhs_weap_rpg26","Throw","Put","rhs_pdu4"};
	magazines[] = {SL_Mags,Std_Pistol};
	respawnMagazines[] = {SL_Mags,Std_Pistol};
	Items[] = {Standard_Meds,SL_Equip};
	RespawnItems[] = {Standard_Meds,SL_Equip};
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
class SOR_INDfor_Medic : SOR_INDfor_Base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Combat Medic";
	icon = "iconManMedic";
	backpack = "SOR_OPFor_Medic_Pack_VDV";
	weapons[] = {"160_rhs_weap_ak74m_1p63","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_1p63","Throw","Put"};
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

class SOR_INDfor_PKM : SOR_INDfor_Base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "AutoRifleman PKM";
	icon = "iconManMG";	
	backpack = "SOR_OpFor_AR_Pack_VDV";
	weapons[] = {"rhs_weap_pkm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
	magazines[] =
	{
		"rhs_mag_rgo",
		"rhs_mag_rgo",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_100Rnd_762x54mmR_green"
	};
	respawnMagazines[] =
	{
		"rhs_mag_rgo",
		"rhs_mag_rgo",
		"rhs_mag_rdg2_white",
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

class SOR_INDfor_PKP : SOR_INDfor_Base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "AutoRifleman PKP";
	icon = "iconManMG";	
	backpack = "SOR_OPFor_PKP_Pack_VDV";
	weapons[] = {"rhs_weap_pkp","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkp","Throw","Put"};
	magazines[] =
	{
		"rhs_mag_rgo",
		"rhs_mag_rgo",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_100Rnd_762x54mmR_green"
	};
	respawnMagazines[] =
	{
		"rhs_mag_rgo",
		"rhs_mag_rgo",
		"rhs_mag_rdg2_white",
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

class SOR_INDfor_Grenadier : SOR_INDfor_Base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	backpack = "SOR_OPFor_GD_Pack_VDV";
	weapons[] = {"160_rhs_weap_ak74m_gp25_dtk","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_gp25_dtk","Throw","Put"};
	magazines[] = 
	{
		Standard_Mags
	};
	respawnMagazines[] = 
	{
		Standard_Mags
	};
};

class SOR_INDfor_Rifleman : SOR_INDfor_Base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman AT Ammo Bearer (PKP)";
	backpack = "SOR_OPFor_Rifleman_Pack_VDV";
};					

class SOR_INDfor_Rilfeman_Ammo : SOR_INDfor_Base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman Ammo Bearer (PKM)";
	backpack = "SOR_OPFor_Rifleman_Ammo_Pack_VDV";
};
	
//Heli Pilot & CO-Pilot
class SOR_INDfor_HeliPilot : SOR_INDfor_Base
{
	scope = 2;
	scopeCurator = 2;
	editorSubcategory = "SOR_INDfor_SubCat_Infantry_AIR";
	vehicleclass = "SOR_INDfor_Infantry_AIR";
	uniformClass = "rhs_uniform_df15";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair 
	displayName = "Heli Pilot";
	backpack = "";
	weapons[] = {"rhs_weap_makarov_pmm","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"rhs_weap_makarov_pmm","Throw","Put","Laserdesignator_02"};
	Items[] = {Standard_Meds,SL_Equip};  
	RespawnItems[] = {Standard_Meds,SL_Equip}; 
	magazines[] = 
	{
		Std_Pistol,
		"Laserbatteries",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		Std_Pistol,
		"Laserbatteries",
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
class SOR_INDfor_HeliCrew : SOR_INDfor_HeliPilot
{
	displayName = "Heli Crew";
	backpack = "";
	weapons[] = {"rhs_weap_ak74m_folded_dtk","rhsusf_weap_m9","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"rhs_weap_ak74m_folded_dtk","rhsusf_weap_m9","Throw","Put","Laserdesignator_02"};
	magazines[] = 
	{
		Std_Pistol,
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		Std_Pistol,
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
class SOR_INDfor_JetPilot : SOR_INDfor_HeliPilot
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
class SOR_INDfor_MEVPilot : SOR_INDfor_HeliPilot
{
	displayName = "MEV Pilot";
};

class SOR_INDfor_ParaJumper : SOR_INDfor_Medic
{
	editorSubcategory = "SOR_INDfor_SubCat_Infantry_AIR";
	vehicleclass = "SOR_INDfor_Infantry_AIR";
	displayName = "Para Jumper";
	backpack = "SOR_OPFor_PJMedicPack_VDV";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair 		
	weapons[] = {"160_rhs_weap_ak74m_1p63","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_1p63","Throw","Put","Laserdesignator_02"};
	magazines[] = {Standard_Mags,"Laserbatteries"};
	respawnMagazines[] = {Standard_Mags,"Laserbatteries"};
	Items[] = {Standard_Meds,SL_Equip};  
	RespawnItems[] = {Standard_Meds,SL_Equip};  
	linkedItems[] = 
	{	
		"rhs_6b28_green",
		"rhs_6b23_digi_medic",
		"rhs_acc_1p78",
		Airborne_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_6b28_green",
		"rhs_6b23_digi_medic",
		"rhs_acc_1p78",
		Airborne_Equipment
	};
	class UserActions
	{
		class SOR_HALO
		{
			displayName = "<t color='#FF0000'>HALO</t>";
			displayNameDefault = "<t color='#FF0000'>HALO</t>";
			condition = "((getPosATL player) select 2 > 50) && SOR_ParaJump_Active && !((surfaceIsWater getPos player) && ((getPosASL player) select 2 < 1))";
			priority = 8;
			showWindow = 1;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 1;
			statement = "[this] spawn SOR_Opfor_fnc_parajump; SOR_ParaJump_Active = false;";
		};
	};
};

//Recon Units
class SOR_INDfor_ReconLeader : SOR_INDfor_Base	
{
	scope = 2;
	scopeCurator = 2;
	uniformClass = "rhs_uniform_vdv_emr";
	displayName = "Recon Lead";
	accuracy = 3.5;
	cost = 500000;
	camouflage = 0.6;
	threat[] = {1.2,0.2,0.2};
	weapons[] = {"160_rhs_weap_ak74m_camo","rhs_weap_rpg26","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_camo","rhs_weap_rpg26","Throw","Put","Laserdesignator_02"};
	Items[] = {Recon_Equip,Recon_Meds};                
	RespawnItems[] = {Recon_Equip,Recon_Meds};   
	magazines[] = {Recon_Mags,"Laserbatteries"};
	respawnMagazines[] = {Recon_Mags,"Laserbatteries"};
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
	class UserActions
	{
		class SOR_HALO
		{
			displayName = "<t color='#FF0000'>HALO</t>";
			displayNameDefault = "<t color='#FF0000'>HALO</t>";
			condition = "((getPosATL player) select 2 > 50) && SOR_ParaJump_Active && !((surfaceIsWater getPos player) && ((getPosASL player) select 2 < 1))";
			priority = 8;
			showWindow = 1;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 1;
			statement = "[this] spawn SOR_Opfor_fnc_parajump; SOR_ParaJump_Active = false;";
		};
	};		
};

class SOR_INDfor_ReconJTAC : SOR_INDfor_ReconLeader	
{
	icon =  "iconMan";
	backpack = "tf_mr3000_rhs";
	displayName = "Recon JTAC";	
	weapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};		
};

class SOR_INDfor_ReconRifleman : SOR_INDfor_ReconLeader	
{
	icon =  "iconMan";
	displayName = "Recon Rifleman";
	weapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};
	magazines[] = {Recon_Mags};						
	respawnMagazines[] = {Recon_Mags};	
};

//Mechanised Crew/Driver/Gunner Engineers
class SOR_INDfor_MechCrew : SOR_INDfor_Base
{
	scope = 2;
	scopeCurator = 2;
	editorSubcategory = "SOR_INDfor_SubCat_Infantry_MECH";
	vehicleclass = "SOR_INDfor_Infantry_MECH";
	displayName = "Mechanised Gunner";
	backpack = "";
	weapons[] = {"rhs_weap_makarov_pmm","Throw", "Put"};
	respawnWeapons[] = {"rhs_weap_makarov_pmm","Throw", "Put"};
	magazines[] = {Std_Pistol};
	respawnMagazines[] = {Std_Pistol};
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

class SOR_INDfor_MechOperator : SOR_INDfor_MechCrew
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
		Std_Pistol
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
		Std_Pistol
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

class SOR_INDfor_MechCrewCommander : SOR_INDfor_MechOperator
{
	displayName = "Mechanised Crew Commander";
	backpack = "SOR_OPFor_Mech_Radio";
	cost = 100000;
};	

class SOR_INDfor_MechDriver : SOR_INDfor_MechCrew
{
	displayName = "Mechanised Driver";
	backpack = "SOR_OPFor_Repair_Pack_VDV";
};	

//HMG Team
class SOR_INDfor_HMGActual : SOR_INDfor_Actual
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Actual";
	icon =  "iconManLeader";
	backpack = "tf_mr3000_rhs";
};

class SOR_INDfor_HMGGunner : SOR_INDfor_Rifleman
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Gunner";
	backpack = "RHS_DShkM_Gun_Bag";
};	

class SOR_INDfor_HMGCarrier : SOR_INDfor_Rifleman
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Carrier";
	backpack = "RHS_DShkM_TripodLow_Bag";
};

class SOR_INDfor_HMGRFL : SOR_INDfor_Grenadier
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Rifleman M320";
	backpack = "SOR_OPFor_GD_Pack_VDV";
};	

//Mortar Team
class SOR_INDfor_MORActual : SOR_INDfor_Actual
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Actual";
	backpack = "tf_mr3000_rhs";
};

class SOR_INDfor_MORGunner : SOR_INDfor_Rifleman
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Gunner";
	backpack = "RHS_Podnos_Gun_Bag";
};	

class SOR_INDfor_MORCarrier_VDV : SOR_INDfor_Rifleman
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Carrier";
	backpack = "RHS_Podnos_Bipod_Bag";
};

class SOR_INDfor_MORRFL_VDV : SOR_INDfor_Grenadier
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Rifleman M320";
	backpack = "SOR_OPFor_GD_Pack_VDV";
};		


//Repair Team
class SOR_INDfor_Engineer : SOR_INDfor_Base
{
	editorSubcategory = "SOR_INDfor_SubCat_Infantry_Support";
	vehicleclass = "SOR_INDFfor_Infantry_Support";
	backpack = "SOR_OPFor_Repair_Pack_VDV";
	weapons[] = {"Throw", "Put"};
	respawnWeapons[] = {"Throw", "Put"};
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
	magazines[] = {};
	respawnMagazines[] = {};	
};	
class SOR_INDfor_Eng_JNR : SOR_INDfor_Base
{
	editorSubcategory = "SOR_INDfor_SubCat_Infantry_Support";
	vehicleclass = "SOR_INDfor_Infantry_Support";
	backpack = "SOR_OPFor_Repair_Pack_VDV";
	weapons[] = {"Throw", "Put"};
	respawnWeapons[] = {"Throw", "Put"};
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
	magazines[] = {};
	respawnMagazines[] = {};	
};	