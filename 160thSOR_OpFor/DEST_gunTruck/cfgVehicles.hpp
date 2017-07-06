/*
	Name: 160th SOR Mod
	Author: destruktoid (Transfered by Scooby)
	Date: 06/07/17
	Description: cfgVehicles.hpp
*/

class B_SAM_System_01_F;
class B_AAA_System_01_F;
class DEST_gunTruck_SAM: B_SAM_System_01_F
{
	faction = "OPF_F";
	editorSubcategory = "EdSubcat_Turrets";
	crew = "O_UAV_AI";
	side = 0;
	hiddenSelectionTextures[] = {"a3\soft_f_epc\truck_03\data\truck_03_ext01_co.paa"};
};
class DEST_gunTruck_AAA: B_AAA_System_01_F
{
	faction = "OPF_F";
	editorSubcategory = "EdSubcat_Turrets";
	crew = "O_UAV_AI";
	side = 0;
	hiddenSelectionTextures[] = {"a3\soft_f_epc\truck_03\data\truck_03_ext01_co.paa"};
};

class O_Truck_03_transport_F;
class DEST_gunTruck_truck_SAM: O_Truck_03_transport_F
{
	displayName = "Tempest SAM";
	class EventHandlers
	{
		init = "_vic = (_this select 0); _vicPos = [(getpos _vic select 0),(getpos _vic select 1),((getpos _vic select 2) + 10)]; _sam = [_vicPos,(getdir _vic),'DEST_gunTruck_SAM',EAST] call BIS_fnc_spawnVehicle; _sam = (_sam select 0); _sam attachto [_vic,[0.04,-2.85,1.5]]; _sam setVehicleRadar 1; _sam setVehicleReportRemoteTargets true; _sam setVehicleReceiveRemoteTargets true;";
	};
};
class DEST_gunTruck_truck_AAA: O_Truck_03_transport_F
{
	displayName = "Tempest AAA";
	class EventHandlers
	{
		init = "_vic = (_this select 0); _vicPos = [(getpos _vic select 0),(getpos _vic select 1),((getpos _vic select 2) + 10)]; _aaa = [_vicPos,(getdir _vic),'DEST_gunTruck_AAA',EAST] call BIS_fnc_spawnVehicle; _aaa = (_aaa select 0); _aaa attachto [_vic,[0.045,-2.15,1.5]]; _aaa setObjecttexture [1,'a3\soft_f_epc\truck_03\data\truck_03_ext01_co.paa']; _aaa setVehicleRadar 1; _aaa setVehicleReportRemoteTargets true; _aaa setVehicleReceiveRemoteTargets true;";
	};
};