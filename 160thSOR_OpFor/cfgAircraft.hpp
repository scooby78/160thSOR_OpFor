/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 25/03/16
	Description: cfgAircraft.hpp
*/

class RHS_Mi24P_AT_vdv;
class RHS_Mi24P_CAS_vdv;
class RHS_Mi24P_vdv;
class RHS_Mi24V_UPK23_vdv;
class RHS_Mi8AMT_vdv;
class RHS_Su25SM_KH29_vvsc;
class RHS_T50_vvs_generic;
class rhs_ka60_grey;
class O_Heli_Transport_04_F;
class O_Heli_Transport_04_medevac_F;
class O_Heli_Transport_04_bench_F;
class O_Heli_Transport_04_covered_F;
class I_Plane_Fighter_03_AA_F;
class I_Plane_Fighter_03_CAS_F;
class RHS_AN2;
class RHS_MELB_AH6M_L;
class I_C_Heli_Light_01_civil_F;
class I_Heli_light_03_unarmed_F;

// Transport Helos	
class SOR_OpFor_rhs_Mi24P_AT_vdv : RHS_Mi24P_AT_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	crew = "SOR_OPFor_HeliPilot_VDV_AI";
	class UserActions
	{
		class SOR_AutoDrop
		{
			displayName = "<t color='#008000'>Start Drop!</t>";
			displayNameDefault = "<t color='#008000'>Start Drop!</t>";
			condition = "(player == driver this)&&((getPosATL this) select 2 > 200)";
			priority = 1;
			showWindow = 0;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 1;
			statement = "[this] spawn sor_fnc_autoparadrop";
		};
		class closeDoor
		{
			condition = "this doorPhase 'Door_Cargo' > 0.5 AND alive this";
			displayName = "Close Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			statement = "this animateDoor ['Door_Cargo',0]";
		};
		class openDoor
		{
			condition = "this doorPhase 'Door_Cargo' < 0.5 AND alive this";
			displayName = "Open Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			showwindow = 0;
			statement = "this animateDoor ['Door_Cargo',1]";
		};
	};		
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10)
		item_xx(V_RebreatherIR,2)	
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};

class SOR_OpFor_rhs_Mi24P_CAS_vdv : RHS_Mi24P_CAS_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	crew = "SOR_OPFor_HeliPilot_VDV_AI";
	class UserActions
	{
		class SOR_AutoDrop
		{
			displayName = "<t color='#008000'>Start Drop!</t>";
			displayNameDefault = "<t color='#008000'>Start Drop!</t>";
			condition = "(player == driver this)&&((getPosATL this) select 2 > 200)";
			priority = 1;
			showWindow = 0;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 1;
			statement = "[this] spawn sor_fnc_autoparadrop";
		};
		class closeDoor
		{
			condition = "this doorPhase 'Door_Cargo' > 0.5 AND alive this";
			displayName = "Close Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			statement = "this animateDoor ['Door_Cargo',0]";
		};
		class openDoor
		{
			condition = "this doorPhase 'Door_Cargo' < 0.5 AND alive this";
			displayName = "Open Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			showwindow = 0;
			statement = "this animateDoor ['Door_Cargo',1]";
		};
	};		
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10)
		item_xx(V_RebreatherIR,2)	
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};

class SOR_OpFor_rhs_Mi24P_vdv : RHS_Mi24P_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	crew = "SOR_OPFor_HeliPilot_VDV_AI";
	class UserActions
	{
		class SOR_AutoDrop
		{
			displayName = "<t color='#008000'>Start Drop!</t>";
			displayNameDefault = "<t color='#008000'>Start Drop!</t>";
			condition = "(player == driver this)&&((getPosATL this) select 2 > 200)";
			priority = 1;
			showWindow = 0;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 1;
			statement = "[this] spawn sor_fnc_autoparadrop";
		};
		class closeDoor
		{
			condition = "this doorPhase 'Door_Cargo' > 0.5 AND alive this";
			displayName = "Close Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			statement = "this animateDoor ['Door_Cargo',0]";
		};
		class openDoor
		{
			condition = "this doorPhase 'Door_Cargo' < 0.5 AND alive this";
			displayName = "Open Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			showwindow = 0;
			statement = "this animateDoor ['Door_Cargo',1]";
		};
	};		
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10)
		item_xx(V_RebreatherIR,2)	
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};

