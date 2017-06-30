/*
	Name: The_Fourth_Reich Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgHelmets.hpp
*/

class H_HelmetIA;
class HeadgearItem;
class Headgear_base_f;
class H_HelmetB: ItemCore 
{ 
	class ItemInfo; 
}; 
 
class SS_helmet: H_HelmetB
{
	displayName = "SS helmet";
	scope = 2;
	model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\SS_Helmet.paa"};
	class ItemInfo: ItemInfo
	{
		mass = 20;
		allowedSlots[] = {901,605};
		uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		modelSides[] = {3,1};
		hiddenSelections[] = {"Camo"};
		armor = "3*0.4";
		passThrough = 0.65;
	};
};
class Trp_helm: H_HelmetB
{
	displayName = "Trooper Helmet";
	scope = 2;
	model = "\A3\Characters_F_Exp\BLUFOR\H_HelmetB_TI_tna_F.p3d";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\CP_Helmet_Khaki.paa"};

	class ItemInfo: ItemInfo
	{
		mass = 20;
		allowedSlots[] = {901,605};
		uniformModel = "\A3\Characters_F_Exp\BLUFOR\H_HelmetB_TI_tna_F.p3d";
		modelSides[] = {3,1,2,0};
		hiddenSelections[] = {"Camo"};
		armor = "3*0.4";
		passThrough = 0.65;
	};
};

class Shock_Trp_helm: H_HelmetB
{
	displayName = "Shock Trooper Helmet";
	scope = 2;
	model = "\A3\Characters_F_Exp\BLUFOR\H_HelmetB_TI_tna_F.p3d";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\stealthhelm"};

	class ItemInfo: ItemInfo
	{
		mass = 20;
		allowedSlots[] = {901,605};
		uniformModel = "\A3\Characters_F_Exp\BLUFOR\H_HelmetB_TI_tna_F.p3d";
		modelSides[] = {3,1,2,0};
		hiddenSelections[] = {"Camo"};
		armor = "3*0.4";
		passThrough = 0.65;
	};
};