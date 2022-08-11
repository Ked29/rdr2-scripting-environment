/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/

#include "script.h"
#include <string>
#include <vector>
#include "keyboard.h"
#include <iostream>
#include <chrono>


using namespace std;


/*------------- SPAWN PED ----------------------------------------------------------------------------------------------------------------------------------------------------*/
Ped ped = 0;

void createPed(Hash model, float posx, float posy, float posz, float heading)
{
	STREAMING::REQUEST_MODEL(model, true);
	if (!STREAMING::HAS_MODEL_LOADED(model))
	{
		WAIT(0);
	}
	ped = PED::CREATE_PED(model, posx, posy, posz, heading, false, false, false, false);
	ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(ped, true);
	PED::_EQUIP_PED_OUTFIT_PRESET(ped, 0, false);
	PED::_UPDATE_PED_VARIATION(ped, true, true, true, true, true);
}
/*Example of spawning ped*/
//Vector3 PlayerPos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_ID(), true, true);
//createPed(MISC::GET_HASH_KEY("cs_dutch"), PlayerPos.x, PlayerPos.y + MISC::GET_RANDOM_INT_IN_RANGE(5, 10), PlayerPos.z, 0.f);
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


void main()
{
	while (true)
	{

		WAIT(0);
	}
}

void ScriptMain()
{
	srand(GetTickCount());
	main();
}