class SOR_OpFor_rhs_Mi24V_UPK23_vdv : RHS_Mi24V_UPK23_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	crew = "SOR_OPFor_HeliPilot_VDV_AI";
	class UserActions
	{
		class SOR_AutoDrop
		{
			displayName = "<t color='#008000'>Start Drop!</t>";
			displayNameDefault = "<t color='#008000'>Start Drop!</t>";
			condition = "(player == driver this)&&((getPosATL this) select 2 > 200)";
			priority = 1;
			showWindow = 0;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 1;
			statement = "[this] spawn sor_fnc_autoparadrop";
		};
		class closeDoor
		{
			condition = "this doorPhase 'Door_Cargo' > 0.5 AND alive this";
			displayName = "Close Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			statement = "this animateDoor ['Door_Cargo',0]";
		};
		class openDoor
		{
			condition = "this doorPhase 'Door_Cargo' < 0.5 AND alive this";
			displayName = "Open Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			showwindow = 0;
			statement = "this animateDoor ['Door_Cargo',1]";
		};
	};		
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10)
		item_xx(V_RebreatherIR,2)	
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};

class SOR_OpFor_rhs_Mi8AMT_vdv : RHS_Mi8AMT_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	displayName = "Mi-8AMT (Refuel)";
	transportFuel = 30000;
	supplyRadius = 30;
	crew = "SOR_OPFor_HeliPilot_VDV_AI";
	class UserActions
	{
		class SOR_AutoDrop
		{
			displayName = "<t color='#008000'>Start Drop!</t>";
			displayNameDefault = "<t color='#008000'>Start Drop!</t>";
			condition = "(player == driver this)&&((getPosATL this) select 2 > 200)";
			priority = 1;
			showWindow = 0;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 0;
			statement = "[this] spawn sor_fnc_autoparadrop";
		};
		class closeDoor
		{
			condition = "this doorPhase 'RearDoors' > 0.5 AND alive this";
			displayName = "Close Rear Doors";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			statement = "[this,15,16] call rhs_fnc_mi8_checkDoor";
		};
		class openDoor
		{
			condition = "this doorPhase 'RearDoors' < 0.5 AND alive this";
			displayName = "Open Rear Doors";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			showwindow = 0;
			radius = 3;
			statement = "[this,15,16] call rhs_fnc_mi8_checkDoor";
		};
		class closeDoor_L
		{
			condition = "this doorPhase 'LeftDoor' > 0.5 AND alive this";
			displayName = "Close Left Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			statement = "this animateDoor ['LeftDoor',0]";
		};
		class openDoor_L
		{
			condition = "this doorPhase 'LeftDoor' < 0.5 AND alive this";
			displayName = "Open Left Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			showwindow = 0;
			statement = "this animateDoor ['LeftDoor',1]";
		};
	};
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10)
		item_xx(V_RebreatherIR,2)	
	};
	class TransportWeapons {weap_xx(rhs_weap_m4a1_carryhandle_grip2,2)};
	class TransportMagazines {mag_xx(30Rnd_556x45_Stanag_Tracer_Red,6)};
	class TransportBackpacks {pack_xx(SOR_Repair_Pack_D,1)};
};

class SOR_MELB_H6M_Taki : I_C_Heli_Light_01_civil_F
{
	editorCategory = "SOR_OPFor_Cat_Faction_Taki_AI";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_OPFor_Faction_Taki_AI;
	displayName = "MH-6 (Civilain)";
	armorStructural = 4; // Was 50
	fuelCapacity = 110; //was fuelCapacity = 242;
	fuelConsumptionRate = 0.0555; //was 0.0368;
	crew = "SOR_OPFor_Pilot_Taki_AI";
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
};	


// Attack Helos	
class SOR_MELB_AH6M_L_Taki : RHS_MELB_AH6M_L
{
	editorCategory = "SOR_OPFor_Cat_Faction_Taki_AI";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_OPFor_Faction_Taki_AI;
	side = 2;
	displayName = "AH-6M_L (C2/P1)";
	armorStructural = 4; // Was 50		
	fuelCapacity = 200; //was fuelCapacity = 242;
	fuelConsumptionRate = 0.0555; //was 0.0368;
	crew = "SOR_OPFor_Pilot_Taki_AI";
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(V_RebreatherB,2);			
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
};	

