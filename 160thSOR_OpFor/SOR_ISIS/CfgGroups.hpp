/*
	Name: SOR ISIS
	Author: Yettie
	Date: 25/04/17
	Description: CfgGroups.hpp
*/

		class SOR_ISIS_Groups
		{
			name="ISIS Groups";
			class ISIS_Infantry
			{
				name="Infantry";
				class SOR_ISIS_Patrol_section
				{
					name="Sentry";
					faction="SOR_FACTION_ISIS";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Rifleman";
						rank="Private";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Rifleman_3";
						rank="Private";
						position[]={3,0,0};
					};
				};
				class SOR_ISIS_Rifle_squad
				{
					name="Weapons Squad";
					faction="SOR_FACTION_ISIS";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_TL";
						rank="Sergeant";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Rifleman_2";
						rank="Corporal";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Corpsman";
						rank="Corporal";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Rifleman";
						rank="Corporal";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Rifleman";
						rank="Private";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Rifleman_3";
						rank="Private";
						position[]={11,0,0};
					};
				};
				class SOR_ISIS_Support_section
				{
					name="Support Section";
					side=0;
					faction="SOR_FACTION_ISIS";
					class Unit0
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_TL";
						rank="Sergeant";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Corpsman";
						rank="Corporal";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_GL";
						rank="Private";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_AR";
						rank="Private";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Rifleman_2";
						rank="Private";
						position[]={9,0,0};
					};
				};
				class SOR_ISIS_AT_section
				{
					name="Anti-armor Team";
					faction="SOR_FACTION_ISIS";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_TL";
						rank="Sergeant";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_AT";
						rank="Corporal";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Rifleman_3";
						rank="Private";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Rifleman_2";
						rank="Private";
						position[]={7,0,0};
					};
				};
				class SOR_ISIS_Fireteam
				{
					name="Fire Team";
					faction="SOR_FACTION_ISIS";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_TL";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_AR";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_GL";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Rifleman_2";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class SOR_ISIS_InfSupTeam
				{
					name="Support Team";
					faction="SOR_FACTION_ISIS";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_TL";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_AT";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Corpsman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Rifleman_3";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
			};
			class Motorized
			{
				name="Motorized Infantry";
				class SOR_ISIS_MotInf_Team
				{
					name="Motorized Patrol";
					side=0;
					faction="SOR_FACTION_ISIS";
					rarityGroup=0.2;
					class Unit0
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_TL";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="SOR_ISIS_Offroad";
						rank="SERGEANT";
						position[]={0,-10,0};
					};
					class Unit2
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_AR";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_AT";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit4
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Corpsman";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
					class Unit5
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Rifleman_2";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
				};
				class SOR_ISIS_MotInf_Team_BTR60
				{
					name="Motorized Patrol (BTR-60)";
					side=0;
					faction="SOR_FACTION_ISIS";
					rarityGroup=0.1;
					class Unit0
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_TL";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="SOR_ISIS_BTR60";
						rank="SERGEANT";
						position[]={0,-10,0};
					};
					class Unit2
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_AR";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_AT";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit4
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Corpsman";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
					class Unit5
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Rifleman_2";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
				};
				class SOR_ISIS_Motor_squad_LR
				{
					name="Motor Patrol";
					faction="SOR_FACTION_ISIS";
					side=0;
					rarityGroup=0.2;
					class Unit0
					{
						side=0;
						vehicle="SOR_ISIS_M1025_W_M2";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="SOR_ISIS_M1025_W_M2";
						rank="SERGEANT";
						position[]={10,-10,0};
					};
					class Unit2
					{
						side=0;
						vehicle="SOR_ISIS_M1025_W_M2";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
				};
				class SOR_ISIS_Technicals
				{
					name="Technicals";
					faction="SOR_FACTION_ISIS";
					side=0;
					rarityGroup=0.2;
					class Unit0
					{
						side=0;
						vehicle="SOR_ISIS_Offroad_M2";
						rank="Sergeant";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="SOR_ISIS_Offroad_M2";
						rank="Corporal";
						position[]={10,-10,0};
					};
					class Unit2
					{
						side=0;
						vehicle="SOR_ISIS_Offroad_M2";
						rank="Corporal";
						position[]={-10,-10,0};
					};
				};
			};
			class Mechanized
			{
				name="Mechanized";
				class SOR_ISIS_Mech_squad_BMP1
				{
					name="Squad (BMP-1)";
					faction="SOR_FACTION_ISIS";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_TL";
						rank="Sergeant";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_SL";
						rank="Corporal";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_Corpsman";
						rank="Corporal";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_AR";
						rank="Private";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_AR_Asst";
						rank="Private";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="SOR_ISIS_Infantry_GL";
						rank="Private";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="SOR_ISIS_BMP1";
						rank="Sergeant";
						position[]={15,0,0};
					};
				};
			};
			class Armored
			{
				name="Armor";
				class SOR_ISIS_T72_Platoon
				{
					name="T72 Platoon";
					faction="SOR_FACTION_ISIS";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="SOR_ISIS_T72BA";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="SOR_ISIS_T72BA";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="SOR_ISIS_T72BA";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
				};
				class SOR_ISIS_Combined_Platoon
				{
					name="Combined Platoon";
					faction="SOR_FACTION_ISIS";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="SOR_ISIS_T72BA";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="SOR_ISIS_ZSU234";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="SOR_ISIS_BMP1";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
				};
			};
		};	
