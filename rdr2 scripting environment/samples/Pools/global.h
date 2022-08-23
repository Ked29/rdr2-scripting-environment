#pragma once

#include "script.h"
#include <string>
#include <vector>
#include "keyboard.h"

inline Ped pwo = 0;
inline Vehicle pwov = 0;
inline Ped pwoh = 0;
inline Ped pwod = 0;

inline void createPedWithOptions(Hash model, float posx, float posy, float posz, float heading = 0.f, bool onHorse = false, Hash horseModel = NULL, bool spawnWithScenario = false, Hash scenarioName = NULL, float scenarioHeading = 0.f, int outfitVariation = 0, bool inVehicle = false, int seatIndex = 0, Hash VehicleName = NULL)
{
	if (onHorse == true && inVehicle == false)
	{
	STREAMING::REQUEST_MODEL(model, true);
	STREAMING::REQUEST_MODEL(horseModel, true);
	if (!(STREAMING::HAS_MODEL_LOADED(model) || STREAMING::HAS_MODEL_LOADED(horseModel)))
	{
		WAIT(0);
	}

	pwoh = PED::CREATE_PED(horseModel, posx + 2, posy + 2, posz, heading, false, false, false, false);
	pwod = PED::CREATE_PED_ON_MOUNT(pwoh, model, VS_DRIVER, false, false, false, false);
	PED::_EQUIP_PED_OUTFIT_PRESET(pwoh, outfitVariation, false);
	PED::_UPDATE_PED_VARIATION(pwoh, true, true, true, true, true);
	PED::_EQUIP_PED_OUTFIT_PRESET(pwod, outfitVariation, false);
	PED::_UPDATE_PED_VARIATION(pwod, true, true, true, true, true);
	
	}
	 if (onHorse == false && inVehicle == true)
	{
		STREAMING::REQUEST_MODEL(model, true);
		STREAMING::REQUEST_MODEL(VehicleName, true);
		if (!(STREAMING::HAS_MODEL_LOADED(model) || STREAMING::HAS_MODEL_LOADED(VehicleName)))
		{
			WAIT(0);
		}

		pwov = VEHICLE::CREATE_VEHICLE(VehicleName, posx + 2, posy + 2, posz, heading, true, true, false, true);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(pwov, true);
		pwo = PED::CREATE_PED_INSIDE_VEHICLE(pwov, model, seatIndex, true, true, true);
		PED::_EQUIP_PED_OUTFIT_PRESET(pwo, outfitVariation, false);
		PED::_UPDATE_PED_VARIATION(pwo, true, true, true, true, true);
	}
	if(onHorse == false && inVehicle == false)
	{
		STREAMING::REQUEST_MODEL(model, true);
		if (!STREAMING::HAS_MODEL_LOADED(model))
		{
		WAIT(0);
		}
		pwo = PED::CREATE_PED(model, posx + 5, posy + 5, posz, heading, false, false, false, false);
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(pwo, true);
		PED::_EQUIP_PED_OUTFIT_PRESET(pwo, outfitVariation, false);
		PED::_UPDATE_PED_VARIATION(pwo, true, true, true, true, true);
		if (spawnWithScenario == true)
		{
			TASK::TASK_START_SCENARIO_IN_PLACE_HASH(pwo, scenarioName, -1, true, 0, scenarioHeading, true);
		}
	}
}
