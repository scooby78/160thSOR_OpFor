/*
	Name: The_Fourth_Reich Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgArmour.hpp
*/

class I_MBT_03_BASE_F;
class B_APC_Tracked_01_AA_F;
class MRAP_03_base_F;
class I_MRAP_03_F;
class I_MRAP_03_hmg_F;
class O_Truck_03_transport_F;
class DEST_gunTruck_truck_SAM;
class DEST_gunTruck_truck_AAA;
class B_LSV_01_unarmed_F;
class B_T_LSV_01_armed_F;

class Nazi_MBT_Kuma: I_MBT_03_BASE_F 
{
	scope = 2;
	displayName = "Nazi MBT";
	side = 0;
	crew = "Reich_Crew_Black";
	faction = "the_fourth_reich";
	hiddenSelections[] = 
	{
		"Camo1",
		"Camo2",
		"Camo3",
		"HideHull",
		"HideTurret",
		"pasoffsetl",
		"pasoffsetp"
	};
	hiddenSelectionsTextures[] = 
	{
		"160thSOR_OpFor\4th_Reich\data\TankBodyTexture.paa",
		"160thSOR_OpFor\4th_Reich\data\TankTurretTexture.paa",
		"160thSOR_OpFor\4th_Reich\data\TankTurretMGTexture.paa",
		"160thSOR_OpFor\4th_Reich\data\TankTurretTexture.paa",
		"160thSOR_OpFor\4th_Reich\data\TankTurretTexture.paa",
		"160thSOR_OpFor\4th_Reich\data\TankTrackTexture.paa",
		"160thSOR_OpFor\4th_Reich\data\TankTrackTexture.paa"		
	};
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
	class EventHandlers 
	{
		init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
	};
};
class Nazi_AAA: B_APC_Tracked_01_AA_F
{
	scope=2;
	displayName="reich AAA";
	faction="the_fourth_reich";
	crew="Reich_Crew_Black";
	typicalCargo[]=	{"Reich_Crew_Black"};
	side=0;
	hiddenSelections[]=	
	{
		"camo1",
		"camo2",
		"camo3"
	};
	hiddenSelectionsTextures[]=	
	{
		"\160thSOR_OpFor\4th_Reich\data\nazi_aaa_body.paa",
		"\160thSOR_OpFor\4th_Reich\data\MBT_body.paa",
		"\160thSOR_OpFor\4th_Reich\data\Nazi_AA_Tower.paa"
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

class SS_Blitz: I_MRAP_03_F
{
	scope=2;
	_generalMacro = "I_MRAP_03_F";
	displayName="SS Blitz";
	faction="the_fourth_reich";
	crew="Reich_Crew_Black";
	typicalCargo[]=	{"Reich_Crew_Black"};
	side=0;
	vehicleClass="Car";
	hiddenSelectionsTextures[]=
	{
		"\160thSOR_OpFor\4th_Reich\data\SS_Striker.paa",
		"\160thSOR_OpFor\4th_Reich\data\SS_Turret.paa"
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
class SS_Blitz_HMG: I_MRAP_03_hmg_F
{
	scope=2;
	_generalMacro = "I_MRAP_03_F";
	displayName="SS Blitz HMG";
	faction="the_fourth_reich";
	crew="Reich_Crew_Black";
	typicalCargo[]=	{"Reich_Crew_Black"};
	side=0;
	vehicleClass="Car";
	hiddenSelectionsTextures[]=
	{
		"\160thSOR_OpFor\4th_Reich\data\SS_Striker.paa",
		"\160thSOR_OpFor\4th_Reich\data\SS_Turret.paa"
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
	class Nazi_AA_Truck1: DEST_gunTruck_truck_SAM
	{
		author="Phantom hawk";
		_generalMacro="";
		side=0;
		faction="the_fourth_reich";
		forceInGarage=1;
		crew="Reich_Crew_Black";
		scope=2;
		displayName="Reich SAM Truck";
		textureList[]=
		{
			"",
			1
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\160thSOR_OpFor\4th_Reich\data\Typhoon_ext01_u.paa",
			"\160thSOR_OpFor\4th_Reich\data\Typhoon_ext02_u.paa",
			"\160thSOR_OpFor\4th_Reich\data\Typhoon_cargo_u.paa"
		};
	};
	
		class Nazi_AA_Truck2: DEST_gunTruck_truck_AAA
	{
		author="Phantom hawk";
		_generalMacro="";
		side=0;
		faction="the_fourth_reich";
		forceInGarage=1;
		crew="Reich_Crew_Black";
		scope=2;
		displayName="Reich AAA Truck";
		textureList[]=
		{
			"",
			1
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\160thSOR_OpFor\4th_Reich\data\Typhoon_ext01_u.paa",
			"\160thSOR_OpFor\4th_Reich\data\Typhoon_ext02_u.paa",
			"\160thSOR_OpFor\4th_Reich\data\Typhoon_cargo_u.paa"
		};
	};

class Nazi_Transport: O_Truck_03_transport_F
{
	scope=2;
	displayName="Reich Transport Truck";
	faction="the_fourth_reich";
	crew="Reich_Crew_Black";
	typicalCargo[]=	{"Reich_Crew_Black"};
	side=0;
			textureList[]=
		{
			"",
			1
		};

		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\160thSOR_OpFor\4th_Reich\data\Typhoon_ext01_u.paa",
			"\160thSOR_OpFor\4th_Reich\data\Typhoon_ext02_u.paa",
			"\160thSOR_OpFor\4th_Reich\data\Typhoon_cargo_u.paa"
		};
	};
		

class Nazi_Swift_attack: B_LSV_01_unarmed_F
{
	scope=2;
	displayName="Reich Rapid strike veh";
	faction="the_fourth_reich";
	crew="Reich_Crew_Black";
	typicalCargo[]=	{"Reich_Crew_Black"};
	side=0;
	textureList[]={"",1};
	hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\Nazi_LSV_01_Black_CO.paa","160thSOR_OpFor\4th_Reich\data\Nazi_LSV_02_Black_CO.paa","160thSOR_OpFor\4th_Reich\data\Nazi_LSV_03_Black_CO.paa","160thSOR_OpFor\4th_Reich\data\Nazi_LSV_Adds_Black_CO.paa"};
	};
	
class Nazi_Swift_attack_armed: B_T_LSV_01_armed_F
{
	scope=2;
	displayName="Reich Armed Rapid strike veh";
	faction="the_fourth_reich";
	crew="Reich_Crew_Black";
	typicalCargo[]=	{"Reich_Crew_Black"};
	side=0;
	textureList[]={"",1};
	hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\Nazi_LSV_01_Black_CO.paa","160thSOR_OpFor\4th_Reich\data\Nazi_LSV_02_Black_CO.paa","160thSOR_OpFor\4th_Reich\data\Nazi_LSV_03_Black_CO.paa","160thSOR_OpFor\4th_Reich\data\Nazi_LSV_Adds_Black_CO.paa"};
	};