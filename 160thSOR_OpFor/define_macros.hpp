#define Author_Macro author=$STR_AUTHOR_FULL;

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define pack_xx(a,b) class _xx_##a {backpack = a; count = b;}

#define Standard_Equipment 	"ItemMap",\
							"ItemCompass",\
							"ItemWatch",\
							"tf_pnr1000a"

#define Airborne_Equipment  "ItemMap",\
							"ItemCompass",\
							"ACE_Altimeter",\
							"tf_pnr1000a",\
							"ItemGPS"
							
#define Recon_Equipment 	"ItemMap",\
							"ItemCompass",\
						    "ItemWatch",\
							"tf_microdagr",\
							"tf_pnr1000a",\
							"ItemGPS" 						
						
#define Standard_Meds   "ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_morphine",\
						"ACE_morphine",\
						"ACE_morphine",\
						"ACE_EarPlugs"
						
#define Recon_Meds  	"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_morphine",\
						"ACE_morphine",\
						"ACE_epinephrine",\
						"ACE_epinephrine",\
						"ACE_bloodIV_500",\
						"ACE_EarPlugs"

#define SL_Equip 		"ACE_CableTie",\
						"ACE_CableTie",\
						"ACE_MapTools",\
						"ACE_Flashlight_MX991"
						
#define Recon_Equip 	"ACE_CableTie",\
						"ACE_CableTie",\
						"ACE_MapTools",\
						"ACE_Flashlight_MX991"
						
#define Standard_Mags 	"rhs_30Rnd_545x39_AK_green",\
						"rhs_30Rnd_545x39_AK_green",\
						"rhs_30Rnd_545x39_AK_green",\
						"rhs_30Rnd_545x39_AK_green",\
						"rhs_30Rnd_545x39_AK_green",\
						"rhs_30Rnd_545x39_AK_green",\
						"rhs_30Rnd_545x39_AK_green",\
						"rhs_mag_mk3a2",\
						"rhs_mag_mk3a2",\
						"rhs_mag_rdg2_white",\
						"rhs_mag_rdg2_white"

#define GL_Mags 		"1Rnd_SmokeRed_Grenade_shell",\
						"1Rnd_SmokeRed_Grenade_shell",\
						"1Rnd_SmokeGreen_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell"		
						
#define SL_Mags	 		"rhs_30Rnd_545x39_AK_green",\
						"rhs_30Rnd_545x39_AK_green",\
						"rhs_30Rnd_545x39_AK_green",\
						"rhs_30Rnd_545x39_AK_green",\
						"rhs_30Rnd_545x39_AK_green",\
						"rhs_30Rnd_545x39_AK_green",\
						"rhs_30Rnd_545x39_AK_green",\
						"rhs_mag_mk3a2",\
						"rhs_mag_mk3a2",\
						"rhs_mag_rdg2_white",\
						"rhs_mag_rdg2_white",\
						"rhs_mag_rdg2_white",\
						"rhs_mag_rdg2_white"
						
#define Recon_Mags		"rhs_30Rnd_545x39_AK_green",\
						"rhs_30Rnd_545x39_AK_green",\
						"rhs_30Rnd_545x39_AK_green",\
						"rhs_30Rnd_545x39_AK_green",\
						"rhs_30Rnd_545x39_AK_green",\
						"rhs_30Rnd_545x39_AK_green",\
						"rhs_mag_mk3a2",\
						"rhs_mag_mk3a2",\
						"rhs_mag_rdg2_black",\
						"rhs_mag_rdg2_black",\
						"rhs_mag_rdg2_black",\
						"rhs_mag_rdg2_white",\
						"rhs_mag_rdg2_white",\
						"rhs_mag_rdg2_white"	
					
#define Std_Pistol		"rhs_mag_9x18_12_57N181S"


#define AI_Std_Pistol		"rhs_mag_9x18_12_57N181S"