//Transport (This is the only one that can attach and drop pods)
class SOR_Opfor_Heli_Transport_04_F : O_Heli_Transport_04_F
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	displayName = "MI-290 Taru (C3/POD)";
	crew = "SOR_OPFor_HeliPilot_VDV_AI";	
	class eventHandlers
	{
		init="_this call SLX_XEH_EH_Init;";
	};
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10)
		item_xx(V_RebreatherIR,3)	
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportBackpacks 
	{
		pack_xx(SOR_OPFor_Repair_Pack_VDV,1)
	};
};
	
class SOR_OpFor_rhs_ka60_grey : rhs_ka60_grey
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	displayName = "Ka-60 (MEV)";
	driverCanEject = 1; // was 0, Allows pilot to exit heli with engine running
	ejectDeadCargo = 1; //test dead eject
	crewCrashProtection = 0.20; /// Was 0.25, multiplier of damage to crew of the vehicle => low number means better protection //test
	getInRadius = 4;
	crew = "SOR_OPFor_MEVPilot_VDV";
	class TransportItems
	{
		item_xx(ACE_Fielddressing,24)
		item_xx(ACE_morphine,16)
		item_xx(ACE_epinephrine,16)
		item_xx(G_O_Diving,3)
		item_xx(U_O_Wetsuit,3)
		item_xx(V_RebreatherIR,3)
	};		
	class TransportWeapons {weap_xx(rhs_weap_m4a1_carryhandle_grip2,2)};
	class TransportMagazines {mag_xx(30Rnd_556x45_Stanag_Tracer_Red,6)};
	class TransportBackpacks {pack_xx(SOR_Repair_Pack_D,1)};
};


class SOR_Wildcat_Taki : I_Heli_light_03_unarmed_F
{
	editorCategory = "SOR_OPFor_Cat_Faction_Taki_AI";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_Taki_AI;
	vehicleclass = "SOR_Aircraft";
	displayName = "Wildcat (Unarmed)";
	side = 2;
	driverCanEject = 1; // was 0, Allows pilot to exit heli with engine running
	ejectDeadCargo = 1; //test dead eject
	crewCrashProtection = 0.20; /// Was 0.25, multiplier of damage to crew of the vehicle => low number means better protection //test
	getInRadius = 4;
	crew = "SOR_OPFor_Pilot_Taki_AI";
	class TransportItems
	{
		item_xx(ACE_Fielddressing,24)
		item_xx(ACE_morphine,16)
		item_xx(ACE_epinephrine,16)
		item_xx(G_O_Diving,3)
		item_xx(U_O_Wetsuit,3)
		item_xx(V_RebreatherIR,3)
	};		
	class TransportWeapons {weap_xx(arifle_AKS_F,2)};
	class TransportMagazines {mag_xx(rhs_30Rnd_545x39_AK_green,6)};
	class TransportBackpacks {pack_xx(SOR_Repair_Pack_D,1)};
};



	
////////////	
// Planes //
////////////
class SOR_OpFor_rhs_Su25SM_KH29_vvsc : RHS_Su25SM_KH29_vvsc
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	crew = "SOR_OPFor_JetPilot_VDV_AI";
	class TransportItems {item_xx(ACE_FieldDressing,10)};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks {pack_xx(SOR_Repair_Pack_D,1)};
};

class SOR_OpFor_rhs_T50_vvs_generic : RHS_T50_vvs_generic
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	crew = "SOR_OPFor_JetPilot_VDV_AI";	
	class TransportItems {item_xx(ACE_FieldDressing,10)};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks {pack_xx(SOR_Repair_Pack_D,1)};
};

class SOR_Opfor_Fighter_AA : I_Plane_Fighter_03_AA_F
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	crew = "SOR_OPFor_JetPilot_VDV_AI";
	side=0;
	displayName = "L159 ALCA [AA] OpFor";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};

class SOR_Opfor_Fighter_CAS : I_Plane_Fighter_03_CAS_F
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	crew = "SOR_OPFor_JetPilot_VDV_AI";
	side=0;
	displayName = "L159 ALCA [CAS] OpFor";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};	

class SOR_RHS_AN2_Taki : RHS_AN2
{
	editorCategory = "SOR_OPFor_Cat_Faction_Taki_AI";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_Taki_AI;
	vehicleclass = "SOR_Aircraft";
	crew = "SOR_OPFor_Pilot_Taki_AI";
	side = 2;
	displayName = "Antonov AN-2 (Unarmed)";
	class TransportItems {item_xx(ACE_FieldDressing,10)};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks {pack_xx(SOR_Repair_Pack_D,1)};
};