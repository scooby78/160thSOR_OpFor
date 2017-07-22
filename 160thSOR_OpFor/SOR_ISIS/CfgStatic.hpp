/*
	Name: SOR_ISIS
	Author: Yettie
	Date: 25/04/17
	Description: CfgVehicles.hpp
*/
class rhs_KORD_VDV;
class rhs_Igla_AA_pod_vdv;
class rhs_KORD_high_VDV;
class rhs_SPG9_INS;
class rhs_DSHKM_ins;
class RHS_ZU23_VDV;
class rhs_Metis_9k115_1_ins;
class RHS_M2StaticMG_D;
class RHS_M2StaticMG_MiniTripod_D;
class Turrets;
class MainTurret;
class CargoTurret_01;

	class SOR_ISIS_OPF_Igla_AA_pod: rhs_Igla_AA_pod_vdv
	{
		scope=2;
		side=0;
		editorCategory = "SOR_ISIS_Cat_Faction";
		faction="SOR_FACTION_ISIS";
		crew="SOR_ISIS_Infantry_SL";
		typicalCargo[]=
		{
			"SOR_ISIS_Infantry_SL"
		};
	};

	class SOR_ISIS_OPF_Kord: rhs_KORD_VDV
	{

		scope=2;
		side=0;
		editorCategory = "SOR_ISIS_Cat_Faction";
		faction="SOR_FACTION_ISIS";
		crew="SOR_ISIS_Infantry_SL";
		typicalCargo[]=
		{
			"SOR_ISIS_Infantry_SL"
		};

	};
	class SOR_ISIS_OPF_Kord_High: rhs_KORD_high_VDV
	{
		scope=2;
		side=0;
		editorCategory = "SOR_ISIS_Cat_Faction";
		faction="SOR_FACTION_ISIS";
		crew="SOR_ISIS_Infantry_SL";
		typicalCargo[]=
		{
			"SOR_ISIS_Infantry_SL"
		};
	};
	class SOR_ISIS_OPF_Static_SPG9: rhs_SPG9_INS
	{
		scope=2;
		side=0;
		editorCategory = "SOR_ISIS_Cat_Faction";
		faction="SOR_FACTION_ISIS";
		crew="SOR_ISIS_Infantry_SL";
		typicalCargo[]=
		{
			"SOR_ISIS_Infantry_SL"
		};
	};
	class SOR_ISIS_OPF_Static_DSHKM: rhs_DSHKM_ins
	{
		scope=2;
		editorCategory = "SOR_ISIS_Cat_Faction";
		side=0;
		faction="SOR_FACTION_ISIS";
		crew="SOR_ISIS_Infantry_SL";
		typicalCargo[]=
		{
			"SOR_ISIS_Infantry_SL"
		};
	};
	class SOR_ISIS_OPF_Static_ZU23: RHS_ZU23_VDV
	{
		scope=2;
		side=0;
		editorCategory = "SOR_ISIS_Cat_Faction";
		faction="SOR_FACTION_ISIS";
		crew="SOR_ISIS_Infantry_SL";
		typicalCargo[]=
		{
			"SOR_ISIS_Infantry_SL"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType="SOR_ISIS_Infantry_SL";
			};
		};
	};
	class SOR_ISIS_OPF_Static_AT4: rhs_Metis_9k115_1_ins
	{
		scope=2;
		side=0;
		editorCategory = "SOR_ISIS_Cat_Faction";
		faction="SOR_FACTION_ISIS";
		crew="SOR_ISIS_Infantry_SL";
		typicalCargo[]=
		{
			"SOR_ISIS_Infantry_SL"
		};
	};
	class SOR_ISIS_OPF_Static_M2: RHS_M2StaticMG_D
	{
		scope=2;
		side=0;
		editorCategory = "SOR_ISIS_Cat_Faction";
		faction="SOR_FACTION_ISIS";
		crew="SOR_ISIS_Infantry_SL";
		typicalCargo[]=
		{
			"SOR_ISIS_Infantry_SL"
		};
	};
	class SOR_ISIS_OPF_Static_M2_MiniTripod: RHS_M2StaticMG_MiniTripod_D
	{
		scope=2;
		side=0;
		editorCategory = "SOR_ISIS_Cat_Faction";
		faction="SOR_FACTION_ISIS";
		crew="SOR_ISIS_Infantry_SL";
		typicalCargo[]=
		{
			"SOR_ISIS_Infantry_SL"
		};
	};
