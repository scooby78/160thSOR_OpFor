/*
	Name: fn_gunSpawn.sqf
	Author: Scooby
	Credit: destruktoid for original script design concept idea
	Date: 11/07/17 
	Description: Intelligent truck turrent spawn script for Nazi_AA_Truck1 & Nazi_AA_Truck2 4th Reich units
	SP, Dedi and Zeus optimised
*/
// Check if units is local, if not exit
if (!local _this) exitwith {};

// Check what truck option is required and make appropriate adjustments
if (_this isKindOf "Nazi_AA_Truck1") then 
{
	SOPFOR_TURRET_TYPE = "Nazi_SAM";
	SOPFOR_TURRET_OFFSET = [0.045,-2.15,1.5];
}
else
{
	SOPFOR_TURRET_TYPE = "Nazi_SAA";
	SOPFOR_TURRET_OFFSET = [0.045,-2.15,2];
};

// Action attachments
if (local _this) then 
{
	_thisPos = [(getpos _this select 0),(getpos _this select 1),((getpos _this select 2) + 10)];
	_aaa = createVehicle [SOPFOR_TURRET_TYPE, _thisPos, [], 0, 'NONE'];
	_aaa setDir (getdir _this);
	_aaa disableCollisionWith _this;
	_aaa attachto [_this,SOPFOR_TURRET_OFFSET];
	createVehicleCrew _aaa;
	_aaa setVehicleRadar 1;
	_aaa setVehicleReportRemoteTargets true;
	_aaa setVehicleReceiveRemoteTargets true;
};
