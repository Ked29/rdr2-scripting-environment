#pragma once

#include "script.h"
#include <string>
#include <vector>
#include "keyboard.h"

using namespace std;

inline Hash joaat(const char* text)
{
	return MISC::GET_HASH_KEY(text);
}
inline float DFC(float p1, float p2, float p3, float p4, float p5, float p6, bool useZ = false)
{
	if (useZ == true)
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(p1, p2, p3, p4, p5, p6, true);
	}
	else
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(p1, p2, p3, p4, p5, p6, false);
	}
}
inline int RINT(int p1, int p2)
{
	return MISC::GET_RANDOM_INT_IN_RANGE(p1, p2);
}
inline float RFLOAT(float p1, float p2)
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(p1, p2);
}

Ped pwo = 0;
Vehicle pwov = 0;
Ped pwoh = 0;
Ped pwod = 0;
Blip iVar0;
//Create A Ped Vector To Store All You Spawned Peds.
vector<Ped> pedVector;
vector<Vehicle> vehicleVector;
/*After creating the ped in the function, pass in pedVector.push_back(ped);*/

/*You can clear the vectors with pedVector.clear();
If you want to remove the dead peds from a vector, do this.
for (int i = 0; i < pedVector.size(); i++)
{
	if (ENTITY::IS_ENTITY_DEAD(pedVector[i]))
	{
		pedVector.erase(pedVector.begin() + i);
	}
}
*/

//Adding blips to entities.
//create your variable i.e. Blip iVar0; as seen above.
//if you want to add the blip to a specific entity, which will move with them, 
/*iVar0 = MAP::BLIP_ADD_FOR_ENTITY(BLIP_STYLE_ENEMY, pedToPutBlipOn);
MAP::SET_BLIP_SPRITE(iVar0, joaat("blip_ambient_companion"), true);
MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(iVar0, "Enemy");
MAP::BLIP_ADD_MODIFIER(iVar0, BLIP_MODIFIER_ENEMY);
MAP::SET_GPS_MULTI_ROUTE_RENDER(true);
-----------------------------------------------------------------------------------------
if you'd want to put them on say a whole vector of peds, maybe it's an enemies vector
for(int i = 0; i < pedVector.size(); i++)
{
	place the above blip code here, just replace the "pedToPutBlipOn" with pedVector[i].
}
now that theres blips, you'll want to remove the blips once those peds die, in the for loop right under where you remove the dead pead, put 
MAP::REMOVE_BLIP(&iVar0);
*/


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
	pedVector.push_back(pwoh & pwod);
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
		vehicleVector.push_back(pwov);
		pedVector.push_back(pwo);
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
		pedVector.push_back(pwo);
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(pwo, true);
		PED::_EQUIP_PED_OUTFIT_PRESET(pwo, outfitVariation, false);
		PED::_UPDATE_PED_VARIATION(pwo, true, true, true, true, true);
		if (spawnWithScenario == true)
		{
			TASK::TASK_START_SCENARIO_IN_PLACE_HASH(pwo, scenarioName, -1, true, 0, scenarioHeading, true);
		}
	}
}
inline int createBlipForCoords(Hash blipHash, Vector3 coords)
{
	int blip{};
	if (MAP::DOES_BLIP_EXIST(blip))
	{
		MAP::REMOVE_BLIP(&blip);
		blip = MAP::BLIP_ADD_FOR_COORDS(blipHash, coords.x, coords.y, coords.z);
		return blip;
	}
	else
	{
		blip = MAP::BLIP_ADD_FOR_COORDS(blipHash, coords.x, coords.y, coords.z);
		return blip;
	}
}	
