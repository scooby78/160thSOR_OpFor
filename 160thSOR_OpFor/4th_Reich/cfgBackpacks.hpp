/*
	Name: The_Fourth_Reich Mod
	Author: Scooby
	Date: 29/06/2017
	Description: cfgBackpacks.hpp
*/

//Custom Backpacks
class B_Carryall_khk;
class Smill_3COFP;
class Smill_GERWFP;
class Smill_GERWINFP;
class B_AssaultPack_blk;

class reich_AT_Pack1 : B_Carryall_khk
{
	displayName = "Pack Reich AT";
	class TransportMagazines
	{
		mag_xx(rhs_mag_smaw_HEAA,1);
		mag_xx(rhs_mag_smaw_HEDP,1);		
	};		
};

class reich_AA_Pack1 : B_Carryall_khk
{
	displayName = "Pack Reich AA";
	class TransportMagazines
	{
		mag_xx(rhs_fim92_mag,2);
	};		
};

class reich_Desert_MMG_Pack : Smill_3COFP
{
	displayName = "Pack Deasert MMG";
	class TransportMagazines
	{
		mag_xx(130Rnd_338_Mag,1);
	};		
};

class reich_woodland_MMG_Pack : Smill_GERWFP
{
	displayName = "Pack Woodland MMG";
	class TransportMagazines
	{
		mag_xx(130Rnd_338_Mag,1);
	};		
};

class reich_Snow_MMG_Pack : Smill_GERWINFP
{
	displayName = "Pack Snow MMG";
	class TransportMagazines
	{
		mag_xx(130Rnd_338_Mag,1);
	};		
};
class reich_Desert_LMG_Pack : Smill_3COFP
{
	displayName = "Pack Deasert LMG";
	class TransportMagazines
	{
		mag_xx(200Rnd_65x39_cased_Box,1);
	};		
};

class reich_woodland_LMG_Pack : Smill_GERWFP
{
	displayName = "Pack Woodland LMG";
	class TransportMagazines
	{
		mag_xx(200Rnd_65x39_cased_Box,1);
	};		
};

class reich_Snow_LMG_Pack : Smill_GERWINFP
{
	displayName = "Pack Snow LMG";
	class TransportMagazines
	{
		mag_xx(200Rnd_65x39_cased_Box,1);
	};		
};
class reich_SS_MMG_Pack : B_AssaultPack_blk
{
	displayName = "Pack SS Black MMG";
	class TransportMagazines
	{
		mag_xx(130Rnd_338_Mag,1);
	};		
};