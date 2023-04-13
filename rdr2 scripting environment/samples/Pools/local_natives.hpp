#pragma once
#include "script.h"
#include <algorithm>
#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

inline namespace GLOBAL {
#define ALIGN8 __declspec(align(8))
	struct Vector2_x
	{
		ALIGN8 int x;
		ALIGN8 float y;
	};
	namespace
	{
		void removeDeadPed(vector<Vector2_x>& vec) {
			vec.erase(std::remove_if(vec.begin(), vec.end(),
				[](const Vector2_x& v) {
					return ENTITY::IS_ENTITY_DEAD(v.x) ||
						PED::GET_CURRENT_TARGET_FOR_PED(v.x) != PLAYER::PLAYER_PED_ID();
				}), vec.end());
		}
	}
	inline void ADD_PED_TO_PLAYER_GROUP(Ped ped)
	{
		PED::SET_PED_AS_GROUP_MEMBER(ped, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
	}
	inline Ped GET_CLOSEST_ENEMY(Vector3 coords, float distance)
	{
		Ped worldPeds[1024];
		int worldPedCount = worldGetAllPeds(worldPeds, 1024);
		vector<Vector2_x> pv;
		pv.clear();
		int p;
		float f;
		for (int i = 0; i < worldPedCount; i++)
		{
			if (!ENTITY::IS_ENTITY_DEAD(worldPeds[i]))
			{
				if (PED::GET_CURRENT_TARGET_FOR_PED(worldPeds[i]) == PLAYER::PLAYER_PED_ID())
				{
					f = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, true).x, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, true).y, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, true).z, ENTITY::GET_ENTITY_COORDS(worldPeds[i], true, true).x, ENTITY::GET_ENTITY_COORDS(worldPeds[i], true, true).y, ENTITY::GET_ENTITY_COORDS(worldPeds[i], true, true).z, true);
					if (f <= distance)
					{
						pv.push_back({ worldPeds[i], f });
					}
				}
			}
		}
		if (!pv.empty())
		{
			auto min_distance = std::min_element(pv.begin(), pv.end(),
				[](const Vector2_x& a, const Vector2_x& b)
				{
					return a.y < b.y;
				});

			p = min_distance->x;
		}
		removeDeadPed(pv);
		return p;
	}
}
