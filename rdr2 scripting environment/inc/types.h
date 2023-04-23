/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/

#pragma once

#include <windows.h>
#include <cstdint>

using Any = uint64_t;
using Void = uint64_t;
using ScrHandle = int;

using AnimScene = int;
using Blip = int;
using Cam = int;
using Entity = ScrHandle;
using FireId = int;
using Hash = unsigned int;
using Interior = int;
using ItemSet = ScrHandle;
using Object = ScrHandle;
using Ped = ScrHandle;
using PersChar = ScrHandle;
using Pickup = int;
using Player = unsigned int;
using PopZone = int;
using Prompt = int;
using PropSet = int;
using Vehicle = ScrHandle;
using Volume = ScrHandle;

#define ALIGN8 __declspec(align(8))

struct Vector2
{
	ALIGN8 float x;
	ALIGN8 float y;
};
struct Vector3
{
	ALIGN8 float x;
	ALIGN8 float y;
	ALIGN8 float z;
};
struct Vector4
{
	ALIGN8 float x;
	ALIGN8 float y;
	ALIGN8 float z;
	ALIGN8 float w;
};
struct NotificationStruct {
	alignas(8) int  Duration;
	alignas(8) int  f1;
	alignas(8) int  f2;
	alignas(8) int  f3;
};
struct NotificationStruct2 {
	alignas(8) int  f0;
	alignas(8) const char* Title;
	alignas(8) const char* SubTitle;
	alignas(8) int  f3;
	alignas(8) Hash IconDict;
	alignas(8) Hash Icon;
	alignas(8) int  f6;
	alignas(8) int  f7;
};
struct HelpTextArgs1
{
	alignas(8) int p0;
	alignas(8) int p1;
	alignas(8) int p2;
	alignas(8) int p3;
};
struct HelpTextArgs2
{
	alignas(8) int p0;
	alignas(8) const char* p1;
};
struct HelpTextArgs3
{
	ALIGN8 int p0;
	ALIGN8  const char* p1;
	ALIGN8  const char* p2;
	ALIGN8  int p3;
};
struct HelpTextArgs4
{
	ALIGN8  int p0;
	ALIGN8  const char* p1;
	ALIGN8  const char* p2;
	ALIGN8  Hash p3;
	ALIGN8  int p4;
	ALIGN8  Hash p5;
	ALIGN8  int p6;
};
struct FeedData
{
	alignas(8) int duration; //how long to display the feed item for (milliseconds)
	alignas(8) const char* f_1; //Used with UIFEED::0xAFF5BE9BA496CE40, seems to set the background colour, untested.
	alignas(8) const char* f_2; //Used with UIFEED::0xAFF5BE9BA496CE40, seems to set the background colour, untested.
	alignas(8) int f_3;
	alignas(8) int f_4;  //Seems to be a struct for the UIFEED::_0xAFF5BE9BA496CE40 native. 
	alignas(8) int f_5;
	alignas(8) const char* secondary_subtitle; //Used with natives like UIFEED::_UI_FEED_POST_SAMPLE_TOAST. Displays another subtitle once the primary once has been displayed (from FeedInfo.subtitle).
	alignas(8) int f_7;
	alignas(8) int f_8;
	alignas(8) int f_9;
	alignas(8) int f_10;
	alignas(8) int f_11;
	alignas(8) int f_12;
};
struct FeedInfo
{
	alignas(8) int f_0;
	alignas(8) const char* title; //The title of the feed item.
	alignas(8) const char* subtitle; //the main subtitle of the feed item.
	alignas(8) int f_3;
	alignas(8) int texture_dictionary_hash; //the texture dict hash. Used with natives like UIFEED::_UI_FEED_POST_SAMPLE_TOAST
	alignas(8) int texture_name_hash; //the texture name hash. Used with natives like UIFEED::_UI_FEED_POST_SAMPLE_TOAST
	alignas(8) int f_6;
	alignas(8) int f_7;
};
struct VolumeSphere
{
	float f_0;
	float f_1;
	float f_2;
	float s_0;
	float s_1;
	float s_2;
	float r_0;
	float r_1;
	float r_2;
};
struct VectorH
{
	ALIGN8 float x;
	ALIGN8 float y;
	ALIGN8 float z;
	ALIGN8 float h;
};
//struct UI_SCRIPT_EVENT
//{
//	alignas(8) eUIScriptEventType eventType;
//	alignas(8) int intParam;
//	alignas(8) Hash hashParam;
//	alignas(8) Hash datastoreParam;
//};

struct ScriptedSpeechParams
{
	const char* speechName;
	const char* voiceName;
	alignas(8) int variation;
	alignas(8) Hash speechParamHash;
	alignas(8) Ped listenerPed;
	alignas(8) BOOL syncOverNetwork;
	alignas(8) int v7;
};


struct date_time
{
	int year;
	int PADDING1;
	int month;
	int PADDING2;
	int day;
	int PADDING3;
	int hour;
	int PADDING4;
	int minute;
	int PADDING5;
	int second;
	int PADDING6;
};

struct StatId
{
	alignas(8) Hash BaseId;
	alignas(8) Hash PermutationId;
};
//struct g_lawData
//{
//	int _currentState = *getGlobalPtr(BASE + 4); // eLBS
//	Hash _currentLawRegion = *getGlobalPtr(BASE + 26);
//	float _lawSeeingRange = *getGlobalPtr(BASE + 69); // To be used with native LAW::_SET_LAW_SEEING_RANGE
//	Hash _mostRecentPursuitBountyState = *getGlobalPtr(BASE + 5);
//	Hash _currentCrime = *getGlobalPtr(BASE + 6);
//	int _currentBounty = *getGlobalPtr(BASE + 1381); // Seems to be inaccurate sometimes
//	int _currentRegion = *getGlobalPtr(BASE + 900);
//
//	struct wantedUIData
//	{
//		int eCurrentUIState = *getGlobalPtr(BASE + 78 + 59);
//	}wantedUIData;
//
//	// Global_1934266.f_78.f_62 = g_lawData.wantedUIData.??? (is a SET value for eCurrentUIState)
//	// Global_1934266.f_78.f_60 = g_lawData.wantedUIDate.??? (sub state)
//private:
//	static const int BASE = 1934266;
//};


static_assert(sizeof(Vector2) == 16, "");
static_assert(sizeof(Vector3) == 24, "");
static_assert(sizeof(Vector4) == 32, "");
static_assert(sizeof(VectorH) == 32, "");

struct RaycastResult
{
	int Result;
	BOOL DidHit;
	Entity HitEntity;
	Vector3 HitPosition;
	Vector3 SurfaceNormal;
	Hash MaterialHash;
};
