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

std::string Vector3ToString(const Vector3& v)
{
	std::stringstream ss;
	ss << "(" << v.x << ", " << v.y << ", " << v.z << ")";
	return ss.str();
}

Vehicle getVehicle(Ped ped)
{
	return PED::GET_VEHICLE_PED_IS_USING(ped);
}

bool inVehicle(Ped ped)
{
	return PED::IS_PED_IN_ANY_VEHICLE(ped, true);
}

bool VehicleIsEmpty(Vehicle vehicle)
{
	bool empty{ true };
	int totalSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(vehicle));
	for (int i = 0; i < totalSeats; i++)
	{
		int seatPed = VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehicle, i);
		if (seatPed != 0 && !ENTITY::IS_ENTITY_DEAD(seatPed))
		{
			empty = false;
			break;
		}
	}

	return empty;
}

Vector3 GetCoords(Ped ped)
{
	return ENTITY::GET_ENTITY_COORDS(ped, true, true);
}

int CreatePed(Hash model, float posx, float posy, float posz, float heading, int outfitVariation)
{
	int ped{};
	STREAMING::REQUEST_MODEL(model, true);
	while (!STREAMING::HAS_MODEL_LOADED(model))
	{
		WAIT(0);
	}
	ped = PED::CREATE_PED(model, posx, posy, posz, heading, false, false, false, false);
	ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(ped, true);
	PED::_EQUIP_META_PED_OUTFIT_PRESET(ped, outfitVariation, false);
	PED::_UPDATE_PED_VARIATION(ped, true, true, true, true, true);
	return ped;
}

int CreatePed(Hash model, Vector3 pos, float heading, int outfitVariation)
{
	int ped{};
	STREAMING::REQUEST_MODEL(model, true);
	while (!STREAMING::HAS_MODEL_LOADED(model))
	{
		WAIT(0);
	}
	ped = PED::CREATE_PED(model, pos, heading, false, false, false, false);
	ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(ped, true);
	PED::_EQUIP_META_PED_OUTFIT_PRESET(ped, outfitVariation, false);
	PED::_UPDATE_PED_VARIATION(ped, true, true, true, true, true);
	return ped;
}

int CreatePedOnMount(Ped mount, Hash model, int seatIndex, int outfitVariation)
{
	int ped{};
	STREAMING::REQUEST_MODEL(model, true);
	while (!STREAMING::HAS_MODEL_LOADED(model))
	{
		WAIT(0);
	}
	ped = PED::CREATE_PED_ON_MOUNT(mount, model, seatIndex, false, false, false, false);
	ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(ped, true);
	PED::_EQUIP_META_PED_OUTFIT_PRESET(ped, outfitVariation, false);
	PED::_UPDATE_PED_VARIATION(ped, true, true, true, true, true);
	return ped;
}

