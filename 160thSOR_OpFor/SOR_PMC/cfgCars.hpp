/*
	Name: PMC 
	Author: Yettie
	Date: 25/04/17
	Description: CfgArmour.hpp
*/


class C_Offroad_02_unarmed_F_black;
class C_Scooter_Transport_01_F;
class B_T_Boat_Transport_01_F;
class C_Hatchback_01_F;
class B_Heli_Light_01_F;

class PMC_Jeep: C_Offroad_02_unarmed_F_black
{
	scope=2;
	displayName="Jeep";
	faction="class SOR_FACTION_PMC";
	crew="PMC_Gunner_W";
	side=2;
};

class PMC_Scooter: C_Scooter_Transport_01_F
{
	scope=2;
	displayName="Water Scooter";
	faction="class SOR_FACTION_PMC";
	crew="PMC_Gunner_W";
	side=2;
	
};
class PMC_Boat_Transport: B_T_Boat_Transport_01_F
{
	scope=2;
	displayName="Boat";
	faction="class SOR_FACTION_PMC";
	crew="PMC_Gunner_W";
	typicalCargo[]=	{"PMC_Gunner_W"};
	side=2;
	
};

class PMC_Hatchback: C_Hatchback_01_F
{
	scope=2;
	displayName="Hatchback";
	faction="class SOR_FACTION_PMC";
	crew="PMC_Gunner_W";
	typicalCargo[]=	{"PMC_Gunner_W"};
	side=2;
	
};
class PMC_little_bird: B_Heli_Light_01_F
{
	scope=2;
	displayName="little bird";
	faction="class SOR_FACTION_PMC";
	crew="PMC_Pilot_D";
	side=2;

};