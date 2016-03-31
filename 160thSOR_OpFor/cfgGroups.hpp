/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 25/03/16
	Description: cfgGroups.hpp
*/

class CfgGroups 
{
	class East 
	{
		
		class SOR_Opfor_Groups_VDV
		{
			name = "160th Russian (VDV)";
			
			class SOR_Opfor_InfGroups_VDV 
			{
				name = "Infantry";
				aliveCategory = "Infantry";
				
				class SOR_Opfor_HavocGroup_VDV 
				{
					name = "HAVOC";
					faction = "SOR_Opfor_Faction_VDV";
					side = OPFOR;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_Commander_VDV";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					
					class Unit1
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_Commander_VDV";
						rank = SERGEANT;
						position[] = {-2, 0, 0};
					};					
					class Unit2 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_RTO_VDV";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};	
					class Unit3
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_Medic_VDV";
						rank = CORPORAL;
						position[] = {-6, 0, 0};
					};
				};
				class SOR_Opfor_INFSquadA_VDV
				{
					name = "10 Man Squad";
					faction = "SOR_Opfor_Faction_VDV";
					side = OPFOR;
					rarityGroup = 0.75;
					class Unit7 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_Actual_VDV";
						rank = SERGEANT;
						position[] = {0, -0, 0};
					};
					