int CreateVehicle(Hash model, float posx, float posy, float posz, float heading)
{
	int vehicle{};
	STREAMING::REQUEST_MODEL(model, true);
	while (!STREAMING::HAS_MODEL_LOADED(model))
	{
		WAIT(0);
	}
	vehicle = VEHICLE::CREATE_VEHICLE(model, posx, posy, posz, heading, false, false, false, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(vehicle, true);
	return vehicle;
}

int CreateVehicle(Hash model, Vector3 pos, float heading)
{
	int vehicle{};
	STREAMING::REQUEST_MODEL(model, true);
	while (!STREAMING::HAS_MODEL_LOADED(model))
	{
		WAIT(0);
	}
	vehicle = VEHICLE::CREATE_VEHICLE(model, pos, heading, false, false, false, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(vehicle, true);
	return vehicle;
}

int CreatePedInVehicle(Vehicle vehicle, Hash model, int seatIndex, int outfitVariation)
{
	int ped{};
	STREAMING::REQUEST_MODEL(model, true);
	while (!STREAMING::HAS_MODEL_LOADED(model))
	{
		WAIT(0);
	}
	ped = PED::CREATE_PED_INSIDE_VEHICLE(vehicle, model, seatIndex, false, false, false);
	ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(ped, true);
	PED::_EQUIP_META_PED_OUTFIT_PRESET(ped, outfitVariation, false);
	PED::_UPDATE_PED_VARIATION(ped, true, true, true, true, true);
	return ped;
}

void GiveSaddleToHorse(Ped horse)
{
	PED::_APPLY_SHOP_ITEM_TO_PED(horse, joaat("HORSE_EQUIPMENT_CHARRO_01_IMPROVED_NEW_SADDLE_000"), true, false, false);
}

void UpdatePedOutfit(Ped ped, int outfitVariation)
{
	if (ENTITY::DOES_ENTITY_EXIST(ped))
	{
		PED::_EQUIP_META_PED_OUTFIT_PRESET(ped, outfitVariation, true);
		PED::_UPDATE_PED_VARIATION(ped, true, true, true, true, true);
	}
}

int GetRandomOutfitPreset(Ped ped)
{
	int preset{};
	if (ENTITY::DOES_ENTITY_EXIST(ped))
	{
		preset = RINT(0, PED::GET_NUM_META_PED_OUTFITS(ped));
	}
	else
	{
		preset = 0;
	}
	return preset;
}

void SetRandomOutfitPreset(Ped ped)
{
	if (ENTITY::DOES_ENTITY_EXIST(ped))
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(ped, true);
		PED::_UPDATE_PED_VARIATION(ped, true, true, true, true, true);
	}
}

void RequestTextureDict(const char* textureDict)
{
	if (!TXD::DOES_STREAMED_TEXTURE_DICT_EXIST(textureDict))
	{
		return;
	}
	else
	{
		TXD::REQUEST_STREAMED_TEXTURE_DICT(textureDict, true);
		while (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED(textureDict)) { WAIT(0); }
	}
}

void RequestTextureHash(Hash textureHash)
{
	if (!TXD::DOES_STREAMED_TXD_EXIST(textureHash))
	{
		return;
	}
	else
	{
		TXD::REQUEST_STREAMED_TXD(textureHash, true);
		while (!TXD::HAS_STREAMED_TXD_LOADED(textureHash)) { WAIT(0); }
	}
}

void ReleaseTextureDict(const char* textureDict)
{
	if (!TXD::DOES_STREAMED_TEXTURE_DICT_EXIST(textureDict))
	{
		return;
	}
	else
	{
		TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(textureDict);
	}
}

void ReleaseTextureHash(Hash textureHash)
{
	if (!TXD::DOES_STREAMED_TXD_EXIST(textureHash))
	{
		return;
	}
	else
	{
		TXD::SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(textureHash);
	}
}

void DrawTextToScreen(const char* text, float x, float y, float scale, int r, int g, int b, int a)
{
	UIDEBUG::_BG_SET_TEXT_SCALE(scale, scale);
	UIDEBUG::_BG_SET_TEXT_COLOR(r, g, b, a);
	UIDEBUG::_BG_DISPLAY_TEXT(MISC::VAR_STRING(10, "LITERAL_STRING", static_cast<char*>(_strdup(text))), x, y);
}

void DrawTextToScreen(int value, float x, float y, float scale, int r, int g, int b, int a)
{
	UIDEBUG::_BG_SET_TEXT_SCALE(scale, scale);
	UIDEBUG::_BG_SET_TEXT_COLOR(r, g, b, a);
	UIDEBUG::_BG_DISPLAY_TEXT(MISC::VAR_STRING(10, "LITERAL_STRING", static_cast<char*>(_strdup(std::to_string(value).c_str()))), x, y);
}

void DrawTextToScreen(std::string text, float x, float y, float scale, int r, int g, int b, int a)
{
	UIDEBUG::_BG_SET_TEXT_SCALE(scale, scale);
	UIDEBUG::_BG_SET_TEXT_COLOR(r, g, b, a);
	UIDEBUG::_BG_DISPLAY_TEXT(MISC::VAR_STRING(10, "LITERAL_STRING", static_cast<char*>(_strdup(text.c_str()))), x, y);
}

void DrawTextToScreen(Vector3 value, float x, float y, float scale, int r, int g, int b, int a)
{
	UIDEBUG::_BG_SET_TEXT_SCALE(scale, scale);
	UIDEBUG::_BG_SET_TEXT_COLOR(r, g, b, a);
	UIDEBUG::_BG_DISPLAY_TEXT(MISC::VAR_STRING(10, "LITERAL_STRING", static_cast<char*>(_strdup(Vector3ToString(value).c_str()))), x, y);
}

void PlayFrontendAudio(const char* audioName, const char* audioRef)
{
	AUDIO::PLAY_SOUND_FRONTEND(audioName, audioRef, true, 0);
}

void StopFrontendAudio(const char* audioName, const char* audioRef)
{
	AUDIO::_STOP_SOUND_WITH_NAME(audioName, audioRef);
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
//example priority PP_High
Prompt promptHandler(const char* promptText, Hash controlAction, int promptType, int priority)
{
	Prompt prompt{};
	prompt = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, controlAction);
	HUD::_UI_PROMPT_SET_TEXT(prompt, MISC::VAR_STRING(10, "LITERAL_STRING", promptText));
	HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, promptType);
	HUD::_UI_PROMPT_SET_PRIORITY(prompt, priority);
	HUD::_UI_PROMPT_REGISTER_END(prompt);
	HUD::_UI_PROMPT_SET_ENABLED(prompt, false);
	HUD::_UI_PROMPT_SET_VISIBLE(prompt, false);
	return prompt;
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
	FeedData data{};
	FeedInfo info{};
	info.title = MISC::VAR_STRING(10, "LITERAL_STRING", name);
	data.duration = duration;
	UIFEED::_UI_FEED_POST_MISSION_NAME((Any*)&data, (Any*)&info, true);
}

