/*
	Name: The_Fourth_Reich Mod
	Author: Scooby
	Date: 29/06/2017
	Description: cfgBackpacks.hpp
*/

//Custom Backpacks
class B_Carryall_khk;

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
