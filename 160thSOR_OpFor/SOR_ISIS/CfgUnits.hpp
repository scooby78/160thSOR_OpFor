/*
	Name: SOR_ISIS
	Author: Yettie
	Date: 25/04/17
	Description: CfgUnits.hpp
*/
// class I_Soldier_base_F; // Already defined

class SOR_ISIS_Infantry_Base: I_Soldier_base_F
	{
		_generalMacro="SOR_ISIS_Infantry_Base";
		author="Yettie";
		scope=1;
		side=0;
		editorCategory = "SOR_ISIS_Cat_Faction";
		faction="SOR_FACTION_ISIS";
		identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
		faceType="Man_A3";
		uniformClass="SOR_ISIS_AM_Fatigue_01";
		Items[]=
		{
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit"
		};
		weapons[]=
		{
			"rhs_weap_akm",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akm",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgd5"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgd5"
		};
		headgearList[]=
		{
			"LOP_H_Shemag_BLK",
			0.5,
			"LOP_H_Turban_mask",
			0.25,
			"LOP_H_Turban",
			0.25,
			"LOP_H_6B27M_TRI",
			0.1,
			"LOP_H_6B27M_ess_TRI",
			0.1,
			"LOP_H_6B27M_M81",
			0.1,
			"LOP_H_6B27M_ess_M81",
			0.1,
			"",
			0.2
		};
		rds_randomCloths[]=
		{
			"SOR_ISIS_Fatigue_05",
			0.25,
			"SOR_ISIS_Fatigue_06",
			0.15000001,
			"SOR_ISIS_Fatigue_07",
			0.15000001,
			"SOR_ISIS_Fatigue_08",
			0.15000001,
			"SOR_ISIS_Fatigue_09",
			0.15000001,
			"SOR_ISIS_Fatigue_10",
			0.25,
			"SOR_ISIS_Fatigue_11",
			0.25,
			"SOR_ISIS_Fatigue_12",
			0.25,
			"SOR_ISIS_Fatigue_13",
			0.25,
			"SOR_ISIS_Fatigue_14",
			0.25,
			"SOR_ISIS_Fatigue_15",
			0.25,
			"SOR_ISIS_Fatigue_16",
			0.25,
			"SOR_ISIS_Fatigue_17",
			0.25,
			"SOR_ISIS_Fatigue_18",
			0.25,
			"SOR_ISIS_Fatigue_19",
			0.15000001,
			"SOR_ISIS_Fatigue_20",
			0.15000001,
			"SOR_ISIS_Fatigue_21",
			0.15000001,
			"SOR_ISIS_Fatigue_22",
			0.2,
			"SOR_ISIS_Fatigue_23",
			0.2,
			"SOR_ISIS_Fatigue_24",
			0.2,
			"SOR_ISIS_Fatigue_25",
			0.2,
			"SOR_ISIS_Fatigue_26",
			0.25,
			"SOR_ISIS_Fatigue_27",
			0.25,
			"SOR_ISIS_Fatigue_28",
			0.25
		};
	};
	class SOR_ISIS_Infantry_TL: SOR_ISIS_Infantry_Base
	{
		scope=2;
		editorCategory = "SOR_ISIS_Cat_Faction";
		displayName="Chief";
		icon="iconManLeader";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		uniformClass="SOR_ISIS_Fatigue_05";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_tan.paa"
		};
		weapons[]=
		{
			"rhs_weap_m21a",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_m21a",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn"
		};
		respawnMagazines[]=
		{
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn"
		};
		linkedItems[]=
		{
			"V_Chestrig_khk",
			"LOP_H_Shemag_BLK",
			"ItemMap",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
			"V_Chestrig_khk",
			"LOP_H_Shemag_BLK",
			"ItemMap",
			"ItemCompass"
		};
		backpack="";
	};
	class SOR_ISIS_Infantry_SL: SOR_ISIS_Infantry_Base
	{
		_generalMacro="ISTS_Infantry_SL";
		scope=2;
		editorCategory = "SOR_ISIS_Cat_Faction";
		displayName="Warlord";
		icon="iconManLeader";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		uniformClass="SOR_ISIS_Fatigue_06";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_marpat.paa"
		};
		linkedItems[]=
		{
			"rhsusf_spc_light",
			"ISIS_Shemag",
			"ItemMap",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
			"rhsusf_spc_light",
			"ISIS_Shemag",
			"ItemMap",
			"ItemCompass"
		};
		backpack="";
	};
	class SOR_ISIS_Infantry_Corpsman: SOR_ISIS_Infantry_Base
	{
		scope=2;
		displayName="Medic";
		editorCategory = "SOR_ISIS_Cat_Faction";
		icon="iconManMedic";
		picture="pictureHeal";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_medic_s"
				};
				speechPlural[]=
				{
					"veh_infantry_medic_p"
				};
			};
		};
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		uniformClass="SOR_ISIS_Fatigue_07";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_acu_co.paa"
		};
		weapons[]=
		{
			"rhs_weap_aks74",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_aks74",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn"
		};
		linkedItems[]=
		{
			"rhsusf_iotv_ucp_Medic",
			"H_ShemagOpen_tan",
			"ItemMap",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
			"rhsusf_iotv_ucp_Medic",
			"H_ShemagOpen_tan",
			"ItemMap",
			"ItemCompass"
		};
		backpack="SOR_ISIS_Sidor_Med";
	};
	class SOR_ISIS_Infantry_AR: SOR_ISIS_Infantry_Base
	{
		scope=2;
		editorCategory = "SOR_ISIS_Cat_Faction";
		displayName="Machine Gunner (PKM)";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_MG_s"
				};
				speechPlural[]=
				{
					"veh_infantry_MG_p"
				};
			};
		};
		icon="iconManMG";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		uniformClass="SOR_ISIS_Fatigue_08";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_acu_m81_co.paa"
		};
		weapons[]=
		{
			"rhs_weap_pkm",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_pkm",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_rgd5"
		};
		respawnMagazines[]=
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_rgd5"
		};
		linkedItems[]=
		{
			"rhsusf_iotv_ucp_Teamleader",
			"ISIS_Bandanna_blk",
			"ItemMap",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
			"rhsusf_iotv_ucp_Teamleader",
			"ISIS_Bandanna_blk",
			"ItemMap",
			"ItemCompass"
		};
		backpack="SOR_ISIS_Fieldpack_PKM";
	};
	class SOR_ISIS_Infantry_AR_Asst: SOR_ISIS_Infantry_Base
	{
		scope=2;
		editorCategory = "SOR_ISIS_Cat_Faction";
		displayName="ISIS Gunner Assistant";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		uniformClass="SOR_ISIS_Fatigue_09";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_acu_tan_co.paa"
		};
		weapons[]=
		{
			"rhs_weap_aks74",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_aks74",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn"
		};
		linkedItems[]=
		{
			"LOP_V_Carrier_OLV",
			"LOP_H_Turban",
			"ItemMap",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
			"LOP_V_Carrier_OLV",
			"LOP_H_Turban",
			"ItemMap",
			"ItemCompass"
		};
		backpack="SOR_ISIS_Fieldpack_PKM";
	};
	class SOR_ISIS_Infantry_AT: SOR_ISIS_Infantry_Base
	{
		scope=2;
		editorCategory = "SOR_ISIS_Cat_Faction";
		displayName="Insurgent (RPG-7)";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_AT_s"
				};
				speechPlural[]=
				{
					"veh_infantry_AT_p"
				};
			};
		};
		icon="iconManAT";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		uniformClass="SOR_ISIS_Fatigue_10";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_dmar_co.paa"
		};
		weapons[]=
		{
			"rhs_weap_m16a4_carryhandle",
			"rhs_weap_rpg7",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_m16a4_carryhandle",
			"rhs_weap_rpg7",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_black",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5"
		};
		respawnMagazines[]=
		{
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_black",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5"
		};
		linkedItems[]=
		{
			"rhsusf_iotv_ucp_Rifleman",
			"LOP_H_Shemag_BLK",
			"ItemMap",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
			"rhsusf_iotv_ucp_Rifleman",
			"LOP_H_Shemag_BLK",
			"ItemMap",
			"ItemCompass"
		};
		backpack="SOR_ISIS_RPG_Pack";
	};
	class SOR_ISIS_Infantry_AT_Asst: SOR_ISIS_Infantry_Base
	{
		scope=2;
		editorCategory = "SOR_ISIS_Cat_Faction";
		displayName="Insurgent (Assistant)";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		uniformClass="SOR_ISIS_Fatigue_11";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_dmar_m81_co.paa"
		};
		linkedItems[]=
		{
			"LOP_V_Carrier_TAN",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
			"LOP_V_Carrier_TAN",
			"G_Balaclava_blk",
			"ItemMap",
			"ItemCompass"
		};
		backpack="SOR_ISIS_RPG_Pack";
	};
	class SOR_ISIS_Infantry_Marksman: SOR_ISIS_Infantry_Base
	{
		scope=2;
		editorCategory = "SOR_ISIS_Cat_Faction";
		displayName="Insurgent (SVD)";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_sniper_s"
				};
				speechPlural[]=
				{
					"veh_infantry_sniper_p"
				};
			};
		};

		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		uniformClass="SOR_ISIS_Fatigue_12";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_dmar_tan_co.paa"
		};
		weapons[]=
		{
			"LOP_Weap_SVDS",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"LOP_Weap_SVDS",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_black",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5"
		};
		respawnMagazines[]=
		{
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_black",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5"
		};
		linkedItems[]=
		{
			"LOP_V_CarrierLite_TRI",
			"LOP_H_Shemag_BLK",
			"ItemMap",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
			"LOP_V_CarrierLite_TRI",
			"LOP_H_Shemag_BLK",
			"ItemMap",
			"ItemCompass"
		};
		backpack="SOR_ISIS_FalconII_SVD";
	};
	class SOR_ISIS_Infantry_Engineer: SOR_ISIS_Infantry_Base
	{
		scope=2;
		editorCategory = "SOR_ISIS_Cat_Faction";
		displayName="Bomber";
		icon="iconManEngineer";
		picture="pictureRepair";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		uniformClass="SOR_ISIS_Fatigue_13";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_dmar_wdl_co.paa"
		};
		weapons[]=
		{
			"SMA_M4afg_Tan",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SMA_M4afg_Tan",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SMA_30Rnd_556x45_M855A1",
			"SMA_30Rnd_556x45_M855A1",
			"SMA_30Rnd_556x45_M855A1",
			"SMA_30Rnd_556x45_M855A1",
			"SMA_30Rnd_556x45_M855A1",
			"SMA_30Rnd_556x45_M855A1",
			"rhs_mag_rgd5"
		};
		respawnMagazines[]=
		{
			"SMA_30Rnd_556x45_M855A1",
			"SMA_30Rnd_556x45_M855A1",
			"SMA_30Rnd_556x45_M855A1",
			"SMA_30Rnd_556x45_M855A1",
			"SMA_30Rnd_556x45_M855A1",
			"SMA_30Rnd_556x45_M855A1",
			"rhs_mag_rgd5"
		};
		linkedItems[]=
		{
			"rhsgref_otv_khaki",
			"H_ShemagOpen_tan",
			"ItemMap",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
			"rhsgref_otv_khaki",
			"H_ShemagOpen_tan",
			"ItemMap",
			"ItemCompass"
		};
		backpack="";
	};
	class SOR_ISIS_Infantry_Rifleman: SOR_ISIS_Infantry_Base
	{
		scope=2;
		displayName="Insurgent (AKM)";
		editorCategory = "SOR_ISIS_Cat_Faction";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		uniformClass="SOR_ISIS_Fatigue_14";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_m07arid_co.paa"
		};
		linkedItems[]=
		{
			"LOP_V_CarrierLite_TAN",
			"LOP_H_Shemag_BLK",
			"ItemMap",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
			"LOP_V_CarrierLite_TAN",
			"LOP_H_Shemag_BLK",
			"ItemMap",
			"ItemCompass"
		};
		backpack="";
	};
	class SOR_ISIS_Infantry_Rifleman_2: SOR_ISIS_Infantry_Base
	{
		scope=2;
		editorCategory = "SOR_ISIS_Cat_Faction";
		displayName="Insurgent (Maximi)";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		uniformClass="SOR_ISIS_Fatigue_15";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_m07arid_khk_co.paa"
		};
		weapons[]=
		{
			"160_weap_inf_recon_AR",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"160_weap_inf_recon_AR",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SMA_150Rnd_762_M80A1_Tracer",
			"SMA_150Rnd_762_M80A1_Tracer",
			"rhs_mag_rgd5"
		};
		respawnMagazines[]=
		{
			"SMA_150Rnd_762_M80A1_Tracer",
			"SMA_150Rnd_762_M80A1_Tracer",
			"rhs_mag_rgd5"
		};
		linkedItems[]=
		{
			"rhsusf_spc_corpsman",
			"H_Bandanna_cbr",
			"G_Bandanna_khk",
			"ItemMap",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
			"rhsusf_spc_corpsman",
			"H_Bandanna_cbr",
			"G_Bandanna_khk",
			"ItemMap",
			"ItemCompass"
		};
		backpack="";
	};
	class SOR_ISIS_Infantry_Rifleman_3: SOR_ISIS_Infantry_Base
	{
		scope=2;
		editorCategory = "SOR_ISIS_Cat_Faction";
		displayName="Insurgent (M136)";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_AT_s"
				};
				speechPlural[]=
				{
					"veh_infantry_AT_p"
				};
			};
		};
		icon="iconManAT";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		uniformClass="SOR_ISIS_Fatigue_16";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_m07arid_m81l_co.paa"
		};
		weapons[]=
		{
			"rhs_weap_akm",
			"rhs_weap_M136",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akm",
			"rhs_weap_M136",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_m136_mag",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_black",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5"
		};
		respawnMagazines[]=
		{
			"rhs_m136_mag",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_black",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5"
		};
		linkedItems[]=
		{
			"V_I_G_resistanceLeader_F",
			"H_Cap_oli",
			"rhs_scarf",
			"ItemMap",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
			"V_I_G_resistanceLeader_F",
			"H_Cap_oli",
			"rhs_scarf",
			"ItemMap",
			"ItemCompass"
		};
		backpack="";
	};
	class SOR_ISIS_Infantry_GL: SOR_ISIS_Infantry_Base
	{
		scope=2;
		editorCategory = "SOR_ISIS_Cat_Faction";
		displayName="Insurgent (AKM GL)";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		uniformClass="SOR_ISIS_Fatigue_17";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_m07arid_wdl_co.paa"
		};
		weapons[]=
		{
			"rhs_weap_akm_gp25",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akm_gp25",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_black",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_black",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5"
		};
		linkedItems[]=
		{
			"rhs_6sh92_vsr_vog",
			"LOP_H_Shemag_BLK",
			"ItemMap",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
			"rhs_6sh92_vsr_vog",
			"LOP_H_Shemag_BLK",
			"ItemMap",
			"ItemCompass"
		};
		backpack="";
	};
		class SOR_ISIS_Infantry_Exec: SOR_ISIS_Infantry_Base
	{
		scope=2;
		editorCategory = "SOR_ISIS_Cat_Faction";
		displayName="Executioner";
		uniformClass="ISIS_EXEC_02";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"160thSOR_OpFor\SOR_ISIS\data\ISIS_clothing2_co.paa"};

		weapons[]=
		{
			"rhsusf_weap_m9",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhsusf_weap_m9",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhsusf_mag_15Rnd_9x19_JHP",
			"rhsusf_mag_15Rnd_9x19_JHP",
			"rhsusf_mag_15Rnd_9x19_JHP",
			"rhsusf_mag_15Rnd_9x19_JHP",
			"rhsusf_mag_15Rnd_9x19_JHP"

		};
		respawnMagazines[]=
		{
			"rhsusf_mag_15Rnd_9x19_JHP",
			"rhsusf_mag_15Rnd_9x19_JHP",
			"rhsusf_mag_15Rnd_9x19_JHP",
			"rhsusf_mag_15Rnd_9x19_JHP",
			"rhsusf_mag_15Rnd_9x19_JHP"
		};
		linkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"LOP_H_Shemag_BLK",
			"ItemMap",
			"ItemCompass"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_blk",
			"LOP_H_Shemag_BLK",
			"ItemMap",
			"ItemCompass"
		};
		backpack="";
	};
	class SOR_ISIS_Infantry_model_M81: SOR_ISIS_Infantry_Base
	{
		scope=1;
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		uniformClass="SOR_ISIS_Fatigue_18";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_m81_co.paa"
		};
	};
	class SOR_ISIS_Infantry_model_Multicam: SOR_ISIS_Infantry_Base
	{
		scope=1;
		uniformClass="LOP_U_ISTS_Fatigue_19";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_mcm_co.paa"
		};
	};
	class SOR_ISIS_Infantry_model_Multicam_m81: SOR_ISIS_Infantry_Base
	{
		scope=1;
		uniformClass="SOR_ISIS_Fatigue_20";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_mcm_m81_tan_co.paa"
		};
	};
	class SOR_ISIS_Infantry_model_Multicam_tan: SOR_ISIS_Infantry_Base
	{
		scope=1;
		uniformClass="SOR_ISIS_Fatigue_21";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_mcm_tan_co.paa"
		};
	};
	class SOR_ISIS_Infantry_model_3CD: SOR_ISIS_Infantry_Base
	{
		scope=1;
		uniformClass="SOR_ISIS_Fatigue_22";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_tri_co.paa"
		};
	};
	class SOR_ISIS_Infantry_model_3CD_M81: SOR_ISIS_Infantry_Base
	{
		scope=1;
		uniformClass="SOR_ISIS_Fatigue_23";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_tri_m81_co.paa"
		};
	};
	class SOR_ISIS_Infantry_model_3CD_tan: SOR_ISIS_Infantry_Base
	{
		scope=1;
		uniformClass="SOR_ISIS_Fatigue_24";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_tri_tan_co.paa"
		};
	};
	class SOR_ISIS_Infantry_model_3CD_wdl: SOR_ISIS_Infantry_Base
	{
		scope=1;
		uniformClass="SOR_ISIS_Fatigue_25";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_tri_wdl_co.paa"
		};
	};
	class SOR_ISIS_Infantry_model_wmar: SOR_ISIS_Infantry_Base
	{
		scope=1;
		uniformClass="SOR_ISIS_Fatigue_26";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_wmar_co.paa"
		};
	};
	class SOR_ISIS_Infantry_model_wmar_tan: SOR_ISIS_Infantry_Base
	{
		scope=1;
		uniformClass="SOR_ISIS_Fatigue_27";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_wmar_tan_co.paa"
		};
	};
	class SOR_ISIS_Infantry_model_wmar_wdl: SOR_ISIS_Infantry_Base
	{
		scope=1;
		uniformClass="SOR_ISIS_Fatigue_28";
		model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_wmar_wdl_co.paa"
		};
	};
