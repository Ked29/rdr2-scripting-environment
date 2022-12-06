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
		/*
		Example of triggering something with a key press event
		bool state{false};
		if(IsKeyJustUp(VK_F7))
		{
			state = !state;
		}
		if(state)
		{	
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
			UILOG::_UILOG_SET_CACHED_OBJECTIVE("Activated Godmode");
			UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
			UILOG::_UILOG_CLEAR_HAS_DISPLAYED_CACHED_OBJECTIVE();
			UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
		}
		else if(!state)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			UILOG::_UILOG_SET_CACHED_OBJECTIVE("Disabled Godmode");
			UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
			UILOG::_UILOG_CLEAR_HAS_DISPLAYED_CACHED_OBJECTIVE();
			UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
		}
		*/
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
		WAIT(0);
	}
}

void ScriptMain()
{
	srand(GetTickCount());
	main();
}
