#include "global.h"


Hash joaat(const char* text)
{
	return MISC::GET_HASH_KEY(text);
}

float DFC(float p1, float p2, float p3, float p4, float p5, float p6, bool useZ)
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

float DFC(Vector3 p1, Vector3 p2, bool useZ)
{
	if (useZ == true)
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(p1, p2, true);
	}
	else
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(p1, p2, false);
	}
}

int RINT(int p1, int p2)
{
	return MISC::GET_RANDOM_INT_IN_RANGE(p1, p2);
}

float RFLOAT(float p1, float p2)
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(p1, p2);
}

int CreateBlipForVolume(Hash style, Hash sprite, const char* blipName, Volume volume)
{
	int volBlip = MAP::_BLIP_ADD_FOR_VOLUME(style, volume);
	MAP::SET_BLIP_SPRITE(volBlip, sprite, true);
	MAP::_SET_BLIP_NAME(volBlip, blipName);
	MAP::SET_GPS_MULTI_ROUTE_RENDER(true);
	return volBlip;
}

int CreateBlipForPed(Hash style, Hash sprite, const char* blipName, Ped ped)
{
	int pedBlip = MAP::BLIP_ADD_FOR_ENTITY(style, ped);
	MAP::SET_BLIP_SPRITE(pedBlip, sprite, true);
	MAP::_SET_BLIP_NAME(pedBlip, blipName);
	MAP::SET_GPS_MULTI_ROUTE_RENDER(true);
	return pedBlip;
}

int CreateBlipForCoords(Hash style, Hash sprite, const char* blipName, Vector3 coords)
{
	int coordBlip = MAP::BLIP_ADD_FOR_COORDS(style, coords.x, coords.y, coords.z);
	MAP::SET_BLIP_SPRITE(coordBlip, sprite, true);
	MAP::_SET_BLIP_NAME(coordBlip, blipName);
	MAP::SET_GPS_MULTI_ROUTE_RENDER(true);
	return coordBlip;
}

Vehicle getVehicle(Ped ped)
{
	return PED::GET_VEHICLE_PED_IS_USING(ped);
}

bool inVehicle(Ped ped)
{
	return PED::IS_PED_IN_ANY_VEHICLE(ped, true);
}

Vector3 func_vec(Ped ped)
{
	return ENTITY::GET_ENTITY_COORDS(ped, true, true);
}

