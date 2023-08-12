/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/


#include "global.h"


void main()
{
	
	while (true)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
		WAIT(0);
	}
}

void ScriptMain()
{
	srand(GetTickCount());
	main();
}