#define AI_Standard_Mags 	"30Rnd_545x39_Mag_Tracer_Green_F",\
							"30Rnd_545x39_Mag_Tracer_Green_F",\
							"30Rnd_545x39_Mag_Tracer_Green_F",\
							"30Rnd_545x39_Mag_Tracer_Green_F",\
							"30Rnd_545x39_Mag_Tracer_Green_F",\
							"30Rnd_545x39_Mag_Tracer_Green_F",\
							"30Rnd_545x39_Mag_Tracer_Green_F",\
							"HandGrenade",\
							"SmokeShell",\
							"SmokeShell",\
							"SmokeShell"		

#define AI_GL_Mags 			"30Rnd_762x39_Mag_Tracer_Green_F",\
							"30Rnd_762x39_Mag_Tracer_Green_F",\
							"30Rnd_762x39_Mag_Tracer_Green_F",\
							"30Rnd_762x39_Mag_Tracer_Green_F",\
							"30Rnd_762x39_Mag_Tracer_Green_F",\
							"30Rnd_762x39_Mag_Tracer_Green_F",\
							"30Rnd_762x39_Mag_Tracer_Green_F",\
							"SmokeShell",\
							"1Rnd_HE_Grenade_shell",\
							"1Rnd_HE_Grenade_shell"

#define AI_Standard_Mags_PMC	"30Rnd_580x42_Mag_Tracer_F",\
								"30Rnd_580x42_Mag_Tracer_F",\
								"30Rnd_580x42_Mag_Tracer_F",\
								"30Rnd_580x42_Mag_Tracer_F",\
								"30Rnd_580x42_Mag_Tracer_F",\
								"30Rnd_580x42_Mag_Tracer_F",\
								"30Rnd_580x42_Mag_Tracer_F",\
								"16Rnd_9x21_Mag"\
								"HandGrenade",\
								"SmokeShell",\
								"SmokeShell",\
								"SmokeShell"							

#define AI_GL_Mags_PMC	 		"30Rnd_580x42_Mag_Tracer_F",\
								"30Rnd_580x42_Mag_Tracer_F",\
								"30Rnd_580x42_Mag_Tracer_F",\
								"30Rnd_580x42_Mag_Tracer_F",\
								"30Rnd_580x42_Mag_Tracer_F",\
								"30Rnd_580x42_Mag_Tracer_F",\
								"30Rnd_580x42_Mag_Tracer_F",\
								"SmokeShell",\
								"1Rnd_HE_Grenade_shell",\
								"1Rnd_HE_Grenade_shell"
								
							
#define SL_Mags_Taki	"30Rnd_762x39_Mag_Tracer_Green_F",\
						"30Rnd_762x39_Mag_Tracer_Green_F",\
						"30Rnd_762x39_Mag_Tracer_Green_F",\
						"30Rnd_762x39_Mag_Tracer_Green_F",\
						"30Rnd_762x39_Mag_Tracer_Green_F",\
						"30Rnd_762x39_Mag_Tracer_Green_F",\
						"30Rnd_762x39_Mag_Tracer_Green_F",\
						"rhs_mag_rgo",\
						"rhs_mag_rgo",\
						"rhs_mag_rdg2_white",\
						"rhs_mag_rdg2_white",\
						"rhs_mag_rdg2_white",\
						"rhs_mag_rdg2_white"				
							
#define SP_Mags_Taki 	"rhs_10Rnd_762x54mmR_7N1",\
						"rhs_10Rnd_762x54mmR_7N1",\
						"rhs_10Rnd_762x54mmR_7N1",\
						"rhs_10Rnd_762x54mmR_7N1",\
						"rhs_10Rnd_762x54mmR_7N1",\
						"rhs_mag_rgo",\
						"rhs_mag_rgo",\
						"rhs_mag_rdg2_white",\
						"rhs_mag_rdg2_white",\
						"rhs_mag_rdg2_white",\
						"rhs_mag_rdg2_white"

							