int func_cped(Hash model, float posx, float posy, float posz, float heading = 0.f, int outfitVariation = 0)
{
	int ped;
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

int func_cped(Hash model, Vector3 pos, float heading = 0.f, int outfitVariation = 0)
{
	int ped;
	STREAMING::REQUEST_MODEL(model, true);
	if (!STREAMING::HAS_MODEL_LOADED(model))
	{
		WAIT(0);
	}
	ped = PED::CREATE_PED(model, pos, heading, false, false, false, false);
	ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(ped, true);
	PED::_EQUIP_META_PED_OUTFIT_PRESET(ped, outfitVariation, false);
	PED::_UPDATE_PED_VARIATION(ped, true, true, true, true, true);
	return ped;
}

void kill_scripts(std::vector<Hash> scripts)
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

Prompt promptHandler(const char* promptText, Hash controlAction, int promptType)
{
	Prompt pVar0{};
	pVar0 = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(pVar0, controlAction);
	HUD::_UI_PROMPT_SET_TEXT(pVar0, MISC::VAR_STRING(10, "LITERAL_STRING", promptText));
	HUD::_UI_PROMPT_SET_STANDARD_MODE(pVar0, promptType);
	HUD::_UI_PROMPT_REGISTER_END(pVar0);
	HUD::_UI_PROMPT_SET_ENABLED(pVar0, false);
	HUD::_UI_PROMPT_SET_VISIBLE(pVar0, false);
	return pVar0;
}

void DisplayObjective(const char* objective)
{
	UILOG::_UILOG_SET_CACHED_OBJECTIVE(objective);
	UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
	UILOG::_UILOG_CLEAR_HAS_DISPLAYED_CACHED_OBJECTIVE();
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void DisplayMissionName(const char* name, int duration)
{
	FeedData data;
	memset(&data, 0, sizeof(data));
	FeedInfo info;
	memset(&info, 0, sizeof(info));
	info.title = MISC::VAR_STRING(10, "LITERAL_STRING", name);
	data.duration = duration;
	UIFEED::_UI_FEED_POST_MISSION_NAME((Any*)&data, (Any*)&info, true);
}

void DisplayHelpText(const char* text, int duration)
{
	FeedData data;
	memset(&data, 0, sizeof(data));
	FeedInfo info;
	memset(&info, 0, sizeof(info));
	info.title = MISC::VAR_STRING(10, "LITERAL_STRING", text);
	data.duration = duration;
	UIFEED::_UI_FEED_POST_HELP_TEXT((Any*)&data, (Any*)&info, true);
}

void DisplayLeftToast(const char* title, const char* subtitle, const char* textureDictionary, const char* textureName, int duration)
{
	FeedData data;
	memset(&data, 0, sizeof(data));
	FeedInfo info;
	memset(&info, 0, sizeof(info));
	data.duration = duration;
	info.title = MISC::VAR_STRING(10, "LITERAL_STRING", title);
	info.subtitle = MISC::VAR_STRING(10, "LITERAL_STRING", subtitle);
	info.texture_dictionary_hash = MISC::GET_HASH_KEY(textureDictionary);
	info.texture_name_hash = MISC::GET_HASH_KEY(textureName);
	UIFEED::_UI_FEED_POST_SAMPLE_TOAST((Any*)&data, (Any*)&info, true, true);
}

Ped getClosestEnemy(float distance)
{
	Ped worldPeds[1024];
	int worldPedCount = worldGetAllPeds(worldPeds, 1024);
	std::vector<std::pair<int, float>> pv{};
	pv.clear();
	int p{};
	float f{};
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
		[](const std::pair<int, float>& a, const std::pair<int, float>& b)
		{
			return a.second < b.second;
		});
		p = min_distance->first;
	}
	pv.erase(std::remove_if(pv.begin(), pv.end(),
	[](const std::pair<int, float>& v) {
		return ENTITY::IS_ENTITY_DEAD(v.first) ||
			PED::GET_CURRENT_TARGET_FOR_PED(v.first) != PLAYER::PLAYER_PED_ID();
	}), pv.end());
	return p;
}

