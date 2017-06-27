/*
	Name: The_Fourth_Reich Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgVehicles.hpp
*/
class B_SAM_System_01_F;
class B_AAA_System_01_F;
class B_SAM_System_02_F;
class B_HMG_01_high_F;
class B_HMG_01_A_F;
class B_Mortar_01_F;

class Nazi_SAM: B_SAM_System_01_F
{
	scope=2;
	displayName="reich SAM";
	faction="the_fourth_reich";
	crew="Reich_Crew_Black";
	side=0;
};

class Nazi_SAA: B_AAA_System_01_F
{
	scope=2;
	displayName="reich SAA";
	faction="the_fourth_reich";
	crew="Reich_Crew_Black";
	side=0;
};

class Nazi_GBAD: B_SAM_System_02_F
{
	scope=2;
	displayName="reich GBAD";
	faction="the_fourth_reich";
	crew="Reich_Crew_Black";
	side=0;
};

class Nazi_HMG_high: B_HMG_01_high_F
{
	scope=2;
	displayName="Reich HMG High";
	faction="the_fourth_reich";
	crew="Reich_Crew_Black";
	side=0;
};

class Nazi_Mortar: B_Mortar_01_F
{
	scope=2;
	displayName="Reich Mortar";
	faction="the_fourth_reich";
	crew="Reich_Crew_Black";
	typicalCargo[]=	{"Reich_Crew_Black"};
	side=0;
};