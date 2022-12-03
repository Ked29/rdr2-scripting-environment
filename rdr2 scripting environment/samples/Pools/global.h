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
	PED::_EQUIP_META_PED_OUTFIT_PRESET(pwoh, outfitVariation, false);
	PED::_UPDATE_PED_VARIATION(pwoh, true, true, true, true, true);
	PED::_EQUIP_META_PED_OUTFIT_PRESET(pwod, outfitVariation, false);
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
		PED::_EQUIP_META_PED_OUTFIT_PRESET(pwo, outfitVariation, false);
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
		PED::_EQUIP_META_PED_OUTFIT_PRESET(pwo, outfitVariation, false);
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
inline int createBlipForEntity(Hash blipHash, Entity entity)
{
	int blip{};
	if (MAP::DOES_BLIP_EXIST(blip))
	{
		MAP::REMOVE_BLIP(&blip);
		blip = MAP::BLIP_ADD_FOR_ENTITY(blipHash, entity);
		return blip;
	}
	else
	{
		blip = MAP::BLIP_ADD_FOR_ENTITY(blipHash, entity);
		return blip;
	}
}
/*Can be combined/used in harmony with function below.
getter function for the vehicle handle that a ped is in.*/
inline Vehicle getVehicle(Ped ped) {
	return PED::GET_VEHICLE_PED_IS_USING(ped);
}
/*returns true or false if ped is in any vehicle*/
inline bool inVehicle(Ped ped) {
	return PED::IS_PED_IN_ANY_VEHICLE(ped, true);
}
inline Vector3 func_vec(Ped ped) {
	return ENTITY::GET_ENTITY_COORDS(ped, true, true);
}
/*Simple ped creator function, returns the ped handle so that you have full control over all peds you spawn*/
inline int func_cped(Hash model, float posx, float posy, float posz, float heading = 0.f, Vector3 coords = { 0, 0, 0 }, int outfitVariation = 0)
{
	int ped;
	if (posx == NULL && posy == NULL && posz == NULL) 
	{
		posx = coords.x;
		posy = coords.y;
		posz = coords.z;
	}
	STREAMING::REQUEST_MODEL(model, true);
	if (!STREAMING::HAS_MODEL_LOADED(model))
	{
		WAIT(0);
	}
	ped = PED::CREATE_PED(model, posx, posy, posz, heading, false, false, false, false);
	ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(ped, true);
	PED::_EQUIP_META_PED_OUTFIT_PRESET(ped, outfitVariation, false);
	PED::_UPDATE_PED_VARIATION(ped, true, true, true, true, true);
	return ped;
}
/*
Slightly modified version of SgtJoe's script kill code
only difference is this can kill multiple scripts at once
Example param -> vector<Hash> killscripts = {joaat("carmodydell"), joaat("beat_bear_trap"), joaat("campfire_gang")};
*/
inline void kill_scripts(vector<Hash> scripts)
{
        SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
        int ThreadID = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	while (ThreadID > 0)
        {
            if (find(scripts.begin(), scripts.end(), SCRIPTS::_GET_HASH_OF_THREAD(ThreadID)) != scripts.end())
            {
                SCRIPTS::TERMINATE_THREAD(ThreadID);
            }
	ThreadID = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
        }
}
/*
simple prompt function, will return prompt handle for checking if pressed
Types for p1 are either 0(Standard press) or 1(standardized hold press)
type is set to standard press by default
p2(addToPed) is for if you want to add prompt to a ped (false by default)
p3 is only if p2 is true, the ped you want to add the prompt to.
*/
inline int func_prompt(const char* name, int type = 0, bool addToPed = false, Ped ped = 0)
{
	int prompt{};
	int pedGroup{};
	if (type == 0)
	{
		prompt = HUD::_UI_PROMPT_REGISTER_BEGIN();
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, joaat("INPUT_INTERACT_LOCKON_POS"));
		HUD::_UI_PROMPT_SET_TEXT(prompt, name);
		HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, true);
		HUD::_UI_PROMPT_REGISTER_END(prompt);
		if (addToPed && ped != NULL)
		{
			pedGroup = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(ped);
			HUD::_UI_PROMPT_SET_GROUP(prompt, pedGroup, 0);
			HUD::_UI_PROMPT_SET_ENABLED(prompt, true);
			HUD::_UI_PROMPT_SET_VISIBLE(prompt, true);
		}
		else if (!addToPed)
		{
			HUD::_UI_PROMPT_SET_ENABLED(prompt, true);
			HUD::_UI_PROMPT_SET_VISIBLE(prompt, true);
		}
		return prompt;
	}
	else if (type == 1)
	{
		prompt = HUD::_UI_PROMPT_REGISTER_BEGIN();
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, joaat("INPUT_INTERACT_LOCKON_POS"));
		HUD::_UI_PROMPT_SET_TEXT(prompt, name);
		HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(prompt, joaat("MEDIUM_TIMED_EVENT"));
		HUD::_UI_PROMPT_REGISTER_END(prompt);
		if (addToPed && ped != NULL)
		{
			pedGroup = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(ped);
			HUD::_UI_PROMPT_SET_GROUP(prompt, pedGroup, 0);
			HUD::_UI_PROMPT_SET_ENABLED(prompt, true);
			HUD::_UI_PROMPT_SET_VISIBLE(prompt, true);
		}
		else if (!addToPed)
		{
			HUD::_UI_PROMPT_SET_ENABLED(prompt, true);
			HUD::_UI_PROMPT_SET_VISIBLE(prompt, true);
		}
		return prompt;
	}
}