void DisplayHelpText(const char* text, int duration)
{
	FeedData data{};
	FeedInfo info{};
	info.title = MISC::VAR_STRING(10, "LITERAL_STRING", text);
	data.duration = duration;
	UIFEED::_UI_FEED_POST_HELP_TEXT((Any*)&data, (Any*)&info, true);
}

void DisplayLeftToast(const char* title, const char* subtitle, const char* textureDictionary, const char* textureName, int duration)
{
	FeedData data{};
	FeedInfo info{};
	data.duration = duration;
	info.title = MISC::VAR_STRING(10, "LITERAL_STRING", title);
	info.subtitle = MISC::VAR_STRING(10, "LITERAL_STRING", subtitle);
	info.texture_dictionary_hash = MISC::GET_HASH_KEY(textureDictionary);
	info.texture_name_hash = MISC::GET_HASH_KEY(textureName);
	UIFEED::_UI_FEED_POST_SAMPLE_TOAST((Any*)&data, (Any*)&info, true, true);
}

void DisplayOneTextShard(const char* title, int duration)
{
	FeedData data{};
	FeedInfo info{};
	data.duration = duration;
	info.title = MISC::VAR_STRING(10, "LITERAL_STRING", title);
	UIFEED::_UI_FEED_POST_ONE_TEXT_SHARD((Any*)&data, (Any*)&info, true);
}

void DisplayTwoTextShard(const char* title, const char* subtitle, int duration)
{
	FeedData data{};
	FeedInfo info{};
	data.duration = duration;
	info.title = MISC::VAR_STRING(10, "LITERAL_STRING", title);
	info.subtitle = MISC::VAR_STRING(10, "LITERAL_STRING", subtitle);
	UIFEED::_UI_FEED_POST_TWO_TEXT_SHARD((Any*)&data, (Any*)&info, true, true);
}

void DisplayThreeTextShard(const char* title, const char* subtitle, const char* secondary_subtitle, int duration)
{
	FeedData data{};
	FeedInfo info{};
	data.duration = duration;
	info.title = MISC::VAR_STRING(10, "LITERAL_STRING", title);
	info.subtitle = MISC::VAR_STRING(10, "LITERAL_STRING", subtitle);
	info.secondary_subtitle = MISC::VAR_STRING(10, "LITERAL_STRING", secondary_subtitle);
	UIFEED::_UI_FEED_POST_THREE_TEXT_SHARD((Any*)&data, (Any*)&info, true, true, true);
}