					class Unit8 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_Medic_VDV";
						rank = PRIVATE;
						position[] = {0, -2, 0};
					};					
					class Unit9 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_Teamleader_VDV";
						rank = CORPORAL;
						position[] = {0, -6, 0};
					};
					class Unit10 
					{
						side = OPFOR;
						vehicle = "SOR_OPFor_PKM_VDV";
						rank = PRIVATE;
						position[] = {0, -8, 0};
					};
					class Unit11 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_Grenadier_VDV";
						rank = PRIVATE;
						position[] = {0, -10, 0};
					};
					class Unit12 
					{
						side = OPFOR;
						vehicle = "SOR_OPFor_Rilfeman_Ammo_VDV";
						rank = PRIVATE;
						position[] = {0, -12, 0 };
					};
					class Unit13 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_Teamleader_VDV";
						rank = CORPORAL;
						position[] = {0, -16, 0};
					};
					class Unit14 
					{
						side = OPFOR;
						vehicle = "SOR_OPFor_PKP_VDV";
						rank = PRIVATE;
						position[] = {0, -18, 0};
					};
					class Unit15 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_Grenadier_VDV";
						rank = PRIVATE;
						position[] = {0, -20, 0};
					};
					class Unit16 
					{
						side = OPFOR;
						vehicle = "SOR_OPFor_Rifleman_VDV";
						rank = PRIVATE;
						position[] = {0, -22, 0};
					};
				};
				class SOR_Opfor_FireTeamLead_VDV
				{
					name = "Fire Team Lead/Medic";
					faction = "SOR_Opfor_Faction_VDV";
					side = OPFOR;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_Actual_VDV";
						rank = CAPTAIN;
						position[] = {0, 0, 0};
					};
					
					class Unit1 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_Medic_VDV";
						rank = CAPTAIN;
						position[] = {0, -2, 0};
					};					
				};				
				class SOR_Opfor_FireTeam1_VDV
				{
					name = "Fire Team (1)";
					faction = "SOR_Opfor_Faction_VDV";
					side = OPFOR;
					rarityGroup = 0.75;
					
					class Unit0
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_Teamleader_VDV";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = OPFOR;
						vehicle = "SOR_OPFor_PKM_VDV";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_Grenadier_VDV";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = OPFOR;
						vehicle = "SOR_OPFor_Rilfeman_Ammo_VDV";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};					
				class SOR_Opfor_FireTeam2_VDV
				{
					name = "Fire Team (2)";
					faction = "SOR_Opfor_Faction_VDV";
					side = OPFOR;
					rarityGroup = 0.75;
					
					class Unit0
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_Teamleader_VDV";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = OPFOR;
						vehicle = "SOR_OPFor_PKP_VDV";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_Grenadier_VDV";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = OPFOR;
						vehicle = "SOR_OPFor_Rifleman_VDV";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};					
			};
			class SOR_Opfor_InfGroups_Support_VDV 
			{
				name = "Infantry (Support)";
				aliveCategory = "Infantry";

				class SOR_Opfor_Recon_VDV
				{
					name = "Viper Team";
					faction = "SOR_Opfor_Faction_VDV";
					side = OPFOR;
					rarityGroup = 0.75;
					class Unit0 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_ReconLeader_VDV";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_ReconJTAC_VDV";
						rank = SERGEANT;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_ReconRifleman_VDV";
						rank = SERGEANT;
						position[] = {0, -4, 0};
					};						
					class Unit3
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_ReconRifleman_VDV";
						rank = SERGEANT;
						position[] = {0, -6, 0};
					};
				};	
				class SOR_Opfor_SupGroup2_VDV
				{
					name = "HMG Team";
					faction = "SOR_Opfor_Faction_VDV";
					side = OPFOR;
					rarityGroup = 0.75;	
					
					class Unit0 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_HMGActual_VDV";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};						
					class Unit1 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_HMGGunner_VDV";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
					class Unit2 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_HMGCarrier_VDV";
						rank = PRIVATE;
						position[] = {-4, 0, 0};
					};
					class Unit3 						
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_HMGRFL_VDV";
						rank = PRIVATE;
						position[] = {-6, 0, 0};
					};		
				};
				class SOR_Opfor_SupGroup3_VDV
				{
					name = "Mortar Team";
					faction = "SOR_Opfor_Faction_VDV";
					side = OPFOR;
					rarityGroup = 0.75;	
					
					class Unit0 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_MORActual_VDV";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};							
					class Unit1 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_MORGunner_VDV";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};							
					class Unit2 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_MORCarrier_VDV";
						rank = PRIVATE;
						position[] = {-4, 0, 0};
					};
					class Unit3 							
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_MORRFL_VDV";
						rank = PRIVATE;
						position[] = {-6, 0, 0};
					};	
				};				
			};
			class SOR_Opfor_InfGroups_Mech_VDV 
			{
				name = "Infantry (Mech)";
				aliveCategory = "Infantry";
			
				class SOR_Opfor_SabGroup2_VDV 
				{
					name = "Saber Crew";
					faction = "SOR_Opfor_Faction_VDV";
					side = OPFOR;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_MechCrewCommander_VDV";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};						
					class Unit1 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_MechCrew_VDV";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
					class Unit2 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_MechOperator_VDV";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};
					class Unit3 						
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_MechDriver_VDV";
						rank = CORPORAL;
						position[] = {-6, 0, 0};
					};		
				};
				class SOR_Opfor_RhinoGroup_VDV 
				{
					name = "Rhino Crew";
					faction = "SOR_Opfor_Faction_VDV";
					side = OPFOR;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_MechCrewCommander_VDV";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};						
					class Unit1 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_MechDriver_VDV";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
					class Unit2 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_MechCrew_VDV";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};
				};
				class SOR_Opfor_OutlawGroup_VDV 
				{
					name = "Outlaw Crew";
					faction = "SOR_Opfor_Faction_VDV";
					side = OPFOR;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_MechCrewCommander_VDV";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};						
					class Unit1 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_MechDriver_VDV";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
				}				
			};
			class SOR_Opfor_InfGroups_Air_VDV 
			{
				name = "Infantry (Air)";
				aliveCategory = "Infantry";

				class SOR_Opfor_AngGroup1_VDV 
				{
					name = "Angel Crew";
					faction = "SOR_Opfor_Faction_VDV";
					side = OPFOR;
					rarityGroup = 0.75;
	
					class Unit0 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_HeliPilot_VDV";
						rank = LIEUTENANT;
						position[] = {-0, 0, 0};
					};						
					class Unit1 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_HeliPilot_VDV";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
					class Unit2 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_HeliCrew_VDV";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};
					class Unit3 						
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_HeliCrew_VDV";
						rank = CORPORAL;
						position[] = {-6, 0, 0};
					};
				};		
				class SOR_Opfor_PegGroup2_VDV 
				{
					name = "Pegasus Crew";
					faction = "SOR_Opfor_Faction_VDV";
					side = OPFOR;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_HeliPilot_VDV";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};					
					class Unit1 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_HeliPilot_VDV";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};
				};	
				class SOR_Opfor_MEVGroup2_VDV 
				{
					name = "Medivac Crew";
					faction = "SOR_Opfor_Faction_VDV";
					side = OPFOR;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_MEVPilot_VDV";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};					
					class Unit1 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_MEVPilot_VDV";
						rank = SERGEANT;
						position[] = {-2, 0, 0};
					};					
					class Unit2 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_ParaJumper_VDV";
						rank = PRIVATE;
						position[] = {-4, 0, 0};
					};
					class Unit3 
					
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_ParaJumper_VDV";
						rank = PRIVATE;
						position[] = {-6, 0, 0};
					};
					class Unit4
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_ParaJumper_VDV";
						rank = PRIVATE;
						position[] = {-8, 0, 0};
					};
				};
				class SOR_Opfor_EagleGroup2_VDV 
				{
					name = "Eagle Pilots";
					faction = "SOR_Opfor_Faction_VDV";
					side = OPFOR;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_JetPilot_VDV";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_JetPilot_VDV";
						rank = LIEUTENANT;
						position[] = {-2, 0, 0};
					};
					class Unit2 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_JetPilot_VDV";
						rank = LIEUTENANT;
						position[] = {-4, 0, 0};
					};
					class Unit3 
					{
						side = OPFOR;
						vehicle = "SOR_Opfor_JetPilot_VDV";
						rank = LIEUTENANT;
						position[] = {-6, 0, 0};
					};
				};
			};
			class SOR_Opfor_Squadron_VDV 
			{
				name = "Airborne";
				aliveCategory = "Airborne";

				class SOR_Opfor_FighterWing_VDV 
				{
					name = "Fighter Wing";
					faction = "SOR_Opfor_Faction_VDV";
					side = OPFOR;
					rarityGroup = 0.75;
					class Unit0 
					{
						side = OPFOR;
						vehicle = "SOR_RHS_T50_vvs_generic";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1 
					{
						side = OPFOR;
						vehicle = "SOR_RHS_T50_vvs_generic";
						rank = LIEUTENANT;
						position[] = {-40, 0, 0};
					};
					class Unit2 
					{
						side = OPFOR;
						vehicle = "SOR_RHS_T50_vvs_generic";
						rank = LIEUTENANT;
						position[] = {-80, 0, 0};
					};
					class Unit3 
					{
						side = OPFOR;
						vehicle = "SOR_RHS_T50_vvs_generic";
						rank = LIEUTENANT;
						position[] = {-120, 0, 0};
					};
				};
				class SOR_Opfor_CASWing_VDV 
				{
					name = "CAS Wing";
					faction = "SOR_Opfor_Faction_VDV";
					side = OPFOR;
					rarityGroup = 0.75;
					class Unit0 
					{
						side = OPFOR;
						vehicle = "SOR_RHS_Su25SM_KH29_vvsc";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1 
					{
						side = OPFOR;
						vehicle = "SOR_RHS_Su25SM_KH29_vvsc";
						rank = LIEUTENANT;
						position[] = {40, -40, 0};
					};
					class Unit2 
					{
						side = OPFOR;
						vehicle = "SOR_RHS_Su25SM_KH29_vvsc";
						rank = LIEUTENANT;
						position[] = {-40, -40, 0};
					};
				};
			};
		};
	};
};

	

	

		

	


