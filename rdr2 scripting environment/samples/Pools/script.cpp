/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/

#include "script.h"
#include <string>
#include <vector>
#include "keyboard.h"
#include "global.h"


using namespace std;


/*------------- SPAWN PED ----------------------------------------------------------------------------------------------------------------------------------------------------*/
Ped ped = 0;
const char* guardHorses[] = { "A_C_Horse_KentuckySaddle_Black", "A_C_Horse_KentuckySaddle_ChestnutPinto", "A_C_Horse_KentuckySaddle_Grey", "A_C_Horse_KentuckySaddle_SilverBay" };

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
//createPed(joaat("cs_dutch"), PlayerPos.x, PlayerPos.y + MISC::GET_RANDOM_INT_IN_RANGE(5, 10), PlayerPos.z, 0.f);
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*Examples of createPedWithOptions function
|  Spawning A Ped With A Horse  |
createPedWithOptions(joaat("g_m_m_unicornwallgoons_01"), PlayerPos.x, PlayerPos.y, PlayerPos.z, 0.f, true, joaat(guardHorses[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)]));
|  Spawning A Ped With A Vehicle  |
createPedWithOptions(joaat("u_m_m_cornwalldriver_01"), PlayerPos.x, PlayerPos.y, PlayerPos.z, 0.f, false, NULL, false, NULL, NULL, NULL, true, VS_DRIVER, joaat("wagonarmoured01x"));
|  Spawning A Ped With A Scenario  |
createPedWithOptions(joaat("cs_dutch"), PlayerPos.x, PlayerPos.y, PlayerPos.z, 0.f, false, NULL, true, joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING"), 0.f, 0, false, 0, NULL);
|  Spawning A Ped Normally  |
createPedWithOptions(joaat("cs_dutch"), PlayerPos.x, PlayerPos.y, PlayerPos.z)
*/

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