void DisplayRightToast(const char* title, const char* imageDictionary, Hash imageHash, int bounceAmount, Hash color, const char* soundSet, const char* soundToPlay, int p8, bool toggle)
{
	SampleToastRightStruct1 data{};
	SampleToastRightStruct2 info{};

	data.SoundSet = soundSet;
	data.SoundToPlay = soundToPlay;
	data.f_3 = p8;
	data.Duration = 450;
	info.Title = title;
	info.ImageDictionary = imageDictionary;
	info.ImageHash = imageHash;
	info.BounceAmount = bounceAmount;
	info.Color = color;
	info.f_6 = 0;
	UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT((Any*)&data, (Any*)&info, toggle);
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

int GetMount(Ped ped)
{
	return PED::GET_MOUNT(ped);
}

Hash GetWeapon(Ped ped)
{
	Hash weaponHash{};
	WEAPON::GET_CURRENT_PED_WEAPON(ped, &weaponHash, true, WEAPON_ATTACH_POINT_HAND_PRIMARY, true);
	return weaponHash;
}

Hash GetBestWeapon(Ped ped)
{
	return WEAPON::GET_BEST_PED_WEAPON(ped, true, true);
}

int GetAmmo(int ped)
{
	return WEAPON::GET_AMMO_IN_PED_WEAPON(ped, GetWeapon(ped));
}

int GetMaxClipAmmo(int ped)
{
	return WEAPON::GET_MAX_AMMO_IN_CLIP(ped, GetWeapon(ped), true);
}

int GetClipAmmo(int ped)
{
	int clipAmmo{};
	WEAPON::GET_AMMO_IN_CLIP(ped, &clipAmmo, GetWeapon(ped));
	return clipAmmo;
}

Object CreateObject(Hash model, Vector3 pos)
{
	Object obj{};
	if (STREAMING::IS_MODEL_VALID(model))
	{
		STREAMING::REQUEST_MODEL(model, true);
		while (!STREAMING::HAS_MODEL_LOADED(model))
		{
			WAIT(0);
		}
		obj = OBJECT::CREATE_OBJECT(model, pos, true, true, true, false, false);
		OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(obj, true);
	}
	return obj;
}

int GetPedTarget(Ped ped)
{
	return PED::GET_CURRENT_TARGET_FOR_PED(ped);
}

Volume CreateVolumeBox(float posx, float posy, float posz, float size)
{
	return VOLUME::CREATE_VOLUME_BOX(posx, posy, posz, 0.f, 0.f, 0.f, size, size, size);
}

Volume CreateVolumeBox(Vector3 pos, float size)
{
	return VOLUME::CREATE_VOLUME_BOX(pos, { 0.f, 0.f, 0.f }, { size, size, size });
}

Volume CreateVolumeSphere(float posx, float posy, float posz, float size)
{
	return VOLUME::CREATE_VOLUME_SPHERE(posx, posy, posz, 0.f, 0.f, 0.f, size, size, size);
}

Volume CreateVolumeSphere(Vector3 pos, float size)
{
	return VOLUME::CREATE_VOLUME_SPHERE(pos, { 0.f, 0.f, 0.f }, { size, size, size });
}

void DismountPed(Ped ped)
{
	PED::_REMOVE_PED_FROM_MOUNT(ped, true, true);
}
// see enum eEnterExitVehicleFlags
void DismountAnyVehicle(Ped ped, int flags)
{
	TASK::TASK_LEAVE_ANY_VEHICLE(ped, 0, flags);
}

void AddWeaponToPed(Ped ped, Hash weaponHash, int ammoCount, int attachPoint, bool inHand)
{
	WEAPON::GIVE_WEAPON_TO_PED(ped, weaponHash, ammoCount, inHand, !inHand, attachPoint, false, 0.5f, 1.f, joaat("ADD_REASON_DEFAULT"), false, 0.f, false);
}

void RemoveAllWeapons(Ped ped)
{
	WEAPON::REMOVE_ALL_PED_WEAPONS(ped, true, true);
}

void RemoveCurrentWeapon(Ped ped)
{
	WEAPON::REMOVE_WEAPON_FROM_PED(ped, GetWeapon(ped), true, REMOVE_REASON_DEFAULT);
}

Hash GetWeaponFromGroup(Hash group)
{
	return WEAPON::_0xF8204EF17410BF43(group, 0.5f, 1.f, 0);
}

Hash GetWeaponFromGroups(std::vector<Hash> groups)
{
	std::vector<Hash> weapons{};
	for (int i = 0; i < groups.size(); i++)
	{
		weapons.push_back(WEAPON::_0xF8204EF17410BF43(groups[i], 0.5f, 1.f, 0));
	}
	return weapons[RINT(0, weapons.size())];
}

int GetIntStatValue(Hash BaseId, Hash PermutationId)
{
	int StatInt{};
	StatId Stat{};
	Stat.BaseId = BaseId;
	Stat.PermutationId = PermutationId;
	STATS::STAT_ID_GET_INT((Any*)&Stat, &StatInt);
	return StatInt;
}

void SetIntStatValue(Hash BaseId, Hash PermutationId, int value)
{
	StatId Stat{};
	Stat.BaseId = BaseId;
	Stat.PermutationId = PermutationId;
	STATS::STAT_ID_SET_INT((Any*)&Stat, value, true);
}