void addPedToPlayerGroup(Ped ped)
{
	PED::SET_PED_AS_GROUP_MEMBER(ped, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
}
void createGroup(int& outGroup, int formation, float formationSeperation)
{
	outGroup = PED::CREATE_GROUP(0);
	PED::SET_GROUP_FORMATION(outGroup, formation);
	PED::SET_GROUP_FORMATION_SPACING(outGroup, formationSeperation, formationSeperation, formationSeperation);
}

/*TuffyTown (Halen84) Add Item To Inventory Functions https://www.rdr2mods.com/forums/topic/2139-addingremoving-items-to-inventory-using-natives/ */
/*------------------------------------------------------------------------------------------------------------------------------------------------*/
sGuid CreateNewGUID()
{
	sGuid guid{};
	return guid;
}

sGuid GetPlayerInventoryItemGUID(Hash item, sGuid guid, Hash slotId)
{
	sGuid outGuid{};
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(1, (Any*)&guid, item, slotId, (Any*)&outGuid);
	return outGuid;

}

sGuid GetPlayerInventoryGUID()
{
	return GetPlayerInventoryItemGUID(MISC::GET_HASH_KEY("CHARACTER"), CreateNewGUID(), MISC::GET_HASH_KEY("SLOTID_NONE"));
}

Hash GetItemGroup(Hash item)
{
	sItemInfo info{};

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(item, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(item, (Any*)&info))
	{
		return 0;
	}
	return info.f_2;
}

sSlotInfo GetItemSlotInfo(Hash item)
{
	sSlotInfo slotInfo{};

	slotInfo.guid = GetPlayerInventoryGUID();
	slotInfo.slotId = MISC::GET_HASH_KEY("SLOTID_SATCHEL");

	Hash group = GetItemGroup(item);
	switch (group)
	{
	case 0xC2286F01: // CLOTHING
		if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(item, MISC::GET_HASH_KEY("SLOTID_WARDROBE")))
		{
			slotInfo.guid = GetPlayerInventoryItemGUID(MISC::GET_HASH_KEY("WARDROBE"), slotInfo.guid, MISC::GET_HASH_KEY("SLOTID_WARDROBE"));
			slotInfo.slotId = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(item, MISC::GET_HASH_KEY("WARDROBE"));
		}
		else
		{
			slotInfo.slotId = MISC::GET_HASH_KEY("SLOTID_WARDROBE");
		}
		break;
	case 0x95A6F147: // HORSE
		slotInfo.slotId = MISC::GET_HASH_KEY("SLOTID_ACTIVE_HORSE");
		break;
	case 0x80FB92CD: // UPGRADE
		if (INVENTORY::_INVENTORY_FITS_SLOT_ID(item, MISC::GET_HASH_KEY("SLOTID_UPGRADE")))
		{
			slotInfo.slotId = MISC::GET_HASH_KEY("SLOTID_UPGRADE");
		}
	default:
		if (INVENTORY::_INVENTORY_FITS_SLOT_ID(item, MISC::GET_HASH_KEY("SLOTID_SATCHEL")))
		{
			slotInfo.slotId = MISC::GET_HASH_KEY("SLOTID_SATCHEL");
		}
		else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(item, MISC::GET_HASH_KEY("SLOTID_WARDROBE")))
		{
			slotInfo.slotId = MISC::GET_HASH_KEY("SLOTID_WARDROBE");
		}
		else
		{
			slotInfo.slotId = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(item, MISC::GET_HASH_KEY("CHARACTER"));
		}
		break;
	}
	return slotInfo;
}

bool AddItemWithGUID(Hash item, sGuid& guid, sSlotInfo& slotInfo, int quantity, Hash addReason)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID((Any*)&slotInfo.guid))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(1, (Any*)&guid, (Any*)&slotInfo.guid, item, slotInfo.slotId, quantity, addReason))
	{
		return false;
	}
	return true;
}
bool AddItemToInventory(Hash item, int quantity)
{
	sSlotInfo slotInfo = GetItemSlotInfo(item);
	sGuid guid = GetPlayerInventoryItemGUID(item, slotInfo.guid, slotInfo.slotId);
	return AddItemWithGUID(item, guid, slotInfo, quantity, MISC::GET_HASH_KEY("ADD_REASON_DEFAULT"));

}

bool RemoveItemFromInventory(int inventoryid, Hash item, int quanity, Hash removeReason)
{
	return INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(inventoryid, item, quanity, removeReason);
}
/*back to none inventory functions*/

Vector3 addVector3(const Vector3& v1, const Vector3& v2)
{
	Vector3 result = { v1.x + v2.x, v1.y + v2.y, v1.z + v2.z };
	return result;
}

Vector3 subVector3(const Vector3& v1, const Vector3& v2)
{
	Vector3 result = { v1.x - v2.x, v1.y - v2.y, v1.z - v2.z };
	return result;
}

Vector3 multiplyVector3(const Vector3& v1, const Vector3& v2)
{
	Vector3 result = { v1.x * v2.x, v1.y * v2.y, v1.z * v2.z };
	return result;
}

Vector3 divideVector3(const Vector3& v1, const Vector3& v2)
{
	Vector3 result = { v1.x / v2.x, v1.y / v2.y, v1.z / v2.z };
	return result;
}


