# RDR2 Natives Documentation

## BUILTIN
### WAIT
- **Return Type**: void
- **Parameters**: int ms
- **Description**: Generated Fri, 05 Jul 2024 16:48:09 GMT https://alloc8or.re/rdr3/nativedb/

### TIMERA
- **Return Type**: int
- **Parameters**: 
- **Description**: Counts up. Every 1000 is 1 real-time second. Use SETTIMERA(int value) to set the timer (e.g.: SETTIMERA(0)).

### TIMERB
- **Return Type**: int
- **Parameters**: 

### SETTIMERA
- **Return Type**: void
- **Parameters**: int value

### SETTIMERB
- **Return Type**: void
- **Parameters**: int value

### TIMESTEP
- **Return Type**: float
- **Parameters**: 
- **Description**: Gets the current frame time.

### SIN
- **Return Type**: float
- **Parameters**: float value

### COS
- **Return Type**: float
- **Parameters**: float value

### SQRT
- **Return Type**: float
- **Parameters**: float value

### POW
- **Return Type**: float
- **Parameters**: float base, float exponent

### LOG10
- **Return Type**: float
- **Parameters**: float value
- **Description**: Old name: _LOG10

### VMAG
- **Return Type**: float
- **Parameters**: float x, float y, float z
- **Description**: Calculates the magnitude of a vector.

### VMAG
- **Return Type**: float
- **Parameters**: Vector3 vec

### VMAG2
- **Return Type**: float
- **Parameters**: float x, float y, float z
- **Description**: Calculates the magnitude of a vector but does not perform Sqrt operations. (Its way faster)

### VMAG2
- **Return Type**: float
- **Parameters**: Vector3 vec

### VDIST
- **Return Type**: float
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2
- **Description**: Calculates distance between vectors. The value returned will be in meters.

### VDIST
- **Return Type**: float
- **Parameters**: Vector3 vec1, Vector3 vec2

### VDIST2
- **Return Type**: float
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2
- **Description**: Calculates distance between vectors but does not perform Sqrt operations. (Its way faster) The value returned will be in RAGE units.

### VDIST2
- **Return Type**: float
- **Parameters**: Vector3 vec1, Vector3 vec2

### SHIFT_LEFT
- **Return Type**: int
- **Parameters**: int value, int bitShift

### SHIFT_RIGHT
- **Return Type**: int
- **Parameters**: int value, int bitShift

### FLOOR
- **Return Type**: int
- **Parameters**: float value
- **Description**: Rounds a float value down to the next whole number

### CEIL
- **Return Type**: int
- **Parameters**: float value
- **Description**: Rounds a float value up to the next whole number

### ROUND
- **Return Type**: int
- **Parameters**: float value

### TO_FLOAT
- **Return Type**: float
- **Parameters**: int value

### SET_THIS_THREAD_PRIORITY
- **Return Type**: void
- **Parameters**: int priority
- **Description**: THREAD_PRIO_HIGHEST = 0 THREAD_PRIO_NORMAL = 1 THREAD_PRIO_LOWEST = 2 THREAD_PRIO_MANUAL_UPDATE = 100


## AICOVERPOINT
### _0x53E4D0C079CA6855
- **Return Type**: Entity
- **Parameters**: ScrHandle handle

### _DOES_COVER_POINT_EXIST
- **Return Type**: BOOL
- **Parameters**: ScrHandle handle

### _GET_COVER_POINT_STATE_FROM_PED
- **Return Type**: int
- **Parameters**: Ped ped
- **Description**: 1 = In cover while crouched 2 = In cover while standing 3 = Not in cover

### TASK_ENTER_COVER
- **Return Type**: void
- **Parameters**: Ped ped

### TASK_EXIT_COVER
- **Return Type**: void
- **Parameters**: Ped ped

### _0x957D7E750216D74B
- **Return Type**: int
- **Parameters**: Ped ped

### _TASK_AI_SEEK_COVER_TO_COVER_POINT
- **Return Type**: void
- **Parameters**: Any* args

### _0x64340DC208D671D5
- **Return Type**: void
- **Parameters**: const char* coverLayer
- **Description**: coverLayer: see levels_0/levels/rdr3/coverlayers

### _0x7A1FDCF35EAA140F
- **Return Type**: void
- **Parameters**: const char* coverLayer
- **Description**: coverLayer: see levels_0/levels/rdr3/coverlayers

### _REQUEST_FLINCH_COVER_ANIM
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: Makes ped flinch (if in cover) like they have been shot at

### _0x3C7A9C2C953128FE
- **Return Type**: void
- **Parameters**: Ped ped

### _0xEBA51A294C73292E
- **Return Type**: void
- **Parameters**: Any* args

### _0x140B3CB1D424A945
- **Return Type**: void
- **Parameters**: Ped ped, Hash weaponHash
- **Description**: weaponHash can also be -1

### _ARE_LOAD_COVER_ANIMS_LOADED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _STOP_RUNNING_COVER_ANIMS
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: Stops running cover anims and releases them _STOP_RENDERING_* - _STOP_SCRIPTED*

### _0x733077295AB51304
- **Return Type**: void
- **Parameters**: Any* args
- **Description**: args: f_0 = Volume Handle, f_2 = integer (-1, 32 used in R* Scripts)

### _ADD_SCRIPTED_COVER_POINT
- **Return Type**: ScrHandle
- **Parameters**: Any* data


## AITRANSPORT
### TASK_ENTER_TRANSPORT
- **Return Type**: void
- **Parameters**: Any* args

### TASK_EXIT_TRANSPORT
- **Return Type**: void
- **Parameters**: Any* args

### SET_PED_ON_TRANSPORT_SEAT
- **Return Type**: void
- **Parameters**: Ped ped, Entity transportEntity, int seat, int flags
- **Description**: seat: see CREATE_PED_INSIDE_VEHICLE

### SET_PED_OFF_TRANSPORT_SEAT
- **Return Type**: void
- **Parameters**: Ped ped, int flags

### SET_TRANSPORT_CONFIG_FLAG
- **Return Type**: void
- **Parameters**: Entity transportEntity, int flagId, BOOL value
- **Description**: flagId: enum eTransportConfigFlags { TCF_NotConsideredForEntryByLocalPlayer, TCF_0xB78D6624, TCF_0xA9700425, TCF_0x8D7E4641, TCF_0xF24BAA1F, TCF_0x63B77935, TCF_NotConsideredForEntryByAllPlayers, TCF_0xD17A2AFD, TCF_0xD4E4FDD5, TCF_0x8227C929, TCF_0x812C1070, TCF_0x0E1AB26F, TCF_0xBF4EC863, TCF_0x75660C36, TCF_0xA2539E20, TCF_0x9162C633, TCF_DisableHonorModifiers, TCF_0xF9E71CB6, TCF_0x933ECD3F, TCF_0x18513A34 }; https://github.com/femga/rdr3_discoveries/tree/master/AI/TRANSPORT_CONFIG_FLAGS

### GET_TRANSPORT_CONFIG_FLAG
- **Return Type**: BOOL
- **Parameters**: Entity transportEntity, int flagId, BOOL p2
- **Description**: flagId: see SET_TRANSPORT_CONFIG_FLAG

### _GET_TRANSPORT_USAGE_FLAGS
- **Return Type**: Any
- **Parameters**: Entity transportEntity, int* flags
- **Description**: See _SET_TRANSPORT_USAGE_FLAGS

### _SET_TRANSPORT_USAGE_FLAGS
- **Return Type**: void
- **Parameters**: Entity transportEntity, int flags
- **Description**: enum eTransportUsageFlags { TUF_INVALID = 0, TUF_ALLOW_DRIVER_ME = (1 << 0), TUF_ALLOW_DRIVER_GANG = (1 << 1), TUF_ALLOW_DRIVER_CREW = (1 << 2), TUF_ALLOW_DRIVER_FRIENDS = (1 << 3), TUF_ALLOW_DRIVER_ANYONE = (1 << 4), TUF_ALLOW_PASSENGER_ME = (1 << 5), TUF_ALLOW_PASSENGER_GANG = (1 << 6), TUF_ALLOW_PASSENGER_CREW = (1 << 7), TUF_ALLOW_PASSENGER_FRIENDS = (1 << 8), TUF_ALLOW_PASSENGER_ANYONE = (1 << 9), TUF_ALLOW_ACCESS_AI = (1 << 10) };

### SET_TRANSPORT_ACCESSIBLE_SEAT_FLAGS
- **Return Type**: void
- **Parameters**: Entity transportEntity, int flags

### _0x4B6C9A43F7D9109B
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _IS_PED_ON_TRANSPORT_ENTITY
- **Return Type**: BOOL
- **Parameters**: Ped ped, Entity transportEntity
- **Description**: Checks if ped is placed on target transportEntity

### _IS_PED_ON_TRANSPORT_SEAT
- **Return Type**: BOOL
- **Parameters**: Ped ped, BOOL p1

### _IS_TRANSPORT_SEAT_OCCUPIED
- **Return Type**: BOOL
- **Parameters**: Entity transportEntity, int seatIndex

### _IS_TRANSPORT_SEAT_FREE
- **Return Type**: BOOL
- **Parameters**: Entity transportEntity, int seatIndex
- **Description**: Called together with IS_VEHICLE_SEAT_FREE

### _GET_PED_IN_TRANSPORT_SEAT
- **Return Type**: Ped
- **Parameters**: Entity transportEntity, int seatIndex
- **Description**: seatIndex: see CREATE_PED_INSIDE_VEHICLE

### IS_PED_ENTERING_TRANSPORT
- **Return Type**: BOOL
- **Parameters**: Ped ped, Entity transportEntity, BOOL p2

### IS_PED_EXITING_TRANSPORT
- **Return Type**: BOOL
- **Parameters**: Ped ped, Entity transportEntity

### _0x4248AB2EEB3C75AD
- **Return Type**: void
- **Parameters**: Entity transportEntity, Ped ped, BOOL p2
- **Description**: _SET_TRANSPORT_*

### _SET_PED_USE_TRANSPORT_SEAT_PREFERENCE
- **Return Type**: void
- **Parameters**: Ped ped, Entity transportEntity, int preferenceSlot, int p3, int seatIndex

### _0x5639FBEA922788DA
- **Return Type**: void
- **Parameters**: Entity transportEntity
- **Description**: _CLEAR_A*

### _SET_AI_CAN_USE_TRANSPORT
- **Return Type**: void
- **Parameters**: Entity transportEntity, BOOL state

### _0x8C8371EDFAF014A0
- **Return Type**: void
- **Parameters**: Ped ped, float p1
- **Description**: _SET_TRANSPORT_*

### _0xF8C20282B237E3F7
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: _SET_TRANSPORT_*

### _SET_TRANSPORT_PRIORITY_SEAT
- **Return Type**: void
- **Parameters**: Entity transportEntity, int seatIndex


## ANIMSCENE
### _CREATE_ANIM_SCENE
- **Return Type**: AnimScene
- **Parameters**: const char* animDict, int flags, const char* playbackListName, BOOL p3, BOOL p4
- **Description**: flags: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/eAnimSceneFlag

### _DELETE_ANIM_SCENE
- **Return Type**: void
- **Parameters**: AnimScene animScene

### TRIGGER_ANIM_SCENE_SKIP
- **Return Type**: void
- **Parameters**: AnimScene animScene

### _0x4B85B3CF91972222
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene
- **Description**: Used in Script Function CUTSCENE_MANAGE_SKIP _CHECK_* (?)

### _CLEAR_ANIM_SCENE_WAS_SKIPPED
- **Return Type**: void
- **Parameters**: AnimScene animScene

### DOES_ANIM_SCENE_EXIST
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene

### _DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, const char* entityId

### _DOES_ANIM_SCENE_OWNERSHIP_OF_ENTITY_EXIST
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, const char* entityName

### LOAD_ANIM_SCENE
- **Return Type**: void
- **Parameters**: AnimScene animScene

### IS_ANIM_SCENE_LOADED
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, BOOL p1, BOOL p2

### _IS_ANIM_SCENE_LOADING
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, BOOL p1

### _IS_ANIM_SCENE_METADATA_ASSET_IN_RANGE_LOADING
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, BOOL p1

### IS_ANIM_SCENE_METADATA_LOADED
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, BOOL p1

### _GET_ANIM_SCENE_PLAYBACK_LIST_PHASE_AUDIO_LOAD_STRESS
- **Return Type**: int
- **Parameters**: AnimScene animScene, const char* phaseName

### START_ANIM_SCENE
- **Return Type**: void
- **Parameters**: AnimScene animScene

### RESET_ANIM_SCENE
- **Return Type**: void
- **Parameters**: AnimScene animScene, const char* playbackListName

### ABORT_ANIM_SCENE
- **Return Type**: void
- **Parameters**: AnimScene animScene, BOOL p1

### RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT
- **Return Type**: void
- **Parameters**: AnimScene animScene

### IS_ANIM_SCENE_RUNNING
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, BOOL p1

### IS_ANIM_SCENE_FINISHED
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, BOOL p1

### IS_ANIM_SCENE_EXITING_THIS_FRAME
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene

### HAS_ANIM_SCENE_EXITED
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, BOOL p1

### _0x73616E64696C132E
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, BOOL p1
- **Description**: Used in SP R* Scripts only _CO* - _CR*

### IS_ANIM_SCENE_IN_SECTION
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, const char* sectionName, BOOL p2

### _IS_ANIM_SCENE_SKIPPABLE
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene

### _IS_ANIM_SCENE_ABORTED
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene

### _0xD70C7A30412F8FA0
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene
- **Description**: Used in SP R* Scripts only _IS_ANIM_SCENE_*

### _0x9AAE3C1148A09BCA
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene
- **Description**: Used in SP R* Scripts only _IS_ANIM_SCENE_*

### _0xA96619FE85159ED2
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene
- **Description**: Used in SP R* Scripts only _WAS_ANIM_SCENE_*

### FADE_ANIM_SCENE_AUDIO_IN
- **Return Type**: void
- **Parameters**: AnimScene animScene, float p1

### FADE_ANIM_SCENE_AUDIO_OUT
- **Return Type**: void
- **Parameters**: AnimScene animScene, float p1

### BLOCK_ANIM_SCENE_FADING_NEXT_FRAME
- **Return Type**: void
- **Parameters**: BOOL p0, BOOL p1

### SET_ANIM_SCENE_ORIGIN
- **Return Type**: void
- **Parameters**: AnimScene animScene, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int order

### SET_ANIM_SCENE_ORIGIN
- **Return Type**: void
- **Parameters**: AnimScene animScene, Vector3 pos, Vector3 rot, int order

### GET_ANIM_SCENE_ORIGIN
- **Return Type**: void
- **Parameters**: AnimScene animScene, Vector3* position, Vector3* rotation, int order

### SET_ANIM_SCENE_PAUSED
- **Return Type**: void
- **Parameters**: AnimScene animScene, BOOL toggle

### _IS_ANIM_SCENE_PAUSED
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene

### SET_ANIM_SCENE_RATE
- **Return Type**: void
- **Parameters**: AnimScene animScene, float rate

### _GET_ANIM_SCENE_RATE
- **Return Type**: float
- **Parameters**: AnimScene animScene

### GET_ANIM_SCENE_PHASE
- **Return Type**: float
- **Parameters**: AnimScene animScene

### _GET_ANIM_SCENE_TIME
- **Return Type**: float
- **Parameters**: AnimScene animScene

### _GET_ANIM_SCENE_DURATION
- **Return Type**: float
- **Parameters**: AnimScene animScene

### SET_ANIM_SCENE_ENTITY
- **Return Type**: void
- **Parameters**: AnimScene animScene, const char* entityName, Entity entity, int flags

### REMOVE_ANIM_SCENE_ENTITY
- **Return Type**: void
- **Parameters**: AnimScene animScene, const char* entityName, Entity entity

### IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, const char* entityName

### COULD_ANIM_SCENE_ENTITY_REACH_EXIT_NEXT_FRAME
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, const char* entityName, Any p2, Any p3

### HAS_ENTITY_EXITED_ANIM_SCENE
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, const char* entityName

### _HAS_ENTITY_ENTERED_ANIM_SCENE
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, const char* entityName
- **Description**: _HAS_L* (?)

### _GET_ANIM_SCENE_PED
- **Return Type**: Ped
- **Parameters**: AnimScene animScene, const char* name, BOOL isNetwork

### _GET_ANIM_SCENE_OBJECT
- **Return Type**: Object
- **Parameters**: AnimScene animScene, const char* name, BOOL isNetwork

### _GET_ANIM_SCENE_VEHICLE
- **Return Type**: Vehicle
- **Parameters**: AnimScene animScene, const char* name, BOOL isNetwork

### SET_ANIM_SCENE_BOOL
- **Return Type**: void
- **Parameters**: AnimScene animScene, const char* name, BOOL value, BOOL p3

### GET_ANIM_SCENE_BOOL
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, const char* name

### SET_ANIM_SCENE_FLOAT
- **Return Type**: void
- **Parameters**: AnimScene animScene, const char* name, float value, BOOL p3, BOOL p4

### GET_ANIM_SCENE_FLOAT
- **Return Type**: float
- **Parameters**: AnimScene animScene, const char* name

### SET_ANIM_SCENE_INT
- **Return Type**: void
- **Parameters**: AnimScene animScene, const char* name, int value, BOOL p3

### GET_ANIM_SCENE_INT
- **Return Type**: int
- **Parameters**: AnimScene animScene, const char* name

### GET_ANIM_SCENE_ENTITY_LOCATION_DATA
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, const char* entityName, Vector3* matrix, BOOL p3, const char* playbackListName, int p5

### IS_ENTITY_PLAYING_ANIM_SCENE
- **Return Type**: BOOL
- **Parameters**: Entity entity, AnimScene animScene

### ATTACH_ANIM_SCENE_TO_ENTITY
- **Return Type**: void
- **Parameters**: AnimScene animScene, Entity entity, int p2

### ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION
- **Return Type**: void
- **Parameters**: AnimScene animScene, Entity entity, int p2

### DETACH_ANIM_SCENE
- **Return Type**: void
- **Parameters**: AnimScene animScene

### DETACH_ANIM_SCENE_PRESERVING_LOCATION
- **Return Type**: void
- **Parameters**: AnimScene animScene

### TAKE_OWNERSHIP_OF_ANIM_SCENE
- **Return Type**: void
- **Parameters**: AnimScene animScene

### CHECK_OWNERSHIP_OF_ANIM_SCENE
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene

### SET_ANIM_SCENE_PLAYBACK_LIST
- **Return Type**: void
- **Parameters**: AnimScene animScene, const char* playbackListName

### _0x1C5D33A4293E6DDE
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, const char* phaseName
- **Description**: Used in SP R* Scripts only _IS_ANIM_SCENE_P*

### _DOES_ANIM_SCENE_PLAY_LIST_EXIST
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, const char* playbackListName

### SET_ANIM_SCENE_PLAY_LIST
- **Return Type**: void
- **Parameters**: AnimScene animScene, const char* playlistName, BOOL p2

### _IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, const char* phaseName

### REQUEST_ANIM_SCENE_PLAY_LIST
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, const char* playlistName

### _RELEASE_ANIM_SCENE_PLAY_LIST
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, const char* playlistName

### _GET_ANIM_SCENE_DICT
- **Return Type**: Hash
- **Parameters**: AnimScene animScene

### _0x1407F5115FB9583E
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, const char* p1
- **Description**: Used in SP R* Scripts only Params: p1 = 2B-LowHonor, 2A-HighHonor

### _IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, const char* phaseName

### _IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene, const char* phaseName

### _0x1AD896BF43619551
- **Return Type**: void
- **Parameters**: 
- **Description**: Used in braithwaites2 SP R* Scripts only _A*

### GET_ANIM_SCENE_CURRENT_ACTIVE_CAMERA_COUNT
- **Return Type**: int
- **Parameters**: AnimScene animScene

### _0x5D7BFDA2290B4E39
- **Return Type**: BOOL
- **Parameters**: const char* p0
- **Description**: Used in SP R* Scripts only _IS_ANIM_SCENE_R* - _IS_ANIM_SCENE_S*

### _IS_MGM_SYSTEM_LOADED
- **Return Type**: BOOL
- **Parameters**: const char* mgmFilename
- **Description**: MGM stands for MiniGameMoments.

### _LOAD_MGM_ASSETS
- **Return Type**: BOOL
- **Parameters**: const char* mgmFilename
- **Description**: Used to request MiniGameMoments Assets.  mgmFilename's: Poker PokerArthur PokerArthurCamp PokerJohn PokerJohnCamp

### _CREATE_MGM_SYSTEM
- **Return Type**: int
- **Parameters**: const char* mgmFilename
- **Description**: Returns mgmHandle

### _DELETE_MGM_SYSTEM
- **Return Type**: void
- **Parameters**: int mgmHandle

### _0xB1A196BAFE650402
- **Return Type**: void
- **Parameters**: int mgmHandle, Ped ped
- **Description**: _PREPARE_* - _REGISTER_*

### _0xAE6DE22DE0ED4554
- **Return Type**: void
- **Parameters**: int mgmHandle, Ped ped
- **Description**: _UNLOAD_* - _WAS_ANIM_SCENE_*

### _0x61B2AAEF645DDAF0
- **Return Type**: BOOL
- **Parameters**: int mgmEventHandle, const char* p1, int seatId, int p3, BOOL p4
- **Description**: Only used in tg_p R* Script Returns true when mgm event success _PREPARE_* - _REGISTER_*

### _SET_MGM_EVENT
- **Return Type**: void
- **Parameters**: int mgmEventHandle, const char* p1, Any seatId, int p3, float p4

### _0x3641FCD53E59B335
- **Return Type**: void
- **Parameters**: int mgmHandle, Ped ped, const char* secondaryVoiceString
- **Description**: p2: MINIGAME_GET_SECONDARY_VOICE_STRING _SET_*

### _SET_BREAKOUT_ARCHETYPE
- **Return Type**: void
- **Parameters**: Ped ped, const char* archetype

### _CLEAR_BREAKOUT_ARCHETYPE
- **Return Type**: void
- **Parameters**: Ped ped

### _0x3B393716C3FD8237
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Used in SP R* Scripts only _IS_*

### _0xE12D7B4B959644CD
- **Return Type**: void
- **Parameters**: 
- **Description**: Used in SP R* Scripts only _SET_B* - _SET_C*

### _0xC1193521E3B9FADD
- **Return Type**: void
- **Parameters**: Entity entity, BOOL p1
- **Description**: Used in SP R* Scripts only _RESUME_* - _SET_A*

### _REQUEST_PHOTO_MODE_FREEZE
- **Return Type**: void
- **Parameters**: 

### _REQUEST_PHOTO_MODE_DEFREEZE
- **Return Type**: void
- **Parameters**: 

### _0x2DB524750DC41ED4
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Used in SP R* Scripts only _IS_PED_* - _IS_SC*

### _0xEA41D44A8D42057B
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Used in SP R* Scripts only _PAUSE_* - _PLAY_*

### _PAUSE_SCRIPT_THREADS
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: Pauses all script threads except the one that called it.

### _0xCDCD7B2D49AEE73A
- **Return Type**: void
- **Parameters**: BOOL p0
- **Description**: Used in SP R* Scripts only _SET_P*

### WAS_ANIM_SCENE_SKIPPED
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene


## _NAMESPACE4
### _REPORT_PLAYER_BAD_SPORT_BEHAVIOR
- **Return Type**: void
- **Parameters**: Any* gamerHandle, int badSportBehaviorType
- **Description**: nullsub, doesn't do anything however it is being used in tty scripts: [NET_BAD_SPORT_REPORT_PLAYER] Detected bad sport behavior from Player badSportBehavior: BS_QUITTER = 0, BS_VEHICLE_DESTRUCTION = 1, BS_VOTED_OUT = 2


## ATTRIBUTE
### SET_ATTRIBUTE_BASE_RANK
- **Return Type**: void
- **Parameters**: Ped ped, int attributeIndex, int newValue
- **Description**: attributeIndex: enum ePedAttribute { PA_HEALTH, PA_STAMINA, PA_SPECIALABILITY, PA_COURAGE, PA_AGILITY, PA_SPEED, PA_ACCELERATION, PA_BONDING, SA_HUNGER, SA_FATIGUED, SA_INEBRIATED, SA_POISONED, SA_BODYHEAT, SA_BODYWEIGHT, SA_OVERFED, SA_SICKNESS, SA_DIRTINESS, SA_DIRTINESSHAT, MTR_STRENGTH, MTR_GRIT, MTR_INSTINCT, PA_UNRULINESS, SA_DIRTINESSSKIN };

### GET_ATTRIBUTE_RANK
- **Return Type**: int
- **Parameters**: Ped ped, int attributeIndex
- **Description**: attributeIndex: see SET_ATTRIBUTE_BASE_RANK

### GET_ATTRIBUTE_BASE_RANK
- **Return Type**: int
- **Parameters**: Ped ped, int attributeIndex
- **Description**: attributeIndex: see SET_ATTRIBUTE_BASE_RANK

### GET_ATTRIBUTE_BONUS_RANK
- **Return Type**: int
- **Parameters**: Ped ped, int coreIndex
- **Description**: attributeIndex: see SET_ATTRIBUTE_BASE_RANK

### GET_MAX_ATTRIBUTE_RANK
- **Return Type**: int
- **Parameters**: Ped ped, int attributeIndex
- **Description**: attributeIndex: see SET_ATTRIBUTE_BASE_RANK

### SET_ATTRIBUTE_BONUS_RANK
- **Return Type**: void
- **Parameters**: Ped ped, int attributeIndex, int newValue
- **Description**: attributeIndex: see SET_ATTRIBUTE_BASE_RANK

### GET_DEFAULT_ATTRIBUTE_RANK
- **Return Type**: int
- **Parameters**: Ped ped, int attributeIndex
- **Description**: attributeIndex: see SET_ATTRIBUTE_BASE_RANK

### GET_DEFAULT_MAX_ATTRIBUTE_RANK
- **Return Type**: int
- **Parameters**: Ped ped, int attributeIndex
- **Description**: attributeIndex: see SET_ATTRIBUTE_BASE_RANK

### ADD_ATTRIBUTE_POINTS
- **Return Type**: void
- **Parameters**: Ped ped, int attributeIndex, int p2
- **Description**: attributeIndex: see SET_ATTRIBUTE_BASE_RANK

### SET_ATTRIBUTE_POINTS
- **Return Type**: void
- **Parameters**: Ped ped, int attributeIndex, int p2
- **Description**: attributeIndex: see SET_ATTRIBUTE_BASE_RANK

### GET_ATTRIBUTE_POINTS
- **Return Type**: int
- **Parameters**: Ped ped, int attributeIndex
- **Description**: attributeIndex: see SET_ATTRIBUTE_BASE_RANK

### GET_MAX_ATTRIBUTE_POINTS
- **Return Type**: int
- **Parameters**: Ped ped, int attributeIndex
- **Description**: attributeIndex: see SET_ATTRIBUTE_BASE_RANK

### _SET_ATTRIBUTE_CORE_VALUE
- **Return Type**: void
- **Parameters**: Ped ped, int coreIndex, int value
- **Description**: coreIndex: enum eAttributeCore { ATTRIBUTE_CORE_HEALTH, ATTRIBUTE_CORE_STAMINA, ATTRIBUTE_CORE_DEADEYE };

### _GET_ATTRIBUTE_CORE_VALUE
- **Return Type**: int
- **Parameters**: Ped ped, int coreIndex
- **Description**: Gets the ped's core value on a scale of 0 to 100. coreIndex: see _SET_ATTRIBUTE_CORE_VALUE

### GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK
- **Return Type**: int
- **Parameters**: Hash modelHash, int attributeIndex, int rank
- **Description**: attributeIndex: see SET_ATTRIBUTE_BASE_RANK

### ENABLE_ATTRIBUTE_OVERPOWER
- **Return Type**: void
- **Parameters**: Ped ped, int attributeIndex, float value, BOOL makeSound
- **Description**: attributeIndex: see SET_ATTRIBUTE_BASE_RANK  Old name: _SET_ATTRIBUTE_OVERPOWER_VALUE

### _ENABLE_ATTRIBUTE_CORE_OVERPOWER
- **Return Type**: void
- **Parameters**: Ped ped, int coreIndex, float value, BOOL makeSound
- **Description**: coreIndex: see _SET_ATTRIBUTE_CORE_VALUE  Previously incorrectly named ENABLE_ATTRIBUTE_OVERPOWER

### DISABLE_ATTRIBUTE_OVERPOWER
- **Return Type**: void
- **Parameters**: Ped ped, int attributeIndex
- **Description**: attributeIndex: see SET_ATTRIBUTE_BASE_RANK

### _IS_ATTRIBUTE_OVERPOWERED
- **Return Type**: BOOL
- **Parameters**: Ped ped, int attributeIndex
- **Description**: attributeIndex: see SET_ATTRIBUTE_BASE_RANK

### _IS_ATTRIBUTE_CORE_OVERPOWERED
- **Return Type**: BOOL
- **Parameters**: Ped ped, int coreIndex

### _GET_ATTRIBUTE_OVERPOWER_SECONDS_LEFT
- **Return Type**: float
- **Parameters**: Ped ped, int attributeIndex

### _GET_ATTRIBUTE_CORE_OVERPOWER_SECONDS_LEFT
- **Return Type**: float
- **Parameters**: Ped ped, int coreIndex

### _START_ITEM_PREVIEW
- **Return Type**: void
- **Parameters**: Any p0, int p1
- **Description**: Params: p1 is related to satchel_category

### STOP_ITEM_PREVIEW
- **Return Type**: void
- **Parameters**: 

### _SET_STATUS_EFFECT_CORE_ICON
- **Return Type**: void
- **Parameters**: int statusEffectType
- **Description**: Displays status effects on core icons (includes warnings).  enum eUiRpgStatusEffect { STATUS_NONE, STATUS_COLD, STATUS_HOT, STATUS_OVERFED, STATUS_DIRTY, STATUS_SNAKE_VENOM, STATUS_ARROW_WOUNDED, STATUS_ARROW_DRAINED, STATUS_ARROW_DISORIENTED, STATUS_ARROW_TRACKED, STATUS_ARROW_CONFUSION, STATUS_UNDERWEIGHT, STATUS_OVERWEIGHT, STATUS_SICK_1, STATUS_SICK_2, STATUS_PREDATOR_INVULNERABLE };

### _SET_STATUS_EFFECT_PERIODIC_ICON
- **Return Type**: void
- **Parameters**: int statusEffectType
- **Description**: Starts core periodic icon. statusEffectType: see 0xA4D3A1C008F250DF

### _STOP_STATUS_EFFECT_PERIODIC_ICON
- **Return Type**: void
- **Parameters**: int statusEffectType
- **Description**: Stops periodic icon. statusEffectType: see 0xA4D3A1C008F250DF


## AUDIO
### _0x7455CD705F7E933E
- **Return Type**: void
- **Parameters**: 
- **Description**: _AUDIO_IS_* - _AUDIO_TRIGGER*

### CLEAR_CONVERSATION_HISTORY
- **Return Type**: void
- **Parameters**: 

### _CLEAR_CONVERSATION_HISTORY_FOR_SCRIPTED_CONVERSATION
- **Return Type**: void
- **Parameters**: const char* convoRoot

### CREATE_NEW_SCRIPTED_CONVERSATION
- **Return Type**: BOOL
- **Parameters**: const char* convoRoot

### _0xDF947FE0D551684E
- **Return Type**: BOOL
- **Parameters**: Ped ped, const char* p1

### ADD_PED_TO_CONVERSATION
- **Return Type**: void
- **Parameters**: const char* convoRoot, Ped ped, const char* characterName

### _0xA2323A2EAE32A290
- **Return Type**: void
- **Parameters**: Ped listeningToPed, Ped ped, const char* listenerName

### _0x79F9C57B8D0DFE90
- **Return Type**: BOOL
- **Parameters**: const char* convoRoot, AnimScene animScene
- **Description**: Only used in R* SP Script cv_mus_shared

### START_SCRIPT_CONVERSATION
- **Return Type**: void
- **Parameters**: const char* convoRoot, BOOL p1, BOOL p2, BOOL clone

### PRELOAD_SCRIPT_CONVERSATION
- **Return Type**: void
- **Parameters**: const char* convoRoot, BOOL p1, BOOL p2, BOOL clone

### START_PRELOADED_CONVERSATION
- **Return Type**: void
- **Parameters**: const char* convoRoot

### _0x0CB3D1919E8D7CBA
- **Return Type**: BOOL
- **Parameters**: const char* convoRoot

### _0xFE5C6177064BD390
- **Return Type**: BOOL
- **Parameters**: BOOL p0

### _IS_SCRIPTED_CONVERSATION_CREATED
- **Return Type**: BOOL
- **Parameters**: const char* convoRoot

### _0x5A13586A9447931F
- **Return Type**: BOOL
- **Parameters**: BOOL p0

### IS_SCRIPTED_CONVERSATION_LOADED
- **Return Type**: BOOL
- **Parameters**: const char* convoRoot

### _IS_ANY_CONVERSATION_PLAYING
- **Return Type**: BOOL
- **Parameters**: BOOL p0

### IS_SCRIPTED_CONVERSATION_PLAYING
- **Return Type**: BOOL
- **Parameters**: const char* p0

### _IS_SCRIPTED_CONVERSION_ONGOING
- **Return Type**: BOOL
- **Parameters**: const char* p0

### _0x847748AE5D7B1071
- **Return Type**: BOOL
- **Parameters**: BOOL p0

### _0xD0730C1FA40348D9
- **Return Type**: BOOL
- **Parameters**: const char* convoRoot
- **Description**: _IS_SCRIPTED_CONVERSATION_*

### GET_CURRENT_SCRIPTED_CONVERSATION_LINE
- **Return Type**: int
- **Parameters**: const char* p0

### PAUSE_SCRIPTED_CONVERSATION
- **Return Type**: void
- **Parameters**: const char* p0, BOOL p1, BOOL p2, BOOL p3, BOOL p4

### RESTART_SCRIPTED_CONVERSATION
- **Return Type**: void
- **Parameters**: const char* p0

### _STOP_ALL_SCRIPTED_CONVERSIONS
- **Return Type**: void
- **Parameters**: BOOL p0, BOOL p1, BOOL p2

### STOP_SCRIPTED_CONVERSATION
- **Return Type**: int
- **Parameters**: const char* p0, BOOL p1, BOOL p2

### SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE
- **Return Type**: void
- **Parameters**: const char* p0

### _0xF336E9F989B3518F
- **Return Type**: int
- **Parameters**: const char* p0

### _0x254B0241E964B450
- **Return Type**: Ped
- **Parameters**: const char* p0, int currentScriptedConvoLine

### _0x152ED1B56E8F1F50
- **Return Type**: Ped
- **Parameters**: const char* p0, int currentScriptedConvoLine

### _0x935DBD96D4A3DA1F
- **Return Type**: int
- **Parameters**: const char* p0, int currentScriptedConvoLine

### _0x295859EB18F48D82
- **Return Type**: int
- **Parameters**: const char* p0

### _0x40CA665AB9D8D505
- **Return Type**: void
- **Parameters**: const char* convoRoot, int singleLineIndex

### _0xF232C2C546AC16D0
- **Return Type**: void
- **Parameters**: const char* p0

### _0x1E6F9A9FE1A99F36
- **Return Type**: void
- **Parameters**: const char* audSpeechEvent

### REGISTER_SCRIPT_WITH_AUDIO
- **Return Type**: void
- **Parameters**: BOOL p0
- **Description**: nullsub, doesn't do anything

### UNREGISTER_SCRIPT_WITH_AUDIO
- **Return Type**: void
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### REQUEST_SCRIPT_AUDIO_BANK
- **Return Type**: BOOL
- **Parameters**: const char* audioBank

### RELEASE_NAMED_SCRIPT_AUDIO_BANK
- **Return Type**: void
- **Parameters**: const char* audioBank

### RELEASE_SCRIPT_AUDIO_BANK
- **Return Type**: void
- **Parameters**: 

### GET_SOUND_ID
- **Return Type**: int
- **Parameters**: 

### RELEASE_SOUND_ID
- **Return Type**: void
- **Parameters**: int soundId

### PLAY_SOUND
- **Return Type**: void
- **Parameters**: const char* audioName, const char* audioRef, BOOL p2, Any p3, BOOL p4, Any p5

### PLAY_SOUND_FRONTEND
- **Return Type**: void
- **Parameters**: const char* audioName, const char* audioRef, BOOL p2, Any p3
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/audio/frontend_soundsets

### _PLAY_SOUND_FROM_ITEM
- **Return Type**: void
- **Parameters**: Hash item, Hash soundSet, Any p2
- **Description**: item: value returned from 0x2E1CDC1FF3B8473E soundSet: HUD_SHOP_SOUNDSET, COMPANIONS_ROBBERIES_SOUNDSET

### PLAY_SOUND_FROM_ENTITY
- **Return Type**: void
- **Parameters**: const char* audioName, Entity entity, const char* audioRef, BOOL isNetwork, Any p4, Any p5

### _PLAY_SOUND_FROM_POSITION
- **Return Type**: void
- **Parameters**: const char* audioName, float x, float y, float z, const char* audioRef, BOOL isNetwork, Any p6, BOOL p7, Any p8

### _PLAY_SOUND_FROM_POSITION
- **Return Type**: void
- **Parameters**: const char* audioName, Vector3 vec, const char* audioRef, BOOL isNetwork, Any p6, BOOL p7, Any p8

### _STOP_SOUND_WITH_NAME
- **Return Type**: void
- **Parameters**: const char* audioName, const char* audioRef

### _0x580D71DFE0088E34
- **Return Type**: BOOL
- **Parameters**: const char* audioName, const char* audioRef
- **Description**: _IS_SOUND_RUNNING(?)

### _IS_SCRIPTED_AUDIO_CUSTOM
- **Return Type**: BOOL
- **Parameters**: Hash item, Hash soundSet
- **Description**: item: FUSE, value returned from 0x2E1CDC1FF3B8473E soundSet: HUD_SHOP_SOUNDSET, COMPANIONS_ROBBERIES_SOUNDSET

### _SET_VARIABLE_ON_SOUND_WITH_NAME
- **Return Type**: void
- **Parameters**: const char* variableName, float variableValue, const char* audioName, const char* audioRef

### _SET_WHISTLE_CONFIG_FOR_PED
- **Return Type**: void
- **Parameters**: Ped ped, const char* whistleConfig, float value
- **Description**: whistleConfig: Ped.WhistlePitch (0.0 - 1.0), Ped.WhistleClarity (0.0 - 1.0), Ped.WhistleShape (0.0 - 10.0)

### _SET_SOUND_RELATIONSHIP_ON_PED
- **Return Type**: void
- **Parameters**: Ped ped, const char* p1, const char* p2
- **Description**: p1: Entity.Relationship p2: Player, Enemy, Teammate, Neutral

### _PLAY_SOUND_FRONTEND_WITH_SOUND_ID
- **Return Type**: void
- **Parameters**: int soundId, const char* name, const char* soundSet, BOOL p3

### _PLAY_SOUND_FROM_ENTITY_WITH_SET
- **Return Type**: void
- **Parameters**: int soundId, const char* soundName, Entity entity, const char* soundsetName, BOOL p4, Any p5
- **Description**: Params: p5 seems to be always 0

### _PLAY_SOUND_FROM_POSITION_WITH_ID
- **Return Type**: void
- **Parameters**: int soundId, const char* soundName, float x, float y, float z, const char* soundsetName, BOOL p6, int p7, BOOL p8
- **Description**: Starts Audio Loop _PLAY_SOUND_FROM_ENTITY* - _PLAY_SOUND_FRONTEND*

### _PLAY_SOUND_FROM_POSITION_WITH_ID
- **Return Type**: void
- **Parameters**: int soundId, const char* soundName, Vector3 vec, const char* soundsetName, BOOL p6, int p7, BOOL p8

### _UPDATE_SOUND_POSITION
- **Return Type**: void
- **Parameters**: int soundId, float x, float y, float z
- **Description**: Only used in R* SP Scripts

### _UPDATE_SOUND_POSITION
- **Return Type**: void
- **Parameters**: int soundId, Vector3 vec

### _STOP_SOUND_WITH_ID
- **Return Type**: void
- **Parameters**: int soundId

### _SET_VARIABLE_ON_SOUND_WITH_ID
- **Return Type**: void
- **Parameters**: int soundId, const char* variableName, float variableValue

### PREPARE_SOUND
- **Return Type**: BOOL
- **Parameters**: const char* soundName, const char* soundsetName, int soundId

### _RELEASE_SHARD_SOUNDS
- **Return Type**: void
- **Parameters**: const char* soundName, const char* soundsetName

### PREPARE_SOUNDSET
- **Return Type**: BOOL
- **Parameters**: const char* soundsetName, BOOL p1
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/audio/soundsets

### _RELEASE_SOUNDSET
- **Return Type**: void
- **Parameters**: const char* soundsetName

### PREPARE_SOUND_WITH_ENTITY
- **Return Type**: BOOL
- **Parameters**: const char* soundName, Entity entity, const char* soundsetName, int soundId

### _0x3E93DDDCBB6111E4
- **Return Type**: void
- **Parameters**: const char* p0, float p1

### _HAS_SOUND_AUDIO_NAME_FINISHED
- **Return Type**: BOOL
- **Parameters**: const char* audioName, const char* soundsetName

### _HAS_SOUND_ID_FINISHED
- **Return Type**: BOOL
- **Parameters**: int soundId

### PLAY_PED_AMBIENT_SPEECH_NATIVE
- **Return Type**: BOOL
- **Parameters**: Ped speaker, Any* params
- **Description**: struct ScriptedSpeechParams { const char* speechName; const char* voiceName; alignas(8) int variation; alignas(8) Hash speechParamHash; alignas(8) Ped listenerPed; alignas(8) BOOL syncOverNetwork; alignas(8) int v7; alignas(8) int v8; };  static_assert(sizeof(ScriptedSpeechParams) == 0x40, "incorrect ScriptedSpeechParams size");   Example:  ScriptedSpeechParams params{"RE_PH_RHD_V3_AGGRO", "0405_U_M_M_RhdSheriff_01", 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 0, true, 1, 1}; PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER_PED_ID(), (Any*)&params);  Old name: _PLAY_AMBIENT_SPEECH1 https://github.com/femga/rdr3_discoveries/tree/master/audio/audio_banks

### PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, Any* params
- **Description**: Old name: _PLAY_AMBIENT_SPEECH_AT_COORDS

### PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, Any* params

### _0x72E4D1C4639BC465
- **Return Type**: Any
- **Parameters**: Entity p0, Any p1

### _0xB18FEC133C7C6C69
- **Return Type**: Any
- **Parameters**: Any p0

### _0xDC93F0948F2C28F4
- **Return Type**: void
- **Parameters**: Any p0

### _0x0D7FD6A55FD63AEF
- **Return Type**: void
- **Parameters**: int speechEventType, int p1, BOOL p2
- **Description**: speechEventType: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/naSpeechEventType p1 is possibly naSpeechAudibility, naSpeechType, or naSpeechEventTypeRequestPriority SKIP_* - START_*

### _0x660A8F876DF1D4F8
- **Return Type**: void
- **Parameters**: int speechEventType
- **Description**: speechEventType: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/naSpeechEventType SKIP_* - START_*

### _0x380A2E353AD30917
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x0FAF7171BF613B80
- **Return Type**: void
- **Parameters**: Any p0

### PLAY_PAIN
- **Return Type**: void
- **Parameters**: Ped ped, int painId, float p2, BOOL p3, BOOL isNetwork
- **Description**: Valid pain IDs: 0..12

### _0x6652B0C8F3D414D0
- **Return Type**: void
- **Parameters**: Any p0

### _0xF092B6030D6FD49C
- **Return Type**: void
- **Parameters**: int ropeId, const char* name
- **Description**: Name: ROPE_SETTINGS_DEFAULT

### _0x2651DDC0EA269073
- **Return Type**: void
- **Parameters**: int ropeId, float p1

### SET_AMBIENT_VOICE_NAME
- **Return Type**: void
- **Parameters**: Ped ped, const char* name

### _SET_VOFX_PED_VOICE
- **Return Type**: void
- **Parameters**: Ped ped, Hash voice
- **Description**: Hashes: VOFX_PLAYER_MALE01, VOFX_PLAYER_MALE02, VOFX_PLAYER_MALE03, VOFX_PLAYER_FEMALE01, VOFX_PLAYER_FEMALE02, VOFX_PLAYER_FEMALE03

### STOP_CURRENT_PLAYING_SPEECH
- **Return Type**: void
- **Parameters**: Ped ped, Any p1

### STOP_CURRENT_PLAYING_AMBIENT_SPEECH
- **Return Type**: void
- **Parameters**: Ped ped, Any p1

### IS_AMBIENT_SPEECH_PLAYING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_SCRIPTED_SPEECH_PLAYING
- **Return Type**: BOOL
- **Parameters**: Any p0

### IS_ANY_SPEECH_PLAYING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0x2B101AD9F651243A
- **Return Type**: Any
- **Parameters**: 

### _0x4A98E228A936DBCC
- **Return Type**: Any
- **Parameters**: Any p0

### _0x6BFFB7C276866996
- **Return Type**: Any
- **Parameters**: Any p0

### DOES_CONTEXT_EXIST_FOR_THIS_PED
- **Return Type**: BOOL
- **Parameters**: Ped ped, const char* speechName, BOOL unk
- **Description**: Checks if the ped can play the speech or has the speech file, last parameter is usually false.

### _0xF0EE69F500952FA5
- **Return Type**: Any
- **Parameters**: Any p0

### _0x9D6DEC9791A4E501
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x864A842B86993851
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: Not implemented.

### IS_PED_IN_CURRENT_CONVERSATION
- **Return Type**: BOOL
- **Parameters**: const char* p0, Ped ped, Any p2

### _IS_PED_IN_ANY_CONVERSATION
- **Return Type**: BOOL
- **Parameters**: Ped ped, BOOL p1

### SET_PED_IS_DRUNK
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _0x3A00D87B20A2A5E4
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xD47D47EFBF103FB8
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### PLAY_ANIMAL_VOCALIZATION
- **Return Type**: void
- **Parameters**: Ped ped, const char* vocalizationName, BOOL p2

### _PLAY_ANIMAL_VOCALIZATION_PHEROMONE_VIAL_RESPONSE
- **Return Type**: void
- **Parameters**: Ped ped, Hash p1, BOOL p2

### IS_ANIMAL_VOCALIZATION_PLAYING
- **Return Type**: BOOL
- **Parameters**: Ped pedHandle

### SET_ANIMAL_MOOD
- **Return Type**: void
- **Parameters**: Ped animal, int mood
- **Description**: Not implemented.

### _0xFCDEC42B1C78B7F8
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xEB4D592620B8C209
- **Return Type**: void
- **Parameters**: Any p0

### _0xA6847BBA4FCDD13F
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_STATIC_EMITTER_ENABLED
- **Return Type**: void
- **Parameters**: const char* emitterName, BOOL toggle

### PLAY_END_CREDITS_MUSIC
- **Return Type**: void
- **Parameters**: BOOL play

### _0x7678FE0455ED1145
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0xFFE9C53DEEA3DB0B
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, float x, float y, float z, BOOL isSrlLoaded, Any p6

### _0xFFE9C53DEEA3DB0B
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Vector3 vec, BOOL isSrlLoaded, Any p6

### _0x5E3CCF03995388B5
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x43037ABFE214A851
- **Return Type**: void
- **Parameters**: 

### SET_AMBIENT_ZONE_STATE
- **Return Type**: void
- **Parameters**: const char* zoneName, BOOL isEnabled, BOOL p2

### CLEAR_AMBIENT_ZONE_STATE
- **Return Type**: void
- **Parameters**: const char* zoneName, BOOL p1

### SET_AMBIENT_ZONE_LIST_STATE
- **Return Type**: void
- **Parameters**: const char* ambientZone, BOOL p1, BOOL p2

### CLEAR_AMBIENT_ZONE_LIST_STATE
- **Return Type**: void
- **Parameters**: const char* ambientZone, BOOL p1

### SET_AMBIENT_ZONE_STATE_PERSISTENT
- **Return Type**: void
- **Parameters**: const char* ambientZone, BOOL p1, BOOL p2

### SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT
- **Return Type**: void
- **Parameters**: const char* ambientZone, BOOL p1, BOOL p2

### _SET_AMBIENT_ZONE_POSITION
- **Return Type**: void
- **Parameters**: const char* ambientZone, float x, float y, float z, float heading

### _SET_AMBIENT_ZONE_POSITION
- **Return Type**: void
- **Parameters**: const char* ambientZone, Vector3 vec, float heading

### IS_HORN_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle
- **Description**: Checks whether the horn of a vehicle is currently played.

### _0xFD461D0ABA5559B1
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### IS_STREAM_PLAYING
- **Return Type**: BOOL
- **Parameters**: int streamId

### LOAD_STREAM
- **Return Type**: BOOL
- **Parameters**: const char* streamName, const char* soundSet

### PLAY_STREAM_FROM_PED
- **Return Type**: void
- **Parameters**: Ped ped, int streamId

### PLAY_STREAM_FRONTEND
- **Return Type**: void
- **Parameters**: int streamId

### PLAY_STREAM_FROM_POSITION
- **Return Type**: void
- **Parameters**: float x, float y, float z, int streamId

### PLAY_STREAM_FROM_POSITION
- **Return Type**: void
- **Parameters**: Vector3 vec, int streamId

### _0x3A3BE6B920525237
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### STOP_STREAM
- **Return Type**: void
- **Parameters**: int streamId

### STOP_PED_SPEAKING
- **Return Type**: void
- **Parameters**: Ped ped, BOOL shaking

### DISABLE_PED_PAIN_AUDIO
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### IS_AMBIENT_SPEECH_DISABLED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### SET_IS_SCRIPTED_SPEECH_DISABLED
- **Return Type**: Any
- **Parameters**: Ped ped, BOOL disabled

### _BLOCK_SPEECH_CONTEXT
- **Return Type**: void
- **Parameters**: const char* context, BOOL block

### _UNLOAD_SPEECH_CONTEXT
- **Return Type**: void
- **Parameters**: const char* speechContext
- **Description**: _UNLOAD_[A-C]* - USE_*

### SET_HORN_ENABLED
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### SET_AUDIO_VEHICLE_PRIORITY
- **Return Type**: void
- **Parameters**: Vehicle vehicle, Any p1

### _0x259ACC5B52A2B2D9
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### FORCE_USE_AUDIO_GAME_OBJECT
- **Return Type**: void
- **Parameters**: Vehicle vehicle, const char* audioName
- **Description**: Old name: _FORCE_VEHICLE_ENGINE_AUDIO

### SET_GPS_ACTIVE
- **Return Type**: void
- **Parameters**: BOOL active
- **Description**: nullsub, doesn't do anything

### _START_AUDIO_SCENESET
- **Return Type**: BOOL
- **Parameters**: const char* audioName, const char* sceneset

### _STOP_AUDIO_SCENESET
- **Return Type**: void
- **Parameters**: const char* sceneset

### _SET_AUDIO_SCENESET
- **Return Type**: BOOL
- **Parameters**: const char* audioName, const char* sceneset

### START_AUDIO_SCENE
- **Return Type**: BOOL
- **Parameters**: const char* scene

### _0xDC2F83A0612CA34D
- **Return Type**: Any
- **Parameters**: Any p0

### STOP_AUDIO_SCENE
- **Return Type**: void
- **Parameters**: const char* scene

### _0x6AB944DF68B512D3
- **Return Type**: void
- **Parameters**: Any p0
- **Description**: _STOP_AUDIO_*

### STOP_AUDIO_SCENES
- **Return Type**: void
- **Parameters**: 

### IS_AUDIO_SCENE_ACTIVE
- **Return Type**: BOOL
- **Parameters**: const char* scene

### SET_AUDIO_SCENE_VARIABLE
- **Return Type**: void
- **Parameters**: const char* scene, const char* variable, float value

### _GET_ENTITY_AUDIO_MIX_GROUP
- **Return Type**: Hash
- **Parameters**: Entity entity

### ADD_ENTITY_TO_AUDIO_MIX_GROUP
- **Return Type**: void
- **Parameters**: Entity entity, const char* groupName, float p2

### _0x131EC9247E7A2903
- **Return Type**: Any
- **Parameters**: Any p0

### REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP
- **Return Type**: void
- **Parameters**: Entity entity, float p1

### _0xE600F61F54A444A6
- **Return Type**: Any
- **Parameters**: 

### AUDIO_IS_MUSIC_PLAYING
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Old name: AUDIO_IS_SCRIPTED_MUSIC_PLAYING

### _0xBE28DB99556FF8D9
- **Return Type**: Hash
- **Parameters**: Entity entity
- **Description**: Checks for MOONSHINE_BAND

### _0x8E901B65206C2D3E
- **Return Type**: void
- **Parameters**: Ped ped

### _0xC4CFCE4C656EF480
- **Return Type**: void
- **Parameters**: Ped ped

### _0xABDB4863D3D72021
- **Return Type**: void
- **Parameters**: Entity entity, Any p1, Any p2, float p3, Any p4

### _0xB93A769B8B726950
- **Return Type**: void
- **Parameters**: Ped ped, Hash p1
- **Description**: Used in Script Function NET_CAMP_CLIENT_UPDATE_PED_ROLE_STATE_SHOP: hash exists! Playing hash

### _0xE891504B2F0E2DBA
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x9EB779765E68C52E
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xE9694B2D6CB87B06
- **Return Type**: void
- **Parameters**: Entity entity, Any p1

### _0x886657C5B3D8EDE3
- **Return Type**: Any
- **Parameters**: Entity entity

### _0xC68C02DE259C927C
- **Return Type**: Any
- **Parameters**: Any p0

### _0x2FFF4A78384AFFDF
- **Return Type**: Any
- **Parameters**: Entity entity

### _0x62377977E4F08668
- **Return Type**: AnimScene
- **Parameters**: Entity entity

### _GET_PED_SONG_INDEX_HOST
- **Return Type**: Any
- **Parameters**: Ped ped

### _0xD05A460328560477
- **Return Type**: Any
- **Parameters**: Any p0

### _0x8D29FDF565DED9AE
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x448F2647DD6F2E27
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0x139A4B9DF2D26CBF
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x018ABE833CA64D2A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xBC07CA8FD710E7FD
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### PREPARE_MUSIC_EVENT
- **Return Type**: BOOL
- **Parameters**: const char* eventName

### CANCEL_MUSIC_EVENT
- **Return Type**: BOOL
- **Parameters**: const char* eventName

### TRIGGER_MUSIC_EVENT
- **Return Type**: BOOL
- **Parameters**: const char* eventName
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/audio/music_events/music_events.lua

### _TRIGGER_MUSIC_EVENT_WITH_HASH
- **Return Type**: Any
- **Parameters**: Hash eventName

### GET_MUSIC_PLAYTIME
- **Return Type**: int
- **Parameters**: 

### _0xF64034D533CE8AAC
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### SET_PED_WALLA_DENSITY
- **Return Type**: void
- **Parameters**: float p0, float p1
- **Description**: https://en.m.wikipedia.org/wiki/Walla

### _0xDAD6CD07CAA4F382
- **Return Type**: void
- **Parameters**: 

### SET_PED_INTERIOR_WALLA_DENSITY
- **Return Type**: void
- **Parameters**: float p0, float p1

### FORCE_PED_PANIC_WALLA
- **Return Type**: void
- **Parameters**: 

### _0x138ADB94F8B90616
- **Return Type**: void
- **Parameters**: 

### USE_FOOTSTEP_SCRIPT_SWEETENERS
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1, Hash hash

### SET_AUDIO_FLAG
- **Return Type**: void
- **Parameters**: const char* flagName, BOOL toggle
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/audio/audio_flags

### _0x6DA15746D5CC1A92
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### _0x078F77FD1A43EAB3
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x3D0BBCCF401B5FDB
- **Return Type**: void
- **Parameters**: 

### SET_PORTAL_SETTINGS_OVERRIDE
- **Return Type**: void
- **Parameters**: const char* p0, const char* p1

### REMOVE_PORTAL_SETTINGS_OVERRIDE
- **Return Type**: void
- **Parameters**: const char* p0

### _0xEA546C31FD45F8CD
- **Return Type**: void
- **Parameters**: Any p0

### _0x44A5EEF54F62E823
- **Return Type**: Any
- **Parameters**: Any p0

### _0x017492B2201E3428
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0xC886CD666ADD42E1
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x5AE0CB5F35F034FD
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7

### _0x821C32C728B24477
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x06C5DF5EE444BC6B
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0x341CDD17EFC2472E
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x7E176C676F8652A9
- **Return Type**: void
- **Parameters**: Any p0

### _0x2B9C37C01BF25EDB
- **Return Type**: Any
- **Parameters**: Any p0

### _0xA6A3A3F96B8B030E
- **Return Type**: Any
- **Parameters**: 

### _GET_LOADED_STREAM_ID_FROM_CREATION
- **Return Type**: int
- **Parameters**: const char* streamName, const char* soundSet
- **Description**: Creates stream and returns streamId handle to be used with PLAY_STREAM_* natives https://github.com/femga/rdr3_discoveries/tree/master/audio/create_stream

### _0xC369E2234E34A0CA
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x35B8C070E0C16E2F
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xE7E6CB8B713ED190
- **Return Type**: void
- **Parameters**: 

### _0x569ABC36E28DDEAA
- **Return Type**: void
- **Parameters**: 

### _0x839C9F124BE74D94
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### AUDIO_TRIGGER_EXPLOSION
- **Return Type**: void
- **Parameters**: const char* name, float x, float y, float z

### AUDIO_TRIGGER_EXPLOSION
- **Return Type**: void
- **Parameters**: const char* name, Vector3 vec

### _0x3E98AC9D8C56C62C
- **Return Type**: void
- **Parameters**: Any p0

### _0xCBF2BEBB468A34F3
- **Return Type**: void
- **Parameters**: Any p0

### _0xA2B851605748AD0E
- **Return Type**: void
- **Parameters**: 

### _0xCFAD2C8CD1054523
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0xD733528B6C35647A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x5BC885EBD75FAA7D
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x6B7A88A61B41E589
- **Return Type**: void
- **Parameters**: Any p0

### _0x4BE3EC91C01F0FE8
- **Return Type**: void
- **Parameters**: 

### SET_AUDIO_ONLINE_TRANSITION_STAGE
- **Return Type**: void
- **Parameters**: const char* p0

### _STOP_ALL_SCRIPTED_AUDIO_SOUNDS
- **Return Type**: void
- **Parameters**: 

### _0x64B956F4E761DF5C
- **Return Type**: void
- **Parameters**: Any p0


## BOUNTY
### _BOUNTY_REQUEST_PAY_OFF_BOUNTY
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid

### _BOUNTY_REQUEST_PAY_OFF_BOUNTY_EX
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid, Hash p1, Hash costType

### _BOUNTY_REQUEST_SELF_REPORT_CRIME
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid, Hash crimeType, BOOL p2
- **Description**: crimeType: see _REPORT_CRIME

### _BOUNTY_REQUEST_SELF_REPORT_KILLED_BY_BOUNTY_HUNTER
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid

### BOUNTY_GET_BOUNTY_ON_PLAYER
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle, Any* bountyData

### _BOUNTY_IS_REQUEST_PENDING
- **Return Type**: BOOL
- **Parameters**: Any* rpcGuid

### _BOUNTY_REQUEST_BEGIN_WANTED_POSTER
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid, int p1

### _0x81847C2134039BDC
- **Return Type**: BOOL
- **Parameters**: Any* p0

### _BOUNTY_REQUEST_COMPLETE_WANTED_POSTER
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid, Any* p1

### _BOUNTY_REQUEST_COMPLETE_SPLIT_WANTED_POSTER
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid, Any* p1

### _BOUNTY_CANCEL_WANTED_POSTER
- **Return Type**: void
- **Parameters**: 

### BOUNTY_REQUEST_BEGIN_LEGENDARY_MISSION
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid, int p1, int p2

### BOUNTY_REQUEST_BEGIN_LEGENDARY_MISSION_FOR_POSSE
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid, int p1, int p2

### _BOUNTY_REQUEST_COMPLETE_LEGENDARY_MISSION
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid, Any* p1

### _BOUNTY_CANCEL_LEGENDARY_MISSION
- **Return Type**: void
- **Parameters**: 

### BOUNTY_GET_WANTED_POSTER_SLOT
- **Return Type**: BOOL
- **Parameters**: Hash p0, Hash p1, Any* p2

### BOUNTY_GET_LEGENDARY_TARGET
- **Return Type**: BOOL
- **Parameters**: Any p0, Any* p1

### _0x86EC5F83867C4B70
- **Return Type**: BOOL
- **Parameters**: Any* p0
- **Description**: _BOUNTY_C* or _BOUNTY_GET_*

### BOUNTY_GET_COOLDOWN_COLLECTION
- **Return Type**: BOOL
- **Parameters**: Any* p0

### _BOUNTY_REQUEST_BECOME_TARGET_OF_CHARACTER_BOUNTY_HUNT
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid

### _0x27D3A0E1FE090A43
- **Return Type**: BOOL
- **Parameters**: Any* p0
- **Description**: _BOUNTY_IS_* or _BOUNTY_REQUEST_*

### _BOUNTY_REQUEST_CLAIM_CHARACTER_BOUNTY
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid, int p1, Any* p2

### _BOUNTY_REQUEST_POSSE_LEADER_CLAIM_CHARACTER_BOUNTY
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid, int p1, Any* p2

### _BOUNTY_REQUEST_POSSE_MEMBER_CLAIM_CHARACTER_BOUNTY_SHARE
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid, Any* p1

### _BOUNTY_CLEAR_BEING_BOUNTY_HUNTER
- **Return Type**: void
- **Parameters**: 

### _BOUNTY_REQUEST_ESCAPED_CHARACTER_BOUNTY_HUNT
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid

### _BOUNTY_REQUEST_POSSE_LEADER_ESCAPED_CHARACTER_BOUNTY_HUNT
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid

### _BOUNTY_REQUEST_POSSE_MEMBER_ESCAPED_CHARACTER_BOUNTY_HUNT
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid

### _BOUNTY_CLEAR_BEING_TARGET
- **Return Type**: void
- **Parameters**: 

### _BOUNTY_REQUEST_SERVED_FULL_JAIL_SENTENCE
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid

### _BOUNTY_REQUEST_BRIBE_JAIL_GUARD
- **Return Type**: BOOL
- **Parameters**: Any* outRpcGuid, int p1

### _0xF8BCC5ECA33AC9C1
- **Return Type**: int
- **Parameters**: 
- **Description**: _BOUNTY_GET_*

### _0xD6A67E2FF373D0E3
- **Return Type**: int
- **Parameters**: int p0
- **Description**: _BOUNTY_GET_*


## BRAIN
### REGISTER_OBJECT_SCRIPT_BRAIN
- **Return Type**: void
- **Parameters**: const char* scriptName, Hash modelHash, int p2, float activationRange, int p4, int p5
- **Description**: Registers a script for any object with a specific model hash.

### _START_PRELOADED_SCRIPT_BRAIN
- **Return Type**: int
- **Parameters**: Entity entity, const char* scriptName, int scriptStackSize, BOOL p3
- **Description**: Returns threadId

### _START_SCRIPT_BRAIN
- **Return Type**: int
- **Parameters**: Entity entity, const char* scriptName, int p2, Any* p3, int p4, BOOL p5
- **Description**: Returns threadId

### _REMOVE_SCRIPT_BRAIN_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity

### _GET_SCRIPT_BRAIN_ENTITY
- **Return Type**: Entity
- **Parameters**: 

### _0xA6AC35DB4A7957A8
- **Return Type**: void
- **Parameters**: int flag
- **Description**: Common flags: 250, 99999 _SET_SCRIPT_BRAIN*

### _0x4AA5EA1EDFB25786
- **Return Type**: void
- **Parameters**: int flag
- **Description**: Called with flag 0 before 0xA6AC35DB4A7957A8 in net_entity_brain _SET_SCRIPT_BRAIN*

### ENABLE_SCRIPT_BRAIN_SET
- **Return Type**: void
- **Parameters**: int brainSet

### DISABLE_SCRIPT_BRAIN_SET
- **Return Type**: void
- **Parameters**: int brainSet

### REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE
- **Return Type**: void
- **Parameters**: 
- **Description**: Called before starting a new thread_monitor script thread in startup_mp/startup_tlg Alternative name _REGISTER_SCRIPT_BRAIN  Old name: _PREPARE_SCRIPT_BRAIN

### REACTIVATE_NAMED_OBJECT_BRAINS_WAITING_TILL_OUT_OF_RANGE
- **Return Type**: void
- **Parameters**: const char* scriptName


## CAM
### RENDER_SCRIPT_CAMS
- **Return Type**: void
- **Parameters**: BOOL render, BOOL ease, int easeTime, BOOL p3, BOOL p4, int p5
- **Description**: ease - smooth transition between the camera's positions easeTime - Time in milliseconds for the transition to happen  If you have created a script (rendering) camera, and want to go back to the character (gameplay) camera, call this native with render set to FALSE. Setting ease to TRUE will smooth the transition.

### STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP
- **Return Type**: void
- **Parameters**: BOOL render, float distance, int blendBackSmoothingType, BOOL p3, BOOL p4, BOOL p5
- **Description**: This native makes the gameplay camera zoom into first person/third person with a special effect. blendBackSmoothingType: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/eBlendBackSmoothing

### CREATE_CAM
- **Return Type**: Cam
- **Parameters**: const char* camName, BOOL p1

### CREATE_CAM_WITH_PARAMS
- **Return Type**: Cam
- **Parameters**: const char* camName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, int p9

### CREATE_CAM_WITH_PARAMS
- **Return Type**: Cam
- **Parameters**: const char* camName, Vector3 pos, Vector3 rot, float fov, BOOL p8, int p9

### CREATE_CAMERA
- **Return Type**: Cam
- **Parameters**: Hash camHash, BOOL p1

### CREATE_CAMERA_WITH_PARAMS
- **Return Type**: Cam
- **Parameters**: Hash camHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, Any p9

### CREATE_CAMERA_WITH_PARAMS
- **Return Type**: Cam
- **Parameters**: Hash camHash, Vector3 pos, Vector3 rot, float fov, BOOL p8, Any p9

### DESTROY_CAM
- **Return Type**: void
- **Parameters**: Cam cam, BOOL p1
- **Description**: BOOL param indicates whether the cam should be destroyed if it belongs to the calling script.

### DESTROY_ALL_CAMS
- **Return Type**: void
- **Parameters**: BOOL p0
- **Description**: BOOL param indicates whether the cam should be destroyed if it belongs to the calling script.

### DOES_CAM_EXIST
- **Return Type**: BOOL
- **Parameters**: Cam cam
- **Description**: Returns whether or not the passed camera handle exists.

### SET_CAM_ACTIVE
- **Return Type**: void
- **Parameters**: Cam cam, BOOL active
- **Description**: Set camera as active/inactive.

### IS_CAM_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Cam cam
- **Description**: Returns whether or not the passed camera handle is active.

### IS_CAM_RENDERING
- **Return Type**: BOOL
- **Parameters**: Cam cam

### GET_RENDERING_CAM
- **Return Type**: Cam
- **Parameters**: 

### GET_CAM_COORD
- **Return Type**: Vector3
- **Parameters**: Cam cam

### GET_CAM_ROT
- **Return Type**: Vector3
- **Parameters**: Cam cam, int rotationOrder
- **Description**: rotationOrder: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/eEulerRotationOrder

### GET_CAM_FOV
- **Return Type**: float
- **Parameters**: Cam cam

### SET_CAM_PARAMS
- **Return Type**: void
- **Parameters**: Cam cam, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fieldOfView, Any p8, int p9, int p10, int p11, Any p12, Any p13

### SET_CAM_PARAMS
- **Return Type**: void
- **Parameters**: Cam cam, Vector3 pos, Vector3 rot, float fieldOfView, Any p8, int p9, int p10, int p11, Any p12, Any p13

### SET_CAM_COORD
- **Return Type**: void
- **Parameters**: Cam cam, float posX, float posY, float posZ
- **Description**: Sets the position of the cam.

### SET_CAM_COORD
- **Return Type**: void
- **Parameters**: Cam cam, Vector3 pos

### SET_CAM_ROT
- **Return Type**: void
- **Parameters**: Cam cam, float rotX, float rotY, float rotZ, int rotationOrder
- **Description**: Sets the rotation of the cam.

### SET_CAM_ROT
- **Return Type**: void
- **Parameters**: Cam cam, Vector3 rot, int rotationOrder

### SET_CAM_FOV
- **Return Type**: void
- **Parameters**: Cam cam, float fieldOfView
- **Description**: Sets the field of view of the cam.  Min: 1.0f Max: 130.0f

### SET_CAM_NEAR_CLIP
- **Return Type**: void
- **Parameters**: Cam cam, float nearClip

### SET_CAM_FAR_CLIP
- **Return Type**: void
- **Parameters**: Cam cam, float farClip

### SET_CAM_MOTION_BLUR_STRENGTH
- **Return Type**: void
- **Parameters**: Cam cam, float strength

### _0xFC3F638BE2B6BB02
- **Return Type**: void
- **Parameters**: 

### _0xE4B7945EF4F1BFB2
- **Return Type**: void
- **Parameters**: Cam cam, Any* args

### _0x1FC6C727D30FFDDE
- **Return Type**: void
- **Parameters**: Any p0

### ATTACH_CAM_TO_ENTITY
- **Return Type**: void
- **Parameters**: Cam cam, Entity entity, float xOffset, float yOffset, float zOffset, BOOL isRelative
- **Description**: Last param determines if its relative to the Entity

### ATTACH_CAM_TO_ENTITY
- **Return Type**: void
- **Parameters**: Cam cam, Entity entity, Vector3 offset, BOOL isRelative

### ATTACH_CAM_TO_PED_BONE
- **Return Type**: void
- **Parameters**: Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL heading
- **Description**: boneIndex: https://github.com/femga/rdr3_discoveries/tree/master/boneNames

### ATTACH_CAM_TO_PED_BONE
- **Return Type**: void
- **Parameters**: Cam cam, Ped ped, int boneIndex, Vector3 vec, BOOL heading

### DETACH_CAM
- **Return Type**: void
- **Parameters**: Cam cam

### POINT_CAM_AT_COORD
- **Return Type**: void
- **Parameters**: Cam cam, float x, float y, float z

### POINT_CAM_AT_COORD
- **Return Type**: void
- **Parameters**: Cam cam, Vector3 vec

### POINT_CAM_AT_ENTITY
- **Return Type**: void
- **Parameters**: Cam cam, Entity entity, float p2, float p3, float p4, BOOL p5

### STOP_CAM_POINTING
- **Return Type**: void
- **Parameters**: Cam cam

### _SET_CAM_FOCUS_DISTANCE
- **Return Type**: void
- **Parameters**: Cam cam, float distance

### _PAUSE_CAMERA_FOCUS
- **Return Type**: void
- **Parameters**: Cam cam, BOOL pause

### SET_CAM_AFFECTS_AIMING
- **Return Type**: void
- **Parameters**: Cam cam, BOOL toggle
- **Description**: Allows you to aim and shoot at the direction the camera is facing.

### SET_CAM_CONTROLS_MINI_MAP_HEADING
- **Return Type**: void
- **Parameters**: Cam cam, BOOL p1

### ALLOW_MOTION_BLUR_DECAY
- **Return Type**: void
- **Parameters**: Cam cam, BOOL p1

### ADD_CAM_SPLINE_NODE
- **Return Type**: void
- **Parameters**: Cam camera, float x, float y, float z, float xRot, float yRot, float zRot, int length, int p8, int p9
- **Description**: p7 (length) determines the length of the spline, affects camera path and duration of transition between previous node and this one  p8 big values ~100 will slow down the camera movement before reaching this node  p9 != 0 seems to override the rotation/pitch (bool?)

### ADD_CAM_SPLINE_NODE
- **Return Type**: void
- **Parameters**: Cam camera, Vector3 vec, Vector3 rot, int length, int p8, int p9

### SET_CAM_SPLINE_PHASE
- **Return Type**: void
- **Parameters**: Cam cam, float p1

### GET_CAM_SPLINE_PHASE
- **Return Type**: float
- **Parameters**: Cam cam
- **Description**: Can use this with SET_CAM_SPLINE_PHASE to set the float it this native returns.  (returns 1.0f when no nodes has been added, reached end of non existing spline)

### SET_CAM_SPLINE_DURATION
- **Return Type**: void
- **Parameters**: Cam cam, int timeDuration

### SET_CAM_SPLINE_SMOOTHING_STYLE
- **Return Type**: void
- **Parameters**: Cam cam, int smoothingStyle

### SET_CAM_ACTIVE_WITH_INTERP
- **Return Type**: void
- **Parameters**: Cam camTo, Cam camFrom, int duration, int easeLocation, int easeRotation

### IS_CAM_INTERPOLATING
- **Return Type**: BOOL
- **Parameters**: Cam cam

### SHAKE_CAM
- **Return Type**: void
- **Parameters**: Cam cam, const char* type, float amplitude

### IS_CAM_SHAKING
- **Return Type**: BOOL
- **Parameters**: Cam cam

### STOP_CAM_SHAKING
- **Return Type**: void
- **Parameters**: Cam cam, BOOL p1

### PLAY_CAM_ANIM
- **Return Type**: BOOL
- **Parameters**: Cam cam, const char* animName, const char* animDictionary, float x, float y, float z, float xRot, float yRot, float zRot, int animFlags, int rotOrder

### PLAY_CAM_ANIM
- **Return Type**: BOOL
- **Parameters**: Cam cam, const char* animName, const char* animDictionary, Vector3 vec, Vector3 rot, int animFlags, int rotOrder

### _0xCF69EA05CD9C33C9
- **Return Type**: void
- **Parameters**: 

### _IS_ANIM_SCENE_CAM_ACTIVE
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Only used in R* Script camera_photomode

### IS_SCREEN_FADED_OUT
- **Return Type**: BOOL
- **Parameters**: 

### IS_SCREEN_FADED_IN
- **Return Type**: BOOL
- **Parameters**: 

### IS_SCREEN_FADING_OUT
- **Return Type**: BOOL
- **Parameters**: 

### IS_SCREEN_FADING_IN
- **Return Type**: BOOL
- **Parameters**: 

### DO_SCREEN_FADE_IN
- **Return Type**: void
- **Parameters**: int duration
- **Description**: Fades the screen in.  duration: The time the fade should take, in milliseconds.

### DO_SCREEN_FADE_OUT
- **Return Type**: void
- **Parameters**: int duration
- **Description**: Fades the screen out.  duration: The time the fade should take, in milliseconds.

### HAS_LETTER_BOX
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: More info: https://en.wikipedia.org/wiki/Letterboxing_(filming)

### _REQUEST_LETTER_BOX_NOW
- **Return Type**: void
- **Parameters**: BOOL p0, BOOL p1
- **Description**: Creates Cinematic Black Bars (at top and bottom) Disable instantly: false/false, Enable instantly: true/true

### _REQUEST_LETTER_BOX_OVERTIME
- **Return Type**: void
- **Parameters**: int p0, int p1, BOOL p2, int p3, BOOL p4, BOOL p5

### _FORCE_LETTER_BOX_THIS_UPDATE
- **Return Type**: void
- **Parameters**: 

### GET_LETTER_BOX_RATIO
- **Return Type**: float
- **Parameters**: 
- **Description**: More info: see HAS_LETTER_BOX

### _0x73FF6BE63DC18819
- **Return Type**: Any
- **Parameters**: 

### _0x450769C833D58844
- **Return Type**: Any
- **Parameters**: 

### SET_WIDESCREEN_BORDERS
- **Return Type**: void
- **Parameters**: BOOL p0, int p1

### GET_GAMEPLAY_CAM_COORD
- **Return Type**: Vector3
- **Parameters**: 

### GET_GAMEPLAY_CAM_ROT
- **Return Type**: Vector3
- **Parameters**: int rotationOrder

### GET_GAMEPLAY_CAM_FOV
- **Return Type**: float
- **Parameters**: 

### SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE
- **Return Type**: void
- **Parameters**: float p0

### GET_GAMEPLAY_CAM_RELATIVE_HEADING
- **Return Type**: float
- **Parameters**: 

### SET_GAMEPLAY_CAM_RELATIVE_HEADING
- **Return Type**: void
- **Parameters**: float heading, float p1
- **Description**: Sets the camera position relative to heading in float from -360 to +360.  Heading is always 0 in aiming camera.

### GET_GAMEPLAY_CAM_RELATIVE_PITCH
- **Return Type**: float
- **Parameters**: 

### SET_GAMEPLAY_CAM_RELATIVE_PITCH
- **Return Type**: void
- **Parameters**: float x, float Value2
- **Description**: Sets the camera pitch.  Parameters: x = pitches the camera on the x axis. Value2 = always seems to be hex 0x3F800000 (1.000000 float).

### _0x0961B089947BA6D0
- **Return Type**: void
- **Parameters**: Any p0

### _0x04084490CC302CFB
- **Return Type**: void
- **Parameters**: 

### SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME
- **Return Type**: void
- **Parameters**: BOOL p0

### _IS_IN_FULL_FIRST_PERSON_MODE
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Returns true if player is in first person

### SHAKE_GAMEPLAY_CAM
- **Return Type**: void
- **Parameters**: const char* shakeName, float intensity

### _0xC3E9E5D4F413B773
- **Return Type**: void
- **Parameters**: const char* shakeName, float intensity
- **Description**: shakeName: REINFORCED_LASSO_STRUGGLE_SHAKE _RES*

### IS_GAMEPLAY_CAM_SHAKING
- **Return Type**: BOOL
- **Parameters**: 

### _0x0060B31968E60E41
- **Return Type**: BOOL
- **Parameters**: const char* shakeName
- **Description**: shakeNames in script_rel: CORRECTOR_SHAKE, MINIGAME_BOUNTY_SHAKE, POV_DRUNK_SHAKE, DRUNK_SHAKE, MINIGAME_TRAIN_SHAKE _IS_GAMEPLAY_*

### SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE
- **Return Type**: void
- **Parameters**: float amplitude
- **Description**: Sets the amplitude for the gameplay (i.e. 3rd or 1st) camera to shake.

### _0xFEFDDC6E8FDF8A75
- **Return Type**: void
- **Parameters**: const char* shakeName, float intensity
- **Description**: _SET_GAMEPLAY_P* - _SET_GAMEPLAY_V*

### STOP_GAMEPLAY_CAM_SHAKING
- **Return Type**: void
- **Parameters**: BOOL p0

### _STOP_GAMEPLAY_CAM_SHAKING_WITH_NAME
- **Return Type**: void
- **Parameters**: const char* shakeName, BOOL p1
- **Description**: script_rel: DRUNK_SHAKE, REINFORCED_LASSO_STRUGGLE_SHAKE, CORRECTOR_SHAKE, MINIGAME_BOUNTY_SHAKE, HAND_SHAKE, MINIGAME_TRAIN_SHAKE script_mp_rel: DRUNK_SHAKE, REINFORCED_LASSO_STRUGGLE_SHAKE _STOP_GAMEPLAY_CAM* - _STOP_I*

### SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: Forces gameplay cam to specified ped as if you were the ped or spectating it

### IS_GAMEPLAY_CAM_RENDERING
- **Return Type**: BOOL
- **Parameters**: 

### IS_INTERPOLATING_FROM_SCRIPT_CAMS
- **Return Type**: BOOL
- **Parameters**: 

### IS_INTERPOLATING_TO_SCRIPT_CAMS
- **Return Type**: BOOL
- **Parameters**: 

### IS_GAMEPLAY_CAM_LOOKING_BEHIND
- **Return Type**: BOOL
- **Parameters**: 

### SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE
- **Return Type**: void
- **Parameters**: Entity entity
- **Description**: Old name: _DISABLE_CAM_COLLISION_FOR_ENTITY

### DISABLE_CAM_COLLISION_FOR_OBJECT
- **Return Type**: void
- **Parameters**: Entity entity

### _0x39073DA4EDDBC91D
- **Return Type**: void
- **Parameters**: Any p0

### _0x70A6658D476C6187
- **Return Type**: void
- **Parameters**: 

### _0x18C3DFAC458783BB
- **Return Type**: void
- **Parameters**: 

### _0xF1A6FEEDF3776EF9
- **Return Type**: void
- **Parameters**: 

### _0xE6F364DE6C2FDEFE
- **Return Type**: void
- **Parameters**: 

### _0x0F1FFEF5D54AE832
- **Return Type**: void
- **Parameters**: 
- **Description**: NPLOI_UPDATE__GUN_SPINNING_PREVIEW - Adjusting Camera / Ped Reset Flags This Frame _DISABLE_*

### _0x3C8F74E8FE751614
- **Return Type**: void
- **Parameters**: 

### _0x06557F6D96C86881
- **Return Type**: void
- **Parameters**: 

### IS_SPHERE_VISIBLE
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, float radius

### IS_SPHERE_VISIBLE
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, float radius

### _0x190F7DA1AC09A8EF
- **Return Type**: Any
- **Parameters**: 

### _SET_GAMEPLAY_CAM_INITIAL_ZOOM
- **Return Type**: void
- **Parameters**: float camInitialZoom
- **Description**: Used in Script Function SHOP_CAMERA_SUPPORT_START_NEW_ORBIT

### _SET_GAMEPLAY_CAM_INITIAL_HEADING
- **Return Type**: void
- **Parameters**: float camInitialHeading

### _SET_GAMEPLAY_CAM_INITIAL_PITCH
- **Return Type**: void
- **Parameters**: float camInitialPitch

### SET_THIRD_PERSON_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE
- **Return Type**: void
- **Parameters**: float minimum, float maximum
- **Description**: minimum: Degrees between -180f and 180f. maximum: Degrees between -180f and 180f.  Clamps the gameplay camera's current yaw.  Eg. _CLAMP_GAMEPLAY_CAM_YAW(0.0f, 0.0f) will set the horizontal angle directly behind the player.  Old name: _CLAMP_GAMEPLAY_CAM_YAW

### SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE
- **Return Type**: void
- **Parameters**: float minimum, float maximum
- **Description**: minimum: Degrees between -90f and 90f. maximum: Degrees between -90f and 90f.  Clamps the gameplay camera's current pitch.  Eg. _CLAMP_GAMEPLAY_CAM_PITCH(0.0f, 0.0f) will set the vertical angle directly behind the player.  Old name: _CLAMP_GAMEPLAY_CAM_PITCH

### SET_THIRD_PERSON_CAM_ORBIT_DISTANCE_LIMITS_THIS_UPDATE
- **Return Type**: void
- **Parameters**: float p0, float distance
- **Description**: Old name: _ANIMATE_GAMEPLAY_CAM_ZOOM

### SET_IN_VEHICLE_CAM_STATE_THIS_UPDATE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int p1
- **Description**: Forces gameplay cam to specified vehicle as if you were in it

### DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE
- **Return Type**: void
- **Parameters**: 
- **Description**: Old name: _DISABLE_FIRST_PERSON_CAM_THIS_FRAME

### DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE
- **Return Type**: void
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### _DISABLE_CINEMATIC_MODE_THIS_FRAME
- **Return Type**: void
- **Parameters**: 

### _IS_IN_CINEMATIC_MODE
- **Return Type**: BOOL
- **Parameters**: 

### _0x718C6ECF5E8CBDD4
- **Return Type**: void
- **Parameters**: 

### _FORCE_THIRD_PERSON_CAM_THIS_FRAME
- **Return Type**: void
- **Parameters**: 
- **Description**: Forces camera position to second furthest 3rd person

### _FORCE_THIRD_PERSON_CAM_FAR_THIS_FRAME
- **Return Type**: void
- **Parameters**: 
- **Description**: Forces camera position to furthest 3rd person

### _FORCE_FIRST_PERSON_CAM_THIS_FRAME
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Returns true if first person camera is active in saloon1.ysc

### _DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE_2
- **Return Type**: void
- **Parameters**: 
- **Description**: Does the same as 0x9C473089A934C930 (DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE)

### _0x632BE8D84846FA56
- **Return Type**: void
- **Parameters**: 
- **Description**: Zooms in the gameplay camera to the next zoom level? USE_* - WAS_*

### _0x71D71E08A7ED5BD7
- **Return Type**: void
- **Parameters**: Any p0

### IS_FOLLOW_VEHICLE_CAM_ACTIVE
- **Return Type**: BOOL
- **Parameters**: 

### _0x7E40A01B11398FCB
- **Return Type**: void
- **Parameters**: 

### IS_AIM_CAM_ACTIVE
- **Return Type**: BOOL
- **Parameters**: 

### IS_FIRST_PERSON_AIM_CAM_ACTIVE
- **Return Type**: BOOL
- **Parameters**: 

### IS_FIRST_PERSON_CAMERA_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Any p0, Any p1, Any p2

### _0xDC62CD70658E7A02
- **Return Type**: Any
- **Parameters**: 

### _0x796085220ADCC847
- **Return Type**: Any
- **Parameters**: 

### _0xB6A80E1E3A5444F1
- **Return Type**: Any
- **Parameters**: 

### _0x8B1A5FE7E41E52B2
- **Return Type**: Any
- **Parameters**: 

### GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR
- **Return Type**: float
- **Parameters**: 

### SET_FIRST_PERSON_AIM_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE
- **Return Type**: void
- **Parameters**: float p0, float p1

### SET_FIRST_PERSON_AIM_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE
- **Return Type**: void
- **Parameters**: float p0, float p1
- **Description**: Old name: _SET_FIRST_PERSON_CAM_PITCH_RANGE

### _0xC205B3C54C6A4E37
- **Return Type**: void
- **Parameters**: Any p0

### GET_FINAL_RENDERED_CAM_COORD
- **Return Type**: Vector3
- **Parameters**: 

### GET_FINAL_RENDERED_CAM_ROT
- **Return Type**: Vector3
- **Parameters**: int rotationOrder

### GET_FINAL_RENDERED_CAM_FOV
- **Return Type**: float
- **Parameters**: 

### SET_GAMEPLAY_COORD_HINT
- **Return Type**: void
- **Parameters**: float x, float y, float z, int duration, int blendOutDuration, int blendInDuration, Hash p6
- **Description**: Hash used in finale1.ysc: 1726668277

### SET_GAMEPLAY_COORD_HINT
- **Return Type**: void
- **Parameters**: Vector3 vec, int duration, int blendOutDuration, int blendInDuration, Hash p6

### SET_GAMEPLAY_PED_HINT
- **Return Type**: void
- **Parameters**: Ped p0, float x1, float y1, float z1, BOOL p4, Any p5, Any p6, Any p7

### SET_GAMEPLAY_PED_HINT
- **Return Type**: void
- **Parameters**: Ped p0, Vector3 vec1, BOOL p4, Any p5, Any p6, Any p7

### SET_GAMEPLAY_VEHICLE_HINT
- **Return Type**: void
- **Parameters**: Any p0, float p1, float p2, float p3, BOOL p4, Any p5, Any p6, Any p7

### SET_GAMEPLAY_OBJECT_HINT
- **Return Type**: void
- **Parameters**: Any p0, float p1, float p2, float p3, BOOL p4, Any p5, Any p6, Any p7

### SET_GAMEPLAY_ENTITY_HINT
- **Return Type**: void
- **Parameters**: Entity entity, float xOffset, float yOffset, float zOffset, BOOL p4, int p5, int p6, int p7, Any p8
- **Description**: p6 & p7 - possibly length or time

### SET_GAMEPLAY_ENTITY_HINT
- **Return Type**: void
- **Parameters**: Entity entity, Vector3 offset, BOOL p4, int p5, int p6, int p7, Any p8

### IS_GAMEPLAY_HINT_ACTIVE
- **Return Type**: BOOL
- **Parameters**: 

### STOP_GAMEPLAY_HINT
- **Return Type**: void
- **Parameters**: BOOL p0

### STOP_CODE_GAMEPLAY_HINT
- **Return Type**: void
- **Parameters**: BOOL p0

### _0x88544C0E3291DCAE
- **Return Type**: void
- **Parameters**: BOOL p0
- **Description**: UPDATE_PLAYER_PLAYING_STATE - Releasing Lasso Hint Cam Return type char in ida _SET_GAMEPLAY_HINT_*

### SET_GAMEPLAY_HINT_FOV
- **Return Type**: void
- **Parameters**: float FOV

### SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR
- **Return Type**: void
- **Parameters**: float p0

### SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET
- **Return Type**: void
- **Parameters**: float p0

### SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET
- **Return Type**: void
- **Parameters**: float p0
- **Description**: Old name: _SET_GAMEPLAY_HINT_ANIM_OFFSETX

### SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET
- **Return Type**: void
- **Parameters**: float p0
- **Description**: Old name: _SET_GAMEPLAY_HINT_ANIM_OFFSETY

### _0xF48664E9C83825E3
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x1F6EBD94680252CE
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xE28F73212A813E82
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x4D2F46D1B28D90FB
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _START_CAMERA_ORBIT
- **Return Type**: void
- **Parameters**: Any* p0
- **Description**: [SHOP_CAMERA_SUPPORT_START_NEW_ORBIT] p0: struct<32> /*256*/

### _0x641092322A8852AB
- **Return Type**: void
- **Parameters**: 

### _0xDB382FE20C2DA222
- **Return Type**: void
- **Parameters**: Any p0

### _0x2DD3149DC34A3F4C
- **Return Type**: void
- **Parameters**: Any p0

### _FREEZE_GAMEPLAY_CAM_THIS_FRAME
- **Return Type**: void
- **Parameters**: 

### _0x3C486E334520579D
- **Return Type**: void
- **Parameters**: 

### _0x41E452A3C580D1A7
- **Return Type**: void
- **Parameters**: 

### SET_CINEMATIC_BUTTON_ACTIVE
- **Return Type**: void
- **Parameters**: BOOL p0

### IS_CINEMATIC_CAM_RENDERING
- **Return Type**: BOOL
- **Parameters**: 

### DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE
- **Return Type**: void
- **Parameters**: 
- **Description**: Old name: _DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME

### INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE
- **Return Type**: void
- **Parameters**: 
- **Description**: Old name: _INVALIDATE_VEHICLE_IDLE_CAM

### FORCE_CINEMATIC_RENDERING_THIS_UPDATE
- **Return Type**: void
- **Parameters**: BOOL p0

### _0x9AC65A36D3C0C189
- **Return Type**: void
- **Parameters**: Any p0

### _0x975F6EBB62632FE3
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: _IS_SCRIPTED_S*

### SET_CINEMATIC_MODE_ACTIVE
- **Return Type**: void
- **Parameters**: BOOL p0

### _0x1811A02277A9E49D
- **Return Type**: BOOL
- **Parameters**: 

### _FORCE_CINEMATIC_DEATH_CAM_ON_PED
- **Return Type**: void
- **Parameters**: Ped targetPed
- **Description**: Used for DUELING_MANAGE_DEATH_CAMERA - Initializing death camera Params: targetPed = death cam focuses on it

### _REACTIVATE_PED_HEADSHOT_EXECUTE_SLOWCAM
- **Return Type**: void
- **Parameters**: Ped ped, int p1
- **Description**: Used to enable headshot kill replay when you headshot set ped. Params: p1 seems to be 0 or 1 in R* Scripts

### _0x5B637D6F3B67716A
- **Return Type**: void
- **Parameters**: Any p0

### _0xC252C0CC969AF79A
- **Return Type**: void
- **Parameters**: Any p0

### _0xE2BB2D6A9FE2ECDE
- **Return Type**: void
- **Parameters**: Any p0

### _SET_START_CINEMATIC_DEATH_CAM
- **Return Type**: void
- **Parameters**: BOOL p0
- **Description**: Used for DUELING_MANAGE_DEATH_CAMERA - Initializing death camera _SET_P* - _SET_S*

### _0x6072B7420A83A03F
- **Return Type**: Any
- **Parameters**: 

### _0x1204EB53A5FBC63D
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Used for DUELING_LOCK_CAMERA_CONTROLS_THIS_FRAME: Disabling look/aim controls _IS_SC(REEN_)* (?)

### _0x6519238858AF5479
- **Return Type**: void
- **Parameters**: Any p0

### _CREATE_KILL_CAM
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: Creates Kill Cam for specified Ped Handle

### _IS_CAM_PHOTOFX_RUNNING
- **Return Type**: BOOL
- **Parameters**: 

### _0x6DFD37E586D4F44F
- **Return Type**: Any
- **Parameters**: 

### _0x80D7A3E39B120BC4
- **Return Type**: Any
- **Parameters**: 

### _0x63E5841A9264D016
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: Maintains the death camera after respawn

### _TRIGGER_MISSION_FAILED_CAM
- **Return Type**: void
- **Parameters**: 

### _0x16E9ABDD34DDD931
- **Return Type**: void
- **Parameters**: 

### IS_DEATH_FAIL_CAMERA_RUNNING
- **Return Type**: BOOL
- **Parameters**: 

### _0x7CE9DC58E3E4755F
- **Return Type**: Any
- **Parameters**: 

### _0x3B8E3AD9677CE12B
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0xDF7F5BE9150E47E4
- **Return Type**: void
- **Parameters**: Any p0

### _0xB85C13E0BF1F2A1C
- **Return Type**: void
- **Parameters**: Any p0

### _0x066167C63111D8CF
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0xA8BA2E0204D8486F
- **Return Type**: void
- **Parameters**: 
- **Description**: NPLOI_UPDATE__GUN_SPINNING_PREVIEW - Adjusting Camera / Ped Reset Flags This Frame _DISABLE_*

### _0xC3742F1FDF0A6824
- **Return Type**: void
- **Parameters**: 
- **Description**: Camera will be or is running

### _0x0FF7125F07DEB84F
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x6CAB0BA160B168D2
- **Return Type**: void
- **Parameters**: 

### _LOAD_CINEMATIC_CAM_LOCATION
- **Return Type**: void
- **Parameters**: const char* locationDictName

### _UNLOAD_CINEMATIC_CAMERA_LOCATION
- **Return Type**: void
- **Parameters**: const char* dictionaryName

### _IS_CINEMATIC_CAM_LOCATION_LOADED
- **Return Type**: BOOL
- **Parameters**: const char* sLocationDictName

### _IS_CINEMATIC_CAM_LOCATION_LOADED_2
- **Return Type**: BOOL
- **Parameters**: const char* locationDictName
- **Description**: Checks data related to Cinematic Cam Locations, if the check fails, the location is being loaded using 0x1B3C2D961F5FC0E1.

### _0x465F04F68AD38197
- **Return Type**: Any
- **Parameters**: const char* dictionary, const char* shotName, int duration

### _0xEA113BF9B0C0C5D7
- **Return Type**: Any
- **Parameters**: const char* dictionary, const char* shotName, int duration

### _CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT_2
- **Return Type**: void
- **Parameters**: const char* dictionary, const char* shotName, int duration

### CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT
- **Return Type**: void
- **Parameters**: const char* dictionary, const char* shotName, const char* cameraName, Any p3

### _0xA54D643D0773EB65
- **Return Type**: void
- **Parameters**: const char* dictionary, const char* shotName, int duration

### CINEMATIC_LOCATION_STOP_SCRIPTED_SHOT_EVENT
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0xC3AEBB276825A359
- **Return Type**: BOOL
- **Parameters**: const char* dictionary, const char* shotName, int duration

### _0x1D931B7CC0EE3956
- **Return Type**: BOOL
- **Parameters**: const char* dictionary, const char* shotName, const char* cameraName

### _CINEMATIC_LOCATION_SET_LOCATION_AND_ROTATION
- **Return Type**: void
- **Parameters**: const char* name, float x, float y, float z, float rotX, float rotY, float rotZ

### _CINEMATIC_LOCATION_SET_LOCATION_AND_ROTATION
- **Return Type**: void
- **Parameters**: const char* name, Vector3 vec, Vector3 rot

### CINEMATIC_LOCATION_OVERRIDE_TARGET_ENTITY_THIS_UPDATE
- **Return Type**: void
- **Parameters**: const char* name, Entity entity
- **Description**: Only used in R* Script fm_mission_controller

### _LOAD_CAMERA_DATA_DICT
- **Return Type**: void
- **Parameters**: const char* cameraDictionary

### _UNLOAD_CAMERA_DATA_DICT
- **Return Type**: void
- **Parameters**: const char* cameraDictionary

### _IS_CAM_DATA_DICT_LOADED
- **Return Type**: BOOL
- **Parameters**: const char* cameraDictionary

### _0xC285FD21294A1C49
- **Return Type**: BOOL
- **Parameters**: const char* cameraDictionary

### _CAM_CREATE
- **Return Type**: void
- **Parameters**: const char* cameraDictionary

### _CAM_DESTROY
- **Return Type**: void
- **Parameters**: const char* cameraDictionary

### _IS_CAMERA_AVAILABLE
- **Return Type**: BOOL
- **Parameters**: const char* cameraDictionary

### _0x4138EE36BC3DC0A7
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xFEB8646818294C75
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x29E6655DF3590B0D
- **Return Type**: void
- **Parameters**: Any p0

### _0xAC77757C05DE9E5A
- **Return Type**: void
- **Parameters**: const char* cameraDictionary

### _0x8E036B41C37D0E5F
- **Return Type**: void
- **Parameters**: Any p0

### _0x1D9F72DD4FD9A9D7
- **Return Type**: void
- **Parameters**: Any p0

### _CAM_CREATE_2
- **Return Type**: void
- **Parameters**: const char* cameraDictionary

### _0x728491FB3DFFEF99
- **Return Type**: void
- **Parameters**: Any p0

### _0x14C4A49E36C29E49
- **Return Type**: Any
- **Parameters**: 

### _0xF824530B612FE0CE
- **Return Type**: Any
- **Parameters**: 

### _0xEF9A3132A0AA6B19
- **Return Type**: Any
- **Parameters**: 

### _0x5060FA977CEA4455
- **Return Type**: Any
- **Parameters**: 

### _GET_PHOTO_MODE_FOCAL_LENGTH
- **Return Type**: float
- **Parameters**: 

### _GET_PHOTO_MODE_FOCUS_DISTANCE
- **Return Type**: float
- **Parameters**: 

### _GET_PHOTO_MODE_DOF
- **Return Type**: float
- **Parameters**: 

### _0x2AB7C81B3F70570C
- **Return Type**: Any
- **Parameters**: 

### _0x8505E05FC8822843
- **Return Type**: void
- **Parameters**: Any p0


## CLOCK
### SET_CLOCK_TIME
- **Return Type**: void
- **Parameters**: int hour, int minute, int second
- **Description**: SET_CLOCK_TIME(12, 34, 56);

### PAUSE_CLOCK
- **Return Type**: void
- **Parameters**: BOOL toggle, Any unused

### _PAUSE_CLOCK_THIS_FRAME
- **Return Type**: void
- **Parameters**: BOOL toggle

### ADVANCE_CLOCK_TIME_TO
- **Return Type**: void
- **Parameters**: int hour, int minute, int second

### ADD_TO_CLOCK_TIME
- **Return Type**: void
- **Parameters**: int hours, int minutes, int seconds

### GET_CLOCK_HOURS
- **Return Type**: int
- **Parameters**: 
- **Description**: Gets the current ingame hour, expressed without zeros. (09:34 will be represented as 9)

### GET_CLOCK_MINUTES
- **Return Type**: int
- **Parameters**: 
- **Description**: Gets the current ingame clock minute.

### GET_CLOCK_SECONDS
- **Return Type**: int
- **Parameters**: 
- **Description**: Gets the current ingame clock second. Note that ingame clock seconds change really fast since a day in RDR is only 48 minutes in real life.

### _SET_MILLISECONDS_PER_GAME_MINUTE
- **Return Type**: void
- **Parameters**: int ms

### _GET_SECONDS_SINCE_BASE_YEAR
- **Return Type**: int
- **Parameters**: 
- **Description**: Base year is 1898.

### SET_CLOCK_DATE
- **Return Type**: void
- **Parameters**: int day, int month, int year

### GET_CLOCK_DAY_OF_WEEK
- **Return Type**: int
- **Parameters**: 
- **Description**: Gets the current day of the week.  0: Sunday 1: Monday 2: Tuesday 3: Wednesday 4: Thursday 5: Friday 6: Saturday

### GET_CLOCK_DAY_OF_MONTH
- **Return Type**: int
- **Parameters**: 

### GET_CLOCK_MONTH
- **Return Type**: int
- **Parameters**: 

### GET_CLOCK_YEAR
- **Return Type**: int
- **Parameters**: 

### GET_MILLISECONDS_PER_GAME_MINUTE
- **Return Type**: int
- **Parameters**: 

### GET_POSIX_TIME
- **Return Type**: void
- **Parameters**: int* year, int* month, int* day, int* hour, int* minute, int* second

### _GET_POSIX_TIME_STRUCT
- **Return Type**: void
- **Parameters**: Any* outTime
- **Description**: Same as GET_POSIX_TIME except that it takes a single pointer to a struct.

### _ADD_TIME_TO_DATE_TIME
- **Return Type**: void
- **Parameters**: Any* inDateTime, Any* timeToAdd, Any* outDateTime


## COLLECTION
### _COLLECTABLE_GET_CATEGORY
- **Return Type**: Hash
- **Parameters**: Hash collectableItem
- **Description**: Used in Script Function NET_COLLECTABLES_HANDLE_ITEM_ADDED Returns collectableCategory Hash

### _COLLECTABLE_GET_SUBCATEGORY
- **Return Type**: Hash
- **Parameters**: Hash collectableItem

### _COLLECTABLE_GET_IPL
- **Return Type**: Hash
- **Parameters**: Hash collectableItem

### _COLLECTABLE_GET_PLACEMENT_LOCATION
- **Return Type**: Vector3
- **Parameters**: Hash collectableItem

### _COLLECTABLE_GET_NUM_FOUND
- **Return Type**: int
- **Parameters**: Hash collectableItem

### _COLLECTABLE_GET_NUM_TURNED_IN
- **Return Type**: int
- **Parameters**: Hash collectableItem

### _COLLECTABLE_INCREMENT_NUM_FOUND
- **Return Type**: void
- **Parameters**: Hash collectableItem, int amount

### _COLLECTABLE_INCREMENT_NUM_TURNED_IN
- **Return Type**: void
- **Parameters**: Hash collectableItem, int amount

### _COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES
- **Return Type**: int
- **Parameters**: Hash collectableCategory, Hash collectableSubcategory

### _COLLECTABLE_GET_COLLECTABLE_ITEM_HASH
- **Return Type**: Hash
- **Parameters**: int index, Hash collectableCategory, Hash collectableSubcategory

### _COLLECTABLE_CATEGORY_GET_NUM_FOUND
- **Return Type**: int
- **Parameters**: Hash collectableCategory, Hash collectableSubcategory

### _COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN
- **Return Type**: int
- **Parameters**: Hash collectableCategory, Hash collectableSubcategory

### _0x33825A7388A6B9F6
- **Return Type**: int
- **Parameters**: Hash collectableCategory, int p1

### _0x755901C7598B97BC
- **Return Type**: int
- **Parameters**: Hash collectableCategory, int p1
- **Description**: Returns p2 (index?) for 0xB9020EC89C07DF04

### _0xB9020EC89C07DF04
- **Return Type**: Any
- **Parameters**: Hash collectableCategory, int p1, int index
- **Description**: Accepts more hashes than 0xCC644BC1DD655269 Such as: CAROLINA_PARAKEETS, DINO_BONES, EGRET_FEATHERS, ...

### _0xFC832B06127D8E99
- **Return Type**: BOOL
- **Parameters**: Hash collectableCategory, int p1

### COLLECTABLE_CATEGORY_SET_HAS_RECEIVED_LIST
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x6BAB7ACED1017204
- **Return Type**: BOOL
- **Parameters**: Hash collectableCategory, int p1
- **Description**: Params: collectableCategory = WEEKLY_COLLECTABLES

### _0x61BEFBA3CE7A3BC8
- **Return Type**: BOOL
- **Parameters**: Hash collectableCategory, int p1
- **Description**: Params: collectableCategory = WEEKLY_COLLECTABLES

### _0xC4AC39719C1BB559
- **Return Type**: Any
- **Parameters**: Hash collectableCategory, Any p1

### _0x93F2E7B5DB85657B
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD
- **Return Type**: Hash
- **Parameters**: Hash collectableCategory, Hash p1
- **Description**: collectableCategory: ANTIQUE_BOTTLES, BIRD_EGGS, ARROWHEADS, FAMILY_HEIRLOOMS, WILD_FLOWERS, COINS, LOST_JEWELRY_RINGS, LOST_JEWELRY_BRACELETS, LOST_JEWELRY_EARRINGS, LOST_JEWELRY_NECKLACES, TAROT_CARDS_CUPS, TAROT_CARDS_PENTACLES, TAROT_CARDS_SWORDS, TAROT_CARDS_WANDS, FOSSILS_COMMON, FOSSILS_UNCOMMON, FOSSILS_RARE

### _0x9ADEE485726025D4
- **Return Type**: Hash
- **Parameters**: Hash collectableCategory
- **Description**: Params: collectableCategory = WEEKLY_COLLECTABLES

### _0xD1806FB3EDED6D11
- **Return Type**: Any
- **Parameters**: Hash collectableCategory, int p1

### _0x3FD91F1A148A0468
- **Return Type**: Any
- **Parameters**: Hash collectableCategory, int p1

### _0xC3CA424E1F12ED0C
- **Return Type**: Any
- **Parameters**: Hash collectableCategory, int p1

### _COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME
- **Return Type**: Hash
- **Parameters**: Hash collectableCategory, Hash collectableSubcategory

### _COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY
- **Return Type**: Hash
- **Parameters**: Hash collectableCategory, Hash collectableSubcategory

### _0xD297F68928A58130
- **Return Type**: Any
- **Parameters**: Hash collectableCategory, int p1

### _0x775FA1FC87666847
- **Return Type**: Any
- **Parameters**: Hash collectableCategory, int p1

### _0xEC3959E9950BF56B
- **Return Type**: Any
- **Parameters**: int p0


## COMPANION
### _0xD730281E496621FB
- **Return Type**: void
- **Parameters**: Ped ped, Hash p1

### _0xBF6583E926D13890
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x0A8FD91EDE7B328A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x991E3346D788F20F
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xCE27824B5968B79A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xF06CBB8CCCA823C0
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x2917E634206B9E17
- **Return Type**: void
- **Parameters**: Ped ped, int p1

### _0xD428C3F92FC3F6F8
- **Return Type**: void
- **Parameters**: Ped ped, const char* p1

### _ADD_COMPANION_FLAG
- **Return Type**: void
- **Parameters**: Ped ped, int p1
- **Description**: Used for Script Function NET_FETCH_CLIENT_ACTIVATE_COMAPNION_ANALYSIS: Hiding! Ped

### _REMOVE_COMPANION_FLAG
- **Return Type**: void
- **Parameters**: Ped ped, int p1

### _0x0DE02DA3C0F66955
- **Return Type**: void
- **Parameters**: Ped ped, Hash p1

### _SET_COMPANION_ACTIVITY
- **Return Type**: void
- **Parameters**: int groupId, Hash activity
- **Description**: enum _0x18F77396

### _GET_COMPANION_ACTIVITY
- **Return Type**: Hash
- **Parameters**: int groupId
- **Description**: enum _0x18F77396

### _0xA079FF7CFB9AC8BD
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x61BDA07407754A5C
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0xD55A871E1CE3481B
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x0C6A00DAE896614C
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x8FB98B719AA0075A
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0x9C902084F48D2E6C
- **Return Type**: void
- **Parameters**: Any p0

### _0xD747979C053EFA7A
- **Return Type**: void
- **Parameters**: Any p0

### _0x3CAAD93FA5B9579A
- **Return Type**: void
- **Parameters**: Volume volume, int p1, int p2

### _0x7274F84B1501B523
- **Return Type**: void
- **Parameters**: Any p0

### _0x722FBE08EF5B87BD
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _ACTIVATE_COMPANION_ANALYSIS
- **Return Type**: void
- **Parameters**: int groupId

### _DEACTIVATE_COMPANION_ANALYSIS
- **Return Type**: void
- **Parameters**: int groupId


## COMPENDIUM
### _0x725D52F21A5E9E22
- **Return Type**: float
- **Parameters**: Hash category
- **Description**: Only used in R* SP Scripts, category = GANGS _COMPENDIUM_GET_*

### _COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY
- **Return Type**: int
- **Parameters**: Hash category

### _0x729D52461AEA9E22
- **Return Type**: int
- **Parameters**: Hash category
- **Description**: Only used in R* SP Scripts, category = GANGS _COMPENDIUM_GET_NUM_OF_ENTRIES_IN_*

### COMPENDIUM_GET_SHORT_DESCRIPTION_FROM_PED
- **Return Type**: Hash
- **Parameters**: Ped ped

### COMPENDIUM_GET_SUBCATEGORY_PED_IS_IN
- **Return Type**: Hash
- **Parameters**: Hash category, Ped ped

### _COMPENDIUM_GET_SUBCATEGORY_HASH_FROM_ANIMAL_TYPE
- **Return Type**: Hash
- **Parameters**: Hash category, Hash animalType

### COMPENDIUM_GET_NUM_ENTRIES_IN_SUBCATEGORY
- **Return Type**: int
- **Parameters**: Hash category, Hash subcategory

### COMPENDIUM_GET_ENTRY_BY_INDEX_IN_SUBCATEGORY
- **Return Type**: int
- **Parameters**: Hash category, Hash subcategory, int count

### COMPENDIUM_GET_ENTRY_BY_PED_INDEX
- **Return Type**: int
- **Parameters**: Hash category, Ped ped

### COMPENDIUM_GET_ENTRY_BY_STAT_ITEM
- **Return Type**: int
- **Parameters**: Hash category, Hash animalType

### COMPENDIUM_GET_SUBCATEGORY_TOAST_APP_ID
- **Return Type**: Any
- **Parameters**: Hash category, Hash subcategory

### COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM
- **Return Type**: Hash
- **Parameters**: Hash animalStatItem, float x, float y, float z

### COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM
- **Return Type**: Hash
- **Parameters**: Hash animalStatItem, Vector3 vec

### COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME
- **Return Type**: void
- **Parameters**: Hash animalType, BOOL disableCompendiumToast

### COMPENDIUM_WAS_ANIMAL_OBSERVED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### COMPENDIUM_ANIMAL_SET_DISCOVERED
- **Return Type**: void
- **Parameters**: int compendiumEntry

### COMPENDIUM_GET_STUDY_AWARD_ID
- **Return Type**: Any
- **Parameters**: Ped ped

### COMPENDIUM_ANIMAL_GET_SAMPLE_INVENTORY_ITEM
- **Return Type**: Any
- **Parameters**: int compendiumEntry

### COMPENDIUM_ANIMAL_HAS_SAMPLE
- **Return Type**: BOOL
- **Parameters**: int compendiumEntry

### COMPENDIUM_ANIMAL_HAS_STAMP
- **Return Type**: BOOL
- **Parameters**: int compendiumEntry

### COMPENDIUM_FISH_CAUGHT
- **Return Type**: void
- **Parameters**: Ped ped, Hash category

### COMPENDIUM_FISH_GET_LURE_SUITABILITY_BY_STAT_ITEM
- **Return Type**: int
- **Parameters**: Hash animalType, Hash baitType

### COMPENDIUM_GANG_CAMP_FOUND
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### COMPENDIUM_GANG_AMBUSH_SURVIVED
- **Return Type**: void
- **Parameters**: Any p0

### COMPENDIUM_GANG_ENCOUNTERED
- **Return Type**: void
- **Parameters**: Any p0

### COMPENDIUM_GANG_BOUNTY_CAPTURED
- **Return Type**: void
- **Parameters**: Any p0

### COMPENDIUM_GANG_MEMBER_KILLED
- **Return Type**: void
- **Parameters**: Any p0

### COMPENDIUM_GANG_HIDEOUT_FOUND
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### COMPENDIUM_HERB_PICKED
- **Return Type**: void
- **Parameters**: Hash herbType, float x, float y, float z
- **Description**: herbType: https://alloc8or.re/rdr3/doc/enums/eHerbType.txt Vector3: Player Location

### COMPENDIUM_HERB_PICKED
- **Return Type**: void
- **Parameters**: Hash herbType, Vector3 vec

### COMPENDIUM_HORSE_BONDING
- **Return Type**: void
- **Parameters**: Ped ped, int bondingLevel

### COMPENDIUM_HORSE_WILD_BROKEN
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: NET_PLAYER_HORSE_PROCESS_EVENT_HORSE_BREAKING

### COMPENDIUM_HORSE_OBSERVED
- **Return Type**: void
- **Parameters**: Ped ped, BOOL disableCompendiumToast
- **Description**: Only gets called if bSetObserved is true and animalType is matching


## CRASHLOG
### _0x0FD3ECF9D0C8655F
- **Return Type**: void
- **Parameters**: const char* p0

### _0xCA0BAC376C541978
- **Return Type**: void
- **Parameters**: const char* p0

### _0x3A66F1963B223F61
- **Return Type**: BOOL
- **Parameters**: const char* p0

### _0x7C680FF55617F82F
- **Return Type**: BOOL
- **Parameters**: 

### _0xD8E3D22AA4F0E0A5
- **Return Type**: BOOL
- **Parameters**: const char* p0

### _0xA67F0B039D9CD513
- **Return Type**: BOOL
- **Parameters**: BOOL p0

### _0xE72E234B30DA7B7A
- **Return Type**: BOOL
- **Parameters**: int p0

### _0x87F005C969EF1563
- **Return Type**: BOOL
- **Parameters**: float p0

### _0x23CCAB8F40B9CBEE
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z

### _0x23CCAB8F40B9CBEE
- **Return Type**: BOOL
- **Parameters**: Vector3 vec

### _0xF0D545C1EEAD614A
- **Return Type**: BOOL
- **Parameters**: 

### _0x33C1D63E55FA4284
- **Return Type**: BOOL
- **Parameters**: const char* p0

### _0x4E42CA5BCD45444A
- **Return Type**: void
- **Parameters**: 

### _0xDA05310EA94DC8C6
- **Return Type**: void
- **Parameters**: const char* p0, const char* p1
- **Description**: unused = true


## CREW
### NETWORK_FIND_GAMERS_IN_CREW
- **Return Type**: BOOL
- **Parameters**: int crewId

### NETWORK_CLAN_SERVICE_IS_VALID
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_CLAN_PLAYER_IS_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle

### NETWORK_CLAN_PLAYER_GET_DESC
- **Return Type**: BOOL
- **Parameters**: Any* clanDesc, int bufferSize, Any* gamerHandle

### NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT
- **Return Type**: int
- **Parameters**: 

### NETWORK_CLAN_GET_MEMBERSHIP_DESC
- **Return Type**: BOOL
- **Parameters**: Any* memberDesc, int p1

### _0x58D378AF2C8765B7
- **Return Type**: BOOL
- **Parameters**: Any p0

### _NETWORK_CLAN_INVITE_PLAYER
- **Return Type**: BOOL
- **Parameters**: Any p0

### _NETWORK_ACCEPT_CLAN_INVITE
- **Return Type**: BOOL
- **Parameters**: int crewInviteIndex

### NETWORK_CLAN_REQUEST_EMBLEM
- **Return Type**: BOOL
- **Parameters**: Any p0

### NETWORK_CLAN_IS_EMBLEM_READY
- **Return Type**: BOOL
- **Parameters**: Any p0, Any* p1

### NETWORK_CLAN_RELEASE_EMBLEM
- **Return Type**: void
- **Parameters**: Any p0

### NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR
- **Return Type**: Any
- **Parameters**: 

### NETWORK_GET_PRIMARY_CLAN_DATA_START
- **Return Type**: BOOL
- **Parameters**: Any* p0, Any p1

### NETWORK_GET_PRIMARY_CLAN_DATA_PENDING
- **Return Type**: Any
- **Parameters**: 

### NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS
- **Return Type**: Any
- **Parameters**: 

### NETWORK_GET_PRIMARY_CLAN_DATA_NEW
- **Return Type**: BOOL
- **Parameters**: Any* p0, Any* p1

### _NETWORK_CLAN_SET_ACTIVE
- **Return Type**: Any
- **Parameters**: Any p0


## DATABINDING
### _DATABINDING_GET_DATA_CONTAINER_FROM_PATH
- **Return Type**: Any
- **Parameters**: const char* p0

### _DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX
- **Return Type**: Any
- **Parameters**: Hash entryId, int p1

### _0xD7DB94AB78E8EBE4
- **Return Type**: Any
- **Parameters**: const char* p0, Hash p1

### _DATABINDING_ADD_DATA_CONTAINER_FROM_PATH
- **Return Type**: Any
- **Parameters**: const char* p0, const char* p1

### _DATABINDING_ADD_DATA_CONTAINER_BY_HASH
- **Return Type**: Any
- **Parameters**: Any p0, Hash p1

### _DATABINDING_ADD_DATA_CONTAINER
- **Return Type**: Hash
- **Parameters**: Hash entryId, const char* p1
- **Description**: Returns entryId Hash

### _DATABINDING_ADD_DATA_BOOL_FROM_PATH
- **Return Type**: Any
- **Parameters**: const char* p0, const char* p1, BOOL p2

### _DATABINDING_ADD_DATA_BOOL_BY_HASH
- **Return Type**: Any
- **Parameters**: Any p0, Hash p1, BOOL p2

### _DATABINDING_ADD_DATA_BOOL
- **Return Type**: Any
- **Parameters**: Any p0, const char* p1, BOOL p2

### _DATABINDING_ADD_DATA_INT_BY_HASH
- **Return Type**: Any
- **Parameters**: Any p0, Hash p1, int p2

### _DATABINDING_ADD_DATA_INT
- **Return Type**: Any
- **Parameters**: Any p0, const char* p1, Hash p2

### _DATABINDING_ADD_DATA_FLOAT
- **Return Type**: Any
- **Parameters**: Any p0, const char* p1, float p2

### _DATABINDING_ADD_DATA_HASH_BY_HASH
- **Return Type**: Any
- **Parameters**: Any p0, Hash p1, Hash p2

### _DATABINDING_ADD_DATA_HASH
- **Return Type**: Any
- **Parameters**: Any p0, const char* p1, Hash p2

### _DATABINDING_ADD_DATA_STRING_FROM_PATH
- **Return Type**: Any
- **Parameters**: const char* p0, const char* p1, const char* p2

### _DATABINDING_ADD_DATA_STRING_BY_HASH
- **Return Type**: Any
- **Parameters**: Any p0, Hash p1, const char* p2

### _DATABINDING_ADD_DATA_STRING
- **Return Type**: Any
- **Parameters**: Any p0, const char* p1, const char* p2

### _DATABINDING_ADD_DATA_GANG_ID
- **Return Type**: Any
- **Parameters**: Any p0, const char* p1, Any gangId

### _DATABINDING_ADD_DATA_POSSE_ID
- **Return Type**: Any
- **Parameters**: Any p0, const char* p1, Any posseId

### _0x294AF5323F44B053
- **Return Type**: Any
- **Parameters**: Any p0, const char* p1, Any p2

### _DATABINDING_ADD_UI_ITEM_LIST_FROM_PATH
- **Return Type**: Any
- **Parameters**: const char* p0, const char* p1

### _DATABINDING_ADD_UI_ITEM_LIST_BY_HASH
- **Return Type**: Any
- **Parameters**: Any p0, Hash p1

### _DATABINDING_ADD_UI_ITEM_LIST
- **Return Type**: Any
- **Parameters**: Any p0, const char* p1

### _DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS
- **Return Type**: void
- **Parameters**: Any p0, int index, const char* p2, Any p3

### _DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS
- **Return Type**: void
- **Parameters**: Any p0, int index, Hash p2, Any p3

### _DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_PATH_STRING_ALIAS
- **Return Type**: void
- **Parameters**: Any p0, Any p1, const char* p2, Any p3

### _0x6318FB3BE37E11B3
- **Return Type**: void
- **Parameters**: Hash entryId, int index

### _DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID
- **Return Type**: void
- **Parameters**: Any p0, Hash entryId

### _DATABINDING_CLEAR_BINDING_ARRAY
- **Return Type**: void
- **Parameters**: Hash entryId

### _DATABINDING_GET_ITEM_CONTEXT_BY_INDEX
- **Return Type**: Any
- **Parameters**: Any p0, int index

### _DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE
- **Return Type**: void
- **Parameters**: Any p0, int p1

### _DATABINDING_SET_TEMPLATED_UI_ITEM_HASH_ALIAS
- **Return Type**: void
- **Parameters**: Any p0, int p1, Hash p2

### _0xD48993A61938C64D
- **Return Type**: Any
- **Parameters**: Any p0, const char* p1

### _DATABINDING_ADD_HASH_ARRAY
- **Return Type**: Any
- **Parameters**: Any p0, const char* p1

### _DATABINDING_ADD_STRING_ARRAY
- **Return Type**: Any
- **Parameters**: Any p0, const char* p1

### _0x1919D59E60FD516E
- **Return Type**: void
- **Parameters**: Any p0, int p1, int p2

### _0x7FC60C94C83C5CD7
- **Return Type**: void
- **Parameters**: Any p0, Hash p1, int p2

### _0xC900CEC8A172375B
- **Return Type**: void
- **Parameters**: Any p0, const char* p1, int p2

### _0x02B21B6BEEDD83CC
- **Return Type**: Any
- **Parameters**: Hash entryId, int p1

### _0xF47E33F8D2523825
- **Return Type**: Any
- **Parameters**: Any p0, int p1

### _0x3BF0767CF33FCC88
- **Return Type**: void
- **Parameters**: Hash entryId

### _DATABINDING_GET_ARRAY_COUNT
- **Return Type**: Any
- **Parameters**: Hash entryId

### _DATABINDING_WRITE_DATA_BOOL
- **Return Type**: void
- **Parameters**: Any p0, BOOL p1

### _DATABINDING_WRITE_DATA_BOOL_FROM_PARENT
- **Return Type**: void
- **Parameters**: Any p0, const char* p1, BOOL p2

### _0xBFC83DA249BEFCC9
- **Return Type**: void
- **Parameters**: Any p0, Hash p1, Any p2
- **Description**: _DATABINDING_WRITE_DATA_*

### _DATABINDING_WRITE_DATA_INT
- **Return Type**: void
- **Parameters**: Any p0, int p1

### _DATABINDING_WRITE_DATA_INT_FROM_PARENT
- **Return Type**: void
- **Parameters**: Any p0, const char* p1, int p2

### _DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH
- **Return Type**: void
- **Parameters**: Any p0, Hash p1, Any p2

### _DATABINDING_WRITE_DATA_FLOAT
- **Return Type**: void
- **Parameters**: Any p0, float p1

### _0x05AC9E1E02975AFB
- **Return Type**: void
- **Parameters**: Any p0, const char* p1, float p2
- **Description**: _DATABINDING_WRITE_DATA_*

### _DATABINDING_WRITE_DATA_HASH_STRING
- **Return Type**: void
- **Parameters**: Any p0, Hash p1

### _DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT
- **Return Type**: void
- **Parameters**: Any p0, const char* p1, Hash p2

### _DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH
- **Return Type**: void
- **Parameters**: Any p0, Hash p1, Any p2

### _DATABINDING_WRITE_DATA_STRING
- **Return Type**: void
- **Parameters**: Any p0, const char* p1

### DATABINDING_WRITE_STRING_FROM_PARENT
- **Return Type**: void
- **Parameters**: Any p0, const char* p1, const char* p2

### _DATABINDING_WRITE_STRING_FROM_HASH
- **Return Type**: void
- **Parameters**: Any p0, Hash p1, const char* p2

### _DATABINDING_WRITE_DATA_GANG_ID
- **Return Type**: void
- **Parameters**: Any p0, const char* p1, Any gangId

### _DATABINDING_WRITE_DATA_POSSE_ID
- **Return Type**: void
- **Parameters**: Any p0, const char* p1, Any posseId

### _0x422179C7F6AD9304
- **Return Type**: void
- **Parameters**: Any p0, Any* gamerHandle

### _DATABINDING_READ_DATA_BOOL
- **Return Type**: Any
- **Parameters**: Any p0

### _DATABINDING_READ_DATA_BOOL_FROM_PARENT
- **Return Type**: Any
- **Parameters**: Any p0, const char* p1

### _DATABINDING_READ_DATA_BOOL_FROM_PARENT_BY_HASH
- **Return Type**: Any
- **Parameters**: Any p0, Hash p1

### DATABINDING_READ_INT
- **Return Type**: int
- **Parameters**: Any p0

### _DATABINDING_READ_DATA_INT_FROM_PARENT
- **Return Type**: Any
- **Parameters**: Any p0, const char* p1

### _DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH
- **Return Type**: Any
- **Parameters**: Any p0, Hash p1

### _DATABINDING_READ_FLOAT
- **Return Type**: float
- **Parameters**: Hash entryId

### _DATABINDING_READ_HASH
- **Return Type**: Hash
- **Parameters**: Hash entryId

### _DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT
- **Return Type**: Any
- **Parameters**: Any p0, const char* p1

### _DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH
- **Return Type**: Any
- **Parameters**: Any p0, Hash p1

### _DATABINDING_READ_DATA_STRING
- **Return Type**: Any
- **Parameters**: Any p0

### _DATABINDING_READ_DATA_STRING_FROM_PARENT
- **Return Type**: Any
- **Parameters**: Any p0, const char* p1

### _0x6329C34BEE5BFF4B
- **Return Type**: Any
- **Parameters**: Any p0, Hash p1

### _0xE6AAB897120492D6
- **Return Type**: Any
- **Parameters**: Any p0, const char* p1

### _0xE6AAB897120492D7
- **Return Type**: void
- **Parameters**: Any p0, const char* p1, Any p2

### _0xB138CA787F3DD858
- **Return Type**: void
- **Parameters**: Any p0, const char* p1, Any p2

### DATABINDING_IS_ENTRY_VALID
- **Return Type**: BOOL
- **Parameters**: Hash entryId

### _DATABINDING_REMOVE_DATA_ENTRY
- **Return Type**: void
- **Parameters**: Hash entryId

### _VIRTUAL_COLLECTION_SET_SIZE
- **Return Type**: void
- **Parameters**: Any p0, int size

### _VIRTUAL_COLLECTION_SET_INTEREST_INDEX
- **Return Type**: void
- **Parameters**: Any p0, int interestIndex

### _VIRTUAL_COLLECTION_ITEM_ADD
- **Return Type**: void
- **Parameters**: Any p0, int index, Hash p2, Any p3

### _VIRTUAL_COLLECTION_RESET
- **Return Type**: void
- **Parameters**: Any p0

### _VIRTUAL_COLLECTION_EXISTS
- **Return Type**: Any
- **Parameters**: Any p0


## DATAFILE
### DATAFILE_WATCH_REQUEST_ID
- **Return Type**: void
- **Parameters**: int id
- **Description**: Adds the given request ID to the watch list.

### DATAFILE_HAS_LOADED_FILE_DATA
- **Return Type**: BOOL
- **Parameters**: Any p0

### DATAFILE_HAS_VALID_FILE_DATA
- **Return Type**: BOOL
- **Parameters**: Any p0

### DATAFILE_SELECT_ACTIVE_FILE
- **Return Type**: BOOL
- **Parameters**: Any p0, Any p1

### DATAFILE_DELETE_REQUESTED_FILE
- **Return Type**: BOOL
- **Parameters**: Any p0

### UGC2_SET_PLAYER_DATA
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### DATAFILE_UGC_SELECT_DATA
- **Return Type**: Any
- **Parameters**: Any ugcRequestId, int index, Any p2
- **Description**: Reloops value returned by UGC_QUERY_GET_CONTENT_NUM

### DATAFILE_CREATE
- **Return Type**: void
- **Parameters**: int index

### DATAFILE_DELETE
- **Return Type**: void
- **Parameters**: int index

### DATADICT_IS_DICT_VALID
- **Return Type**: BOOL
- **Parameters**: Any* fileDict

### DATADICT_IS_ARRAY_VALID
- **Return Type**: BOOL
- **Parameters**: Any* fileDict

### DATADICT_SET_INT
- **Return Type**: void
- **Parameters**: Any* objectData, const char* key, int value

### DATADICT_GET_BOOL
- **Return Type**: BOOL
- **Parameters**: Any* objectData, const char* key

### DATADICT_GET_INT
- **Return Type**: int
- **Parameters**: Any* objectData, const char* key

### DATADICT_GET_FLOAT
- **Return Type**: float
- **Parameters**: Any* objectData, const char* key

### DATADICT_GET_VECTOR
- **Return Type**: Vector3
- **Parameters**: Any* objectData, const char* key

### DATADICT_GET_TYPE
- **Return Type**: int
- **Parameters**: Any* objectData, const char* key
- **Description**: Types: 1 = Boolean 2 = Integer 3 = Float 4 = String 5 = Vector3 6 = Object 7 = Array

### _0xBC0DF006A4952C68
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x9F130129EBC31B34
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x277251C161B4C3F4
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x1C65CC931C0F946F
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x7681B677400C7071
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### DATAARRAY_GET_BOOL
- **Return Type**: BOOL
- **Parameters**: Any* arrayData, int arrayIndex

### DATAARRAY_GET_INT
- **Return Type**: int
- **Parameters**: Any* arrayData, int arrayIndex

### DATAARRAY_GET_FLOAT
- **Return Type**: float
- **Parameters**: Any* arrayData, int arrayIndex

### DATAARRAY_GET_VECTOR
- **Return Type**: Vector3
- **Parameters**: Any* arrayData, int arrayIndex

### DATAARRAY_GET_COUNT
- **Return Type**: int
- **Parameters**: Any* arrayData

### DATAARRAY_GET_TYPE
- **Return Type**: int
- **Parameters**: Any* arrayData, int arrayIndex
- **Description**: Types: 1 = Boolean 2 = Integer 3 = Float 4 = String 5 = Vector3 6 = Object 7 = Array

### _0x4F9E3ED7617123AC
- **Return Type**: Any
- **Parameters**: Any p0

### _0xCA56DD6AB7A39F64
- **Return Type**: Any
- **Parameters**: Any p0

### _PARSEDDATA_LOAD_FILE_HASH
- **Return Type**: int
- **Parameters**: Hash p0
- **Description**: LOAD_PARSEDDATA_FILE_FAILSAFE_HASH Returns parseddata script fileHandle

### _PARSEDDATA_UNLOAD_FILE
- **Return Type**: void
- **Parameters**: int fileHandle

### PARSEDDATA_IS_FILE_VALID
- **Return Type**: BOOL
- **Parameters**: int fileHandle

### PARSEDDATA_IS_FILE_LOADED
- **Return Type**: BOOL
- **Parameters**: int fileHandle

### _0x3168BA5D6DECE323
- **Return Type**: void
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### _PARSEDDATA_REGISTER_QUERY
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### PARSEDDATA_RQ_FILLOUT_NODE
- **Return Type**: BOOL
- **Parameters**: int* p0, Any* p1
- **Description**: Old name: _DATAFILE_GET_DATA_NODE_INDEX

### _PARSEDDATA_RQ_GET_NUM_NODES
- **Return Type**: Any
- **Parameters**: Any p0

### _0xE13634BB6BAF0734
- **Return Type**: int
- **Parameters**: int p0, int p1

### _PARSEDDATA_GET_NUM_CHILDREN
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### PARSEDDATA_RQ_FILLOUT_HASH
- **Return Type**: BOOL
- **Parameters**: Hash* p0, Any* p1
- **Description**: Old name: _DATAFILE_GET_HASH

### _PARSEDDATA_RQ_FILLOUT_STRING_63
- **Return Type**: BOOL
- **Parameters**: char* p0, Any* p1
- **Description**: Old name: _DATAFILE_GET_STRING

### PARSEDDATA_RQ_FILLOUT_STRING_127
- **Return Type**: BOOL
- **Parameters**: char* p0, Any* p1

### _PARSEDDATA_RQ_FILLOUT_VECTOR
- **Return Type**: BOOL
- **Parameters**: Vector3* p0, Any* p1
- **Description**: Old name: _DATAFILE_GET_VECTOR

### _PARSEDDATA_RQ_FILLOUT_FLOAT
- **Return Type**: BOOL
- **Parameters**: float* p0, Any* p1
- **Description**: Old name: _DATAFILE_GET_FLOAT

### _PARSEDDATA_RQ_FILLOUT_INT
- **Return Type**: BOOL
- **Parameters**: int* p0, Any* p1
- **Description**: Old name: _DATAFILE_GET_INT

### _PARSEDDATA_RQ_FILLOUT_BOOL
- **Return Type**: BOOL
- **Parameters**: BOOL* p0, Any* p1
- **Description**: Old name: _DATAFILE_GET_BOOL

### _PARSEDDATA_GET_FILE
- **Return Type**: void
- **Parameters**: Any* p0
- **Description**: Opens file.

### _PARSEDDATA_GET_ENTRIES
- **Return Type**: BOOL
- **Parameters**: Any* p0
- **Description**: Returns false when there are no entries.

### _PARSEDDATA_GET_FLOAT
- **Return Type**: BOOL
- **Parameters**: Any* p0, Any* p1, Hash p2

### _PARSEDDATA_GET_INT
- **Return Type**: BOOL
- **Parameters**: Any* p0, Any* p1, Hash p2

### _PARSEDDATA_GET_SECTION
- **Return Type**: BOOL
- **Parameters**: Any* p0, Any* p1, Hash section

### _PARSEDDATA_GET_BOOL
- **Return Type**: BOOL
- **Parameters**: BOOL* p0, Any* p1, Hash p2


## DEBUG
### _0xACF9CB705BEFA8CB
- **Return Type**: Any
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### _0xA8D970D8A72640A6
- **Return Type**: Any
- **Parameters**: 
- **Description**: nullsub, doesn't do anything


## DECORATOR
### DECOR_SET_BOOL
- **Return Type**: BOOL
- **Parameters**: Entity entity, const char* propertyName, BOOL value
- **Description**: This function sets metadata of type bool to specified entity. 

### DECOR_SET_FLOAT
- **Return Type**: BOOL
- **Parameters**: Entity entity, const char* propertyName, float value

### DECOR_SET_INT
- **Return Type**: BOOL
- **Parameters**: Entity entity, const char* propertyName, int value
- **Description**: Sets property to int.

### _DECOR_SET_UINT8
- **Return Type**: BOOL
- **Parameters**: Entity entity, const char* propertyName, int value

### DECOR_SET_STRING
- **Return Type**: BOOL
- **Parameters**: Entity entity, const char* propertyName, const char* value

### DECOR_GET_BOOL
- **Return Type**: BOOL
- **Parameters**: Entity entity, const char* propertyName

### DECOR_GET_FLOAT
- **Return Type**: float
- **Parameters**: Entity entity, const char* propertyName

### DECOR_GET_INT
- **Return Type**: int
- **Parameters**: Entity entity, const char* propertyName

### _DECOR_GET_UINT8
- **Return Type**: int
- **Parameters**: Entity entity, const char* propertyName

### DECOR_EXIST_ON
- **Return Type**: BOOL
- **Parameters**: Entity entity, const char* propertyName
- **Description**: Returns whether or not the specified property is set for the entity.

### DECOR_REMOVE
- **Return Type**: BOOL
- **Parameters**: Entity entity, const char* propertyName

### DECOR_REMOVE_ALL
- **Return Type**: BOOL
- **Parameters**: Entity entity

### DECOR_REGISTER
- **Return Type**: void
- **Parameters**: const char* propertyName, int type

### _DECOR_REGISTER_2
- **Return Type**: void
- **Parameters**: const char* propertyName, int type, BOOL p2

### DECOR_IS_REGISTERED_AS_TYPE
- **Return Type**: BOOL
- **Parameters**: const char* propertyName, int type
- **Description**: type: see DECOR_REGISTER


## DLC
### IS_DLC_PRESENT
- **Return Type**: BOOL
- **Parameters**: Hash dlcHash

### GET_IS_LOADING_SCREEN_ACTIVE
- **Return Type**: BOOL
- **Parameters**: 

### _GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED
- **Return Type**: BOOL
- **Parameters**: 

### _GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED
- **Return Type**: BOOL
- **Parameters**: 


## ENTITY
### DOES_ENTITY_EXIST
- **Return Type**: BOOL
- **Parameters**: Entity entity
- **Description**: Checks if the Entity exists

### DOES_ENTITY_BELONG_TO_THIS_SCRIPT
- **Return Type**: BOOL
- **Parameters**: Entity entity, BOOL p1

### DOES_ENTITY_HAVE_DRAWABLE
- **Return Type**: BOOL
- **Parameters**: Entity entity

### DOES_ENTITY_HAVE_PHYSICS
- **Return Type**: BOOL
- **Parameters**: Entity entity

### HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT
- **Return Type**: BOOL
- **Parameters**: Entity entity

### HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED
- **Return Type**: BOOL
- **Parameters**: Entity entity

### HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Entity entity

### HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY
- **Return Type**: BOOL
- **Parameters**: Entity entity1, Entity entity2, BOOL p2, BOOL p3

### _0x3EC28DA1FFAC9DDD
- **Return Type**: BOOL
- **Parameters**: Entity entity1, Entity entity2, Any p2, Any p3
- **Description**: Used in Script Function DUELING_DID_PLAYER_DISARM_OPPONENT

### _0xAF72EC7E1B54539B
- **Return Type**: Entity
- **Parameters**: Entity entity

### HAS_ENTITY_CLEAR_LOS_TO_ENTITY
- **Return Type**: BOOL
- **Parameters**: Entity entity1, Entity entity2, int traceType

### HAS_ENTITY_CLEAR_LOS_TO_COORD
- **Return Type**: BOOL
- **Parameters**: Entity entity, float x, float y, float z, int flags

### HAS_ENTITY_CLEAR_LOS_TO_COORD
- **Return Type**: BOOL
- **Parameters**: Entity entity, Vector3 vec, int flags

### HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT
- **Return Type**: BOOL
- **Parameters**: Entity entity1, Entity entity2, int traceType
- **Description**: Has the entity1 got a clear line of sight to the other entity2 from the direction entity1 is facing.

### HAS_ENTITY_COLLIDED_WITH_ANYTHING
- **Return Type**: BOOL
- **Parameters**: Entity entity

### _0x6D58167F62238284
- **Return Type**: float
- **Parameters**: Vehicle vehicle

### _0xDFC2B226D56D85F6
- **Return Type**: float
- **Parameters**: Any p0, Any p1

### GET_ANIM_DURATION
- **Return Type**: float
- **Parameters**: const char* animDict, const char* animName

### GET_ENTITY_ATTACHED_TO
- **Return Type**: Entity
- **Parameters**: Entity entity

### GET_ENTITY_COORDS
- **Return Type**: Vector3
- **Parameters**: Entity entity, BOOL alive, BOOL realCoords
- **Description**: Gets the current coordinates for a specified entity. `entity` = The entity to get the coordinates from. `alive` = Unused by the game, potentially used by debug builds in order to assert whether or not an entity was alive.  If entity is a ped and it's in a vehicle or on a mount the coords of that entity are returned. Set 'realCoords' to true when you need the true ped coords.

### GET_ENTITY_FORWARD_VECTOR
- **Return Type**: Vector3
- **Parameters**: Entity entity
- **Description**: Gets the entity's forward vector in XY(Z) eulers.

### GET_ENTITY_FORWARD_X
- **Return Type**: float
- **Parameters**: Entity entity
- **Description**: Gets the X-component of the entity's forward vector.

### GET_ENTITY_FORWARD_Y
- **Return Type**: float
- **Parameters**: Entity entity
- **Description**: Gets the Y-component of the entity's forward vector.

### _GET_ENTITY_FORWARD_VECTOR_YX
- **Return Type**: Vector3
- **Parameters**: Entity entity
- **Description**: Gets the entity's forward vector in YX(Z) eulers. Similar to GET_ENTITY_FORWARD_VECTOR

### GET_ENTITY_HEADING
- **Return Type**: float
- **Parameters**: Entity entity
- **Description**: Returns the heading of the entity in degrees. Also know as the "Yaw" of an entity.

### GET_ENTITY_HEALTH
- **Return Type**: int
- **Parameters**: Entity entity

### _GET_ENTITY_HEALTH_FLOAT
- **Return Type**: float
- **Parameters**: Entity entity
- **Description**: Returns (CUR_HEALTH / MAX_HEALTH)

### _CHANGE_ENTITY_HEALTH
- **Return Type**: BOOL
- **Parameters**: Entity entity, float amount, Entity entity2, Hash weaponHash
- **Description**: Alters entity's health by 'amount'. Can be negative (to drain health). In the scripts entity2 and weaponHash are unused (zero).

### GET_ENTITY_MAX_HEALTH
- **Return Type**: int
- **Parameters**: Entity entity, BOOL p1

### SET_ENTITY_MAX_HEALTH
- **Return Type**: void
- **Parameters**: Entity entity, int value

### GET_ENTITY_HEIGHT
- **Return Type**: float
- **Parameters**: Entity entity, float X, float Y, float Z, BOOL atTop, BOOL inWorldCoords

### GET_ENTITY_HEIGHT
- **Return Type**: float
- **Parameters**: Entity entity, Vector3 vec, BOOL atTop, BOOL inWorldCoords

### GET_ENTITY_HEIGHT_ABOVE_GROUND
- **Return Type**: float
- **Parameters**: Entity entity

### _GET_ENTITY_WORLD_POSITION_OF_DIMENSIONS
- **Return Type**: void
- **Parameters**: Entity entity, Vector3* minimum, Vector3* maximum

### GET_ENTITY_MATRIX
- **Return Type**: void
- **Parameters**: Entity entity, Vector3* rightVector, Vector3* forwardVector, Vector3* upVector, Vector3* position

### GET_ENTITY_MODEL
- **Return Type**: Hash
- **Parameters**: Entity entity
- **Description**: Returns the model hash from the entity

### _GET_PED_ANIMAL_TYPE
- **Return Type**: Hash
- **Parameters**: Ped ped
- **Description**: Returns the ped's animal type hash: https://alloc8or.re/rdr3/doc/enums/eAnimalType.txt Combine this with GET_STRING_FROM_HASH_KEY to display localized entity names

### GET_IS_ANIMAL
- **Return Type**: BOOL
- **Parameters**: Entity entity

### _GET_IS_BIRD
- **Return Type**: BOOL
- **Parameters**: Entity entity

### _GET_IS_PREDATOR
- **Return Type**: BOOL
- **Parameters**: Entity entity

### GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS
- **Return Type**: Vector3
- **Parameters**: Entity entity, float posX, float posY, float posZ

### GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS
- **Return Type**: Vector3
- **Parameters**: Entity entity, Vector3 pos

### GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS
- **Return Type**: Vector3
- **Parameters**: Entity entity, float offsetX, float offsetY, float offsetZ
- **Description**: Offset values are relative to the entity.  x = left/right y = forward/backward z = up/down

### GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS
- **Return Type**: Vector3
- **Parameters**: Entity entity, Vector3 offset

### GET_ENTITY_PITCH
- **Return Type**: float
- **Parameters**: Entity entity

### GET_ENTITY_ROLL
- **Return Type**: float
- **Parameters**: Entity entity
- **Description**: Displays the current ROLL axis of the entity [-180.0000/180.0000+] (Sideways Roll) such as a vehicle tipped on its side

### GET_ENTITY_ROTATION
- **Return Type**: Vector3
- **Parameters**: Entity entity, int rotationOrder

### _GET_ENTITY_SCRIPT
- **Return Type**: Hash
- **Parameters**: Entity entity, Any* argStruct

### GET_ENTITY_SPEED
- **Return Type**: float
- **Parameters**: Entity entity
- **Description**: Result is in meters per second (m/s)

### GET_ENTITY_SPEED_VECTOR
- **Return Type**: Vector3
- **Parameters**: Entity entity, BOOL relative

### GET_ENTITY_UPRIGHT_VALUE
- **Return Type**: float
- **Parameters**: Entity entity

### GET_ENTITY_VELOCITY
- **Return Type**: Vector3
- **Parameters**: Entity entity, int p1

### GET_OBJECT_INDEX_FROM_ENTITY_INDEX
- **Return Type**: Object
- **Parameters**: Entity entity
- **Description**: Simply returns whatever is passed to it (Regardless of whether the handle is valid or not).

### GET_PED_INDEX_FROM_ENTITY_INDEX
- **Return Type**: Ped
- **Parameters**: Entity entity
- **Description**: Simply returns whatever is passed to it (Regardless of whether the handle is valid or not).

### GET_VEHICLE_INDEX_FROM_ENTITY_INDEX
- **Return Type**: Vehicle
- **Parameters**: Entity entity
- **Description**: Simply returns whatever is passed to it (Regardless of whether the handle is valid or not).

### GET_WORLD_POSITION_OF_ENTITY_BONE
- **Return Type**: Vector3
- **Parameters**: Entity entity, int boneIndex
- **Description**: Returns the coordinates of an entity-bone. https://github.com/femga/rdr3_discoveries/tree/master/boneNames

### _0x5E214112806591EA
- **Return Type**: Vector3
- **Parameters**: Entity entity, int boneIndex
- **Description**: Attaches scenario to bone with an offset _GET_I* - _GET_M*

### _0x3AB3A77672F6473F
- **Return Type**: Vector3
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### GET_NEAREST_PLAYER_TO_ENTITY
- **Return Type**: Player
- **Parameters**: Entity entity, Ped playerPedToIgnore, int flags

### GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM
- **Return Type**: Player
- **Parameters**: Entity entity, int team, Ped playerPedToIgnore, int flags

### GET_NEAREST_PARTICIPANT_TO_ENTITY
- **Return Type**: Player
- **Parameters**: Entity entity

### PLACE_ENTITY_ON_GROUND_PROPERLY
- **Return Type**: BOOL
- **Parameters**: Entity entity, BOOL p1

### GET_ENTITY_TYPE
- **Return Type**: int
- **Parameters**: Entity entity
- **Description**: Returns entityType: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/eEntityType

### GET_ENTITY_POPULATION_TYPE
- **Return Type**: int
- **Parameters**: Entity entity

### IS_AN_ENTITY
- **Return Type**: BOOL
- **Parameters**: ScrHandle handle

### IS_ENTITY_A_PED
- **Return Type**: BOOL
- **Parameters**: Entity entity

### IS_ENTITY_A_MISSION_ENTITY
- **Return Type**: BOOL
- **Parameters**: Entity entity

### IS_ENTITY_A_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Entity entity

### IS_ENTITY_AN_OBJECT
- **Return Type**: BOOL
- **Parameters**: Entity entity

### IS_ENTITY_AT_COORD
- **Return Type**: BOOL
- **Parameters**: Entity entity, float xPos, float yPos, float zPos, float xSize, float ySize, float zSize, BOOL p7, BOOL p8, int p9
- **Description**: Checks if entity is within x/y/zSize distance of x/y/z.  Last three are unknown ints, almost always p7 = 0, p8 = 1, p9 = 0

### IS_ENTITY_AT_COORD
- **Return Type**: BOOL
- **Parameters**: Entity entity, Vector3 pos, Vector3 size, BOOL p7, BOOL p8, int p9

### IS_ENTITY_AT_ENTITY
- **Return Type**: BOOL
- **Parameters**: Entity entity1, Entity entity2, float xSize, float ySize, float zSize, BOOL p5, BOOL p6, int p7
- **Description**: Checks if entity1 is within the box defined by x/y/zSize of entity2.  Last three parameters are almost always p5 = 0, p6 = 1, p7 = 0

### IS_ENTITY_AT_ENTITY
- **Return Type**: BOOL
- **Parameters**: Entity entity1, Entity entity2, Vector3 size, BOOL p5, BOOL p6, int p7

### IS_ENTITY_ATTACHED
- **Return Type**: BOOL
- **Parameters**: Entity entity

### IS_ENTITY_ATTACHED_TO_ANY_OBJECT
- **Return Type**: BOOL
- **Parameters**: Entity entity

### IS_ENTITY_ATTACHED_TO_ANY_PED
- **Return Type**: BOOL
- **Parameters**: Entity entity

### IS_ENTITY_ATTACHED_TO_ANY_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Entity entity

### IS_ENTITY_ATTACHED_TO_ENTITY
- **Return Type**: BOOL
- **Parameters**: Entity from, Entity to

### _IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM
- **Return Type**: BOOL
- **Parameters**: Entity entity

### IS_ENTITY_DEAD
- **Return Type**: BOOL
- **Parameters**: Entity entity

### IS_ENTITY_IN_AIR
- **Return Type**: BOOL
- **Parameters**: Entity entity, Any p1

### IS_ENTITY_IN_ANGLED_AREA
- **Return Type**: BOOL
- **Parameters**: Entity entity, float originX, float originY, float originZ, float edgeX, float edgeY, float edgeZ, float angle, BOOL p8, BOOL p9, Any p10
- **Description**: Creates a spherical cone at origin that extends to surface with the angle specified. Then returns true if the entity is inside the spherical cone  Angle is measured in degrees.

### IS_ENTITY_IN_ANGLED_AREA
- **Return Type**: BOOL
- **Parameters**: Entity entity, Vector3 origin, Vector3 edge, float angle, BOOL p8, BOOL p9, Any p10

### IS_ENTITY_IN_AREA
- **Return Type**: BOOL
- **Parameters**: Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8, Any p9

### IS_ENTITY_IN_AREA
- **Return Type**: BOOL
- **Parameters**: Entity entity, Vector3 vec1, Vector3 vec2, BOOL p7, BOOL p8, Any p9

### IS_ENTITY_IN_VOLUME
- **Return Type**: BOOL
- **Parameters**: Entity entity, ScrHandle volume, BOOL p2, int p3

### IS_ENTITY_IN_WATER
- **Return Type**: BOOL
- **Parameters**: Entity entity

### _IS_ENTITY_UNDERWATER
- **Return Type**: BOOL
- **Parameters**: Entity entity, BOOL p1

### GET_ENTITY_SUBMERGED_LEVEL
- **Return Type**: float
- **Parameters**: Entity entity
- **Description**: Get how much of the entity is submerged.  1.0f is whole entity.

### SET_ENTITY_REQUIRES_MORE_EXPENSIVE_RIVER_CHECK
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle

### _0x7A49D40DE437BC8D
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x978AA2323ED32209
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x002AAC783ED323ED
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x007AAC783ED323ED
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### IS_ENTITY_ON_SCREEN
- **Return Type**: BOOL
- **Parameters**: Entity entity

### IS_ENTITY_PLAYING_ANIM
- **Return Type**: BOOL
- **Parameters**: Entity entity, const char* animDict, const char* animName, int animType

### _IS_ENTITY_PLAYING_ANY_ANIM
- **Return Type**: BOOL
- **Parameters**: Entity entity, int p1
- **Description**: Params: p1 (probably animType) = 1, 0

### IS_ENTITY_STATIC
- **Return Type**: BOOL
- **Parameters**: Entity entity

### IS_ENTITY_TOUCHING_ENTITY
- **Return Type**: BOOL
- **Parameters**: Entity entity, Entity targetEntity

### IS_ENTITY_TOUCHING_MODEL
- **Return Type**: BOOL
- **Parameters**: Entity entity, Hash modelHash

### IS_ENTITY_UPRIGHT
- **Return Type**: BOOL
- **Parameters**: Entity entity, float angle

### IS_ENTITY_UPSIDEDOWN
- **Return Type**: BOOL
- **Parameters**: Entity entity

### IS_ENTITY_VISIBLE
- **Return Type**: BOOL
- **Parameters**: Entity entity

### _0xFF9965C47FA404DA
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle
- **Description**: SET_ENTITY_LO*

### IS_ENTITY_VISIBLE_TO_SCRIPT
- **Return Type**: BOOL
- **Parameters**: Entity entity

### _0x3F08C6163A4AB1D6
- **Return Type**: void
- **Parameters**: Any p0

### _0x0DB41D59E0F1502B
- **Return Type**: void
- **Parameters**: Any p0

### _IS_TRACKED_ENTITY_VISIBLE
- **Return Type**: BOOL
- **Parameters**: Entity entity

### IS_ENTITY_OCCLUDED
- **Return Type**: BOOL
- **Parameters**: Entity entity

### WOULD_ENTITY_BE_OCCLUDED
- **Return Type**: BOOL
- **Parameters**: Hash entityModelHash, float x, float y, float z, BOOL p4

### WOULD_ENTITY_BE_OCCLUDED
- **Return Type**: BOOL
- **Parameters**: Hash entityModelHash, Vector3 vec, BOOL p4

### IS_ENTITY_WAITING_FOR_WORLD_COLLISION
- **Return Type**: BOOL
- **Parameters**: Entity entity

### _IS_ENTITY_ON_TRAIN_TRACK
- **Return Type**: BOOL
- **Parameters**: Entity entity

### _0xCDB682BB47C02F0A
- **Return Type**: void
- **Parameters**: Entity entity, Hash p1

### _0xE19035EB65AB2932
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT
- **Return Type**: BOOL
- **Parameters**: Entity entity, Hash lootTable
- **Description**: Sets the loot table an entity will carry. Returns true if loot table has been successfully set. Returns false if entity is not a ped or object. https://github.com/femga/rdr3_discoveries/blob/master/AI/EVENTS/loot_rewards.lua

### _GET_SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT
- **Return Type**: BOOL
- **Parameters**: Entity entity, Hash* lootTable
- **Description**: Returns false if entity is not a ped or object.

### _REQUEST_ENTITY_LOOT_LIST
- **Return Type**: BOOL
- **Parameters**: Ped mount, Any* argStruct, Hash visiblelootslotrequestType, int flag, int p4, BOOL p5

### _0xE31FC20319874CB3
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0x582F73ACFE969571
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0xBA2A089E60ED1163
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### GET_CARRIABLE_ENTITY_STATE
- **Return Type**: int
- **Parameters**: Entity entity
- **Description**: enum eCarriableState { CARRIABLE_STATE_NONE, CARRIABLE_STATE_TRANSITIONING_TO_HOGTIED, CARRIABLE_STATE_CARRIABLE_INTRO, CARRIABLE_STATE_CARRIABLE, CARRIABLE_STATE_BEING_PICKED_UP_FROM_GROUND, CARRIABLE_STATE_CARRIED_BY_HUMAN, CARRIABLE_STATE_BEING_PLACED_ON_GROUND, CARRIABLE_STATE_CARRIED_BY_MOUNT, CARRIABLE_STATE_BEING_PLACED_ON_MOUNT, CARRIABLE_STATE_BEING_PICKED_UP_FROM_MOUNT, CARRIABLE_STATE_BEING_CUT_FREE, CARRIABLE_STATE_BEING_PLACED_ON_GROUND_ESCAPE, CARRIABLE_STATE_BEING_PLACED_IN_VEHICLE };

### _0xD46BF94C4C66FAB0
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _GET_OPTIMAL_CARRY_CONFIG
- **Return Type**: Hash
- **Parameters**: Entity entity, int index
- **Description**: Valid indices: 0 - 3 Index 1 always returns a `hogtied` config, doesn't matter the entity. It's for humans only and the ped must be resurrected first if it's dead.

### _0xD21C7418C590BB40
- **Return Type**: Any
- **Parameters**: Any p0

### _GET_ENTITY_CARRY_CONFIG
- **Return Type**: Hash
- **Parameters**: Entity entity
- **Description**: Returns zero if the entity is not a carriable

### _IS_CARRIABLE_MODEL
- **Return Type**: BOOL
- **Parameters**: Hash model

### _GET_CARRIABLE_FROM_ENTITY
- **Return Type**: Hash
- **Parameters**: Entity entity
- **Description**: Returns a hash of an entity's name. (Alternative Name: _GET_ENTITY_PROMPT_NAME_HASH)

### _SET_ENTITY_CARCASS_TYPE
- **Return Type**: void
- **Parameters**: Entity entity, Hash type
- **Description**: Changes type and quality of skins type hashes: https://pastebin.com/C1WvQjCy

### _0x2A77EF9BEC8518F4
- **Return Type**: Any
- **Parameters**: Any p0

### _DELETE_CARRIABLE
- **Return Type**: void
- **Parameters**: Entity* entity

### _IS_ENTITY_FULLY_LOOTED
- **Return Type**: BOOL
- **Parameters**: Entity entity

### _SET_ENTITY_FULLY_LOOTED
- **Return Type**: void
- **Parameters**: Entity entity, BOOL looted

### _0xEF2D9ED7CE684F08
- **Return Type**: Ped
- **Parameters**: Ped ped

### _0x0CCEFC6C2C95DA2A
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x383F64263F946E45
- **Return Type**: BOOL
- **Parameters**: int* p0, Entity entity, int p2, Ped ped, Any p4, int p5
- **Description**: Used when checking if ped is in water

### _0x8E10DF0FFA63FB65
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _GET_ENTITY_CARRYING_FLAG
- **Return Type**: BOOL
- **Parameters**: Entity entity, int flagId
- **Description**: flagId: see _SET_ENTITY_CARRYING_FLAG

### _SET_ENTITY_CARRYING_FLAG
- **Return Type**: void
- **Parameters**: Entity entity, int flagId, BOOL value
- **Description**: flagId: https://github.com/femga/rdr3_discoveries/tree/master/AI/CARRYING_FLAGS https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/CCarryingFlags__Flags  enum eCarryingFlag { CARRYING_FLAG_CAN_BE_CUT_FREE = 1, CARRYING_FLAG_CAN_BE_CARRIED_ON_FOOT = 2, CARRYING_FLAG_CAN_BE_DROPPED = 4, CARRYING_FLAG_CAN_BE_CARRIED_WHEN_DEAD = 7, CARRYING_FLAG_CAN_CARRY_ANYTHING = 9, CARRYING_FLAG_DISABLE_PROMPT_LOS_CHECKS = 19, CARRYING_FLAG_FORCE_ALLOW_WARP_TO_SAFE_GROUND_LOCATION = 23, CARRYING_FLAG_PICKUPS_IGNORE_HEIGHT_RESTRICTIONS = 26, CARRYING_FLAG_CLEAN_UP_WHEN_NOT_CARRIED = 27, CARRYING_FLAG_BLOCK_KNOCK_OFF_PED_VARIATIONS_FROM_CARRIABLE_INTERACTIONS = 29, CARRYING_FLAG_HIT_WHEN_CARRIABLE = 31, CARRYING_FLAG_DISABLE_CARRIABLE_INTERACTIONS_ON_THIS_MOUNT = 34, CARRYING_FLAG_FORCE_HIDE_PROMPT_GROUP = 37, };

### _0xC3ABCFBC7D74AFA5
- **Return Type**: void
- **Parameters**: Ped ped, int p1, BOOL p2
- **Description**: Returns BOOL in ida

### _0x371D179701D9C082
- **Return Type**: void
- **Parameters**: Entity entity
- **Description**: Called if entity is in water and submerged level is larger than 1f. If CARRYING_FLAG_FORCE_ALLOW_WARP_TO_SAFE_GROUND_LOCATION is true, it gets disabled as well.

### _0xA48E4801DEBDF7E4
- **Return Type**: void
- **Parameters**: Entity entity, BOOL p1

### _GET_IS_CARRIABLE_PELT
- **Return Type**: BOOL
- **Parameters**: Entity entity

### _0xF59FDE7B4D31A630
- **Return Type**: Any
- **Parameters**: Any p0

### _0x120376C23F019C6C
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x5744562E973E33CD
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0xDD03FC2089AD093C
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0xB16C780C51E51E2B
- **Return Type**: Any
- **Parameters**: Any p0

### _0xEF259AA1E097E0AD
- **Return Type**: void
- **Parameters**: Entity entity, Any p1

### _0xBD94CECFB2D65119
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### _SET_ENTITY_CUSTOM_PICKUP_RADIUS
- **Return Type**: void
- **Parameters**: Entity entity, float radius

### _0xE75EEA8DB59A9F39
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### _0x188736456D1DEDE6
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xC6A1A3D63F122DE7
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS
- **Return Type**: void
- **Parameters**: Entity entity, int forceType, float x, float y, float z, int component, BOOL isDirectionRel, BOOL isForceRel, BOOL p8
- **Description**: p6/relative - makes the xyz force not relative to world coords, but to something else p7/highForce - setting false will make the force really low

### APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS
- **Return Type**: void
- **Parameters**: Entity entity, int forceType, Vector3 vec, int component, BOOL isDirectionRel, BOOL isForceRel, BOOL p8

### APPLY_FORCE_TO_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity, int forceFlags, float x, float y, float z, float offX, float offY, float offZ, int boneIndex, BOOL isDirectionRel, BOOL ignoreUpVec, BOOL isForceRel, BOOL p12, BOOL p13

### APPLY_FORCE_TO_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity, int forceFlags, Vector3 vec, Vector3 off, int boneIndex, BOOL isDirectionRel, BOOL ignoreUpVec, BOOL isForceRel, BOOL p12, BOOL p13

### ATTACH_ENTITY_TO_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity1, Entity entity2, int boneIndex, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, BOOL p9, BOOL useSoftPinning, BOOL collision, BOOL isPed, int vertexIndex, BOOL fixedRot, BOOL p15, BOOL p16
- **Description**: Attaches entity1 to bone (boneIndex) of entity2.  boneIndex - this is different to boneID, use GET_PED_BONE_INDEX to get the index from the ID. use the index for attaching to specific bones. entity1 will be attached to entity2's centre if bone index given doesn't correspond to bone indexes for that entity type. https://github.com/femga/rdr3_discoveries/tree/master/boneNames  useSoftPinning - if set to false attached entity will not detach when fixed collision - controls collision between the two entities (FALSE disables collision). isPed - pitch doesn't work when false and roll will only work on negative numbers (only peds) vertexIndex - position of vertex fixedRot - if false it ignores entity vector

### ATTACH_ENTITY_TO_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity1, Entity entity2, int boneIndex, Vector3 pos, Vector3 rot, BOOL p9, BOOL useSoftPinning, BOOL collision, BOOL isPed, int vertexIndex, BOOL fixedRot, BOOL p15, BOOL p16

### ATTACH_ENTITY_TO_ENTITY_PHYSICALLY
- **Return Type**: void
- **Parameters**: Entity entity1, Entity entity2, int p2, int boneIndex, float offsetX, float offsetY, float offsetZ, float p7, float p8, float p9, float p10, float p11, float p12, float p13, BOOL p14, BOOL p15, BOOL p16, BOOL p17, int p18, BOOL p19, float p20, float p21

### ATTACH_ENTITY_TO_ENTITY_PHYSICALLY
- **Return Type**: void
- **Parameters**: Entity entity1, Entity entity2, int p2, int boneIndex, Vector3 offset, float p7, float p8, float p9, float p10, float p11, float p12, float p13, BOOL p14, BOOL p15, BOOL p16, BOOL p17, int p18, BOOL p19, float p20, float p21

### _0x445D7D8EA66E373E
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15

### _0x16908E859C3AB698
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### GET_ENTITY_BONE_INDEX_BY_NAME
- **Return Type**: int
- **Parameters**: Entity entity, const char* boneName

### CLEAR_ENTITY_LAST_DAMAGE_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity

### DELETE_ENTITY
- **Return Type**: void
- **Parameters**: Entity* entity
- **Description**: Deletes the specified entity, then sets the handle pointed to by the pointer to NULL.

### _DELETE_ENTITY_2
- **Return Type**: void
- **Parameters**: Entity* entity
- **Description**: Must be called from a background script, otherwise it will do nothing.

### DETACH_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity, BOOL p1, BOOL collision

### _IS_ENTITY_FROZEN
- **Return Type**: BOOL
- **Parameters**: Entity entity
- **Description**: Getter for FREEZE_ENTITY_POSITION

### FREEZE_ENTITY_POSITION
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle

### SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle
- **Description**: Old name: _SET_ENTITY_CLEANUP_BY_ENGINE

### SET_ENTITY_AS_MISSION_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity, BOOL p1, BOOL p2
- **Description**: Makes the specified entity (ped, vehicle or object) persistent. Persistent entities will not automatically be removed by the engine.

### SET_ENTITY_AS_NO_LONGER_NEEDED
- **Return Type**: void
- **Parameters**: Entity* entity
- **Description**: Marks the specified entity (ped, vehicle or object) as no longer needed. Entities marked as no longer needed, will be deleted as the engine sees fit.

### SET_PED_AS_NO_LONGER_NEEDED
- **Return Type**: void
- **Parameters**: Ped* ped
- **Description**: This is an alias of SET_ENTITY_AS_NO_LONGER_NEEDED.

### SET_VEHICLE_AS_NO_LONGER_NEEDED
- **Return Type**: void
- **Parameters**: Vehicle* vehicle
- **Description**: This is an alias of SET_ENTITY_AS_NO_LONGER_NEEDED.

### SET_OBJECT_AS_NO_LONGER_NEEDED
- **Return Type**: void
- **Parameters**: Object* object
- **Description**: This is an alias of SET_ENTITY_AS_NO_LONGER_NEEDED.

### _0x20FAEE47427A4497
- **Return Type**: void
- **Parameters**: 

### _DOES_THREAD_OWN_THIS_ENTITY
- **Return Type**: BOOL
- **Parameters**: Entity entity
- **Description**: Returns true if calling script owns specified entity

### _0x56E0735D6273B227
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xC0EDEF16D90661EE
- **Return Type**: void
- **Parameters**: Entity entity, float p1
- **Description**: SET_ENTITY_A*

### _0x0FD7D7C232876E72
- **Return Type**: void
- **Parameters**: Any p0

### _0x0939E773925C4719
- **Return Type**: void
- **Parameters**: 

### SET_ENTITY_CAN_BE_DAMAGED
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle

### _GET_ENTITY_CAN_BE_DAMAGED
- **Return Type**: BOOL
- **Parameters**: Entity entity

### SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP
- **Return Type**: void
- **Parameters**: Entity entity, BOOL bCanBeDamaged, Hash relGroup

### _0xFF83AF534156B399
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle
- **Description**: Sets whether the entity can be targeted without being in line-of-sight.

### GET_ENTITY_COLLISION_DISABLED
- **Return Type**: BOOL
- **Parameters**: Entity entity

### SET_ENTITY_COLLISION
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle, BOOL keepPhysics

### SET_ENTITY_COMPLETELY_DISABLE_COLLISION
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle, BOOL keepPhysics

### SET_ENTITY_COORDS
- **Return Type**: void
- **Parameters**: Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL clearArea

### SET_ENTITY_COORDS
- **Return Type**: void
- **Parameters**: Entity entity, Vector3 pos, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL clearArea

### SET_ENTITY_COORDS_NO_OFFSET
- **Return Type**: void
- **Parameters**: Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis
- **Description**: Axis - Invert Axis Flags

### SET_ENTITY_COORDS_NO_OFFSET
- **Return Type**: void
- **Parameters**: Entity entity, Vector3 pos, BOOL xAxis, BOOL yAxis, BOOL zAxis

### SET_ENTITY_DYNAMIC
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle

### SET_ENTITY_HEADING
- **Return Type**: void
- **Parameters**: Entity entity, float heading

### _SET_ENTITY_COORDS_AND_HEADING
- **Return Type**: void
- **Parameters**: Entity entity, float xPos, float yPos, float zPos, float heading, BOOL xAxis, BOOL yAxis, BOOL zAxis

### _SET_ENTITY_COORDS_AND_HEADING
- **Return Type**: void
- **Parameters**: Entity entity, Vector3 pos, float heading, BOOL xAxis, BOOL yAxis, BOOL zAxis

### _SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET
- **Return Type**: void
- **Parameters**: Entity entity, float xPos, float yPos, float zPos, float heading, BOOL p5, BOOL p6

### _SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET
- **Return Type**: void
- **Parameters**: Entity entity, Vector3 pos, float heading, BOOL p5, BOOL p6

### SET_ENTITY_HEALTH
- **Return Type**: void
- **Parameters**: Entity entity, int healthAmount, Entity entityKilledBy
- **Description**: Sets the entity's health. healthAmount sets the health value to that, and sets the maximum health core value. Setting healthAmount to 0 will kill the entity. entityKilledBy parameter can also be 0

### SET_ENTITY_INVINCIBLE
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle
- **Description**: Sets a ped or an object totally invincible. It doesn't take any kind of damage. Peds will not ragdoll on explosions.

### _0xAF7F3099B9FEB535
- **Return Type**: void
- **Parameters**: Entity entity, float p1, float p2, float p3
- **Description**: SET_ENTITY_LO*

### SET_ENTITY_IS_TARGET_PRIORITY
- **Return Type**: void
- **Parameters**: Entity entity, BOOL p1, float p2

### _0xB38A29CCD5447783
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _SET_ENTITY_THREAT_TIER
- **Return Type**: void
- **Parameters**: Entity entity, int tier, BOOL p2
- **Description**: tier: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/eEntityThreatTier

### _GET_ENTITY_THREAT_TIER
- **Return Type**: int
- **Parameters**: Entity entity

### _0x2D40BCBFE9305DEA
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_ENTITY_LIGHTS_ENABLED
- **Return Type**: void
- **Parameters**: Entity entity, BOOL enabled

### SET_ENTITY_LOAD_COLLISION_FLAG
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle

### HAS_COLLISION_LOADED_AROUND_ENTITY
- **Return Type**: BOOL
- **Parameters**: Entity entity

### HAS_COLLISION_LOADED_AROUND_POSITION
- **Return Type**: BOOL
- **Parameters**: float xPos, float yPos, float zPos
- **Description**: Old name: _HAS_COLLISION_LOADED_AT_COORDS

### HAS_COLLISION_LOADED_AROUND_POSITION
- **Return Type**: BOOL
- **Parameters**: Vector3 pos

### SET_ENTITY_ONLY_DAMAGED_BY_PLAYER
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle

### SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP
- **Return Type**: void
- **Parameters**: Entity entity, BOOL p1, Hash relationshipGroup

### SET_ENTITY_PROOFS
- **Return Type**: void
- **Parameters**: Entity entity, int proofsBitset, BOOL specialFlag
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/AI/ENTITY_PROOFS BOOL p2: handles an additional special proofs flag, so it simply indicates whether it should be enabled or disabled, not sure what exactly it proofs the entity from though

### _GET_ENTITY_PROOFS
- **Return Type**: int
- **Parameters**: Entity entity
- **Description**: Note: this native was removed in 1232 but added back in 1311

### SET_ENTITY_QUATERNION
- **Return Type**: void
- **Parameters**: Entity entity, float x, float y, float z, float w

### SET_ENTITY_ROTATION
- **Return Type**: void
- **Parameters**: Entity entity, float pitch, float roll, float yaw, int rotationOrder, BOOL p5

### _0xD45BB89B53FC0CFD
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7

### SET_ENTITY_VISIBLE
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle

### _0x80FDEB3A9E9AA578
- **Return Type**: void
- **Parameters**: Entity entity, BOOL p1

### _0x9C6906EF8CB20C5F
- **Return Type**: void
- **Parameters**: Entity entity

### SET_ENTITY_VELOCITY
- **Return Type**: void
- **Parameters**: Entity entity, float x, float y, float z
- **Description**: Note that the third parameter(denoted as z) is "up and down" with positive numbers encouraging upwards movement.

### SET_ENTITY_VELOCITY
- **Return Type**: void
- **Parameters**: Entity entity, Vector3 vec

### SET_ENTITY_HAS_GRAVITY
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle

### SET_ENTITY_LOD_DIST
- **Return Type**: void
- **Parameters**: Entity entity, int value
- **Description**: LOD distance can be 0 to 0xFFFF (higher values will result in 0xFFFF) as it is actually stored as a 16-bit value (aka uint16_t).

### GET_ENTITY_LOD_DIST
- **Return Type**: int
- **Parameters**: Entity entity
- **Description**: Returns the LOD distance of an entity.

### SET_ENTITY_ALPHA
- **Return Type**: void
- **Parameters**: Entity entity, int alphaLevel, BOOL skin
- **Description**: skin - everything alpha except skin Set entity alpha level. Ranging from 0 to 255 but changes occur after every 20 percent (after every 51).

### GET_ENTITY_ALPHA
- **Return Type**: int
- **Parameters**: Entity entity

### RESET_ENTITY_ALPHA
- **Return Type**: void
- **Parameters**: Entity entity

### _SET_ENTITY_FADE_IN
- **Return Type**: void
- **Parameters**: Entity entity

### SET_ENTITY_ALWAYS_PRERENDER
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle

### SET_ENTITY_RENDER_SCORCHED
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle

### _0x37B01666BAE8F7EF
- **Return Type**: Any
- **Parameters**: Entity entity
- **Description**: Seems to return true if entity is burned / scorched _GET_ENTITY_*

### _0xA9E6D8F2DDFC4DB9
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### CREATE_MODEL_SWAP
- **Return Type**: void
- **Parameters**: float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6
- **Description**: Only works with objects!

### CREATE_MODEL_SWAP
- **Return Type**: void
- **Parameters**: Vector3 vec, float radius, Hash originalModel, Hash newModel, BOOL p6

### REMOVE_MODEL_SWAP
- **Return Type**: void
- **Parameters**: float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6

### REMOVE_MODEL_SWAP
- **Return Type**: void
- **Parameters**: Vector3 vec, float radius, Hash originalModel, Hash newModel, BOOL p6

### CREATE_MODEL_HIDE
- **Return Type**: void
- **Parameters**: float x, float y, float z, float radius, Hash model, BOOL p5

### CREATE_MODEL_HIDE
- **Return Type**: void
- **Parameters**: Vector3 vec, float radius, Hash model, BOOL p5

### CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS
- **Return Type**: void
- **Parameters**: float x, float y, float z, float radius, Hash model, BOOL p5

### CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS
- **Return Type**: void
- **Parameters**: Vector3 vec, float radius, Hash model, BOOL p5

### REMOVE_MODEL_HIDE
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### _0xD4636C2EDB0DEA8A
- **Return Type**: Any
- **Parameters**: Any p0

### CREATE_FORCED_OBJECT
- **Return Type**: void
- **Parameters**: float x, float y, float z, Any p3, Hash modelHash, BOOL p5

### CREATE_FORCED_OBJECT
- **Return Type**: void
- **Parameters**: Vector3 vec, Any p3, Hash modelHash, BOOL p5

### REMOVE_FORCED_OBJECT
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### SET_ENTITY_NO_COLLISION_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity1, Entity entity2, BOOL thisFrameOnly

### SET_ENTITY_MOTION_BLUR
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle

### SET_CAN_AUTO_VAULT_ON_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle

### SET_CAN_CLIMB_ON_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle

### SET_ENTITY_NOWEAPONDECALS
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle
- **Description**: Old name: _SET_ENTITY_DECALS_DISABLED

### _GET_ENTITIES_NEAR_POINT
- **Return Type**: int
- **Parameters**: float x, float y, float z, float radius, ItemSet itemSet, int p5

### _GET_ENTITIES_NEAR_POINT
- **Return Type**: int
- **Parameters**: Vector3 vec, float radius, ItemSet itemSet, int p5

### GET_MATCHING_ENTITIES
- **Return Type**: int
- **Parameters**: Volume volume, ItemSet itemSet, int entityType, Any p3, Hash p4, const char* p5

### _GET_ENTITIES_IN_VOLUME
- **Return Type**: int
- **Parameters**: Volume volume, ItemSet itemSet, int entityType

### _SEARCH_BUILDING_POOL_FOR_ENTITY_WITH_THIS_MODEL
- **Return Type**: Entity
- **Parameters**: Hash modelHash
- **Description**: Alternative Name: _GET_ENTITY_FROM_MAP_OBJECT; You can get existing objects and manipulate them using this native.

### _0xC2E71D7E0A7B4C89
- **Return Type**: Any
- **Parameters**: Any p0

### _0x6C31B06E91518269
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x119A5714578F4E05
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _GET_ENTITY_BY_DOORHASH
- **Return Type**: Entity
- **Parameters**: Hash doorHash, int p1
- **Description**: Params: p1 = 0 in R* Scripts (GET_DOOR_ENTITY_FROM_ID) https://github.com/femga/rdr3_discoveries/blob/master/doorHashes/doorhashes.lua

### FIND_ANIM_EVENT_PHASE
- **Return Type**: BOOL
- **Parameters**: const char* animDictionary, const char* animName, const char* p2, Any* p3, Any* p4

### FORCE_ENTITY_AI_AND_ANIMATION_UPDATE
- **Return Type**: void
- **Parameters**: Entity entity, BOOL p1

### _GET_ENTITY_ANIM_CURRENT_TIME
- **Return Type**: float
- **Parameters**: Entity entity, const char* animDict, const char* animName

### _0x8E46E18AA828334F
- **Return Type**: float
- **Parameters**: Entity entity, const char* animDict, const char* animClip
- **Description**: Used in Script Function GENERIC_ITEM_HAS_ANIM_COMPLETED _GET_ENTITY_*

### _0xDF8E49EA89A01DB1
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2
- **Description**: Hardcoded to return zero/false.

### HAS_ANIM_EVENT_FIRED
- **Return Type**: BOOL
- **Parameters**: Entity entity, Hash actionHash

### HAS_ENTITY_ANIM_FINISHED
- **Return Type**: BOOL
- **Parameters**: Entity entity, const char* animDict, const char* animName, int p3

### PLAY_ENTITY_ANIM
- **Return Type**: BOOL
- **Parameters**: Entity entity, const char* animName, const char* animDict, float p3, BOOL loop, BOOL stayInAnim, BOOL p6, float delta, Any bitset
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/animations

### _SET_ENTITY_ANIM_CURRENT_TIME
- **Return Type**: void
- **Parameters**: Entity entity, const char* animDict, const char* animName, float time
- **Description**: https://gfycat.com/amazingmiserlyamericanquarterhorse

### _SET_ENTITY_ANIM_SPEED
- **Return Type**: void
- **Parameters**: Entity entity, const char* animDict, const char* animName, float speedMultiplier

### STOP_ENTITY_ANIM
- **Return Type**: Any
- **Parameters**: Entity entity, const char* animation, const char* animGroup, float p3

### _0x669655FFB29EF1A9
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _ADD_ENTITY_TRACKING_TRAILS
- **Return Type**: void
- **Parameters**: Entity entity

### _0x5826EFD6D73C4DE5
- **Return Type**: void
- **Parameters**: Entity entity
- **Description**: _REMOVE_DECALS_* - _REMOVE_FORCED*

### _PAUSE_ENTITY_TRACKING
- **Return Type**: void
- **Parameters**: Entity entity, BOOL pause

### _CREATE_FOOTPATH_TRAIL
- **Return Type**: Any
- **Parameters**: Any p0, const char* waypointRecord, BOOL bUseSnowOffset, float p3, float p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, BOOL bInit

### _0xC76E94A78127412B
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x7F20092547B4DDEA
- **Return Type**: void
- **Parameters**: Any p0

### _0xF41E2979D5BC5370
- **Return Type**: void
- **Parameters**: Any p0

### _0xAAACB74442C1BED3
- **Return Type**: Any
- **Parameters**: Any p0

### PIN_CLOSEST_MAP_ENTITY
- **Return Type**: Any
- **Parameters**: Hash modelHash, float x, float y, float z, int flags

### PIN_CLOSEST_MAP_ENTITY
- **Return Type**: Any
- **Parameters**: Hash modelHash, Vector3 vec, int flags

### _UNPIN_MAP_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity

### IS_MAP_ENTITY_PINNED
- **Return Type**: BOOL
- **Parameters**: Any p0

### _GET_PINNED_MAP_ENTITY
- **Return Type**: Entity
- **Parameters**: Any p0

### _0xEAB3D91D30A344F1
- **Return Type**: void
- **Parameters**: Any p0

### _0x37CEB637BA3B1A47
- **Return Type**: void
- **Parameters**: Any p0

### _0x350E9211074955AF
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x898586729DB5221D
- **Return Type**: void
- **Parameters**: Ped ped

### _0xE9E7A0BAC7F57746
- **Return Type**: void
- **Parameters**: Any p0, Any p1


## EVENT
### SET_DECISION_MAKER
- **Return Type**: void
- **Parameters**: Ped ped, Hash name

### SET_DECISION_MAKER_TO_DEFAULT
- **Return Type**: void
- **Parameters**: Ped ped

### _CREATE_SHOCKING_EVENT
- **Return Type**: ScrHandle
- **Parameters**: Any* args

### ADD_SHOCKING_EVENT_AT_POSITION
- **Return Type**: ScrHandle
- **Parameters**: Hash eventType, float x, float y, float z, float p4, float p5, float p6, float p7, float p8, int p9, int p10
- **Description**: eventType: https://alloc8or.re/rdr3/doc/enums/eEventType.txt https://github.com/femga/rdr3_discoveries/blob/master/AI/EVENTS

### ADD_SHOCKING_EVENT_AT_POSITION
- **Return Type**: ScrHandle
- **Parameters**: Hash eventType, Vector3 vec, float p4, float p5, float p6, float p7, float p8, int p9, int p10

### ADD_SHOCKING_EVENT_FOR_ENTITY
- **Return Type**: ScrHandle
- **Parameters**: Hash eventType, Entity entity, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, BOOL p9, int p10, int p11
- **Description**: eventType: https://alloc8or.re/rdr3/doc/enums/eEventType.txt

### IS_SHOCKING_EVENT_IN_SPHERE
- **Return Type**: BOOL
- **Parameters**: Hash eventType, float x, float y, float z, float radius
- **Description**: eventType: https://alloc8or.re/rdr3/doc/enums/eEventType.txt

### IS_SHOCKING_EVENT_IN_SPHERE
- **Return Type**: BOOL
- **Parameters**: Hash eventType, Vector3 vec, float radius

### REMOVE_SHOCKING_EVENT
- **Return Type**: BOOL
- **Parameters**: ScrHandle event

### REMOVE_ALL_SHOCKING_EVENTS
- **Return Type**: void
- **Parameters**: BOOL p0

### _REMOVE_ALL_SHOCKING_EVENTS_IN_AREA
- **Return Type**: void
- **Parameters**: float x, float y, float z, float radius, BOOL p4

### _REMOVE_ALL_SHOCKING_EVENTS_IN_AREA
- **Return Type**: void
- **Parameters**: Vector3 vec, float radius, BOOL p4

### _REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE_IN_AREA
- **Return Type**: void
- **Parameters**: Hash eventType, float x, float y, float z, float radius, BOOL p5
- **Description**: eventType: https://alloc8or.re/rdr3/doc/enums/eEventType.txt

### _REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE_IN_AREA
- **Return Type**: void
- **Parameters**: Hash eventType, Vector3 vec, float radius, BOOL p5

### REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE
- **Return Type**: void
- **Parameters**: Hash eventType, BOOL p1
- **Description**: eventType: https://alloc8or.re/rdr3/doc/enums/eEventType.txt

### REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS
- **Return Type**: void
- **Parameters**: 

### _0x36D0F2BA2C0D9BDE
- **Return Type**: Any
- **Parameters**: Entity entity, int p1
- **Description**: _ADD* (_ADD_SHOCKING_EVENT_* ?)

### _0x7C511E91738A0828
- **Return Type**: void
- **Parameters**: Ped ped1, Ped ped2, int p2, Hash p3
- **Description**: Only used in R* SP Scripts Hash only used in R* Script mob3.ysc: ROBBERY _ADD_PED*

### SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME
- **Return Type**: void
- **Parameters**: 

### _0xB6F4825153920582
- **Return Type**: void
- **Parameters**: 
- **Description**: _S* (_SUPPRESS_EVENTS_NEXT_FRAME?)

### _0x4B2B1A891D437CA7
- **Return Type**: void
- **Parameters**: float p0
- **Description**: Only used in R* SP Script coachrobberies _SET_S*

### _0x9520175B35E2268D
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: _SET_P*

### _0x18E93EBFC1FCFA48
- **Return Type**: Any
- **Parameters**: Volume volume, BOOL p1, BOOL p2
- **Description**: Only used in R* SP Script beat_rat_infestation and homeinvasion

### _0x56B3410626A473E7
- **Return Type**: void
- **Parameters**: Any p0
- **Description**: Only used in R* SP Script beat_rat_infestation Params: p0 = value returned by 0x18E93EBFC1FCFA48

### _ADD_MODEL_TO_EVENT_MONITOR
- **Return Type**: void
- **Parameters**: Hash model, BOOL p1, BOOL p2
- **Description**: Models used in the scripts: P_REGISTER05X, P_REGISTER06X, P_REGISTER03X, PLAYER_ZERO, PLAYER_THREE, A_C_HORSE_MORGAN_FLAXENCHESTNUT

### _0x4465C3D1475BD3FD
- **Return Type**: void
- **Parameters**: Hash model

### _0x2DD42FAD06E6F19E
- **Return Type**: Any
- **Parameters**: Object object, BOOL p1, BOOL p2

### _0xA86B0EE9B39D15D6
- **Return Type**: void
- **Parameters**: Object object

### _0x26054EB81AC0893B
- **Return Type**: BOOL
- **Parameters**: Object object

### _SET_EVENT_TRACKER_FOR_PED
- **Return Type**: void
- **Parameters**: Ped ped, const char* eventName, int p2

### _0xAD17A18215DD23D6
- **Return Type**: int
- **Parameters**: Entity entity, int p1, int p2
- **Description**: Might return time since some (?) event.

### _EVENT_GET_TIME_SINCE_EVENT
- **Return Type**: int
- **Parameters**: Entity entity, Hash eventType, int p2, int p3

### _EVENT_GET_RECENT_EVENT
- **Return Type**: Hash
- **Parameters**: Entity entity, int p1, int p2
- **Description**: Returns eventType

### _IS_EVENT_TRACKER_ACTIVE
- **Return Type**: BOOL
- **Parameters**: const char* eventName, Hash shockingEvent

### _EVENT_GET_SOURCE_ENTITY_FROM_EVENT
- **Return Type**: Entity
- **Parameters**: Entity entity, Hash eventType, int p2, int p3

### _EVENT_GET_TARGET_ENTITY_FROM_EVENT
- **Return Type**: Entity
- **Parameters**: Entity entity, Hash eventType, int p2, int p3

### _0x1D1B448D719415AB
- **Return Type**: Any
- **Parameters**: Ped ped
- **Description**: _GET*

### _0x83D43F0FD5276E4D
- **Return Type**: Any
- **Parameters**: Entity entity, int p1
- **Description**: _GET*

### _0xE28D7FC9FD32ABEB
- **Return Type**: void
- **Parameters**: Entity entity, Hash eventType, int p2
- **Description**: HAS_ACTOR_RECEIVED_TRACKED_EVENT_THAT_SHOULD_ALERT - iTimeSinceEvent >= iTimeLimitMS

### _0x1A5C5D350068A673
- **Return Type**: void
- **Parameters**: Ped ped, int p1
- **Description**: AGGRO_CHECK_PROPERTY_DAMAGE: Property damage found with event

### _EVENT_FLUSH_ALL_EVENT_TRACKERS
- **Return Type**: void
- **Parameters**: Ped ped

### _0xE2C2FBB7825FFC66
- **Return Type**: void
- **Parameters**: 


## FIRE
### START_SCRIPT_FIRE
- **Return Type**: FireId
- **Parameters**: float x, float y, float z, int p3, float p4, BOOL p5, const char* soundsetName, float p7, int p8
- **Description**: Starts a fire:  xyz: Location of fire maxChildren: The max amount of times a fire can spread to other objects. Must be 25 or less, or the function will do nothing. isGasFire: Whether or not the fire is powered by gasoline.

### START_SCRIPT_FIRE
- **Return Type**: FireId
- **Parameters**: Vector3 vec, int p3, float p4, BOOL p5, const char* soundsetName, float p7, int p8

### REMOVE_SCRIPT_FIRE
- **Return Type**: void
- **Parameters**: FireId fireHandle

### START_ENTITY_FIRE
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### STOP_ENTITY_FIRE
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### IS_ENTITY_ON_FIRE
- **Return Type**: BOOL
- **Parameters**: Entity entity

### _0x754937C28271BC65
- **Return Type**: void
- **Parameters**: Any p0

### GET_NUMBER_OF_FIRES_IN_RANGE
- **Return Type**: int
- **Parameters**: float x, float y, float z, float radius

### GET_NUMBER_OF_FIRES_IN_RANGE
- **Return Type**: int
- **Parameters**: Vector3 vec, float radius

### STOP_FIRE_IN_RANGE
- **Return Type**: void
- **Parameters**: float x, float y, float z, float radius

### STOP_FIRE_IN_RANGE
- **Return Type**: void
- **Parameters**: Vector3 vec, float radius

### _STOP_FIRE_IN_BOX
- **Return Type**: void
- **Parameters**: float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ

### _STOP_FIRE_IN_BOX
- **Return Type**: void
- **Parameters**: Vector3 pos, Vector3 rot, Vector3 scale

### GET_CLOSEST_FIRE_POS
- **Return Type**: BOOL
- **Parameters**: Vector3* outPosition, float x, float y, float z

### GET_CLOSEST_FIRE_POS
- **Return Type**: BOOL
- **Parameters**: Vector3* outPosition, Vector3 vec

### _0x559FC1D310813031
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9

### _0x41B87A6495EE13DD
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9

### _0xA4454592DCF7C992
- **Return Type**: Any
- **Parameters**: Any p0

### _IS_ENTITY_CONSUMED_BY_FIRE
- **Return Type**: BOOL
- **Parameters**: Entity entity

### ADD_EXPLOSION
- **Return Type**: void
- **Parameters**: float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/graphics/explosions  explosionType: enum eExplosionTag { EXP_TAG_DONTCARE = -1, EXP_TAG_GRENADE, EXP_TAG_STICKYBOMB, EXP_TAG_MOLOTOV, EXP_TAG_MOLOTOV_VOLATILE, EXP_TAG_HI_OCTANE, EXP_TAG_CAR, EXP_TAG_PLANE, EXP_TAG_PETROL_PUMP, EXP_TAG_DIR_STEAM, EXP_TAG_DIR_FLAME, EXP_TAG_DIR_WATER_HYDRANT, EXP_TAG_BOAT, EXP_TAG_BULLET, EXP_TAG_SMOKEGRENADE, EXP_TAG_BZGAS, EXP_TAG_GAS_CANISTER, EXP_TAG_EXTINGUISHER, EXP_TAG_TRAIN, EXP_TAG_DIR_FLAME_EXPLODE, EXP_TAG_VEHICLE_BULLET, EXP_TAG_BIRD_CRAP, EXP_TAG_FIREWORK, EXP_TAG_TORPEDO, EXP_TAG_TORPEDO_UNDERWATER, EXP_TAG_LANTERN, EXP_TAG_DYNAMITE, EXP_TAG_DYNAMITESTACK, EXP_TAG_DYNAMITE_VOLATILE, EXP_TAG_RIVER_BLAST, EXP_TAG_PLACED_DYNAMITE, EXP_TAG_FIRE_ARROW, EXP_TAG_DYNAMITE_ARROW, EXP_TAG_PHOSPHOROUS_BULLET, EXP_TAG_LIGHTNING_STRIKE, EXP_TAG_TRACKING_ARROW, EXP_TAG_POISON_BOTTLE };

### ADD_EXPLOSION
- **Return Type**: void
- **Parameters**: Vector3 vec, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake

### ADD_OWNED_EXPLOSION
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake
- **Description**: explosionType: see ADD_EXPLOSION

### ADD_OWNED_EXPLOSION
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake

### _0xB7DF150605EEDC9B
- **Return Type**: void
- **Parameters**: Entity entity, int p1, float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake
- **Description**: _ADD_EXPLOSION_*(ON ENTITY?)

### _0xB7DF150605EEDC9B
- **Return Type**: void
- **Parameters**: Entity entity, int p1, Vector3 vec, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake

### ADD_EXPLOSION_WITH_USER_VFX
- **Return Type**: void
- **Parameters**: float x, float y, float z, int explosionType, Hash explosionFx, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake
- **Description**: explosionType: see ADD_EXPLOSION Change explosionFx (Visual Effect) for specified explosionType

### ADD_EXPLOSION_WITH_USER_VFX
- **Return Type**: void
- **Parameters**: Vector3 vec, int explosionType, Hash explosionFx, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake

### _0x34AE85C7CA4857AA
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10

### IS_EXPLOSION_IN_AREA
- **Return Type**: BOOL
- **Parameters**: int explosionType, float x1, float y1, float z1, float x2, float y2, float z2
- **Description**: explosionType: see ADD_EXPLOSION

### IS_EXPLOSION_IN_AREA
- **Return Type**: BOOL
- **Parameters**: int explosionType, Vector3 vec1, Vector3 vec2

### IS_EXPLOSION_ACTIVE_IN_AREA
- **Return Type**: BOOL
- **Parameters**: int explosionType, float x1, float y1, float z1, float x2, float y2, float z2
- **Description**: explosionType: see ADD_EXPLOSION

### IS_EXPLOSION_ACTIVE_IN_AREA
- **Return Type**: BOOL
- **Parameters**: int explosionType, Vector3 vec1, Vector3 vec2

### IS_EXPLOSION_IN_SPHERE
- **Return Type**: BOOL
- **Parameters**: int explosionType, float x, float y, float z, float radius
- **Description**: explosionType: see ADD_EXPLOSION

### IS_EXPLOSION_IN_SPHERE
- **Return Type**: BOOL
- **Parameters**: int explosionType, Vector3 vec, float radius

### IS_EXPLOSION_IN_ANGLED_AREA
- **Return Type**: BOOL
- **Parameters**: int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float angle
- **Description**: explosionType: see ADD_EXPLOSION

### IS_EXPLOSION_IN_ANGLED_AREA
- **Return Type**: BOOL
- **Parameters**: int explosionType, Vector3 vec1, Vector3 vec2, float angle

### _IS_EXPLOSION_IN_VOLUME
- **Return Type**: BOOL
- **Parameters**: int explosionType, Volume volume
- **Description**: explosionType: see ADD_EXPLOSION

### GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA
- **Return Type**: Entity
- **Parameters**: int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float radius
- **Description**: explosionType: see ADD_EXPLOSION

### GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA
- **Return Type**: Entity
- **Parameters**: int explosionType, Vector3 vec1, Vector3 vec2, float radius

### _0x68F6A75FDF5A70D6
- **Return Type**: void
- **Parameters**: float x, float y, float z, float p3

### _0x68F6A75FDF5A70D6
- **Return Type**: void
- **Parameters**: Vector3 vec, float p3

### _0x24DB6B9F2B719043
- **Return Type**: void
- **Parameters**: float p0
- **Description**: Only used in R* SP Related Camp Scripts

### _IS_PED_SHOCKING_EVENT_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Ped ped, int p1
- **Description**: Tested with fire & dynamite. Only returns true using value p1 = 1 and when the ped is affected by fire.


## FLOCK
### GET_SPECIES_TUNING_FLOAT_PARAM
- **Return Type**: float
- **Parameters**: Hash p0, int p1, int p2

### SET_SPECIES_TUNING_FLOAT_PARAM
- **Return Type**: void
- **Parameters**: Hash p0, int p1, int p2, float p3

### SET_SPECIES_TUNING_BOOL_PARAM
- **Return Type**: void
- **Parameters**: Hash p0, int p1, int p2, BOOL p3

### GET_ANIMAL_TUNING_FLOAT_PARAM
- **Return Type**: float
- **Parameters**: Ped animal, int index
- **Description**: index: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/eAnimalTuningFloats https://github.com/femga/rdr3_discoveries/tree/master/AI/ANIMAL_TUNING_FLOAT_PARAMS

### SET_ANIMAL_TUNING_FLOAT_PARAM
- **Return Type**: void
- **Parameters**: Ped animal, int index, float value

### RESET_ANIMAL_TUNING_FLOAT_PARAM
- **Return Type**: void
- **Parameters**: Ped animal, int index

### GET_ANIMAL_TUNING_BOOL_PARAM
- **Return Type**: BOOL
- **Parameters**: Ped animal, int index
- **Description**: index: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/eAnimalTuningBools https://github.com/femga/rdr3_discoveries/tree/master/AI/ANIMAL_TUNING_BOOL_PARAMS

### SET_ANIMAL_TUNING_BOOL_PARAM
- **Return Type**: void
- **Parameters**: Ped animal, int index, BOOL value

### RESET_ANIMAL_TUNING_BOOL_PARAM
- **Return Type**: void
- **Parameters**: Ped animal, int index

### _0x8049B17BEC937662
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### _0xE93415B3307208E5
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8

### _0x19870C40C7EE15BE
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x0816C31480764AB0
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0xC3D581A34BC0A1F0
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xF2CCA7B68CFAB2B9
- **Return Type**: void
- **Parameters**: Hash species, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float p10, float p11, float p12, float p13
- **Description**: species: SPECIES_BIRD_CROW

### _0xF2CCA7B68CFAB2B9
- **Return Type**: void
- **Parameters**: Hash species, Vector3 vec1, Vector3 vec2, Vector3 vec3, float p10, float p11, float p12, float p13

### _0xFB16F08F47B83B4C
- **Return Type**: void
- **Parameters**: Any p0

### _GET_ANIMAL_IS_WILD
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Ped (horse) will run away from players and mounting will trigger them to buck until disabled. Used for: REL_DOMESTICATED_ANIMAL

### _SET_ANIMAL_IS_WILD
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _GET_ANIMAL_RARITY
- **Return Type**: int
- **Parameters**: Ped ped
- **Description**: enum eAnimalRarityLevel { ARL_COMMON, ARL_RARE, ARL_LEGENDARY, ARL_NUMRARITYLEVELS };

### _SET_ANIMAL_RARITY
- **Return Type**: void
- **Parameters**: Ped ped, int rarityLevel
- **Description**: rarityLevel: see _GET_ANIMAL_RARITY

### _0xFF1E339CE40EAAAF
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _IS_HERD_VALID
- **Return Type**: BOOL
- **Parameters**: ScrHandle herdHandle

### _CREATE_HERD
- **Return Type**: ScrHandle
- **Parameters**: 

### _0xE0961AED72642B80
- **Return Type**: void
- **Parameters**: Any p0

### _ADD_PED_TO_FLOCK
- **Return Type**: void
- **Parameters**: Any p0, Ped ped

### _0x408D1149C5E39C1E
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x9E13ACC38BA8F9C3
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x34B9C4D86DF2C2F3
- **Return Type**: Any
- **Parameters**: Any p0

### _0x1DA6CB02071055D5
- **Return Type**: Vector3
- **Parameters**: Any p0

### _0xC95611869E14F8AF
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x09EE00B8F858E0BE
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### _0xE36D2CB540597EF7
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7

### _0xD95F04A4E73BE85E
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x17E3E5C46ECCD308
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0xC72CE37081DAE625
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x67A43EA3F6FE0076
- **Return Type**: void
- **Parameters**: Any p0

### _0x36486AF7DA93A464
- **Return Type**: Any
- **Parameters**: Any p0

### _0x6C57BEA886A20C6B
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x1520626FFAFFFA8F
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xFA821997794F48E7
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0xCC6B5AAFC87BFC7B
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0xFDB008B3BCF5992F
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x2DF3D457D86F8E57
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x706B434FEFAD6A24
- **Return Type**: void
- **Parameters**: Any p0

### _0xA881F5C77A560906
- **Return Type**: void
- **Parameters**: Any p0

### _0x53187E563F938E76
- **Return Type**: Any
- **Parameters**: Any p0


## GRAPHICS
### FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO
- **Return Type**: void
- **Parameters**: 

### LOAD_MISSION_CREATOR_PHOTO
- **Return Type**: BOOL
- **Parameters**: Any* p0, Any p1, Any p2, Any p3

### GET_STATUS_OF_LOAD_MISSION_CREATOR_PHOTO
- **Return Type**: int
- **Parameters**: const char* contentId
- **Description**: contentId: returned by NETWORK::_UGC_QUERY_GET_CREATOR_PHOTO(uVar0, 0, sParam3)

### BEGIN_TAKE_HIGH_QUALITY_PHOTO
- **Return Type**: BOOL
- **Parameters**: 

### GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO
- **Return Type**: int
- **Parameters**: 

### FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO
- **Return Type**: void
- **Parameters**: 

### _SET_PHOTO_SELF_STAT
- **Return Type**: void
- **Parameters**: BOOL p0

### _SET_PHOTO_STUDIO_STAT
- **Return Type**: void
- **Parameters**: int p0

### _SET_POSSE_ID_FOR_PHOTO
- **Return Type**: void
- **Parameters**: Any posseId

### _0x9F6D859C80708B26
- **Return Type**: void
- **Parameters**: BOOL p0, BOOL p1

### IS_PHOTO_FRAME
- **Return Type**: BOOL
- **Parameters**: 

### _SET_PHOTO_IN_PHOTOMODE_STAT
- **Return Type**: void
- **Parameters**: BOOL p0

### _SET_PHOTO_OVERLAY_EFFECT_STAT
- **Return Type**: void
- **Parameters**: int p0

### _0x0D5B19C34068FEE7
- **Return Type**: void
- **Parameters**: Any p0
- **Description**: Gets set to 1 when GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO = PHOTO_OPERATION_SUCCEEDED

### _SET_PLAYER_APPEAR_IN_PHOTO
- **Return Type**: void
- **Parameters**: Player player

### _SET_REGION_PHOTO_TAKEN_STAT
- **Return Type**: void
- **Parameters**: const char* p0

### _SET_DISTRICT_PHOTO_TAKEN_STAT
- **Return Type**: void
- **Parameters**: const char* p0

### _SET_STATE_PHOTO_TAKEN_STAT
- **Return Type**: void
- **Parameters**: const char* p0

### SAVE_HIGH_QUALITY_PHOTO
- **Return Type**: BOOL
- **Parameters**: int unused

### GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO
- **Return Type**: int
- **Parameters**: 
- **Description**: 0 = succeeded 1 = getting status 2 = failed

### BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO
- **Return Type**: BOOL
- **Parameters**: int p0
- **Description**: Called together with FREE_MEMORY_FOR_LOW_QUALITY_PHOTO

### GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO
- **Return Type**: int
- **Parameters**: Any p0
- **Description**: Old name: _GET_STATUS_OF_DRAW_LOW_QUALITY_PHOTO

### FREE_MEMORY_FOR_LOW_QUALITY_PHOTO
- **Return Type**: void
- **Parameters**: 

### DRAW_LOW_QUALITY_PHOTO_TO_PHONE
- **Return Type**: void
- **Parameters**: BOOL p0, int photoRotation
- **Description**: nullsub, doesn't do anything (GTA5 leftover, there is no phone in RDR3)

### _GET_MAX_NUMBER_OF_LOCAL_PHOTOS
- **Return Type**: int
- **Parameters**: 
- **Description**: Always returns 200.

### _GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS
- **Return Type**: int
- **Parameters**: 

### QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS
- **Return Type**: Any
- **Parameters**: 

### GET_STATUS_OF_SORTED_LIST_OPERATION
- **Return Type**: int
- **Parameters**: 
- **Description**: 0 = succeeded 1 = getting status 2 = failed

### DRAW_LIGHT_WITH_RANGE
- **Return Type**: void
- **Parameters**: float posX, float posY, float posZ, int colorR, int colorG, int colorB, float range, float intensity

### DRAW_LIGHT_WITH_RANGE
- **Return Type**: void
- **Parameters**: Vector3 pos, int colorR, int colorG, int colorB, float range, float intensity

### UPDATE_LIGHTS_ON_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity

### _SET_LIGHTS_COLOR_FOR_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity, int red, int green, int blue
- **Description**: https://gfycat.com/meagerfaireyra

### _SET_LIGHTS_INTENSITY_FOR_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity, float intensity

### _SET_LIGHTS_TYPE_FOR_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity, int type
- **Description**: type must be less than or equal to 20

### _DRAW_MARKER
- **Return Type**: void
- **Parameters**: Hash type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, BOOL bobUpAndDown, BOOL faceCamera, int p19, BOOL rotate, const char* textureDict, const char* textureName, BOOL drawOnEnts
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/graphics/markers/marker_types.lua

### _DRAW_MARKER
- **Return Type**: void
- **Parameters**: Hash type, Vector3 pos, Vector3 dir, Vector3 rot, Vector3 scale, int red, int green, int blue, int alpha, BOOL bobUpAndDown, BOOL faceCamera, int p19, BOOL rotate, const char* textureDict, const char* textureName, BOOL drawOnEnts

### CREATE_CHECKPOINT_WITH_NAMEHASH
- **Return Type**: int
- **Parameters**: Hash typeHash, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, float radius, int red, int green, int blue, int alpha, int reserved

### CREATE_CHECKPOINT_WITH_NAMEHASH
- **Return Type**: int
- **Parameters**: Hash typeHash, Vector3 pos1, Vector3 pos2, float radius, int red, int green, int blue, int alpha, int reserved

### _DOES_CHECKPOINT_HAVE_FX
- **Return Type**: BOOL
- **Parameters**: int checkpoint

### SET_CHECKPOINT_RGBA
- **Return Type**: void
- **Parameters**: int checkpoint, int red, int green, int blue, int alpha
- **Description**: Sets the checkpoint color.

### SET_CHECKPOINT_RGBA2
- **Return Type**: void
- **Parameters**: int checkpoint, int red, int green, int blue, int alpha
- **Description**: Sets the checkpoint icon color.

### _0xCC3B787E73E64160
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0x171C18E994C1A395
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### DELETE_CHECKPOINT
- **Return Type**: void
- **Parameters**: int checkpoint

### DRAW_RECT
- **Return Type**: void
- **Parameters**: float x, float y, float width, float height, int red, int green, int blue, int alpha, BOOL p8, BOOL p9
- **Description**: Draws a rectangle on the screen.  -x: The relative X point of the center of the rectangle. (0.0-1.0, 0.0 is the left edge of the screen, 1.0 is the right edge of the screen)  -y: The relative Y point of the center of the rectangle. (0.0-1.0, 0.0 is the top edge of the screen, 1.0 is the bottom edge of the screen)  -width: The relative width of the rectangle. (0.0-1.0, 1.0 means the whole screen width)  -height: The relative height of the rectangle. (0.0-1.0, 1.0 means the whole screen height)  -R: Red part of the color. (0-255)  -G: Green part of the color. (0-255)  -B: Blue part of the color. (0-255)  -A: Alpha part of the color. (0-255, 0 means totally transparent, 255 means totally opaque)

### SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: Sets a flag defining whether or not script draw commands should continue being drawn behind the pause menu. This is usually used for draw commands that are used with a world render target.

### SET_SCRIPT_GFX_DRAW_ORDER
- **Return Type**: void
- **Parameters**: int drawOrder
- **Description**: Sets the draw order for script draw commands.

### DRAW_SPRITE
- **Return Type**: void
- **Parameters**: const char* textureDict, const char* textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha, BOOL p11
- **Description**: Draws a 2D sprite on the screen.  Parameters: textureDict - Name of texture dictionary to load texture from  textureName - Name of texture to load from texture dictionary  screenX/Y - Screen offset (0.5 = center) scaleX/Y - Texture scaling. Negative values can be used to flip the texture on that axis. (0.5 = half)  heading - Texture rotation in degrees (default = 0.0) positive is clockwise, measured in degrees  red,green,blue - Sprite color (default = 255/255/255)  alpha - opacity level  https://github.com/femga/rdr3_discoveries/tree/master/useful_info_from_rpfs/textures

### ATTACH_TV_AUDIO_TO_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity

### SET_TV_AUDIO_FRONTEND
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: Probably changes tvs from being a 3d audio to being "global" audio

### GET_SCREEN_RESOLUTION
- **Return Type**: void
- **Parameters**: int* x, int* y
- **Description**: Hardcoded to always set x to 1280 and y to 720.

### _0xA04EF43030593ABC
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xA21AF60C9F99CCC5
- **Return Type**: void
- **Parameters**: 

### _0xC28F62AC9774FC1B
- **Return Type**: Any
- **Parameters**: 

### _0xEB48CE48EEC41FD4
- **Return Type**: void
- **Parameters**: Any p0

### GET_SCREEN_COORD_FROM_WORLD_COORD
- **Return Type**: BOOL
- **Parameters**: float worldX, float worldY, float worldZ, float* screenX, float* screenY

### GET_SCREEN_COORD_FROM_WORLD_COORD
- **Return Type**: BOOL
- **Parameters**: Vector3 world, float* screenX, float* screenY

### _IS_TEXTURE_IN_DICT
- **Return Type**: BOOL
- **Parameters**: Hash txdHash, Hash dict

### SET_ARTIFICIAL_LIGHTS_STATE
- **Return Type**: void
- **Parameters**: BOOL state
- **Description**: Does not affect weapons, particles, fire/explosions, flashlights or the sun. When set to true, all emissive textures (including ped components that have light effects), street lights, building lights, vehicle lights, etc will all be turned off.  state: True turns off all artificial light sources in the map: buildings, street lights, car lights, etc. False turns them back on.

### DISABLE_HDTEX_THIS_FRAME
- **Return Type**: void
- **Parameters**: 

### _0x1A9F09AB458D49C6
- **Return Type**: void
- **Parameters**: BOOL p0
- **Description**: Used in shop scripts for CATALOG_BOOK false = Normal -> [CATALOG_BOOK_SHUTDOWN] true = Trees flickering? -> [CATALOG_BOOK_OPEN]

### CREATE_TRACKED_POINT
- **Return Type**: int
- **Parameters**: 
- **Description**: Creates a tracked point, useful for checking the visibility of a 3D point on screen.

### SET_TRACKED_POINT_INFO
- **Return Type**: void
- **Parameters**: int point, float x, float y, float z, float radius

### SET_TRACKED_POINT_INFO
- **Return Type**: void
- **Parameters**: int point, Vector3 vec, float radius

### IS_TRACKED_POINT_VISIBLE
- **Return Type**: BOOL
- **Parameters**: int point

### _0xDFE332A5DA6FE7C9
- **Return Type**: int
- **Parameters**: int iTrackedPoint
- **Description**: Returns iNumPixels, iPixelsVisible

### DESTROY_TRACKED_POINT
- **Return Type**: void
- **Parameters**: int point

### _IS_TRACKED_POINT_VALID
- **Return Type**: BOOL
- **Parameters**: int point

### SET_GRASS_CULL_SPHERE
- **Return Type**: int
- **Parameters**: float x, float y, float z, float p3, int p4
- **Description**: Returns handle to be used with REMOVE_GRASS_CULL_SPHERE

### SET_GRASS_CULL_SPHERE
- **Return Type**: int
- **Parameters**: Vector3 vec, float p3, int p4

### REMOVE_GRASS_CULL_SPHERE
- **Return Type**: void
- **Parameters**: int handle

### _ADD_VEG_MODIFIER_ZONE
- **Return Type**: int
- **Parameters**: Volume volume, int p1, int flags, int p3
- **Description**: Adds Vegetation Blocking Zone, Added Snow Flattening veg mod Zone Returns veg modifier handle

### ADD_VEG_MODIFIER_SPHERE
- **Return Type**: int
- **Parameters**: float x, float y, float z, float radius, int modType, int flags, int p6
- **Description**: Returns veg modifier handle

### ADD_VEG_MODIFIER_SPHERE
- **Return Type**: int
- **Parameters**: Vector3 vec, float radius, int modType, int flags, int p6

### REMOVE_VEG_MODIFIER_SPHERE
- **Return Type**: void
- **Parameters**: int vegModifierHandle, int p1

### _ENABLE_STATIC_VEG_MODIFIER
- **Return Type**: void
- **Parameters**: Hash p0

### _DISABLE_STATIC_VEG_MODIFIER
- **Return Type**: void
- **Parameters**: Hash p0

### _IS_STATIC_VEG_MODIFIER_ENABLED
- **Return Type**: BOOL
- **Parameters**: Hash p0

### _0xEC3F7F24EEEB3BA3
- **Return Type**: void
- **Parameters**: 

### _0x9F158A49B0D84C3C
- **Return Type**: void
- **Parameters**: Any p0

### _0x910E260AEAD855DE
- **Return Type**: void
- **Parameters**: 

### _CREATE_SWATCH_TEXTURE_DICT
- **Return Type**: BOOL
- **Parameters**: int slots

### _DESTROY_SWATCH_TEXTURE_DICT
- **Return Type**: void
- **Parameters**: 

### _GENERATE_SWATCH_TEXTURE_DIRECTLY
- **Return Type**: void
- **Parameters**: int slot, Any p1
- **Description**: Example: https://pastebin.com/tTgpER9A

### _GENERATE_SWATCH_TEXTURE
- **Return Type**: void
- **Parameters**: int slotId, Hash componentHash, int metapedType, BOOL p3
- **Description**: Example: local hash = GetHashKey("CLOTHING_ITEM_M_EYES_001_TINT_001") _GENERATE_SWATCH_TEXTURE(0, hash, 0, true) metapedType: see 0xEC9A1261BF0CE510

### CASCADE_SHADOWS_SET_CASCADE_BOUNDS
- **Return Type**: void
- **Parameters**: Any p0, BOOL p1, float p2, float p3, float p4, float p5, BOOL p6, float p7

### CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: When this is set to ON, shadows only draw as you get nearer.  When OFF, they draw from a further distance.

### CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE
- **Return Type**: void
- **Parameters**: const char* type
- **Description**: Possible values: "CSM_ST_POINT" "CSM_ST_LINEAR" "CSM_ST_BOX3x3" "CSM_ST_BOX4x4" "CSM_ST_DITHER2_LINEAR" "CSM_ST_CUBIC" "CSM_ST_POISSON16" "CSM_ST_SOFT8" "CSM_ST_SOFT16" "CSM_ST_SOFT32" "CSM_ST_DITHER16_RPDB" "CSM_ST_POISSON16_RPDB_GNORM" "CSM_ST_HIGHRES_BOX4x4" "CSM_ST_ESM"

### CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE
- **Return Type**: void
- **Parameters**: 

### _0x503941F65DBA24EC
- **Return Type**: void
- **Parameters**: Any p0

### _0x815653A42C5ABE76
- **Return Type**: void
- **Parameters**: 

### _0xFF8018C778349234
- **Return Type**: void
- **Parameters**: Any p0

### RESET_ADAPTATION
- **Return Type**: void
- **Parameters**: int unk
- **Description**: Sets an unknown value related to timecycles.

### TOGGLE_PAUSED_RENDERPHASES
- **Return Type**: void
- **Parameters**: BOOL toggle

### GET_TOGGLE_PAUSED_RENDERPHASES_STATUS
- **Return Type**: BOOL
- **Parameters**: 

### RESET_PAUSED_RENDERPHASES
- **Return Type**: void
- **Parameters**: 

### SET_HIDOF_OVERRIDE
- **Return Type**: void
- **Parameters**: BOOL p0, BOOL p1, float p2, float p3, float p4, float p5
- **Description**: Old name: _SET_HIDOF_ENV_BLUR_PARAMS

### _0x21F00E08CBB5F37B
- **Return Type**: void
- **Parameters**: const char* component
- **Description**: Params: component - used in odriscolls1 and sean1 R* SP Script: COMPONENT_BINOCULARS_SCOPE01 Triggers the binocular scaleform

### _0x5AC6E0FA028369DE
- **Return Type**: void
- **Parameters**: 
- **Description**: Closes the the binocular scaleform

### _0xEC3D8C228FE553D7
- **Return Type**: BOOL
- **Parameters**: BOOL p0

### _0xF5793BB386E1FF9C
- **Return Type**: void
- **Parameters**: Any p0

### _0x5CD6A2CCE5087161
- **Return Type**: void
- **Parameters**: Any p0

### _0xC8D0611D9A0CF5D3
- **Return Type**: void
- **Parameters**: Any p0

### _GET_PHOTO_MODE_EXPOSURE
- **Return Type**: float
- **Parameters**: 

### _0x62B9F9A1272AED80
- **Return Type**: void
- **Parameters**: Any p0

### _GET_PHOTO_MODE_CONTRAST
- **Return Type**: float
- **Parameters**: 

### _0x9229ED770975BD9E
- **Return Type**: void
- **Parameters**: 

### START_PARTICLE_FX_NON_LOOPED_AT_COORD
- **Return Type**: BOOL
- **Parameters**: const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/graphics/ptfx/ptfx_assets_non_looped.lua

### START_PARTICLE_FX_NON_LOOPED_AT_COORD
- **Return Type**: BOOL
- **Parameters**: const char* effectName, Vector3 pos, Vector3 rot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis

### START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD
- **Return Type**: BOOL
- **Parameters**: const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis

### START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD
- **Return Type**: BOOL
- **Parameters**: const char* effectName, Vector3 pos, Vector3 rot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis

### START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE
- **Return Type**: BOOL
- **Parameters**: const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ

### START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE
- **Return Type**: BOOL
- **Parameters**: const char* effectName, Ped ped, Vector3 offset, Vector3 rot, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ

### START_PARTICLE_FX_NON_LOOPED_ON_ENTITY
- **Return Type**: BOOL
- **Parameters**: const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ

### START_PARTICLE_FX_NON_LOOPED_ON_ENTITY
- **Return Type**: BOOL
- **Parameters**: const char* effectName, Entity entity, Vector3 offset, Vector3 rot, float scale, BOOL axisX, BOOL axisY, BOOL axisZ

### START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY
- **Return Type**: BOOL
- **Parameters**: const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ

### START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY
- **Return Type**: BOOL
- **Parameters**: const char* effectName, Entity entity, Vector3 offset, Vector3 rot, float scale, BOOL axisX, BOOL axisY, BOOL axisZ

### _START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2
- **Return Type**: BOOL
- **Parameters**: const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ

### _START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2
- **Return Type**: BOOL
- **Parameters**: const char* effectName, Ped ped, Vector3 offset, Vector3 rot, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ

### SET_PARTICLE_FX_NON_LOOPED_COLOUR
- **Return Type**: void
- **Parameters**: float r, float g, float b

### SET_PARTICLE_FX_NON_LOOPED_ALPHA
- **Return Type**: void
- **Parameters**: float alpha

### _SET_PARTICLE_FX_NON_LOOPED_EMITTER_SCALE
- **Return Type**: void
- **Parameters**: float p0, float p1, float p2

### START_PARTICLE_FX_LOOPED_AT_COORD
- **Return Type**: int
- **Parameters**: const char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/graphics/ptfx/ptfx_assets_looped.lua

### START_PARTICLE_FX_LOOPED_AT_COORD
- **Return Type**: int
- **Parameters**: const char* effectName, Vector3 vec, Vector3 rot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11

### START_PARTICLE_FX_LOOPED_ON_PED_BONE
- **Return Type**: int
- **Parameters**: const char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis

### START_PARTICLE_FX_LOOPED_ON_PED_BONE
- **Return Type**: int
- **Parameters**: const char* effectName, Ped ped, Vector3 offset, Vector3 rot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis

### START_PARTICLE_FX_LOOPED_ON_ENTITY
- **Return Type**: int
- **Parameters**: const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis

### START_PARTICLE_FX_LOOPED_ON_ENTITY
- **Return Type**: int
- **Parameters**: const char* effectName, Entity entity, Vector3 offset, Vector3 rot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis

### START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE
- **Return Type**: int
- **Parameters**: const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis

### START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE
- **Return Type**: int
- **Parameters**: const char* effectName, Entity entity, Vector3 offset, Vector3 rot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis

### START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY
- **Return Type**: int
- **Parameters**: const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis

### START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY
- **Return Type**: int
- **Parameters**: const char* effectName, Entity entity, Vector3 offset, Vector3 rot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis

### START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE
- **Return Type**: int
- **Parameters**: const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis

### START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE
- **Return Type**: int
- **Parameters**: const char* effectName, Entity entity, Vector3 offset, Vector3 rot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis

### STOP_PARTICLE_FX_LOOPED
- **Return Type**: void
- **Parameters**: int ptfxHandle, BOOL p1

### DOES_PARTICLE_FX_LOOPED_EXIST
- **Return Type**: BOOL
- **Parameters**: int ptfxHandle

### SET_PARTICLE_FX_LOOPED_OFFSETS
- **Return Type**: void
- **Parameters**: int ptfxHandle, float x, float y, float z, float rotX, float rotY, float rotZ

### SET_PARTICLE_FX_LOOPED_OFFSETS
- **Return Type**: void
- **Parameters**: int ptfxHandle, Vector3 vec, Vector3 rot

### SET_PARTICLE_FX_LOOPED_EVOLUTION
- **Return Type**: void
- **Parameters**: int ptfxHandle, const char* propertyName, float amount, BOOL noNetwork

### SET_PARTICLE_FX_LOOPED_COLOUR
- **Return Type**: void
- **Parameters**: int ptfxHandle, float r, float g, float b, BOOL p4

### SET_PARTICLE_FX_LOOPED_ALPHA
- **Return Type**: void
- **Parameters**: int ptfxHandle, float alpha

### SET_PARTICLE_FX_LOOPED_SCALE
- **Return Type**: void
- **Parameters**: int ptfxHandle, float scale

### SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST
- **Return Type**: void
- **Parameters**: int ptfxHandle, float range

### _SET_PARTICLE_FX_LOOPED_UPDATE_DISTANT_SMOKE
- **Return Type**: void
- **Parameters**: int ptfxHandle, float scalar
- **Description**: _SET_PARTICLE_FX_LOOPED_FA* - _SET_PARTICLE_FX_LOOPED_OF*

### REMOVE_PARTICLE_FX
- **Return Type**: void
- **Parameters**: int ptfxHandle, BOOL p1

### REMOVE_PARTICLE_FX_FROM_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity

### REMOVE_PARTICLE_FX_IN_RANGE
- **Return Type**: void
- **Parameters**: float X, float Y, float Z, float radius

### REMOVE_PARTICLE_FX_IN_RANGE
- **Return Type**: void
- **Parameters**: Vector3 vec, float radius

### USE_PARTICLE_FX_ASSET
- **Return Type**: void
- **Parameters**: const char* fxName
- **Description**: fxName: see data_0/data/effects/ptfx/fxlists/

### SET_PARTICLE_FX_OVERRIDE
- **Return Type**: void
- **Parameters**: const char* oldAsset, const char* newAsset

### RESET_PARTICLE_FX_OVERRIDE
- **Return Type**: void
- **Parameters**: const char* name
- **Description**: Resets the effect of SET_PARTICLE_FX_OVERRIDE

### _0x4FB67D172C4476F3
- **Return Type**: void
- **Parameters**: Entity entity, const char* p1, const char* p2, float p3
- **Description**: p1: AMB_ANN_COAL_CHUTE_DIVE, AMB_ANN_COAL_CHUTE p2: EMIT p3: either 0.0f or 1.0f

### SET_PARTICLE_FX_AMBIENT_COLOUR
- **Return Type**: void
- **Parameters**: Entity entity, const char* p1, float r, float g, float b
- **Description**: Related to Campfires. p1: AMB_BONFIRE_MP, AMB_CAMPFIRE_LRG_MP

### _0xD1472AFF30C103D6
- **Return Type**: void
- **Parameters**: float p0
- **Description**: Only used in R* Script nb_stalking_hunter

### SET_PARTICLE_FX_BULLET_IMPACT_SCALE
- **Return Type**: void
- **Parameters**: float scale

### SET_PARTICLE_FX_BULLET_IMPACT_LODRANGE_SCALE
- **Return Type**: void
- **Parameters**: float p0

### _SET_SNIPER_GLINTS_ENABLED
- **Return Type**: void
- **Parameters**: BOOL enabled

### SET_PARTICLE_FX_FOOT_LODRANGE_SCALE
- **Return Type**: void
- **Parameters**: float p0

### _0x4046493D2EEACA0E
- **Return Type**: void
- **Parameters**: 
- **Description**: _DISABLE_*

### SET_PICKUP_LIGHT
- **Return Type**: void
- **Parameters**: Object object, BOOL toggle
- **Description**: https://imgur.com/a/I2swSDJ  Old name: _SET_PICKUP_OBJECT_GLOW_ENABLED

### _BLOCK_PICKUP_OBJECT_LIGHT
- **Return Type**: void
- **Parameters**: Object pickupObject, BOOL toggle

### BLOCK_PICKUP_PLACEMENT_LIGHT
- **Return Type**: void
- **Parameters**: Pickup pickup, BOOL toggle

### ALLOW_PICKUP_LIGHT_SYNC
- **Return Type**: void
- **Parameters**: Object pickupObject, BOOL allow

### _SET_PEARLESCENT_FX_ENABLED
- **Return Type**: void
- **Parameters**: Object object, BOOL toggle
- **Description**: Enables/disables a kind of 'shiny' effect on metals.

### REMOVE_DECALS_IN_RANGE
- **Return Type**: void
- **Parameters**: float x, float y, float z, float range
- **Description**: Removes all decals in range from a position, it includes the bullet holes, blood pools, petrol...

### REMOVE_DECALS_IN_RANGE
- **Return Type**: void
- **Parameters**: Vector3 vec, float range

### REMOVE_DECALS_FROM_OBJECT
- **Return Type**: void
- **Parameters**: Object obj

### ADD_DECAL
- **Return Type**: int
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17, Any p18, Any p19, Any p20, Any p21

### _ADD_BLOOD_POOL
- **Return Type**: void
- **Parameters**: float x, float y, float z, BOOL unused
- **Description**: https://i.imgur.com/ULQU9US.jpg More rounded and small puddle

### _ADD_BLOOD_POOL
- **Return Type**: void
- **Parameters**: Vector3 vec, BOOL unused

### _ADD_BLOOD_POOL_2
- **Return Type**: void
- **Parameters**: float x, float y, float z, float p3, float size, float p5, BOOL permanent, float p7, BOOL p8
- **Description**: https://i.imgur.com/rPITUCV.jpg More customizable and more like quadrants

### _ADD_BLOOD_POOL_2
- **Return Type**: void
- **Parameters**: Vector3 vec, float p3, float size, float p5, BOOL permanent, float p7, BOOL p8

### _ADD_BLOOD_POOLS_FOR_PED
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: Creates blood pools for the given ped in some interval for a few seconds.

### _ADD_BLOOD_POOLS_FOR_PED_WITH_PARAMS
- **Return Type**: void
- **Parameters**: Ped ped, float p1, float size, float p3

### START_PETROL_TRAIL_DECALS
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### ADD_PETROL_TRAIL_DECAL_INFO
- **Return Type**: void
- **Parameters**: float x, float y, float z, float p3

### ADD_PETROL_TRAIL_DECAL_INFO
- **Return Type**: void
- **Parameters**: Vector3 vec, float p3

### END_PETROL_TRAIL_DECALS
- **Return Type**: void
- **Parameters**: 

### _0xE63D68F455CA0B47
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### REMOVE_DECAL
- **Return Type**: void
- **Parameters**: int decal

### IS_DECAL_ALIVE
- **Return Type**: BOOL
- **Parameters**: int decal

### SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME
- **Return Type**: void
- **Parameters**: 

### _0xB032C085D9A03907
- **Return Type**: void
- **Parameters**: 
- **Description**: _SET_D* or _SET_E*

### _0xFB680A9B33D0EDBE
- **Return Type**: void
- **Parameters**: BOOL p0
- **Description**: _DISABLE_*

### _0x41F88A85A579A61D
- **Return Type**: void
- **Parameters**: float p0
- **Description**: Used in CREATE_BEZIER_BLOOD_TRAIL_OF_TYPE

### _BLOOD_TRAIL_FOR_WAYPOINT
- **Return Type**: void
- **Parameters**: const char* waypointRecording, float p1
- **Description**: p1: 0.3f in R* Scripts

### _ADD_BLOOD_TRAIL_POINT
- **Return Type**: void
- **Parameters**: float x, float y, float z

### _ADD_BLOOD_TRAIL_POINT
- **Return Type**: void
- **Parameters**: Vector3 vec

### _0x812C1563185C6FB2
- **Return Type**: void
- **Parameters**: 
- **Description**: Used in CREATE_BEZIER_BLOOD_TRAIL_OF_TYPE _ENABLE_*

### _0x4BD66B4E3427689B
- **Return Type**: void
- **Parameters**: const char* p0
- **Description**: Used in CREATE_BEZIER_BLOOD_TRAIL_OF_TYPE

### _ADD_BLOOD_TRAIL_SPLAT
- **Return Type**: void
- **Parameters**: float x, float y, float z

### _ADD_BLOOD_TRAIL_SPLAT
- **Return Type**: void
- **Parameters**: Vector3 vec

### _0xF2F543D48F319A3A
- **Return Type**: void
- **Parameters**: 

### _0x1460B644397453EB
- **Return Type**: void
- **Parameters**: 
- **Description**: _RESET_*

### _DISABLE_FAR_ARTIFICIAL_LIGHTS
- **Return Type**: void
- **Parameters**: BOOL disable
- **Description**: Only used in guama1 R* Script Disables lod/distant lights when BOOL is set to true

### _0x453D16D41FC51D3E
- **Return Type**: void
- **Parameters**: BOOL p0

### _0xC06F2F45A73EABCD
- **Return Type**: void
- **Parameters**: Entity entity
- **Description**: Used in NET_CAMP_SPIRIT_ANIMAL_CLEAR_ANIMAL_VISIBILITY

### SET_TIMECYCLE_MODIFIER
- **Return Type**: void
- **Parameters**: const char* modifierName
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/graphics/timecycles

### SET_TIMECYCLE_MODIFIER_STRENGTH
- **Return Type**: void
- **Parameters**: float strength

### SET_TRANSITION_TIMECYCLE_MODIFIER
- **Return Type**: void
- **Parameters**: const char* modifierName, float transitionBlend

### SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER
- **Return Type**: void
- **Parameters**: float strength

### CLEAR_TIMECYCLE_MODIFIER
- **Return Type**: void
- **Parameters**: 

### GET_TIMECYCLE_MODIFIER_INDEX
- **Return Type**: int
- **Parameters**: 

### GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX
- **Return Type**: int
- **Parameters**: 

### _0x67B0778C62E74423
- **Return Type**: void
- **Parameters**: Any p0

### _0x6C03118E9E5C1A14
- **Return Type**: void
- **Parameters**: Any p0

### _GET_MODIFIED_VISIBILITY_DISTANCE
- **Return Type**: float
- **Parameters**: 
- **Description**: _GET_C* - _GET_E*

### ENABLE_MOON_CYCLE_OVERRIDE
- **Return Type**: void
- **Parameters**: float strength
- **Description**: Old name: _ENABLE_EXTRA_TIMECYCLE_MODIFIER_STRENGTH

### SET_TV_CHANNEL
- **Return Type**: void
- **Parameters**: int channel

### GET_TV_CHANNEL
- **Return Type**: int
- **Parameters**: 

### SET_TV_VOLUME
- **Return Type**: void
- **Parameters**: float volume

### DRAW_TV_CHANNEL
- **Return Type**: void
- **Parameters**: float xPos, float yPos, float xScale, float yScale, float rotation, int red, int green, int blue, int alpha

### SET_TV_CHANNEL_PLAYLIST
- **Return Type**: void
- **Parameters**: int tvChannel, const char* playlistName, BOOL restart

### IS_TVSHOW_CURRENTLY_PLAYING
- **Return Type**: BOOL
- **Parameters**: Hash videoCliphash
- **Description**: Old name: _IS_TV_PLAYLIST_ITEM_PLAYING

### _0x5C674EB487891F6B
- **Return Type**: Any
- **Parameters**: 

### ENABLE_MOVIE_SUBTITLES
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: nullsub, doesn't do anything

### _0x32DE2BFFDA43E62A
- **Return Type**: void
- **Parameters**: 

### _0xD543487A1F12828F
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0xD9BC98B55BCFAA9B
- **Return Type**: void
- **Parameters**: Any p0

### _0x48FE0DB54045B975
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### _0x735762E8D7573E42
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x981C7D863980FA51
- **Return Type**: void
- **Parameters**: 

### _ANIMPOSTFX_PRELOAD_POSTFX
- **Return Type**: void
- **Parameters**: const char* effectName

### _ANIMPOSTFX_HAS_LOADED
- **Return Type**: BOOL
- **Parameters**: const char* effectName

### _ANIMPOSTFX_SET_TO_UNLOAD
- **Return Type**: void
- **Parameters**: const char* effectName

### ANIMPOSTFX_PLAY
- **Return Type**: void
- **Parameters**: const char* effectName
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/graphics/animpostfx

### _ANIMPOSTFX_PLAY_TIMED
- **Return Type**: void
- **Parameters**: const char* effectName, int duration

### ANIMPOSTFX_STOP
- **Return Type**: void
- **Parameters**: const char* effectName

### _0x26DD2FB0A88CC412
- **Return Type**: void
- **Parameters**: const char* effectName, const char* effectName2, Any p2, Any p3
- **Description**: effectName2, p2 and p3 are unused  ANIMPOSTFX_*

### _ANIMPOSTFX_CLEAR_EFFECT
- **Return Type**: void
- **Parameters**: const char* effectName

### ANIMPOSTFX_IS_RUNNING
- **Return Type**: BOOL
- **Parameters**: const char* effectName

### _ANIMPOSTFX_IS_TAG_PLAYING
- **Return Type**: BOOL
- **Parameters**: const char* effectName

### ANIMPOSTFX_STOP_ALL
- **Return Type**: void
- **Parameters**: 

### _ANIMPOSTFX_STOP_TAG
- **Return Type**: void
- **Parameters**: const char* effectName

### _ANIMPOSTFX_SET_STRENGTH
- **Return Type**: void
- **Parameters**: const char* effectName, float strength
- **Description**: must be called after ANIMPOSTFX_PLAY, strength 0.0f - 1.0f

### _ANIMPOSTFX_SET_POTENCY
- **Return Type**: void
- **Parameters**: const char* effectName, int p1, float potency
- **Description**: Health Core Effect Filter Potency: p1 = 1 Stamina Core Effect Filter Potency: p1 = 2 Multiple Core Effect Filter Potency: p1 = 3

### _ANIMPOSTFX_SET_POSTFX_COLOR
- **Return Type**: void
- **Parameters**: const char* effectName, int p1, int red, int green, int blue, int alpha

### _0xB958D97A0DFAA0C2
- **Return Type**: BOOL
- **Parameters**: const char* effectName
- **Description**: ANIMPOSTFX_*

### _0xA201A3D0AC087C37
- **Return Type**: void
- **Parameters**: const char* effectName
- **Description**: ANIMPOSTFX_*

### _0xFBF161FCFEC8589E
- **Return Type**: BOOL
- **Parameters**: const char* effectName, int p1, BOOL p2, BOOL* p3
- **Description**: ANIMPOSTFX_*

### _ANIMPOSTFX_GET_STACKHASH
- **Return Type**: Hash
- **Parameters**: const char* effectName
- **Description**: Known effects: MP_Trans_SceneToPhoto MP_Trans_WinLose SpectateFilter MP_CharacterCreatorPhoto MP_Trans_PhotoToScene InterrogationHit

### _ANIMPOSTFX_PRELOAD_POSTFX_BY_STACKHASH
- **Return Type**: void
- **Parameters**: Hash effectNameHash

### ANIMPOSTFX_IS_PRELOADING_BY_STACKHASH
- **Return Type**: BOOL
- **Parameters**: Hash effectNameHash

### _0x38D9D50F2085E9B3
- **Return Type**: void
- **Parameters**: Hash effectNameHash
- **Description**: ANIMPOSTFX_*

### _ANIMPOSTFX_PLAY_TAG
- **Return Type**: void
- **Parameters**: Hash effectNameHash

### _0xC76FC4C2FC5F4405
- **Return Type**: void
- **Parameters**: Hash effectNameHash
- **Description**: ANIMPOSTFX_*

### _ANIMPOSTFX_STOP_STACKHASH_POSTFX
- **Return Type**: void
- **Parameters**: Hash effectNameHash

### _ANIMPOSTFX_IS_STACKHASH_PLAYING
- **Return Type**: BOOL
- **Parameters**: Hash effectNameHash

### _0xE75CDDEBF618C8FF
- **Return Type**: BOOL
- **Parameters**: Hash effectNameHash
- **Description**: ANIMPOSTFX_*

### _0x71845905BCCDE781
- **Return Type**: void
- **Parameters**: Hash effectNameHash
- **Description**: ANIMPOSTFX_*

### ANIMPOSTFX_HAS_EVENT_TRIGGERED_BY_STACKHASH
- **Return Type**: BOOL
- **Parameters**: Hash effectNameHash, int p1, BOOL p2, BOOL* p3

### _0xFF584F097C17FA8F
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Returns whether the 'killFX' setting is enabled.  ANIMPOSTFX_*

### _0x3DA7A10583A4BEC0
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: ANIMPOSTFX_*

### _0xC37792A3F9C90771
- **Return Type**: Any
- **Parameters**: 
- **Description**: Doesn't actually return anything.  ANIMPOSTFX_*

### _0xA0F4D12D6042F6D5
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x8996FA6AD9FE4E90
- **Return Type**: void
- **Parameters**: Any p0

### _SET_ENTITY_RENDER_GUARMA_SHIP
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle
- **Description**: Only used in guama1 R* SP Script while spawning the ship _SET_ENTITY_QUATERNION_* - SET_ENTITY_RENDER_*

### PEDSHOT_IS_AVAILABLE
- **Return Type**: BOOL
- **Parameters**: 

### _0xFD05B1DDE83749FA
- **Return Type**: BOOL
- **Parameters**: const char* p0
- **Description**: R* Script spd_agnesdow1: p0 = SPD_AGNES_DOWD_01

### _PEDSHOT_FINISH_CLEANUP_DATA
- **Return Type**: void
- **Parameters**: 

### _PEDSHOT_PREVIOUS_PERSONA_PHOTO_DATA_CLEANUP
- **Return Type**: void
- **Parameters**: 

### _PEDSHOT_INIT_CLEANUP_DATA
- **Return Type**: void
- **Parameters**: 

### _PEDSHOT_GENERATE_PERSONA_PHOTO
- **Return Type**: BOOL
- **Parameters**: const char* texture, Ped ped, int playerSlot

### _PEDSHOT_SET_PERSONA_PHOTO_TYPE
- **Return Type**: void
- **Parameters**: int personaPhotoLocalCacheType

### _0xA1A86055792FB249
- **Return Type**: void
- **Parameters**: int personaPhotoLocalCacheType

### _0x402E1A61D2587FCD
- **Return Type**: BOOL
- **Parameters**: Any p0, float x, float y, float z, float p4, float p5, float heading
- **Description**: Only used in R* SP Script spd_agnesdown1

### _0x402E1A61D2587FCD
- **Return Type**: BOOL
- **Parameters**: Any p0, Vector3 vec, float p4, float p5, float heading

### _0x5C9C3A466B3296A8
- **Return Type**: Any
- **Parameters**: Any p0
- **Description**: Only used in R* SP Script spd_agnesdown1

### _0xA15CCAB8AD038291
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x285438C26C732F9D
- **Return Type**: Any
- **Parameters**: 

### _SET_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_STATE
- **Return Type**: void
- **Parameters**: int proxyInteriorIndex, BOOL state
- **Description**: state: false disables artificial interior light sources for specific proxyInteriorIndex

### _IS_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_ENABLED
- **Return Type**: BOOL
- **Parameters**: int proxyInteriorIndex

### _GET_PROXY_INTERIOR_INDEX
- **Return Type**: int
- **Parameters**: int interiorId
- **Description**: Returns proxyInteriorIndex

### _0x9D1B0B5066205692
- **Return Type**: void
- **Parameters**: 

### _0xC489FE31AC726512
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_CLOUD_LAYER
- **Return Type**: void
- **Parameters**: float x, float y, int p2

### _SET_CLOUD_NOISE
- **Return Type**: void
- **Parameters**: float x, float y, float z

### _SET_CLOUD_NOISE
- **Return Type**: void
- **Parameters**: Vector3 vec

### _SET_CLOUD_POSITION
- **Return Type**: void
- **Parameters**: float x, float y, float z
- **Description**: Only used in finale2, smuggler2, winter4 _SET_CLOUD_A* - _SET_CLOUD_H*

### _SET_CLOUD_POSITION
- **Return Type**: void
- **Parameters**: Vector3 vec

### _SET_CLOUD_HEIGHT
- **Return Type**: void
- **Parameters**: float height

### _0x085C5B61A0114F32
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x1FF8731BE1DFC0C0
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xFC9B53C072F418E0
- **Return Type**: Any
- **Parameters**: 

### _0x94B261F1F35293E1
- **Return Type**: void
- **Parameters**: Any p0
- **Description**: nullsub, doesn't do anything

### ENABLE_ENTITYMASK
- **Return Type**: void
- **Parameters**: 

### DISABLE_ENTITYMASK
- **Return Type**: void
- **Parameters**: 

### _ADD_ENTITY_TO_ENTITY_MASK
- **Return Type**: void
- **Parameters**: Entity entity, int mask

### _ADD_ENTITY_TO_ENTITY_MASK_WITH_INTENSITY
- **Return Type**: void
- **Parameters**: Entity entity, int mask, float intensity

### _REMOVE_ENTITY_FROM_ENTITY_MASK
- **Return Type**: void
- **Parameters**: Entity entity

### _GET_ENTITY_MASK_LAYERS
- **Return Type**: BOOL
- **Parameters**: Entity entity, float* layer0, float* layer1, float* layer2, float* layer3

### _SET_ENTITY_MASK_LAYERS
- **Return Type**: void
- **Parameters**: Entity entity, float* layer0, float* layer1, float* layer2, float* layer3

### _SET_ENTITY_AURA
- **Return Type**: void
- **Parameters**: float p0, float p1, float p2
- **Description**: Used for script function RPG_GLOBAL_STATS__PRIVATE__ACTIVATE_STAT_FLAG - Quite and Inspiration Aura equip Params: 0f, 2f, 2f

### _RESET_ENTITY_AURA
- **Return Type**: void
- **Parameters**: 
- **Description**: Used for script function RPG_GLOBAL_STATS__PRIVATE__DEACTIVATE_STAT_FLAG - Inspiration Aura unequip

### _SET_SNOW_COVERAGE_TYPE
- **Return Type**: void
- **Parameters**: int type
- **Description**: enum class eSnowCoverageType { Primary, Secondary, Xmas, XmasSecondary // since b1232 };

### _0x519928DF02EB5101
- **Return Type**: void
- **Parameters**: Any p0

### _0x1C6306E5BC25C29C
- **Return Type**: void
- **Parameters**: 


## GANG
### NETWORK_IS_GANG_ID_VALID
- **Return Type**: BOOL
- **Parameters**: Any gangId

### NETWORK_IS_GANG_IN_SESSION
- **Return Type**: BOOL
- **Parameters**: Any gangId

### NETWORK_IS_GANG_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Any gangId

### _NETWORK_IS_GANG_OPEN
- **Return Type**: BOOL
- **Parameters**: Any gangId

### _NETWORK_GET_GANG_PRIVACY
- **Return Type**: int
- **Parameters**: 

### _NETWORK_START_GANG
- **Return Type**: void
- **Parameters**: BOOL openStatus, int campSize
- **Description**: openStatus = true -> sets privacyType = 2 (PUBLIC_ADVERTISED) openStatus = false -> sets privacyType = 1 (INVITE_ONLY)  campSize: NET_CAMP_SIZE_SMALLEST = 4, NET_CAMP_SIZE_LARGEST = 7

### _NETWORK_SET_GANG_PRIVACY
- **Return Type**: BOOL
- **Parameters**: int privacyType

### _NETWORK_LEAVE_GANG
- **Return Type**: void
- **Parameters**: BOOL disband

### _NETWORK_KICK_GANG_MEMBER
- **Return Type**: void
- **Parameters**: Player player, int banTimeSeconds
- **Description**: banTimeSeconds is 120 in R* Scripts

### _NETWORK_REQUEST_GANG_JOIN
- **Return Type**: BOOL
- **Parameters**: Any gangId
- **Description**: Returns true if join succeeded, false if failed.

### NETWORK_IS_GANG_LEADER
- **Return Type**: BOOL
- **Parameters**: Player player

### _NETWORK_IS_GANG_MEMBER
- **Return Type**: BOOL
- **Parameters**: Any gangId, Player player

### NETWORK_IS_IN_SAME_GANG
- **Return Type**: BOOL
- **Parameters**: Player player1, Player player2

### _NETWORK_IS_IN_MY_GANG
- **Return Type**: BOOL
- **Parameters**: Player player

### NETWORK_GET_NUM_GANG_MEMBERS
- **Return Type**: int
- **Parameters**: Any gangId

### _NETWORK_GET_GANG_SIZE
- **Return Type**: int
- **Parameters**: Any gangId

### _NETWORK_SET_GANG_SIZE
- **Return Type**: BOOL
- **Parameters**: int size

### NETWORK_GET_GANG_ID
- **Return Type**: Any
- **Parameters**: Player player

### _NETWORK_GET_GANG_MEMBERS
- **Return Type**: int
- **Parameters**: Any gangId, Any* memberHandles

### _0xDA801F7F6A5278D3
- **Return Type**: BOOL
- **Parameters**: Player player
- **Description**: _NETWORK_GET_* or _NETWORK_IS_*

### _0x2F7EB8B6F6AFE79C
- **Return Type**: Any
- **Parameters**: Any p0

### _0x53A94294FDDCF98C
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### NETWORK_GET_GANG_LEADER
- **Return Type**: Player
- **Parameters**: Any gangId

### _NETWORK_GET_GANG_LEADER_HANDLE
- **Return Type**: BOOL
- **Parameters**: Any gangId, Any* gamerHandle

### _0x6102830F764B3DE1
- **Return Type**: BOOL
- **Parameters**: Player player

### _0xB38C256498748413
- **Return Type**: void
- **Parameters**: 

### _0xE4C64CD37CB176AA
- **Return Type**: Any
- **Parameters**: int p0

### _0x7BAA30C9BBE8AEE7
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x0E5C9FB9ED5DFF1C
- **Return Type**: Any
- **Parameters**: Any p0

### _0xB22B1D9F74095382
- **Return Type**: void
- **Parameters**: Any p0

### _0xEE4F20004D0288B7
- **Return Type**: void
- **Parameters**: 

### _0xAD22AB64FA428DF3
- **Return Type**: void
- **Parameters**: Any p0

### _0x48D82C83987E18E4
- **Return Type**: Any
- **Parameters**: Any p0

### _0xA9CEAE8D6637FBAD
- **Return Type**: void
- **Parameters**: Any p0

### _0x51C5EF47086AA0D7
- **Return Type**: Any
- **Parameters**: 

### _0x644E02F24F9D4E98
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x3ADC71A66356D706
- **Return Type**: Any
- **Parameters**: 

### _0xFA7C5B7E087A4CEB
- **Return Type**: Any
- **Parameters**: 

### _0x1F11702DDBD915C6
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x7933754F260B428A
- **Return Type**: Any
- **Parameters**: Player player

### _0xAFD3599A3CC5637D
- **Return Type**: Any
- **Parameters**: 

### _0xC81A9E2C8EFD28D5
- **Return Type**: void
- **Parameters**: Any p0


## GOOGLE_ANALYTICS
### _GOOGLE_ANALYTICS_PUSH_PAGE
- **Return Type**: void
- **Parameters**: const char* pageName

### _GOOGLE_ANALYTICS_POP_PAGE
- **Return Type**: void
- **Parameters**: const char* pageName

### _GOOGLE_ANALYTICS_START_EVENT
- **Return Type**: BOOL
- **Parameters**: const char* eventCategory, const char* eventAction, const char* eventLabel, int eventValue

### _GOOGLE_ANALYTICS_END_EVENT
- **Return Type**: BOOL
- **Parameters**: 


## HUD
### _ENABLE_REDUCED_MENU_TIME_SCALE
- **Return Type**: void
- **Parameters**: 
- **Description**: Enables reduced time scale while menus such as weapon wheel and satchel are open.

### _DISABLE_REDUCED_MENU_TIME_SCALE
- **Return Type**: void
- **Parameters**: 
- **Description**: Disables reduced time scale while menus such as weapon wheel and satchel are open.

### _ENABLE_HUD_CONTEXT_THIS_FRAME
- **Return Type**: void
- **Parameters**: Hash component

### _ENABLE_HUD_CONTEXT
- **Return Type**: void
- **Parameters**: Hash component
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/graphics/HUD/hud_presets Old name: _HIDE_HUD_COMPONENT

### _DISABLE_HUD_CONTEXT
- **Return Type**: void
- **Parameters**: Hash component
- **Description**: Old name: _DISPLAY_HUD_COMPONENT

### _0x7EC0D68233E391AC
- **Return Type**: int
- **Parameters**: int p0

### _BUSYSPINNER_SET_TEXT
- **Return Type**: void
- **Parameters**: const char* text

### BUSYSPINNER_OFF
- **Return Type**: void
- **Parameters**: 
- **Description**: Removes the loading prompt at the bottom right of the screen.

### BUSYSPINNER_IS_ON
- **Return Type**: BOOL
- **Parameters**: 

### CLEAR_ALL_HELP_MESSAGES
- **Return Type**: void
- **Parameters**: 

### TEXT_BLOCK_IS_LOADED
- **Return Type**: BOOL
- **Parameters**: const char* textBlock

### _TEXT_BLOCK_IS_STREAMED
- **Return Type**: BOOL
- **Parameters**: const char* textBlock

### TEXT_BLOCK_REQUEST
- **Return Type**: void
- **Parameters**: const char* textBlock

### _TEXT_BLOCK_DELETE
- **Return Type**: void
- **Parameters**: const char* textBlock

### _DOES_TEXT_BLOCK_EXIST
- **Return Type**: BOOL
- **Parameters**: const char* textDatabase

### DOES_TEXT_LABEL_EXIST
- **Return Type**: BOOL
- **Parameters**: const char* label
- **Description**: Checks if the passed gxt name exists in the game files.

### _0x806862E5D266CF38
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### GET_LENGTH_OF_LITERAL_STRING
- **Return Type**: int
- **Parameters**: const char* string
- **Description**: Returns the length of the string passed (much like strlen).

### GET_LENGTH_OF_LITERAL_STRING_IN_BYTES
- **Return Type**: int
- **Parameters**: const char* string

### IS_RADAR_PREFERENCE_SWITCHED_ON
- **Return Type**: BOOL
- **Parameters**: 

### IS_SUBTITLE_PREFERENCE_SWITCHED_ON
- **Return Type**: BOOL
- **Parameters**: 

### DISPLAY_HUD
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: If Hud should be displayed

### IS_HUD_HIDDEN
- **Return Type**: BOOL
- **Parameters**: 

### IS_RADAR_HIDDEN
- **Return Type**: BOOL
- **Parameters**: 

### IS_RADAR_HIDDEN_BY_SCRIPT
- **Return Type**: BOOL
- **Parameters**: 

### _GET_COLOR_FROM_NAME
- **Return Type**: void
- **Parameters**: Hash colorNameHash, int* red, int* green, int* blue, int* alpha
- **Description**: colorNameHash: https://alloc8or.re/rdr3/doc/enums/eColor.txt

### _DISPLAY_TEXT
- **Return Type**: void
- **Parameters**: const char* text, float xPos, float yPos
- **Description**: nullsub, this native does nothing since build 1436, use _BG_DISPLAY_TEXT (0x16794E044C9EFB58) instead.

### _SET_TEXT_COLOR
- **Return Type**: void
- **Parameters**: int r, int g, int b, int a
- **Description**: This native does nothing since build 1436, use _BG_SET_TEXT_COLOR (0x16FA5CE47F184F1E) instead.

### SET_TEXT_RENDER_ID
- **Return Type**: void
- **Parameters**: int renderId

### REGISTER_NAMED_RENDERTARGET
- **Return Type**: BOOL
- **Parameters**: const char* name, BOOL p1

### IS_NAMED_RENDERTARGET_REGISTERED
- **Return Type**: BOOL
- **Parameters**: const char* name

### RELEASE_NAMED_RENDERTARGET
- **Return Type**: BOOL
- **Parameters**: const char* name

### LINK_NAMED_RENDERTARGET
- **Return Type**: void
- **Parameters**: Hash modelHash

### GET_NAMED_RENDERTARGET_RENDER_ID
- **Return Type**: int
- **Parameters**: const char* name

### IS_NAMED_RENDERTARGET_LINKED
- **Return Type**: BOOL
- **Parameters**: Hash modelHash

### _0x9D37EB5003E0F2CF
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### HIDE_LOADING_ON_FADE_THIS_FRAME
- **Return Type**: void
- **Parameters**: 

### _0x052D4AC0922AF91A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### HIDE_HUD_AND_RADAR_THIS_FRAME
- **Return Type**: void
- **Parameters**: 

### _0x8A59D44189AF2BC5
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x160825DADF1B04B3
- **Return Type**: void
- **Parameters**: 

### _0x9C409BBC492CB5B1
- **Return Type**: Any
- **Parameters**: 

### _0x0501D52D24EA8934
- **Return Type**: Any
- **Parameters**: Any p0

### _0x100157D6D7FE32CA
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x28AE29D909C8FDCE
- **Return Type**: Any
- **Parameters**: Any p0

### _0x2F7BB105144ACF30
- **Return Type**: void
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### _0xBFFF81E12A745A5F
- **Return Type**: void
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### SET_MISSION_NAME
- **Return Type**: void
- **Parameters**: BOOL p0, const char* name

### SET_MISSION_NAME_FOR_UGC_MISSION
- **Return Type**: void
- **Parameters**: BOOL p0, const char* name

### _0xCE0D2F5586627CCE
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION
- **Return Type**: int
- **Parameters**: float worldX, float worldY, float worldZ, float* screenX, float* screenY

### GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION
- **Return Type**: int
- **Parameters**: Vector3 world, float* screenX, float* screenY

### _HIDE_HUD_THIS_FRAME
- **Return Type**: void
- **Parameters**: 

### DISABLE_FRONTEND_THIS_FRAME
- **Return Type**: void
- **Parameters**: 

### _0x5651516D947ABC53
- **Return Type**: void
- **Parameters**: 

### ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME
- **Return Type**: void
- **Parameters**: 
- **Description**: Old name: _ALLOW_PAUSE_MENU_WHEN_DEAD_THIS_FRAME

### SET_FRONTEND_ACTIVE
- **Return Type**: void
- **Parameters**: BOOL active

### IS_PAUSE_MENU_ACTIVE
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Returns true when either Pause Menu, a Frontend Menu, Online Policies menu or Social Club menu is active.

### _SHOW_PLAYER_CORES
- **Return Type**: void
- **Parameters**: BOOL state

### _SHOW_HORSE_CORES
- **Return Type**: void
- **Parameters**: BOOL state

### _0x3FE4FB41EF7D2196
- **Return Type**: void
- **Parameters**: Any p0

### _JOURNAL_WRITE_ENTRY
- **Return Type**: void
- **Parameters**: Any p0

### _JOURNAL_CAN_WRITE_ENTRY
- **Return Type**: Any
- **Parameters**: Any p0

### _JOURNAL_GET_ENTRY_COUNT
- **Return Type**: Any
- **Parameters**: 

### _JOURNAL_GET_ENTRY_AT_INDEX
- **Return Type**: Any
- **Parameters**: Any p0

### _JOURNAL_GET_GRIME_AT_INDEX
- **Return Type**: Any
- **Parameters**: Any p0

### _JOURNAL_GET_ENTRY_INFO
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _JOURNAL_GET_TEXTURE_WITH_LAYOUT
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _JOURNAL_MARK_READ
- **Return Type**: void
- **Parameters**: Any p0

### _JOURNAL_CLEAR_ALL_PROGRESS
- **Return Type**: void
- **Parameters**: 

### UI_REQUEST_SCENE
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xF1E6979C0B779985
- **Return Type**: void
- **Parameters**: int uiscene

### UI_GET_SCENE_UIOBJECT
- **Return Type**: Any
- **Parameters**: Any p0

### UI_MOVIEVIEW_SET_RENDER_TARGET
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _UI_PROMPT_CREATE
- **Return Type**: Prompt
- **Parameters**: Hash inputHash, const char* labelName, Any p2, Any p3, Any p4, int p5

### _UI_PROMPT_REGISTER_BEGIN
- **Return Type**: Prompt
- **Parameters**: 

### _UI_PROMPT_REGISTER_END
- **Return Type**: void
- **Parameters**: Prompt prompt

### _UI_PROMPT_SET_PRIORITY
- **Return Type**: void
- **Parameters**: Prompt prompt, int priority
- **Description**: priority: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/ePromptPriority

### _UI_PROMPT_SET_CONTROL_ACTION
- **Return Type**: Any
- **Parameters**: Prompt prompt, Hash action

### _UI_PROMPT_SET_ALLOWED_ACTION
- **Return Type**: void
- **Parameters**: Prompt prompt, Hash action

### _UI_PROMPT_SET_STANDARD_MODE
- **Return Type**: void
- **Parameters**: Prompt prompt, BOOL releaseMode

### _UI_PROMPT_HAS_STANDARD_MODE_COMPLETED
- **Return Type**: BOOL
- **Parameters**: Prompt prompt, int p1
- **Description**: Params: p1 is 0

### _UI_PROMPT_SET_PRESSED_TIMED_MODE
- **Return Type**: void
- **Parameters**: Prompt prompt, int depletionTimeMs

### _UI_PROMPT_HAS_PRESSED_TIMED_MODE_COMPLETED
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### _UI_PROMPT_HAS_PRESSED_TIMED_MODE_FAILED
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### _UI_PROMPT_SET_HOLD_MODE
- **Return Type**: void
- **Parameters**: Prompt prompt, int holdTimeMs
- **Description**: Params: p2 is 304000 in R* SP Script coachrobberies

### _UI_PROMPT_SET_STANDARDIZED_HOLD_MODE
- **Return Type**: void
- **Parameters**: Prompt prompt, Hash timedEventHash
- **Description**: Hashes: SHORT_TIMED_EVENT_MP, SHORT_TIMED_EVENT, MEDIUM_TIMED_EVENT, LONG_TIMED_EVENT, RUSTLING_CALM_TIMING, PLAYER_FOCUS_TIMING, PLAYER_REACTION_TIMING

### _UI_PROMPT_SET_HOLD_INDEFINITELY_MODE
- **Return Type**: void
- **Parameters**: Prompt prompt

### _UI_PROMPT_SET_HOLD_AUTO_FILL_MODE
- **Return Type**: void
- **Parameters**: Prompt prompt, int autoFillTimeMs, int holdTimeMs

### _UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE
- **Return Type**: void
- **Parameters**: Prompt prompt, int autoFillTimeMs, int holdTimeMs

### _UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### _UI_PROMPT_HAS_HOLD_MODE
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### _UI_PROMPT_IS_HOLD_MODE_RUNNING
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### _UI_PROMPT_HAS_HOLD_MODE_COMPLETED
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### _UI_PROMPT_GET_PROGRESS
- **Return Type**: float
- **Parameters**: Prompt prompt

### _UI_PROMPT_SET_MASH_MODE
- **Return Type**: void
- **Parameters**: Prompt prompt, int mashes

### _UI_PROMPT_SET_MASH_INDEFINITELY_MODE
- **Return Type**: void
- **Parameters**: Prompt prompt

### _UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE
- **Return Type**: void
- **Parameters**: Prompt prompt, int mashes, float p2, float p3

### _UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE
- **Return Type**: void
- **Parameters**: Prompt prompt, int mashes, float p2, float p3

### _UI_PROMPT_SET_MASH_AUTO_FILL_MODE
- **Return Type**: void
- **Parameters**: Prompt prompt, int autoFillTimeMs, int mashes

### _UI_PROMPT_SET_MASH_MANUAL_MODE
- **Return Type**: void
- **Parameters**: Prompt prompt, float p1, float p2, float p3, Any p4

### _UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE
- **Return Type**: void
- **Parameters**: Prompt prompt, float p1, float p2, float p3, Any p4

### _UI_PROMPT_HAS_MANUAL_MASH_MODE
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### _UI_PROMPT_HAS_MASH_MODE
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### _0xB0E8599243B3F568
- **Return Type**: Any
- **Parameters**: Any p0

### _UI_PROMPT_HAS_MASH_MODE_COMPLETED
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### _UI_PROMPT_HAS_MASH_MODE_FAILED
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### _UI_PROMPT_GET_MASH_MODE_PROGRESS
- **Return Type**: float
- **Parameters**: Prompt prompt

### _UI_PROMPT_SET_MASH_MANUAL_MODE_INCREASE_PER_PRESS
- **Return Type**: void
- **Parameters**: Prompt prompt, float rate
- **Description**: standard (prompt not held) rate: (1f / 128f) fast (prompt held) rate: (1f / 64f) punitive (been hit) rate: (1f / 128f)

### _UI_PROMPT_SET_MASH_MANUAL_MODE_DECAY_SPEED
- **Return Type**: void
- **Parameters**: Prompt prompt, float speed
- **Description**: standard (prompt not held) rate: 0.035f fast (prompt held) rate: 0.015f punitive (been hit) rate: 0.14f

### _UI_PROMPT_SET_MASH_MANUAL_MODE_PRESSED_GROWTH_SPEED
- **Return Type**: void
- **Parameters**: Prompt prompt, float speed

### _UI_PROMPT_SET_ROTATE_MODE
- **Return Type**: void
- **Parameters**: Prompt prompt, float p1, BOOL counterclockwise
- **Description**: Used for controllers

### _UI_PROMPT_SET_TARGET_MODE
- **Return Type**: void
- **Parameters**: Prompt prompt, float p1, float p2, Any p3

### _UI_PROMPT_SET_TARGET_MODE_TARGET
- **Return Type**: void
- **Parameters**: Prompt prompt, float p1, float p2

### _UI_PROMPT_SET_TARGET_MODE_PROGRESS
- **Return Type**: void
- **Parameters**: Prompt prompt, float progress

### _UI_PROMPT_SET_BEAT_MODE
- **Return Type**: void
- **Parameters**: Prompt prompt, BOOL toggle

### _UI_PROMPT_WAS_BEAT_MODE_PRESSED_IN_TIME_WINDOW
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### _UI_PROMPT_SET_BEAT_MODE_GRAYED_OUT
- **Return Type**: void
- **Parameters**: Prompt prompt, Any p1

### _UI_PROMPT_RESTART_MODES
- **Return Type**: void
- **Parameters**: Prompt prompt

### _UI_PROMPT_SET_SPINNER_SPEED
- **Return Type**: void
- **Parameters**: Prompt prompt, Any p1

### _UI_PROMPT_SET_SPINNER_POSITION
- **Return Type**: void
- **Parameters**: Prompt prompt, Any p1

### _UI_PROMPT_SET_URGENT_PULSING_ENABLED
- **Return Type**: void
- **Parameters**: Prompt prompt, BOOL toggle

### _UI_PROMPT_GET_URGENT_PULSING_ENABLED
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### _UI_PROMPT_SET_TAG
- **Return Type**: void
- **Parameters**: Prompt prompt, Any p1

### _UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY
- **Return Type**: int
- **Parameters**: Entity entity

### _UI_PROMPT_GET_GROUP_ID_FOR_SCENARIO_POINT
- **Return Type**: int
- **Parameters**: Any p0, int p1

### _UI_PROMPT_SET_GROUP
- **Return Type**: void
- **Parameters**: Prompt prompt, int groupId, int tabIndex
- **Description**: tabIndex: specifies tab of prompt

### _UI_PROMPT_REMOVE_GROUP
- **Return Type**: void
- **Parameters**: Prompt prompt, Any p1

### _UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME
- **Return Type**: Any
- **Parameters**: Hash hash, const char* name, int tabAmount, int tabDefaultIndex, int p4, Prompt prompt
- **Description**: Note: you must use VAR_STRING for p1 if string is not part of text database tabAmount: specifies number of tabs in prompt group tabDefaultIndex: specifies starting index p3 if is set > 3 you can no longer press Q to change tab if there are more than one tab set in tabAmount

### _UI_PROMPT_GET_GROUP_ACTIVE_PAGE
- **Return Type**: int
- **Parameters**: Hash hash

### _UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME
- **Return Type**: Any
- **Parameters**: Entity entity, float p1, int p2, int p3, Hash p4, const char* name, int p6

### _0x8B55B324A9123F6B
- **Return Type**: Any
- **Parameters**: int groupId, Volume volume, const char* p2, Any p3, Any p4, Any p5

### _UI_PROMPT_DOES_AMBIENT_GROUP_EXIST
- **Return Type**: BOOL
- **Parameters**: Hash hash

### _UI_PROMPT_ADD_GROUP_LINK
- **Return Type**: void
- **Parameters**: Any p0, Prompt prompt, Any p2

### _UI_PROMPT_ADD_GROUP_RETURN_LINK
- **Return Type**: void
- **Parameters**: Any p0, Prompt prompt

### _UI_PROMPT_SET_TRANSPORT_MODE
- **Return Type**: void
- **Parameters**: Prompt prompt, int mode
- **Description**: TM_ANY = 0, TM_ON_FOOT, TM_IN_VEHICLE

### _UI_PROMPT_DISABLE_PROMPTS_THIS_FRAME
- **Return Type**: void
- **Parameters**: 

### _UI_PROMPT_DELETE
- **Return Type**: void
- **Parameters**: Prompt prompt

### _UI_PROMPT_IS_VALID
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### _UI_PROMPT_IS_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### _UI_PROMPT_SET_VISIBLE
- **Return Type**: void
- **Parameters**: Prompt prompt, BOOL toggle

### _UI_PROMPT_SET_ENABLED
- **Return Type**: void
- **Parameters**: Prompt prompt, BOOL toggle

### _UI_PROMPT_SET_TEXT
- **Return Type**: void
- **Parameters**: Prompt prompt, const char* text

### _UI_PROMPT_SET_ATTRIBUTE
- **Return Type**: void
- **Parameters**: Prompt prompt, int attribute, BOOL enabled
- **Description**: attribute: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/eUIPromptAttribute

### _UI_PROMPT_SET_TYPE
- **Return Type**: void
- **Parameters**: Prompt prompt, int type
- **Description**: Params: type = mostly 0, 6 (net_mission_intro_story_gvo), 7 (fm_mission_controller), 14 (net_ugc_end_flow_transition_online), 15 (net_main_[tlg_]offline)

### _0x53CE46C01A089DA1
- **Return Type**: void
- **Parameters**: Prompt prompt, BOOL p1

### _UI_PROMPT_SET_MANUAL_RESOLVED
- **Return Type**: void
- **Parameters**: Prompt prompt, Any p1

### _UI_PROMPT_CONTEXT_SET_VOLUME
- **Return Type**: void
- **Parameters**: Prompt prompt, Volume volume
- **Description**: Attaches a Volume

### _UI_PROMPT_CONTEXT_SET_POINT
- **Return Type**: void
- **Parameters**: Prompt prompt, float x, float y, float z

### _UI_PROMPT_CONTEXT_SET_POINT
- **Return Type**: void
- **Parameters**: Prompt prompt, Vector3 vec

### _UI_PROMPT_CONTEXT_SET_RADIUS
- **Return Type**: void
- **Parameters**: Prompt prompt, float radius

### _UI_PROMPT_IS_PRESSED
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### _UI_PROMPT_IS_JUST_PRESSED
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### _UI_PROMPT_IS_JUST_RELEASED
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### _UI_PROMPT_IS_RELEASED
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### _UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME
- **Return Type**: void
- **Parameters**: int p0
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/graphics/HUD/prompts/prompt_types

### _UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME
- **Return Type**: void
- **Parameters**: int p0

### _UI_PROMPT_FILTER_CLEAR
- **Return Type**: void
- **Parameters**: 

### _UI_PROMPT_SET_PROMPT_PRIORITY_PREFERENCE
- **Return Type**: void
- **Parameters**: Ped ped

### _UI_PROMPT_CLEAR_PROMPT_PRIORITY_PREFERENCE
- **Return Type**: void
- **Parameters**: 

### _UI_PROMPT_IS_ENABLED
- **Return Type**: BOOL
- **Parameters**: Prompt prompt

### UI_PROMPT_IS_CONTROL_ACTION_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Hash controlAction

### _0xD6BD313CFA41E57A
- **Return Type**: Any
- **Parameters**: Any p0

### _UI_PROMPT_SET_REGISTER_HORIZONTAL_ORIENTATION
- **Return Type**: int
- **Parameters**: 
- **Description**: This returns an id that can be used with 0x6095358C4142932A.

### _UI_PROMPT_CLEAR_HORIZONTAL_ORIENTATION
- **Return Type**: void
- **Parameters**: int id
- **Description**: id is the return value from 0xD9459157EB22C895.

### _UI_PROMPT_SET_ORDERING_AS_INPUT_TYPE
- **Return Type**: void
- **Parameters**: Prompt prompt, Any p1

### _0x066725A9D52B3641
- **Return Type**: Any
- **Parameters**: 

### _0x958278B97C4AFFD8
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _CREATE_MP_GAMER_TAG
- **Return Type**: int
- **Parameters**: Player player, const char* username, BOOL pointedClanTag, BOOL isRockstarClan, const char* clanTag, int clanFlag

### CREATE_FAKE_MP_GAMER_TAG
- **Return Type**: int
- **Parameters**: Ped ped, const char* username, BOOL pointedClanTag, BOOL isRockstarClan, const char* clanTag, int clanFlag

### _CREATE_MP_GAMER_TAG_ON_ENTITY
- **Return Type**: int
- **Parameters**: Entity entity, const char* text

### REMOVE_MP_GAMER_TAG
- **Return Type**: void
- **Parameters**: int gamerTagId

### IS_MP_GAMER_TAG_ACTIVE
- **Return Type**: BOOL
- **Parameters**: int gamerTagId

### _IS_MP_GAMER_TAG_ACTIVE_ON_ENTITY
- **Return Type**: BOOL
- **Parameters**: int gamerTagId, Entity entity

### _SET_MP_GAMER_TAG_VISIBILITY
- **Return Type**: void
- **Parameters**: int gamerTagId, int visibility
- **Description**: visibility: enum eUIGamertagVisibility { UIGAMERTAGVISIBILITY_NONE, UIGAMERTAGVISIBILITY_ICON, UIGAMERTAGVISIBILITY_SIMPLE, UIGAMERTAGVISIBILITY_COMPLEX };

### _SET_MP_GAMER_TAG_TYPE
- **Return Type**: void
- **Parameters**: int gamerTagId, Hash type
- **Description**: Found types: GENERIC_PLAYER, DEADDROP, HOTPROPERTY, MINIGAMES

### _SET_MP_GAMER_TAG_COLOUR
- **Return Type**: void
- **Parameters**: int gamerTagId, Hash colour

### _SET_MP_GAMER_TAG_UNK_ALLOW_LOCALIZED
- **Return Type**: void
- **Parameters**: int gamerTagId, BOOL allow
- **Description**: nullsub, doesn't do anything

### SET_MP_GAMER_TAG_NAME
- **Return Type**: void
- **Parameters**: int gamerTagId, const char* string

### _SET_MP_GAMER_TAG_NAME_POSSE
- **Return Type**: void
- **Parameters**: int gamerTagId, const char* text

### SET_MP_GAMER_TAG_BIG_TEXT
- **Return Type**: void
- **Parameters**: int gamerTagId, const char* string

### _SET_MP_GAMER_TAG_TOP_ICON
- **Return Type**: void
- **Parameters**: int gamerTagId, Hash icon
- **Description**: Found icons: https://pastebin.com/xx6rEgiG

### _SET_MP_GAMER_TAG_SECONDARY_ICON
- **Return Type**: void
- **Parameters**: int gamerTagId, Hash icon
- **Description**: Found icons: SPEAKER, THROPY

### _MP_GAMER_TAG_ENABLE_REVIVE_TOP_ICON
- **Return Type**: void
- **Parameters**: int gamerTagId

### _MP_GAMER_TAG_DISABLE_REVIVE_TOP_ICON
- **Return Type**: void
- **Parameters**: int gamerTagId


## IK
### _INVERSE_KINEMATICS_REQUEST_LOOK_AT
- **Return Type**: void
- **Parameters**: Ped ped, Any* args

### _0x0B9F7A01EC50448D
- **Return Type**: void
- **Parameters**: Ped ped, Any* args

### _INVERSE_KINEMATICS_SET_DISABLED_FOR_PED
- **Return Type**: void
- **Parameters**: Ped ped, int p1, BOOL p2
- **Description**: Seems to disable IK on ped

### _0x6098139150DCC745
- **Return Type**: BOOL
- **Parameters**: Ped ped, int p1

### _0x873C792E07A32C8B
- **Return Type**: void
- **Parameters**: Ped ped1, Ped ped2


## INTERACTION
### SET_MOUSE_CURSOR_THIS_FRAME
- **Return Type**: void
- **Parameters**: 
- **Description**: Shows the cursor on screen for one frame.  Old name: _SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME

### SET_MOUSE_CURSOR_STYLE
- **Return Type**: void
- **Parameters**: int spriteId
- **Description**: Changes the mouse cursor's sprite.  spriteId's: https://github.com/femga/rdr3_discoveries/tree/master/graphics/HUD/cursor_sprites#readme  Old name: _SET_MOUSE_CURSOR_SPRITE

### _SET_ALLOW_FIRST_PERSON_MOUSE_CAMERA_MOVEMENT
- **Return Type**: void
- **Parameters**: 
- **Description**: Allows camera to be moved if middle mouse button is held while in first person Must be called every frame _SET*

### _POINTER_IS_BEING_MOVED
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Returns true if player is moving mouse while cursor is active _PI* - _PO*

### _POINTER_IS_LEFT_BUTTON_HELD
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Returns true if player is holding LMB while cursor is active _PI* - _PO*

### _POINTER_IS_LEFT_BUTTON_JUST_RELEASED
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Returns true if player releases LMB if cursor is active _PI* - _PO*


## INTERIOR
### IS_VALID_INTERIOR
- **Return Type**: BOOL
- **Parameters**: Interior interior

### GET_INTERIOR_LOCATION_AND_NAMEHASH
- **Return Type**: void
- **Parameters**: Interior interior, Vector3* position, Hash* nameHash

### _GET_INTERIOR_MINIMAP_HASH
- **Return Type**: Hash
- **Parameters**: Interior interior

### _GET_INTERIOR_POSITION
- **Return Type**: Vector3
- **Parameters**: Interior interior

### IS_INTERIOR_SCENE
- **Return Type**: BOOL
- **Parameters**: 

### CLEAR_ROOM_FOR_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity

### FORCE_ROOM_FOR_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity, Interior interior, Hash roomHashKey

### GET_ROOM_KEY_FROM_ENTITY
- **Return Type**: Hash
- **Parameters**: Entity entity
- **Description**: Gets the room hash key from the room that the specified entity is in. Each room in every interior has a unique key. Returns 0 if the entity is outside.

### GET_KEY_FOR_ENTITY_IN_ROOM
- **Return Type**: Hash
- **Parameters**: Entity entity
- **Description**: Seems to do the exact same as INTERIOR::GET_ROOM_KEY_FROM_ENTITY

### GET_INTERIOR_FROM_ENTITY
- **Return Type**: Interior
- **Parameters**: Entity entity
- **Description**: Returns the handle of the interior that the entity is in. Returns 0 if outside.

### RETAIN_ENTITY_IN_INTERIOR
- **Return Type**: void
- **Parameters**: Entity entity, Interior interior

### FORCE_ROOM_FOR_GAME_VIEWPORT
- **Return Type**: void
- **Parameters**: int interiorID, Hash roomHashKey

### CLEAR_ROOM_FOR_GAME_VIEWPORT
- **Return Type**: void
- **Parameters**: 

### GET_INTERIOR_FROM_PRIMARY_VIEW
- **Return Type**: Interior
- **Parameters**: 

### GET_INTERIOR_AT_COORDS
- **Return Type**: Interior
- **Parameters**: float x, float y, float z

### GET_INTERIOR_AT_COORDS
- **Return Type**: Interior
- **Parameters**: Vector3 vec

### PIN_INTERIOR_IN_MEMORY
- **Return Type**: void
- **Parameters**: Interior interior

### UNPIN_INTERIOR
- **Return Type**: void
- **Parameters**: Interior interior
- **Description**: Does something similar to INTERIOR::DISABLE_INTERIOR.  You don't fall through the floor but everything is invisible inside and looks the same as when INTERIOR::DISABLE_INTERIOR is used. Peds behaves normally inside.

### IS_INTERIOR_READY
- **Return Type**: BOOL
- **Parameters**: Interior interior

### SET_INTERIOR_IN_USE
- **Return Type**: BOOL
- **Parameters**: Interior interior
- **Description**: Actually returns void in IDA but the script header defines a BOOL return type

### GET_INTERIOR_AT_COORDS_WITH_TYPE
- **Return Type**: Interior
- **Parameters**: float x, float y, float z, const char* interiorType

### GET_INTERIOR_AT_COORDS_WITH_TYPE
- **Return Type**: Interior
- **Parameters**: Vector3 vec, const char* interiorType

### GET_INTERIOR_AT_COORDS_WITH_TYPEHASH
- **Return Type**: Interior
- **Parameters**: float x, float y, float z, Hash typeHash
- **Description**: Hashed version of GET_INTERIOR_AT_COORDS_WITH_TYPE

### GET_INTERIOR_AT_COORDS_WITH_TYPEHASH
- **Return Type**: Interior
- **Parameters**: Vector3 vec, Hash typeHash

### IS_COLLISION_MARKED_OUTSIDE
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z
- **Description**: Returns true if the collision at the specified coords is marked as being outside (false if there's an interior)

### IS_COLLISION_MARKED_OUTSIDE
- **Return Type**: BOOL
- **Parameters**: Vector3 vec

### GET_INTERIOR_FROM_COLLISION
- **Return Type**: int
- **Parameters**: float x, float y, float z

### GET_INTERIOR_FROM_COLLISION
- **Return Type**: int
- **Parameters**: Vector3 vec

### ACTIVATE_INTERIOR_ENTITY_SET
- **Return Type**: void
- **Parameters**: Interior interior, const char* entitySetName, int p2
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/interiors/interior_sets

### DEACTIVATE_INTERIOR_ENTITY_SET
- **Return Type**: void
- **Parameters**: Interior interior, const char* entitySetName, BOOL p2

### IS_INTERIOR_ENTITY_SET_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Interior interior, const char* entitySetName

### _IS_INTERIOR_ENTITY_SET_VALID
- **Return Type**: BOOL
- **Parameters**: Interior interior, const char* entitySetName

### DISABLE_INTERIOR
- **Return Type**: void
- **Parameters**: Interior interior, BOOL toggle

### _0x2533F2AB0EB9C6F9
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xFE2B3D5500B1B2E4
- **Return Type**: void
- **Parameters**: Any p0, Any p1


## INVENTORY
### _INVENTORY_GET_INVENTORY_ID_FROM_PED
- **Return Type**: int
- **Parameters**: Ped ped
- **Description**: Returns a unique inventory ID for this ped. For the local player ped, it is an eInventories value. For other peds, it is the inventory address casted to unsigned int.  enum eInventories { INVENTORY_INVALID, INVENTORY_SP_PLAYER, INVENTORY_MP_PLAYER, INVENTORY_MP_MISSION, INVENTORY_SECOND_SCREEN, INVENTORY_SP_BACKUP, INVENTORY_SP_SNAPSHOT, INVENTORY_0xDE2AE452, INVENTORY_0x399D9B3A, INVENTORY_0x4BD43FA7, INVENTORY_0x9529D251, INVENTORY_0xA75776AC, INVENTORY_MAX_ID = 11, INVENTORY_IDS_COUNT };

### _GET_ITEM_ROLE_MAX_LEVEL_COUNT
- **Return Type**: int
- **Parameters**: int inventoryId, Hash eRoleMaxLevel

### _GET_ITEM_SLOT_MAX_COUNT
- **Return Type**: int
- **Parameters**: Hash provision, Hash slotId

### _0x112BCA290D2EB53C
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Hash p1, int* year, int* month, int* day, int* hour, int* minute, int* second
- **Description**: Only used in R* SP Scripts

### _0x46743BBFEDBC859E
- **Return Type**: void
- **Parameters**: int inventoryId, Hash eInventoryItem, BOOL p2
- **Description**: eInventoryItem: CLOTHING_FANCY_SUIT, CLOTHING_GUNSLINGER_OUTFIT, etc. Only used in R* SP Scripts

### _INVENTORY_SET_INVENTORY_ITEM_IN_USE
- **Return Type**: void
- **Parameters**: int inventoryId, Any* guid, BOOL inUse
- **Description**: Only works on CClothingItem

### _INVENTORY_GET_INVENTORY_ITEM_IN_USE
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Any* guid

### _INVENTORY_SET_INVENTORY_ITEM_HIDDEN
- **Return Type**: void
- **Parameters**: int inventoryId, Any* guid, BOOL hidden
- **Description**: Used with CClothingItem

### _INVENTORY_SET_INVENTORY_ITEM_HIDDEN_2
- **Return Type**: void
- **Parameters**: int inventoryId, Any* guid, BOOL hidden
- **Description**: Used with CSatchelItem, R* Script usage: fisihing_core

### _INVENTORY_GET_INVENTORY_ITEM_HIDDEN
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Any* guid

### _INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT
- **Return Type**: BOOL
- **Parameters**: Hash item

### _INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH
- **Return Type**: Hash
- **Parameters**: Hash item

### _INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED
- **Return Type**: BOOL
- **Parameters**: Hash item, int flag
- **Description**: flag: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/ItemDatabaseItemFlags 2097152 (is item read?), 8388608 (is item sent/received/mailable?), 16777216 (is item consumable?)

### _INVENTORY_GET_IS_INVENTORY_ITEM_SOUND_VALID
- **Return Type**: BOOL
- **Parameters**: Hash item, int soundType
- **Description**: soundType: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/CItemInfoSoundsInterface__sSoundsInfo__eSoundType

### _INVENTORY_GET_INVENTORY_ITEM_SOUND
- **Return Type**: Hash
- **Parameters**: Hash item, int soundType
- **Description**: soundType: see 0x2BAE4880DCDD560B Returns item Hash to be used with _IS_SCRIPTED_AUDIO_CUSTOM and _PLAY_SOUND_FROM_ITEM (p0)

### _INVENTORY_GET_INVENTORY_ITEM_INSPECTION_INFO
- **Return Type**: BOOL
- **Parameters**: Hash item, Any* info

### _INVENTORY_GET_INVENTORY_ITEM_WEAPON_COPY_ID
- **Return Type**: int
- **Parameters**: int inventoryId, Any* guid
- **Description**: Returns CopyID

### _INVENTORY_ARE_LOCAL_CHANGES_ALLOWED
- **Return Type**: BOOL
- **Parameters**: int inventoryId
- **Description**: inventoryId: see _INVENTORY_GET_PED_INVENTORY_ID

### _INVENTORY_IS_GUID_VALID
- **Return Type**: BOOL
- **Parameters**: Any* guid

### _INVENTORY_COMPARE_GUIDS
- **Return Type**: BOOL
- **Parameters**: Any* guid1, Any* guid2

### INVENTORY_GET_GUID_FROM_ITEMID
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Any* guid, Hash p2, Hash slotId, Any* outGuid

### _0x5D6182F3BCE1333B
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Hash removeReason
- **Description**: removeReason: REMOVE_REASON_DEFAULT (eRemoveItemReason) Example: INVENTORY::_0x5D6182F3BCE1333B(1, joaat("REMOVE_REASON_DEFAULT")); -> clears weapon wheel Only used in R* SP Scripts

### INVENTORY_GET_INVENTORY_ITEM
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Any* inData, Any* outData, BOOL p3

### _INVENTORY_GET_FULL_INVENTORY_ITEM_DATA
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Any* guid, Any* p2, int p3, int p4

### _INVENTORY_GET_INVENTORY_ITEM_CHILD
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Any* parentGuid, Any childIndex, Any* outInventoryItem

### _INVENTORY_ADD_ITEM_WITH_GUID
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Any* guid1, Any* guid2, Hash item, Hash inventoryItemSlot, int p5, Hash addReason
- **Description**: inventoryItemSlotHash: https://pastebin.com/P6fyr3vr

### _INVENTORY_UPDATE_INVENTORY_ITEM
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Any* guid1, Any* guid2, int p3
- **Description**: Getter: _INVENTORY_GET_FULL_INVENTORY_ITEM_DATA

### _INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Any* guid, int quantity, Hash removeReason

### _INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Hash item, int quantity, Hash removeReason

### _INVENTORY_MOVE_INVENTORY_ITEM
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Any* guid1, Any* guid2, Hash slotId, int quantity, Any* outGuid
- **Description**: guid1: old parent GUID guid2: new parent GUID guid3: new item GUID (out param)

### _INVENTORY_SWAP_INVENTORY_ITEM
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Any* guid1, Any* guid2

### _INVENTORY_CREATE_ITEM_COLLECTION
- **Return Type**: int
- **Parameters**: int inventoryId, const char* filterName, Hash slotId, int* size
- **Description**: filterName (collections): "ALL", "ALL SATCHEL", "ALL HORSES", "ALL COACHES", "ALL MOUNTS", "ALL CLOTHING", "ALL WEAPONS", "ALL SATCHEL EXCLUDING CLOTHING", "ALL EXCLUDING CLOTHING" slotId: -1591664384 p3: outCollectionSize (?) Returns collectionId

### _INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER
- **Return Type**: int
- **Parameters**: int inventoryId, Any* filter, int* numInCollection

### _INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX
- **Return Type**: BOOL
- **Parameters**: int collectionId, int itemIndex, Any* itemData
- **Description**: collectionId is < outCollectionSize

### _INVENTORY_RELEASE_ITEM_COLLECTION
- **Return Type**: BOOL
- **Parameters**: int collectionId
- **Description**: Max num of collections is 5, so release your unused ones.

### _INVENTORY_EQUIP_ITEM_WITH_GUID
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Any* guid, BOOL bEquipped

### _INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Any* guid, Hash slotId, Any* outGuid

### _INVENTORY_DOES_ITEM_OWN_EQUIPMENT
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Any* guid, Hash item

### _0xD08685BA892DBFAB
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Any* guid, int* p2, int* p3
- **Description**: Params: p3 returns an int between 0 and 20 (?) Only used in R* SP Scripts

### _0x0349404A22736740
- **Return Type**: void
- **Parameters**: BOOL p0, int inventoryId, Any* guid
- **Description**: Params: p0 is only 0 or 1 Only used in R* SP Scripts

### _INVENTORY_SET_INVENTORY_ITEM_WEATHER_EFFECTIVENESS
- **Return Type**: void
- **Parameters**: int inventoryId, Any* guid, int weatherEffectiveness
- **Description**: OWE_INVALID = -1, OWE_GOOD_IN_HOT OWE_GOOD_IN_NONE OWE_GOOD_IN_COLD OWE_GOOD_IN_ALL

### _INVENTORY_DISABLE_ITEM
- **Return Type**: void
- **Parameters**: int inventoryId, Hash item, Hash gtxReason
- **Description**: Example: (1, WEAPON_REVOLVER_CATTLEMAN, 0) - disables cattleman revolver on weapon wheel

### _INVENTORY_ENABLE_ITEM
- **Return Type**: void
- **Parameters**: int inventoryId, Hash item

### _INVENTORY_IS_INVENTORY_ITEM_EQUIPPED
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Hash item, BOOL p2
- **Description**: Alternative Name: _INVENTORY_IS_ITEM_DISABLED

### _INVENTORY_SET_INVENTORY_ITEM_INSPECTION_ENABLED
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Any* p1, BOOL enabled

### _INVENTORY_IS_ITEM_EXPIRED
- **Return Type**: BOOL
- **Parameters**: Any* itemGUID

### _INVENTORY_GET_ITEM_EXPIRY_TIME
- **Return Type**: int
- **Parameters**: Any* itemGUID

### _INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID
- **Return Type**: int
- **Parameters**: int inventoryId, Any* guid, BOOL p2

### _INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID
- **Return Type**: int
- **Parameters**: int inventoryId, Hash eInventoryItem, BOOL p2

### _0xB1DD74A1F5536622
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Any* itemGUID

### _INVENTORY_GET_CHILDREN_COUNT
- **Return Type**: int
- **Parameters**: int inventoryId, Any* parentGuid

### INVENTORY_GET_CHILDREN_IN_SLOT_COUNT
- **Return Type**: int
- **Parameters**: int inventoryId, Any* guid, Hash slotId

### _INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT
- **Return Type**: int
- **Parameters**: int inventoryId, Any* guid, Hash slotId, int p3, Any* p4

### _INVENTORY_FITS_SLOT_ID
- **Return Type**: BOOL
- **Parameters**: Hash item, Hash slotId

### _GET_DEFAULT_ITEM_SLOT_INFO
- **Return Type**: Hash
- **Parameters**: Hash item, Hash p1
- **Description**: p1: WARDROBE, KIT_CAMP, CHARACTER, KIT_MOONSHINER_PROPERTY Returns slot hash

### _INVENTORY_GET_INVENTORY_ITEM_FIT_SLOT
- **Return Type**: BOOL
- **Parameters**: Hash p0, Any* p1, int p2

### _0x9AC53CB6907B4428
- **Return Type**: BOOL
- **Parameters**: Hash item, Any* p1, Any* p2
- **Description**: p1 (out) and p2 (in) are both script arrays? item: can be a component item, see SHOP_CATALOG_BUILD_LIST_OF_WEAPON_COMPONENTS

### _0x9D21B185ABC2DBC4
- **Return Type**: Hash
- **Parameters**: Any data, const char* effects, BOOL p2, BOOL p3
- **Description**: p0 is the return value of DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH p2, p3: 0 Returns databindingEntryId

### _0x75CFAC49301E134F
- **Return Type**: void
- **Parameters**: Hash databindingEntryId, BOOL p1, BOOL p2
- **Description**: p1, p2: 0

### _0x9D21B185ABC2DBC5
- **Return Type**: Hash
- **Parameters**: Any data, const char* stats, int p2, int p3
- **Description**: p2: 0 p3: -1 Returns databindingEntryId to be used with 0x75CFAC49301E134E (p0)

### _0x75CFAC49301E134E
- **Return Type**: void
- **Parameters**: Any data, BOOL p1, Ped ped
- **Description**: p0: value returned by 0x9D21B185ABC2DBC5

### _0x46DB71883EE9D5AF
- **Return Type**: Hash
- **Parameters**: Any data, const char* stats, Any* guid, Ped ped
- **Description**: Returns databindingEntryId to be used with 0x951847CEF3D829FF (p0)

### _0x951847CEF3D829FF
- **Return Type**: void
- **Parameters**: Any p0, Any* outGuid, Ped ped
- **Description**: p0: value returned by 0x46DB71883EE9D5AF

### _0x6862E4D93F64CF01
- **Return Type**: BOOL
- **Parameters**: int inventoryId, Any* guid, Hash p2, Any* p3
- **Description**: Only used in R* SP Scripts

### _SET_USE_MISSION_INVENTORY
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: This native has no functionality.

### INVENTORY_DISABLE_MISSION_INVENTORY_PICKUPS
- **Return Type**: void
- **Parameters**: 

### _INVENTORY_USE_MISSION_INVENTORY
- **Return Type**: void
- **Parameters**: BOOL enable, BOOL mirrorTransactions

### INVENTORY_COPY_MP_INVENTORY_TO_MISSION_INVENTORY
- **Return Type**: void
- **Parameters**: BOOL p0, BOOL p1, BOOL bCopySatchelItems, BOOL bCopyEmotes, BOOL bCopyHorse, BOOL p5

### _INVENTORY_COPY_ITEM_TO_MISSION_INVENTORY
- **Return Type**: void
- **Parameters**: Any* guid, BOOL p1

### _0xE36D4A38D28D9CFB
- **Return Type**: void
- **Parameters**: BOOL p0
- **Description**: Only used in R* SP Scripts

### _INVENTORY_USE_SP_BACKUP
- **Return Type**: BOOL
- **Parameters**: 

### _INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS
- **Return Type**: BOOL
- **Parameters**: 

### _INVENTORY_COPY_ITEM_TO_INVENTORY
- **Return Type**: void
- **Parameters**: int inventoryId, int inventoryIdCloned, Any* p2, Any p3

### _0x9E58207B194488AC
- **Return Type**: void
- **Parameters**: Ped ped, int p1

### _SET_ITEM_PROMPT_INFO_REQUEST
- **Return Type**: void
- **Parameters**: Any* p0

### _0x9B4E793B1CB6550A
- **Return Type**: void
- **Parameters**: 
- **Description**: Used in function SET_SHOP_BEING_ROBBED and many other shop related scripts and functions. INVENTORY_A*

### _SET_CARRIABLE_CARRY_ACTION_PROMPT_OVERRIDE
- **Return Type**: void
- **Parameters**: Any* data

### _INVENTORY_ENABLE_WEAPONS
- **Return Type**: void
- **Parameters**: int inventoryId

### _INVENTORY_DISABLE_WEAPONS
- **Return Type**: void
- **Parameters**: int inventoryId, Any p1
- **Description**: Params: p1 = 0

### _0xE1F45A67A9F0DCBC
- **Return Type**: void
- **Parameters**: int inventoryId
- **Description**: Only used in R* SP Scripts

### _0x6968CE7AC32F6788
- **Return Type**: void
- **Parameters**: int inventoryId
- **Description**: Only used in R* SP Scripts

### _INVENTORY_CREATE_ITEM_COLLECTION_2
- **Return Type**: int
- **Parameters**: int* collectionSize
- **Description**: Returns collectionId

### _INVENTORY_CREATE_SORTED_COLLECTION
- **Return Type**: int
- **Parameters**: int inventoryId, int p1, int* size
- **Description**: p1: 32 Returns collectionId


## ITEMDATABASE
### _ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY
- **Return Type**: BOOL
- **Parameters**: Hash key, Hash category, Hash slotId

### _ITEMDATABASE_GET_FITS_SLOT_COUNT
- **Return Type**: int
- **Parameters**: Hash category

### _ITEMDATABASE_GET_FITS_SLOT_INFO
- **Return Type**: BOOL
- **Parameters**: Hash category, int index, Hash* outSlotId

### _ITEMDATABASE_GET_HAS_SLOT_COUNT
- **Return Type**: int
- **Parameters**: Hash category

### _ITEMDATABASE_GET_HAS_SLOT_INFO
- **Return Type**: BOOL
- **Parameters**: Hash category, int index, Hash* outSlotId

### ITEMDATABASE_FILLOUT_ITEM_BY_NAME
- **Return Type**: BOOL
- **Parameters**: Hash key, Any* outData

### ITEMDATABASE_FILLOUT_ITEM_INFO
- **Return Type**: BOOL
- **Parameters**: Hash key, Any* outData

### _ITEMDATABASE_FILLOUT_ACQUIRE_COST
- **Return Type**: BOOL
- **Parameters**: Hash key, Hash costtype, Any* outData

### _ITEMDATABASE_FILLOUT_SELL_PRICE
- **Return Type**: BOOL
- **Parameters**: Hash key, Hash sellType, Any* outData
- **Description**: Params: sellType = SELL_SHOP_DEFAULT

### _ITEMDATABASE_FILLOUT_SATCHEL_DATA
- **Return Type**: BOOL
- **Parameters**: Hash key, int* outSatchelItemSize

### _ITEMDATABASE_FILLOUT_UI_DATA
- **Return Type**: BOOL
- **Parameters**: Hash key, Any* outData

### _ITEMDATABASE_FILLOUT_BUNDLE_UI_DATA
- **Return Type**: BOOL
- **Parameters**: Hash bundle, Any* outData

### _ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS
- **Return Type**: BOOL
- **Parameters**: Hash key, Any* outData

### ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO
- **Return Type**: BOOL
- **Parameters**: Hash key, Any* outData

### _ITEMDATABASE_FILLOUT_TAG_DATA
- **Return Type**: BOOL
- **Parameters**: Hash key, Any* outData, int* outIndex, int p3

### _ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT
- **Return Type**: int
- **Parameters**: Hash key
- **Description**: Returns the number of <Item>s <acquirecosts> has from the key in catalog_sp.ymt

### _ITEMDATABASE_GET_ACQUIRE_COST
- **Return Type**: BOOL
- **Parameters**: Hash key, int index, Any* outData

### _ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_FROM_COST_TYPE
- **Return Type**: int
- **Parameters**: Hash key, Hash costtype

### _ITEMDATABASE_FILLOUT_ITEM
- **Return Type**: BOOL
- **Parameters**: Hash key, Hash costtype, int index, Any* outData

### _ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT
- **Return Type**: int
- **Parameters**: Hash key

### _0x1FC25AEB5F76B38D
- **Return Type**: BOOL
- **Parameters**: Hash award, int index, Any* outData
- **Description**: _ITEMDATABASE_GET_AWARD_ACQUIRE_COST

### _ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE
- **Return Type**: int
- **Parameters**: Hash award, Hash costtype

### _ITEMDATABASE_FILLOUT_AWARD_ACQUIRE_COST
- **Return Type**: BOOL
- **Parameters**: Hash award, Hash costtype, int index, Any* outData

### _ITEMDATABASE_CREATE_ITEM_COLLECTION
- **Return Type**: int
- **Parameters**: Any* data, int* size, int comparisonType
- **Description**: Returns collectionId to be used with 0x8750F69A720C2E41 (p0) and 0xCBB7B6EDFA933ADE (p0)

### _ITEMDATABASE_GET_COLLECTION_SIZE
- **Return Type**: int
- **Parameters**: int collectionId
- **Description**: Returns (collection?) size/index (?) _ITEMDATABASE_GET_(A)* - _ITEMDATABASE_GET_(B)*

### _ITEMDATABASE_GET_COMPONENT_ITEM
- **Return Type**: BOOL
- **Parameters**: int collectionId, int index, Hash* outKey
- **Description**: Params: p2 can be a component item hash

### _ITEMDATABASE_RELEASE_ITEM_COLLECTION
- **Return Type**: BOOL
- **Parameters**: int collectionId

### _ITEMDATABASE_IS_INTRINSIC_ITEM
- **Return Type**: BOOL
- **Parameters**: Hash key

### _ITEMDATABASE_IS_OVERPOWERED_ITEM
- **Return Type**: BOOL
- **Parameters**: Hash key

### _ITEMDATABASE_IS_KEY_VALID
- **Return Type**: BOOL
- **Parameters**: Hash key, int mode
- **Description**: Params: mode is 0

### _0x537A0555F62CA01A
- **Return Type**: BOOL
- **Parameters**: Hash key, int p1

### _ITEMDATABASE_GET_BUNDLE_ID
- **Return Type**: int
- **Parameters**: Hash bundle

### _ITEMDATABASE_GET_BUNDLE_ITEM_COUNT
- **Return Type**: int
- **Parameters**: int bundleId, Any* data

### _ITEMDATABASE_GET_BUNDLE_ITEM_INFO
- **Return Type**: BOOL
- **Parameters**: int bundleId, Any* data, int index, Hash* outBundle

### _ITEMDATABASE_IS_BUNDLE_VALID
- **Return Type**: BOOL
- **Parameters**: Hash bundle, int mode
- **Description**: Params: mode is 0

### _0x799FCD53358ED5FA
- **Return Type**: int
- **Parameters**: Any bundle, Any p1
- **Description**: Returns Item Count

### _0xC4146375D8A0B374
- **Return Type**: BOOL
- **Parameters**: Any bundle, Any p1, int index, Any p3

### _ITEMDATABASE_GET_BUNDLE_ACQUIRE_COST_MODIFIERS
- **Return Type**: BOOL
- **Parameters**: Hash bundle, Any* outData

### _0x7A35A72A692BE9DB
- **Return Type**: int
- **Parameters**: Any p0

### _0x3A0B667ABFF87F6E
- **Return Type**: BOOL
- **Parameters**: Any p0, Any p1, Any p2

### _0x388088BFF3681189
- **Return Type**: int
- **Parameters**: Hash bundle, Hash costtype

### _ITEMDATABASE_FILLOUT_BUNDLE
- **Return Type**: BOOL
- **Parameters**: Hash bundle, Hash costtype, int index, Any* outData

### _ITEMDATABASE_IS_SHOP_KEY_VALID
- **Return Type**: BOOL
- **Parameters**: Hash shopType

### _ITEMDATABASE_GET_SHOP_INVENTORIES_ITEMS_COUNT
- **Return Type**: int
- **Parameters**: Hash shopType

### _ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO
- **Return Type**: BOOL
- **Parameters**: Hash shopType, int index, Any* outData

### _ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_BY_KEY
- **Return Type**: BOOL
- **Parameters**: Hash shopType, Hash key, Any* outData
- **Description**: Same Native Function as 0x17721003A66C72BF

### _ITEMDATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_GROUP_INFO
- **Return Type**: BOOL
- **Parameters**: Hash shopType, Hash key, int index, Any* outData

### _ITEMDATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_INFO
- **Return Type**: BOOL
- **Parameters**: Hash shopType, Hash key, int groupIndex, int index, Any* outData

### _0x17721003A66C72BF
- **Return Type**: BOOL
- **Parameters**: Hash shopType, Hash key, Any* outData

### _ITEMDATABASE_IS_SHOP_LAYOUT_KEY_VALID
- **Return Type**: BOOL
- **Parameters**: Hash layout

### _ITEMDATABASE_GET_SHOP_LAYOUT_INFO
- **Return Type**: BOOL
- **Parameters**: Hash layout, Any* outData

### _ITEMDATABASE_GET_SHOP_LAYOUT_ROOT_MENU_INFO
- **Return Type**: BOOL
- **Parameters**: Hash layout, int index, Any* outData

### _ITEMDATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID
- **Return Type**: BOOL
- **Parameters**: Hash layout, Hash menu, Any* outData

### _ITEMDATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX
- **Return Type**: BOOL
- **Parameters**: Hash layout, Hash menu, int index, Any* outData

### _ITEMDATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY
- **Return Type**: BOOL
- **Parameters**: Hash layout, Hash menu, int index, Hash* outPageKey

### _0xDBEADA0DF5F9AB9F
- **Return Type**: BOOL
- **Parameters**: Hash layout, int index, int* outMenuKey

### _ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY
- **Return Type**: BOOL
- **Parameters**: Hash layout, Hash pageKey, Any* outData

### _ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY
- **Return Type**: BOOL
- **Parameters**: Hash layout, Hash pageKey, int index, Hash* outItemKey, int* outMenuId, Hash* outLayout

### ITEMDATABASE_IS_BUYABLE_AWARD_VALID
- **Return Type**: BOOL
- **Parameters**: Hash award

### _ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS
- **Return Type**: BOOL
- **Parameters**: Hash award, Any* outData, int* outUnk, int p3

### _ITEMDATABASE_FILLOUT_BUY_AWARD_UI_DATA
- **Return Type**: BOOL
- **Parameters**: Hash award, Any* outData

### _ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS
- **Return Type**: BOOL
- **Parameters**: Hash key, Any* outData

### _ITEMDATABASE_FILLOUT_PRICE_MODIFIER_BY_KEY
- **Return Type**: BOOL
- **Parameters**: Hash key, Any* outData

### _ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES
- **Return Type**: int
- **Parameters**: Hash key

### _ITEMDATABASE_GET_MODIFIED_PRICE
- **Return Type**: Hash
- **Parameters**: Hash key, int index
- **Description**: Returns an alternative cost hash to COST_SHOP_DEFAULT

### _ITEMDATABASE_GET_NUMBER_OF_MODIFIERS
- **Return Type**: int
- **Parameters**: Hash key

### _ITEMDATABASE_FILLOUT_MODIFIER
- **Return Type**: BOOL
- **Parameters**: Hash key, int index, Any* outData

### _ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD
- **Return Type**: BOOL
- **Parameters**: Hash award
- **Description**: _ITEMDATABASE_GET_* - _ITEMDATABASE_IS_*

### _ITEMDATABASE_GET_AWARD_ITEM_COUNT
- **Return Type**: int
- **Parameters**: Hash award
- **Description**: Returns iAwardItemCount

### _0x48229CE0C7938237
- **Return Type**: int
- **Parameters**: Hash award
- **Description**: _ITEMDATABASE_GET_(A)* - _ITEMDATABASE_GET_(B)*

### _ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO
- **Return Type**: BOOL
- **Parameters**: Hash award, int index, Hash* outData

### _0x8D029948CA29409B
- **Return Type**: BOOL
- **Parameters**: Hash award, int index, Any* outData
- **Description**: _ITEMDATABASE_FILLOUT_(A)* - _ITEMDATABASE_FILLOUT_(B)*

### _ITEMDATABASE_GET_AWARD_COST_MODIFIERS
- **Return Type**: BOOL
- **Parameters**: Hash award, Any* outData

### _0xD076DB9B96FAADF1
- **Return Type**: BOOL
- **Parameters**: Hash award, Any* outData

### _ITEMDATABASE_DOES_ITEM_HAVE_TAG
- **Return Type**: BOOL
- **Parameters**: Hash item, Hash tag, Hash tagType

### _ITEMDATABASE_DOES_BUNDLE_HAVE_TAG
- **Return Type**: BOOL
- **Parameters**: Hash bundle, Hash tag, Hash tagType
- **Description**: Params: tag = TAG_ITEM_PROPERTY (tagType(?))

### _ITEMDATABASE_GET_ITEM_TAG_TYPE
- **Return Type**: Hash
- **Parameters**: Hash item, Hash tag

### _0x8870895BA5ED9385
- **Return Type**: int
- **Parameters**: Hash key, Hash tagType, Any* outData

### _ITEMDATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES
- **Return Type**: int
- **Parameters**: Any p0
- **Description**: Returns docData.iNumTotalLabelTypes

### _ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES
- **Return Type**: int
- **Parameters**: Any p0, Any p1
- **Description**: Returns iNumValuesForType

### _ITEMDATABASE_LOCALIZATION_GET_TYPE
- **Return Type**: Any
- **Parameters**: Any p0, Any p1
- **Description**: Returns LabelType

### _ITEMDATABASE_LOCALIZATION_GET_VALUE
- **Return Type**: int
- **Parameters**: Any p0, Hash label, Any p2

### _ITEMDATABASE_GET_ITEM_PATHSET
- **Return Type**: int
- **Parameters**: Hash key, Hash defaultPathset

### _0xAA29A5F13B2C20B2
- **Return Type**: Hash
- **Parameters**: Any p0, Hash p1
- **Description**: Returns Pathset Hash


## ITEMSET
### CREATE_ITEMSET
- **Return Type**: ItemSet
- **Parameters**: BOOL p0

### DESTROY_ITEMSET
- **Return Type**: void
- **Parameters**: ItemSet itemset

### IS_ITEMSET_VALID
- **Return Type**: BOOL
- **Parameters**: ItemSet itemset

### ADD_TO_ITEMSET
- **Return Type**: BOOL
- **Parameters**: Entity entity, ItemSet itemset

### REMOVE_FROM_ITEMSET
- **Return Type**: void
- **Parameters**: Entity entity, ItemSet itemset

### GET_ITEMSET_SIZE
- **Return Type**: int
- **Parameters**: ItemSet itemset

### GET_INDEXED_ITEM_IN_ITEMSET
- **Return Type**: ScrHandle
- **Parameters**: int index, ItemSet itemset

### GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET
- **Return Type**: Any
- **Parameters**: int index, ItemSet itemset

### IS_IN_ITEMSET
- **Return Type**: BOOL
- **Parameters**: Entity entity, ItemSet itemset

### CLEAN_ITEMSET
- **Return Type**: void
- **Parameters**: ItemSet itemset

### _CLEAR_ITEMSET
- **Return Type**: void
- **Parameters**: ItemSet itemset


## LAW
### _REPORT_CRIME
- **Return Type**: void
- **Parameters**: Player player, Hash crimeType, int bounty, Entity entity, BOOL isKnownSuspect
- **Description**: crimeType: enum eCrimeType : Hash { CRIME_ACCOMPLICE = 0xAF074F6D, CRIME_ARSON = 0x68134DC7, CRIME_ASSAULT = 0x0BADC882, CRIME_ASSAULT_ANIMAL = 0x18DA55EE, CRIME_ASSAULT_CORPSE = 0x4E5F23F2, CRIME_ASSAULT_HORSE = 0xC4736181, CRIME_ASSAULT_LAW = 0xD7466D7C, CRIME_ASSAULT_LIVESTOCK = 0xCCE1CCBD, CRIME_BANK_ROBBERY = 0x6A1ADE3D, CRIME_BURGLARY = 0xA54C77E0, CRIME_CHEATING = 0xA2FF1145, CRIME_DISTURBANCE = 0x5011F613, CRIME_EXPLOSION = 0x3EBA7A37, CRIME_EXPLOSION_POISON = 0x91D0A0E1, CRIME_GRAVE_ROBBERY = 0x971EA5AF, CRIME_HASSLE = 0x58488776, CRIME_HIT_AND_RUN = 0xFF0A3CC4, CRIME_HIT_AND_RUN_LAW = 0x064814AF, CRIME_INTIMIDATION = 0x8319FBAB, CRIME_JACK_HORSE = 0x82F7E4A2, CRIME_JACK_VEHICLE = 0x6B981F4C, CRIME_JAIL_BREAK = 0x12C1D589, CRIME_KIDNAPPING = 0x98F908DB, CRIME_KIDNAPPING_LAW = 0xFD72A7EA, CRIME_LASSO_ASSAULT = 0x56EE5D5A, CRIME_LAW_IS_THREATENED = 0x1CB91DF0, CRIME_LOITERING = 0x6629D2F4, CRIME_LOOTING = 0x55AD2BEB, CRIME_MURDER = 0xE28ECE7E, CRIME_MURDER_ANIMAL = 0x48F59A66, CRIME_MURDER_HORSE = 0xC7261D79, CRIME_MURDER_LAW = 0x7797FCE7, CRIME_MURDER_LIVESTOCK = 0x9569C546, CRIME_MURDER_PLAYER = 0xF5ABD6C9, CRIME_MURDER_PLAYER_HORSE = 0xD55C6A79, CRIME_PROPERTY_DESTRUCTION = 0x533B003D, CRIME_RESIST_ARREST = 0xDF577BA5, CRIME_ROBBERY = 0xA3BEDE4C, CRIME_SELF_DEFENCE = 0xBD6A0AA3, CRIME_STAGECOACH_ROBBERY = 0xFC738E61, CRIME_STOLEN_GOODS = 0x9A949C79, CRIME_THEFT = 0x72ADE410, CRIME_THEFT_HORSE = 0xBE3A5838, CRIME_THEFT_LIVESTOCK = 0x85BA08FD, CRIME_THEFT_VEHICLE = 0x43A9ECA1, CRIME_THREATEN = 0x941C985A, CRIME_THREATEN_LAW = 0x7F908566, CRIME_TRAIN_ROBBERY = 0x647D2A5A, CRIME_TRAMPLE = 0x45DB39D8, CRIME_TRAMPLE_LAW = 0xF00F266B, CRIME_TRAMPLE_PLAYER = 0x75970C15, CRIME_TRESPASSING = 0xAEDE8E35, CRIME_UNARMED_ASSAULT = 0x5098CC5A, CRIME_VANDALISM = 0x80FDC759, CRIME_VANDALISM_VEHICLE = 0xF9E7ECE4, CRIME_VEHICLE_DESTRUCTION = 0x54A85DDC, CRIME_WANTED_LEVEL_UP_DEBUG_HIGH = 0x99C52FF5, CRIME_WANTED_LEVEL_UP_DEBUG_LOW = 0xD891890F };

### SUPPRESS_CRIME_THIS_FRAME
- **Return Type**: void
- **Parameters**: Player player, Hash crimeType, int p2, int p3, int p4
- **Description**: crimeType: see _REPORT_CRIME

### NUM_CRIMES_SUPPRESSED
- **Return Type**: int
- **Parameters**: Player player, Hash crimeType
- **Description**: Returns amount of suppressed crimes to be used later in the function MPINTRO_CRIME_MONITOR_MAINTAIN

### _0xFFEBE5AA96BC2E4E
- **Return Type**: Any
- **Parameters**: Ped ped, Hash crimeType, BOOL p2

### _0x15ABD5004CAD2D99
- **Return Type**: void
- **Parameters**: int p0
- **Description**: Params: p0 either 0, 1 or -1 in R* Scripts Set to 0 called together with _SUPPRESS_CRIME

### _0xF611DE44AEB36A1D
- **Return Type**: void
- **Parameters**: Hash crimeType, BOOL p1

### _0x3D2674828A4E6B3C
- **Return Type**: BOOL
- **Parameters**: 

### _0xC5EB2755FA25F1E9
- **Return Type**: void
- **Parameters**: BOOL p0

### GET_BOUNTY
- **Return Type**: int
- **Parameters**: Player player

### ADD_BOUNTY
- **Return Type**: void
- **Parameters**: Player player, int itemValueAmount

### SET_BOUNTY
- **Return Type**: void
- **Parameters**: Player player, int amount

### CLEAR_BOUNTY
- **Return Type**: void
- **Parameters**: Player player

### GET_WANTED_SCORE
- **Return Type**: int
- **Parameters**: Player player

### SET_WANTED_SCORE
- **Return Type**: void
- **Parameters**: Player player, int intensity

### CLEAR_WANTED_SCORE
- **Return Type**: void
- **Parameters**: Player player

### _0x331D349E0380B097
- **Return Type**: void
- **Parameters**: Any p0

### _0x292AD61A33A7A485
- **Return Type**: void
- **Parameters**: 
- **Description**: Only used in R* Script fm_mission_controller _CLEAR_WANTED_*

### _0x07E8B8B20570271C
- **Return Type**: void
- **Parameters**: Player player
- **Description**: Used in SP only, called together with 0x55F37F5F3F2475E1 & CLEAR_WANTED_SCORE _REPORT_*

### _0x22741652985C84D0
- **Return Type**: void
- **Parameters**: Player player, Hash lawRegionHash
- **Description**: Used in SP only _REPORT_*

### _REPORT_PLAYER_LAW_DISPATCH_RESPONSE_OVERRIDE
- **Return Type**: void
- **Parameters**: Player player, Hash dispatchResponseHash

### _0x9EF07CFBB19A9733
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Only used in shoprobberies R* Scripts

### _SET_LAW_DISABLED
- **Return Type**: void
- **Parameters**: BOOL toggle

### _FORCE_LAW_ON_LOCAL_PLAYER_IMMEDIATELY
- **Return Type**: void
- **Parameters**: 

### _SET_LAW_REGION
- **Return Type**: void
- **Parameters**: Player player, Hash lawRegionHash, Hash stateHash
- **Description**: enum eLawRegion : Hash { LAW_DISPATCH_REGION_NONE = 0, LAW_REGION_AGUASDULCES = 0x2F573EBE, LAW_REGION_ANNESBURG = 0x68CAFD50, LAW_REGION_ARMADILLO = 0xF0B90756, LAW_REGION_BAYOU_NWA = 0x80966B1C, LAW_REGION_BEECHERS_HOPE = 0xE2544977, LAW_REGION_BIG_VALLEY = 0x3DF1559A, LAW_REGION_BLACKWATER = 0x60D4886D, LAW_REGION_BLACKWATER_MAINGAME = 0x66553576, LAW_REGION_BLUEGILL_MARSH = 0x1D6AED8E, LAW_REGION_BRAITHWAITE_MANOR = 0x3D71E7FF, LAW_REGION_BUTCHER_CREEK = 0x2B3E1822, LAW_REGION_CALIGA_HALL = 0xF3FE5080, LAW_REGION_CORNWALL = 0xCC4672FA, LAW_REGION_CUMBERLAND_FOREST = 0x81A78306, LAW_REGION_EMERALD_RANCH = 0x5C069DF3, LAW_REGION_FORT_WALLACE = 0x0AF25192, LAW_REGION_GREAT_PLAINS = 0xB20573FA, LAW_REGION_GREAT_PLAINS_MAINGAME = 0x9862FF7C, LAW_REGION_GRIZZLIES = 0xBB936031, LAW_REGION_GUAMA = 0x200DFF42, LAW_REGION_HEARTLANDS = 0xAD14DA65, LAW_REGION_LAGRAS = 0xC64808D3, LAW_REGION_MACFARLANES_RANCH = 0x396A7D5F, LAW_REGION_MANICATO = 0x039DB6BF, LAW_REGION_MANZANITA_POST = 0x895E580E, LAW_REGION_MANZANITA_POST_MAINGAME = 0x9BDD6A38, LAW_REGION_OCCUPIED_CARAVAN_CAMP = 0x7EBABB01, LAW_REGION_OLD_MAP_WILDERNESS = 0xCBB45950, LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME = 0x9F839BE7, LAW_REGION_OUTLAW3 = 0x97A02FC1, LAW_REGION_PRONGHORN_RANCH = 0x398E4BFC, LAW_REGION_RHODES = 0x89222928, LAW_REGION_RHODES_LOCKDOWN = 0xB1181671, LAW_REGION_RIDGEWOOD_FARM = 0x635C3028, LAW_REGION_ROANOKE_RIDGE = 0x46386A9A, LAW_REGION_SAINT_DENIS = 0x5CF7C268, LAW_REGION_SAINT_DENIS_RURAL = 0x4FD5331A, LAW_REGION_SCARLETT_MEADOWS = 0x5FDD9717, LAW_REGION_SISIKA = 0x2B6BBA52, LAW_REGION_STRAWBERRY = 0xDD932620, LAW_REGION_TALL_TREES = 0xD939B758, LAW_REGION_TALL_TREES_MAINGAME = 0x084B17DF, LAW_REGION_THIEVES_LANDING = 0x3D0C2EB6, LAW_REGION_THIEVES_LANDING_MAINGAME = 0x61C450F3, LAW_REGION_TUMBLEWEED = 0x0EFAF8DC, LAW_REGION_VALENTINE = 0xA7A3F0C3, LAW_REGION_VALENTINE_LOCKDOWN = 0x123582FE, LAW_REGION_VAN_HORN = 0x619B528E, LAW_REGION_WAPITI = 0x7A976E02 };

### _0x5E6F375CA101C108
- **Return Type**: void
- **Parameters**: Player player, BOOL p1
- **Description**: Only used in R* SP Scripts

### _SET_LAW_RBS_VOLUME
- **Return Type**: void
- **Parameters**: Player player, Hash p1

### IS_LAW_INCIDENT_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Player player

### _0x148E7AC8141C9E64
- **Return Type**: Hash
- **Parameters**: Player player

### _0xEDFC6C1FD1C964F5
- **Return Type**: void
- **Parameters**: Player player, Hash crimeType, int bounty, float p3, float p4, BOOL p5, float p6, float p7, Any p8
- **Description**: _SET_C* - _SET_D*

### _LAW_WITNESS_RESPONSE_TASK
- **Return Type**: BOOL
- **Parameters**: Ped pedGroup1, Ped ped, Ped pedGroup2, float x, float y, float z, Hash crimeType

### _LAW_WITNESS_RESPONSE_TASK
- **Return Type**: BOOL
- **Parameters**: Ped pedGroup1, Ped ped, Ped pedGroup2, Vector3 vec, Hash crimeType

### _0x018F30D762E62DF8
- **Return Type**: Any
- **Parameters**: Ped ped, Any* p1

### _0x318F0F9A4426CFA2
- **Return Type**: Any
- **Parameters**: Ped ped, Any* p1
- **Description**: Only used in R* SP Script av_amb_camp_robbery

### _0x95878B13E272EF1F
- **Return Type**: Any
- **Parameters**: Entity entity, Ped ped, BOOL p2, float x, float y, float z, Hash crimeType

### _0x95878B13E272EF1F
- **Return Type**: Any
- **Parameters**: Entity entity, Ped ped, BOOL p2, Vector3 vec, Hash crimeType

### _ADD_WITNESS_RESPONSE
- **Return Type**: void
- **Parameters**: Player player, Hash crimeType, Ped pedGroup

### _0xD7494DED50C6EF52
- **Return Type**: void
- **Parameters**: Player player, Hash crimeType, int p2
- **Description**: Only used in R* SP Scripts Params: p2 either 1 or 2

### ARE_WITNESSES_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Player player

### _ARE_WITNESSES_PENDING
- **Return Type**: BOOL
- **Parameters**: Player player

### _ARE_INVESTIGATORS_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Player player, BOOL areInvestigatorsActive, Any p2

### _0x522F74636DF10201
- **Return Type**: void
- **Parameters**: Player player, ItemSet itemSet

### _0xDA1A9ADC4E3D4B16
- **Return Type**: void
- **Parameters**: ItemSet itemSet, BOOL p1, BOOL p2
- **Description**: Only used in R* SP Scripts Params: p1 = true, p2 = false

### _ENABLE_DISPATCH_LAW
- **Return Type**: void
- **Parameters**: BOOL toggle

### _ENABLE_DISPATCH_LAW_2
- **Return Type**: void
- **Parameters**: BOOL toggle

### _ARE_ANY_LAW_PEDS_INVESTIGATING
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Only used in rcm_homerob00 R* Script

### _ARE_LAW_PEDS_ENABLED_FOR_TRAIN
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Only used in trainrobbery_ambient R* Script

### _0x82F11E1296996574
- **Return Type**: void
- **Parameters**: int p0
- **Description**: Only used in rcm_gunslinger1_1 R* Script: p0 = 0

### _0x3852237A3D9DF145
- **Return Type**: void
- **Parameters**: int p0

### _0x0EAF918F751F27BA
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0xC0DF161950FB101E
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Only used in rcm_serial_killer1 R* Script

### _0xE4D6E45F491A66CB
- **Return Type**: Any
- **Parameters**: Player player, int p1

### _0xE9EB79CBF9C0F58A
- **Return Type**: int
- **Parameters**: Player player
- **Description**: Returns p1 value for 0xE4D6E45F491A66CB

### _0x21213B833EF4DAE7
- **Return Type**: void
- **Parameters**: Player player, Ped ped, Vector3* outCoords

### _0x61B98367D93F012F
- **Return Type**: void
- **Parameters**: Player player

### _0x6ABC50979655BEE7
- **Return Type**: void
- **Parameters**: Player player, Hash* crimeType, Any p2

### _0x390710D2DAFA6BFF
- **Return Type**: void
- **Parameters**: Player player, BOOL p1
- **Description**: _CLEAR*

### _GET_CRIME_BOUNTY_AMOUNT_BY_TYPE
- **Return Type**: int
- **Parameters**: Hash crimeType
- **Description**: Returns bounty (increment) value

### _0xDAEFDFDB2AEECE37
- **Return Type**: int
- **Parameters**: Hash crimeType, Any p1
- **Description**: crimeType: see _REPORT_CRIME

### _GET_HUD_PLAYER_CRIME_TYPE
- **Return Type**: Hash
- **Parameters**: Player player
- **Description**: See _REPORT_CRIME

### _0xE083BEDA81709891
- **Return Type**: int
- **Parameters**: Player player

### _0x89E005B1662F6E48
- **Return Type**: BOOL
- **Parameters**: Player player, int p1, int p2

### _0x3738B784DDD35CC6
- **Return Type**: BOOL
- **Parameters**: Player player, int p1, int p2

### _0x0BDFEBCF40A5F7E3
- **Return Type**: int
- **Parameters**: Hash crimeType
- **Description**: Only used in net_fetch R* Script

### _SET_CUSTOM_LAW_DISPATCH_RESPONSE
- **Return Type**: void
- **Parameters**: Hash dispatchResponseHash
- **Description**: Note: This native is only used in multiplayer scripts dispatchResponseHash: see update1/common/data/dispatchresponses/..

### _CREATE_LAW_DISPATCH_RESPONSE_FOR_COORDS
- **Return Type**: Any
- **Parameters**: float x, float y, float z, Hash dispatchResponseHash
- **Description**: dispatchResponseHash: see common/data/dispatchresponses/..

### _CREATE_LAW_DISPATCH_RESPONSE_FOR_COORDS
- **Return Type**: Any
- **Parameters**: Vector3 vec, Hash dispatchResponseHash

### _SET_BOUNTY_HUNTER_PURSUIT_CLEARED
- **Return Type**: void
- **Parameters**: 
- **Description**: Force clears local player's wanted level

### _0xBD944A3D36E992DE
- **Return Type**: void
- **Parameters**: 
- **Description**: Called together with REPORT_POLICE_SPOTTED_PLAYER

### _0x987BE590FB9D41E5
- **Return Type**: void
- **Parameters**: BOOL p0

### _0xDCF12B89624AAC96
- **Return Type**: void
- **Parameters**: BOOL p0

### _0xDDCE8E960D1DE240
- **Return Type**: void
- **Parameters**: BOOL p0

### _0xDEA083C16BB91345
- **Return Type**: void
- **Parameters**: 

### _0x9C8A2BF37E966464
- **Return Type**: void
- **Parameters**: Player player, ItemSet itemSet
- **Description**: Only used in act_bankrobbery01 R* Script

### _0x9D5C9A5A3321B128
- **Return Type**: BOOL
- **Parameters**: Player player

### _0x0F230DE0DDBE3649
- **Return Type**: BOOL
- **Parameters**: Player player

### _0x9945A3E2528A02E8
- **Return Type**: BOOL
- **Parameters**: Player player

### _GET_TIME_SINCE_LAST_SEEN_BY_LAW
- **Return Type**: float
- **Parameters**: Player player
- **Description**: Returns the amount of time (probably in game minutes) since last seen by the law / left the wanted radius

### _0x9B4C564BFA7CFF37
- **Return Type**: void
- **Parameters**: float p0

### _SET_ALLOW_DISABLED_LAW_RESPONSES
- **Return Type**: void
- **Parameters**: BOOL toggle

### RESET_WANTED_FOR_NEW_INCIDENT
- **Return Type**: void
- **Parameters**: Player player

### _0x856CE8FDE2416602
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0x7351DA734F989F4E
- **Return Type**: BOOL
- **Parameters**: Entity entity
- **Description**: Only used in shoprobberies

### _GET_BOUNTY_HUNTER_GLOBAL_COOLDOWN
- **Return Type**: int
- **Parameters**: Hash p0
- **Description**: p0 is always BOUNTYHUNTERSGLOBALCOOLDOWN in R* scripts

### _SET_BOUNTY_HUNTER_GLOBAL_COOLDOWN
- **Return Type**: void
- **Parameters**: Hash p0, int p1
- **Description**: p0 is always BOUNTYHUNTERSGLOBALCOOLDOWN in R* scripts

### _0x2001687F9562FD9D
- **Return Type**: void
- **Parameters**: Any p0
- **Description**: Only used in resapwn_dump_body R* Script

### _PAUSE_BOUNTY_HUNTER_COOLDOWN
- **Return Type**: void
- **Parameters**: Hash p0, BOOL p1, Any p2
- **Description**: p0 is always BOUNTYHUNTERSGLOBALCOOLDOWN in R* scripts

### _0xE9AC8466ABE484BB
- **Return Type**: void
- **Parameters**: BOOL p0, Any p1
- **Description**: Only used in R* SP Scripts Params: p1 = 0

### _0x40851BCC33ACD9AB
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0xF46108C50A22B029
- **Return Type**: BOOL
- **Parameters**: 

### _0x7803436E68C32B26
- **Return Type**: void
- **Parameters**: 

### _0xC310239ACCCF5579
- **Return Type**: void
- **Parameters**: 

### _0x29CD4896ECB66C12
- **Return Type**: void
- **Parameters**: 

### _0xE94B5E938619712E
- **Return Type**: void
- **Parameters**: 
- **Description**: Seems to disable lawmen guarding behaviors (like during a region lockdown). Must be called every frame. Only used in R* SP Scripts, mostly used in train_fast_travel_core

### _0x7FC667F6DDFBCDCC
- **Return Type**: int
- **Parameters**: Player player
- **Description**: Only used in R* Script long_update Returns a value thats being subtracted from GET_GAME_TIMER

### _0x9C5BD8C562565CE6
- **Return Type**: void
- **Parameters**: Hash* crimeType

### _0xCBFB4951F2E3934C
- **Return Type**: void
- **Parameters**: Player player, Any* data

### _SET_PED_LAW_BEHAVIOUR
- **Return Type**: void
- **Parameters**: Ped ped, int behaviour
- **Description**: behaviour: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/CLawBehavior__Flags

### _0x00DB0BC05E3FAA4E
- **Return Type**: void
- **Parameters**: Ped ped, int bitset

### _0x0C392DB374655176
- **Return Type**: void
- **Parameters**: float x, float y, float z, float p3, ItemSet itemSet

### _0x0C392DB374655176
- **Return Type**: void
- **Parameters**: Vector3 vec, float p3, ItemSet itemSet

### _0xC687A23E166DCF68
- **Return Type**: Any
- **Parameters**: Any* p0

### _SET_DISPATCH_MULTIPLIER_OVERRIDE
- **Return Type**: void
- **Parameters**: float multiplier

### _0x26934083D3F2579C
- **Return Type**: BOOL
- **Parameters**: Player player

### GET_PLAYER_REGISTERED_CRIME
- **Return Type**: BOOL
- **Parameters**: Player player, int p1, Hash* crimeType

### _0xB527099D1E1EED49
- **Return Type**: BOOL
- **Parameters**: Player player, int p1, Hash* crimeType

### CLEAR_PLAYER_PAST_CRIMES
- **Return Type**: void
- **Parameters**: Player player

### SET_PLAYER_ARRESTED_IN_REGION
- **Return Type**: void
- **Parameters**: Player player, Hash lawRegionHash

### SET_PLAYER_TURNED_IN_BOUNTY_IN_REGION
- **Return Type**: void
- **Parameters**: Player player, Hash lawRegionHash

### _0xD6C0A8C7C0B2F82C
- **Return Type**: void
- **Parameters**: Player player, BOOL p1

### SET_LAW_SENSE_RANGE_MODIFIER
- **Return Type**: void
- **Parameters**: Player player, float range
- **Description**: Default range is 1.0f

### _0x7EF2A2FE38D74456
- **Return Type**: void
- **Parameters**: int flag, BOOL p1
- **Description**: _SET_DISPATCH_*

### _0xC7DC5A0A7DF608CB
- **Return Type**: BOOL
- **Parameters**: int flag
- **Description**: _GET_DISPATCH_*

### SET_DISABLE_DISTURBANCE_CRIMES
- **Return Type**: void
- **Parameters**: Player player, BOOL p1

### SET_POSTPONE_DISTURBANCE_CRIMES_DURING_COMBAT
- **Return Type**: void
- **Parameters**: Player player, BOOL p1

### _CREATE_GUARD_ZONE
- **Return Type**: void
- **Parameters**: const char* name

### _REMOVE_GUARD_ZONE
- **Return Type**: void
- **Parameters**: const char* name

### _0x9772395CC73E8D1F
- **Return Type**: void
- **Parameters**: Ped ped, const char* name
- **Description**: Only used in loanshark_miner1 R* Script: name = ANNESBURG_MINES

### _DISABLE_GUARD_ZONE
- **Return Type**: void
- **Parameters**: const char* name

### _0x0DBACA9C38C9A686
- **Return Type**: BOOL
- **Parameters**: const char* name
- **Description**: Only used in sisikapenitentiary R* Script: name = SISIKA _IS_G* or _IS_H*

### _IS_GUARD_PED_INVESTIGATING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _CREATE_GUARD_ZONE_FOR_ENTITY
- **Return Type**: BOOL
- **Parameters**: const char* guardZoneName, Entity entity, float x, float y, float z
- **Description**: Returns true when investigation creation was successful

### _CREATE_GUARD_ZONE_FOR_ENTITY
- **Return Type**: BOOL
- **Parameters**: const char* guardZoneName, Entity entity, Vector3 vec

### _SET_GUARD_ZONE_VOLUME_REGISTRATION_START
- **Return Type**: void
- **Parameters**: const char* name, Volume volume

### _SET_GUARD_ZONE_VOLUME_RESTRICTED
- **Return Type**: void
- **Parameters**: const char* name, Volume volume

### _SET_GUARD_ZONE_VOLUME_THREAT
- **Return Type**: void
- **Parameters**: const char* name, Volume volume

### _SET_GUARD_ZONE_VOLUME_WARNING
- **Return Type**: void
- **Parameters**: const char* name, Volume volume

### _SET_GUARD_ZONE_VOLUME_REGISTRATION_END
- **Return Type**: void
- **Parameters**: const char* name, Volume volume

### _SET_GUARD_ZONE_POSITION
- **Return Type**: void
- **Parameters**: const char* name, float x, float y, float z

### _SET_GUARD_ZONE_POSITION
- **Return Type**: void
- **Parameters**: const char* name, Vector3 vec

### _SET_GUARD_ZONE_POSITION_2
- **Return Type**: void
- **Parameters**: const char* name, float x, float y, float z

### _SET_GUARD_ZONE_POSITION_2
- **Return Type**: void
- **Parameters**: const char* name, Vector3 vec


## LOCALIZATION
### LOCALIZATION_GET_SYSTEM_LANGUAGE
- **Return Type**: int
- **Parameters**: 
- **Description**: Same return values as GET_CURRENT_LANGUAGE

### GET_CURRENT_LANGUAGE
- **Return Type**: int
- **Parameters**: 
- **Description**: 0 = american (en-US) 1 = french (fr-FR) 2 = german (de-DE) 3 = italian (it-IT) 4 = spanish (es-ES) 5 = brazilian (pt-BR) 6 = polish (pl-PL) 7 = russian (ru-RU) 8 = korean (ko-KR) 9 = chinesetrad (zh-TW) 10 = japanese (ja-JP) 11 = mexican (es-MX) 12 = chinesesimp (zh-CN)

### _DOES_CURRENT_LANGUAGE_SUPPORT_CONDENSED_STYLE
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Returns true if the current language is american, french, german, italian, spanish, brazilian or mexican. _DOES_*

### LOCALIZATION_GET_SYSTEM_DATE_TYPE
- **Return Type**: int
- **Parameters**: 
- **Description**: 0 = DATE_FORMAT_DMY 1 = DATE_FORMAT_MDY 2 = DATE_FORMAT_YMD  Old name: _LOCALIZATION_GET_SYSTEM_DATE_FORMAT


## MAP
### GET_BLIP_FROM_ENTITY
- **Return Type**: Blip
- **Parameters**: Entity entity
- **Description**: Returns the Blip handle of given Entity.

### GET_MAIN_PLAYER_BLIP_ID
- **Return Type**: Blip
- **Parameters**: 

### _BLIP_ADD_FOR_STYLE
- **Return Type**: Blip
- **Parameters**: Hash styleHash

### BLIP_ADD_FOR_COORDS
- **Return Type**: Blip
- **Parameters**: Hash blipHash, float x, float y, float z
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/useful_info_from_rpfs/textures/blips https://github.com/femga/rdr3_discoveries/tree/master/useful_info_from_rpfs/textures/blips_mp

### BLIP_ADD_FOR_COORDS
- **Return Type**: Blip
- **Parameters**: Hash blipHash, Vector3 vec

### BLIP_ADD_FOR_ENTITY
- **Return Type**: Blip
- **Parameters**: Hash blipHash, Entity entity

### BLIP_ADD_FOR_PICKUP_PLACEMENT
- **Return Type**: Blip
- **Parameters**: Hash blipHash, Pickup pickup

### BLIP_ADD_FOR_RADIUS
- **Return Type**: Blip
- **Parameters**: Hash blipHash, float x, float y, float z, float radius

### BLIP_ADD_FOR_RADIUS
- **Return Type**: Blip
- **Parameters**: Hash blipHash, Vector3 vec, float radius

### _BLIP_ADD_FOR_AREA
- **Return Type**: Blip
- **Parameters**: Hash blipHash, float x, float y, float z, float scaleX, float scaleY, float scaleZ, int p7

### _BLIP_ADD_FOR_AREA
- **Return Type**: Blip
- **Parameters**: Hash blipHash, Vector3 vec, Vector3 scale, int p7

### _BLIP_ADD_FOR_VOLUME
- **Return Type**: Blip
- **Parameters**: Hash blipHash, Volume volume

### _BLIP_SET_STYLE
- **Return Type**: BOOL
- **Parameters**: Blip blip, Hash styleHash
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/useful_info_from_rpfs/blip_styles Removes any existing modifiers and sets the style.

### _BLIP_ADD_STYLE
- **Return Type**: BOOL
- **Parameters**: Blip blip, Hash styleHash

### BLIP_ADD_MODIFIER
- **Return Type**: BOOL
- **Parameters**: Blip blip, Hash modifierHash
- **Description**: https://alloc8or.re/rdr3/doc/enums/eBlipModifier.txt https://github.com/femga/rdr3_discoveries/tree/master/useful_info_from_rpfs/blip_modifiers  Old name: _BLIP_SET_MODIFIER

### BLIP_REMOVE_MODIFIER
- **Return Type**: BOOL
- **Parameters**: Blip blip, Hash modifierHash
- **Description**: If modifierHash is 0, ALL modifiers will be removed.

### _0x250C75EB1728CC0D
- **Return Type**: void
- **Parameters**: Blip blip

### SET_BLIP_FLASH_TIMER
- **Return Type**: void
- **Parameters**: Blip blip, int blipType, Hash blipHash

### SET_BLIP_FLASHES
- **Return Type**: BOOL
- **Parameters**: Blip blip, int* p1, Hash* p2

### TRIGGER_SONAR_BLIP
- **Return Type**: void
- **Parameters**: Hash typeHash, float x, float y, float z

### TRIGGER_SONAR_BLIP
- **Return Type**: void
- **Parameters**: Hash typeHash, Vector3 vec

### _TRIGGER_SONAR_BLIP_ON_ENTITY
- **Return Type**: void
- **Parameters**: Hash typeHash, Entity entity

### ALLOW_SONAR_BLIPS
- **Return Type**: void
- **Parameters**: BOOL toggle

### SET_BLIP_COORDS
- **Return Type**: void
- **Parameters**: Blip blip, float posX, float posY, float posZ

### SET_BLIP_COORDS
- **Return Type**: void
- **Parameters**: Blip blip, Vector3 pos

### GET_BLIP_COORDS
- **Return Type**: Vector3
- **Parameters**: Blip blip

### SET_BLIP_SPRITE
- **Return Type**: void
- **Parameters**: Blip blip, Hash hash, BOOL p2

### _0x01B928CA2E198B01
- **Return Type**: Any
- **Parameters**: Any p0
- **Description**: _CLEAR*

### SET_BLIP_NAME_FROM_TEXT_FILE
- **Return Type**: void
- **Parameters**: Blip blip, const char* textLabel

### _SET_BLIP_NAME
- **Return Type**: void
- **Parameters**: Blip blip, const char* name

### SET_BLIP_NAME_TO_PLAYER_NAME
- **Return Type**: void
- **Parameters**: Blip blip, Player player

### SET_BLIP_ROTATION
- **Return Type**: void
- **Parameters**: Blip blip, int rotation

### SET_BLIP_SCALE
- **Return Type**: void
- **Parameters**: Blip blip, float scale

### REMOVE_BLIP
- **Return Type**: void
- **Parameters**: Blip* blip

### DOES_BLIP_EXIST
- **Return Type**: BOOL
- **Parameters**: Blip blip

### _DOES_ENTITY_HAVE_BLIP
- **Return Type**: BOOL
- **Parameters**: Entity entity

### SET_RADAR_ZOOM
- **Return Type**: void
- **Parameters**: int zoomLevel

### _ABANDON_BLIP
- **Return Type**: void
- **Parameters**: Blip blip
- **Description**: It's unclear what exactly this does, but I assume it marks the blip as "no longer needed"

### _IS_BLIP_ATTACHED_TO_ANY_ENTITY
- **Return Type**: BOOL
- **Parameters**: Blip blip

### IS_BLIP_ON_MINIMAP
- **Return Type**: BOOL
- **Parameters**: Blip blip

### FORCE_SONAR_BLIPS_THIS_FRAME
- **Return Type**: Any
- **Parameters**: 
- **Description**: Doesn't actually return anything.

### SET_GPS_FLAGS
- **Return Type**: void
- **Parameters**: int p0, float p1
- **Description**: https://alloc8or.re/rdr3/doc/enums/rage__eGpsFlags.txt

### CLEAR_GPS_FLAGS
- **Return Type**: void
- **Parameters**: 
- **Description**: Clears the GPS flags.

### SET_GPS_CUSTOM_ROUTE_RENDER
- **Return Type**: void
- **Parameters**: BOOL p0, int p1, int p2

### CLEAR_GPS_CUSTOM_ROUTE
- **Return Type**: void
- **Parameters**: 

### START_GPS_MULTI_ROUTE
- **Return Type**: void
- **Parameters**: Hash colorNameHash, BOOL onFoot, BOOL inVehicle

### ADD_POINT_TO_GPS_MULTI_ROUTE
- **Return Type**: void
- **Parameters**: float x, float y, float z, BOOL p3

### ADD_POINT_TO_GPS_MULTI_ROUTE
- **Return Type**: void
- **Parameters**: Vector3 vec, BOOL p3

### SET_GPS_MULTI_ROUTE_RENDER
- **Return Type**: void
- **Parameters**: BOOL toggle

### CLEAR_GPS_MULTI_ROUTE
- **Return Type**: void
- **Parameters**: 
- **Description**: Does the same as SET_GPS_MULTI_ROUTE_RENDER(false);

### _START_GPS_CUSTOM_ROUTE_FROM_WAYPOINT_RECORDING_ROUTE
- **Return Type**: void
- **Parameters**: const char* waypointRecording, int point, int numPoints, Hash colorNameHash, BOOL p4, BOOL p5

### CLEAR_GPS_PLAYER_WAYPOINT
- **Return Type**: void
- **Parameters**: 

### _0xD3F58E9316B7FC2A
- **Return Type**: void
- **Parameters**: Any p0

### SET_WAYPOINT_OFF
- **Return Type**: void
- **Parameters**: 

### IS_WAYPOINT_ACTIVE
- **Return Type**: BOOL
- **Parameters**: 

### _GET_WAYPOINT_COORDS
- **Return Type**: Vector3
- **Parameters**: 

### _0xF08E42BFA46BDFF8
- **Return Type**: BOOL
- **Parameters**: Any p0, Any p1

### _HIDE_ACTIVE_POINTS_OF_INTEREST
- **Return Type**: void
- **Parameters**: 

### _SHOW_ACTIVE_POINTS_OF_INTEREST
- **Return Type**: void
- **Parameters**: 

### _0xF47A1EB2A538A3A3
- **Return Type**: Any
- **Parameters**: 

### _FIND_CLOSEST_GPS_POSITION
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, Vector3* outPosition

### _FIND_CLOSEST_GPS_POSITION
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, Vector3* outPosition

### DISPLAY_RADAR
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: If Minimap / Radar should be displayed.

### _SET_RADAR_CONFIG_TYPE
- **Return Type**: void
- **Parameters**: Hash configHash, Hash p1
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/graphics/minimap/radar/radar_configs.lua configHash: -1943724816, 347777538, -117986897, -789269373, -547506804, -1986542417, 2080113112 p1: usually 898171178 or 0 in R* scripts (doesn't seems to have any effect)

### _ADD_PROP_TO_MINIMAP
- **Return Type**: void
- **Parameters**: Hash minimapProp, float x, float y, float rotation, int p4
- **Description**: list of minimap props: https://github.com/femga/rdr3_discoveries/tree/master/graphics/minimap/minimapObjects

### _REMOVE_PROP_FROM_MINIMAP
- **Return Type**: void
- **Parameters**: Hash minimapProp

### SET_RADAR_AS_EXTERIOR_THIS_FRAME
- **Return Type**: void
- **Parameters**: 

### SET_MINIMAP_HIDE_FOW
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: Reveals the entire minimap (FOW = Fog of War)

### _SET_FOW_UPDATE_PLAYER_OVERRIDE
- **Return Type**: void
- **Parameters**: BOOL toggle, Hash p1
- **Description**: Used for GUARMA MODE; Enabled: toggle = false, 0; Disabled: toggle = true, 0 Hash p1 seems to be unused, always 0

### _SET_MINIMAP_FOW_OVERRIDE_REVEAL_SCALE
- **Return Type**: void
- **Parameters**: float scale, Hash p1

### _SET_MINIMAP_FOW_SHOULD_UPDATE
- **Return Type**: void
- **Parameters**: BOOL toggle, Hash p1

### SET_MINIMAP_FOW_REVEAL_COORDINATE
- **Return Type**: void
- **Parameters**: float x, float y, float z, Hash p3
- **Description**: Up to eight coordinates may be revealed per frame

### SET_MINIMAP_FOW_REVEAL_COORDINATE
- **Return Type**: void
- **Parameters**: Vector3 vec, Hash p3

### SET_MINIMAP_FOW_REVEAL_VOLUME
- **Return Type**: void
- **Parameters**: Volume volume, Hash p1

### RESET_MINIMAP_FOW
- **Return Type**: void
- **Parameters**: Hash hash

### _REVEAL_MINIMAP_FOW
- **Return Type**: void
- **Parameters**: Hash hash

### _SET_MINIMAP_ZONE
- **Return Type**: void
- **Parameters**: Hash zone
- **Description**: hash can be the hash of "guarma" or "world".

### LOCK_MINIMAP_ANGLE
- **Return Type**: void
- **Parameters**: int angle
- **Description**: Locks the minimap to the specified angle in integer degrees.  angle: The angle in whole degrees. If less than 0 or greater than 360, unlocks the angle.

### UNLOCK_MINIMAP_ANGLE
- **Return Type**: void
- **Parameters**: 

### _MAP_ENABLE_REGION_BLIP
- **Return Type**: void
- **Parameters**: Hash regionHash, Hash styleHash
- **Description**: regionHash: https://github.com/femga/rdr3_discoveries/tree/master/graphics/minimap/wanted_regions

### _MAP_DISABLE_REGION_BLIP
- **Return Type**: void
- **Parameters**: Hash regionHash

### _MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE
- **Return Type**: BOOL
- **Parameters**: Hash regionHash, Hash styleHash

### _MAP_DISCOVER_REGION
- **Return Type**: void
- **Parameters**: Hash discoveryHash

### _MAP_DISCOVERY_SET_ENABLED
- **Return Type**: void
- **Parameters**: Hash discoveryHash

### _MAP_IS_DISCOVERY_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Hash discoveryHash

### _SET_PAUSEMAP_COORDS_WITH_RADIUS
- **Return Type**: void
- **Parameters**: float x, float y, float z, float radius

### _SET_PAUSEMAP_COORDS_WITH_RADIUS
- **Return Type**: void
- **Parameters**: Vector3 vec, float radius

### _0x7C9F4CDF402CA82A
- **Return Type**: void
- **Parameters**: 

### _0x44813684F72B563C
- **Return Type**: void
- **Parameters**: Entity entity, Any p1
- **Description**: _CLEAR*

### _0x97F6F158CC5B5CA2
- **Return Type**: void
- **Parameters**: Entity entity, Any p1

### _0xBB68D4D3CA3DE402
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x3CB8859F04763C78
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x7563CBCA99253D1A
- **Return Type**: void
- **Parameters**: Entity entity, Hash blip
- **Description**: FM_CLIENT_SETUP_EAGLE_EYE - setting up eagle eye for entity

### _0x1726963E6049DB53
- **Return Type**: void
- **Parameters**: Any p0


## MINIGAME
### _0x6480723D3BE535B6
- **Return Type**: void
- **Parameters**: Any p0

### _0x3DF7EE3A76185108
- **Return Type**: void
- **Parameters**: 

### _0xE1F365C4C8F259D8
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0xE53A308AC35877A8
- **Return Type**: Any
- **Parameters**: 

### _0x580F34C726387226
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x0876326238914A3F
- **Return Type**: void
- **Parameters**: 

### _0x3FFE60DD8A936551
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x18A0D48DF9211C07
- **Return Type**: void
- **Parameters**: 

### _MINIGAME_IS_CONNECTED_TO_SERVER
- **Return Type**: Any
- **Parameters**: Any p0

### _0x39654E1F68B78287
- **Return Type**: Any
- **Parameters**: 

### _0x3EECAADAB0D9FE29
- **Return Type**: Any
- **Parameters**: 

### _0xD39D32EB3B52DD83
- **Return Type**: Any
- **Parameters**: Any p0

### _MINIGAME_IS_SEAT_OCCUPIED
- **Return Type**: BOOL
- **Parameters**: Any p0

### _MINIGAME_REQUEST_SEAT_AT_TABLE
- **Return Type**: BOOL
- **Parameters**: Any* data

### _MINIGAME_LEAVE_TABLE
- **Return Type**: Any
- **Parameters**: Any p0

### _MINIGAME_GET_NEXT_EVENT_TYPE
- **Return Type**: Any
- **Parameters**: 

### _MINIGAME_GET_NEXT_EVENT
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _MINIGAME_POP_NEXT_EVENT
- **Return Type**: void
- **Parameters**: 

### _0x3B31732FADE5BAF3
- **Return Type**: Any
- **Parameters**: 

### _0x578907F59BA01B6D
- **Return Type**: Any
- **Parameters**: Any p0

### _0xDF728C5AE137FC14
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _MINIGAME_IS_REQUEST_PENDING
- **Return Type**: Any
- **Parameters**: Any p0

### _0x644439B5387EE57E
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x15E90B6A993017AA
- **Return Type**: Any
- **Parameters**: 

### _0x10342CC82E8356E9
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x32A7C216344D623B
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0xEC819D612038EF4B
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7

### _POKER_GET_GAME_SETTINGS_FOR_ID
- **Return Type**: Any
- **Parameters**: Any p0

### _POKER_BUY_IN
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _POKER_CALL
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _POKER_CHECK
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _POKER_FOLD
- **Return Type**: Any
- **Parameters**: Any p0

### _POKER_RAISE
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _POKER_REVEAL
- **Return Type**: Any
- **Parameters**: Any p0

### _0x58521E6DCDE97D74
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0xF6DE98516FD3AC9B
- **Return Type**: void
- **Parameters**: 

### _0x3F4FD4BED07AB8C4
- **Return Type**: Any
- **Parameters**: Any p0

### _0x3AE451860F03CA8A
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x012027C28F421F46
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x455ECCA0715C507F
- **Return Type**: void
- **Parameters**: 

### _DOMINOES_BUY_IN
- **Return Type**: Any
- **Parameters**: Any p0
- **Description**: Hardcoded to return zero/false.

### _DOMINOES_PLACE_DOMINO
- **Return Type**: Any
- **Parameters**: Any p0, Any p1
- **Description**: Hardcoded to return zero/false.

### _DOMINOES_REQUEST_VALID_PLACEMENTS
- **Return Type**: Any
- **Parameters**: Any p0
- **Description**: Hardcoded to return zero/false.

### _0xA2DB3C6270C122E3
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x398066F893149856
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0xBEA7D3CB47E1479C
- **Return Type**: Any
- **Parameters**: 

### _0x910B088E51A511AC
- **Return Type**: Any
- **Parameters**: 

### _0x9DD95B405AB4983E
- **Return Type**: Any
- **Parameters**: Any p0, Any p1


## MISC
### GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE
- **Return Type**: int
- **Parameters**: int stackSize

### _GET_NUMBER_OF_INSTRUCTIONS
- **Return Type**: int
- **Parameters**: 

### _GET_MAX_NUM_INSTRUCTIONS
- **Return Type**: int
- **Parameters**: 

### IS_MAG_DEMO_1_ACTIVE
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: magdemo = magazine demo, i. e. for magazines such as IGN, pre play phases to prepare articles etc. - example 2012 builds for V Hardcoded to return false.

### SET_RANDOM_SEED
- **Return Type**: void
- **Parameters**: int seed

### SET_TIME_SCALE
- **Return Type**: void
- **Parameters**: float timeScale
- **Description**: Maximum value is 1.0f At a value of 0.0f the game will still run at a minimum time scale.

### SET_MISSION_FLAG
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: If true, the player can't save the game.

### GET_MISSION_FLAG
- **Return Type**: BOOL
- **Parameters**: 

### _0x5801BE2DF2AF07EC
- **Return Type**: void
- **Parameters**: Any p0

### SET_RANDOM_EVENT_FLAG
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: If the parameter is true, sets the random event flag to true, if the parameter is false, the function does nothing at all. Does nothing if the mission flag is set.

### GET_RANDOM_EVENT_FLAG
- **Return Type**: BOOL
- **Parameters**: 

### _0x9BF2C0C568C61641
- **Return Type**: void
- **Parameters**: Any p0

### ACTIVITY_FEED_CREATE
- **Return Type**: void
- **Parameters**: const char* p0, const char* p1
- **Description**: nullsub, doesn't do anything

### ACTIVITY_FEED_ADD_SUBSTRING_TO_CAPTION
- **Return Type**: void
- **Parameters**: const char* p0
- **Description**: nullsub, doesn't do anything

### _0xFF252E2BAFB7330F
- **Return Type**: void
- **Parameters**: Any p0
- **Description**: nullsub, doesn't do anything

### ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE
- **Return Type**: void
- **Parameters**: const char* p0, const char* p1
- **Description**: nullsub, doesn't do anything

### ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE_ADD
- **Return Type**: void
- **Parameters**: const char* p0
- **Description**: nullsub, doesn't do anything

### _0xAF530E56505D1BD6
- **Return Type**: Any
- **Parameters**: Any p0
- **Description**: Hardcoded to return one/true.

### ACTIVITY_FEED_POST
- **Return Type**: void
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### _0x1096603B519C905F
- **Return Type**: void
- **Parameters**: const char* name
- **Description**: _SET_MISSION_NAME_*(FOR_ACTIVITY?/MINIGAME?)

### _0xCC3EDC5614B03F61
- **Return Type**: void
- **Parameters**: int p0

### INFORM_CODE_OF_CONTENT_ID_OF_CURRENT_UGC_MISSION
- **Return Type**: void
- **Parameters**: const char* p0

### _0xDA4D8EB04E8E2928
- **Return Type**: void
- **Parameters**: Any p0

### _0xB08C4FA25BC29DB9
- **Return Type**: void
- **Parameters**: Any p0

### _GET_PREV_WEATHER_TYPE_HASH_NAME
- **Return Type**: Hash
- **Parameters**: 

### _GET_NEXT_WEATHER_TYPE_HASH_NAME
- **Return Type**: Hash
- **Parameters**: 

### _0x0730E518486DEEC3
- **Return Type**: void
- **Parameters**: Any p0

### SET_WEATHER_TYPE
- **Return Type**: void
- **Parameters**: Hash weatherType, BOOL p1, BOOL p2, BOOL transition, float transitionTime, BOOL p5
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/weather/weather_types.lua

### _SET_WEATHER_TYPE_2
- **Return Type**: void
- **Parameters**: Hash weatherType, int p1, int p2, int p3, BOOL p4

### _GET_RANDOM_WEATHER_TYPE_INDEX
- **Return Type**: int
- **Parameters**: 

### _GET_RANDOM_WEATHER_TYPE
- **Return Type**: Hash
- **Parameters**: 

### SET_RANDOM_WEATHER_TYPE
- **Return Type**: void
- **Parameters**: BOOL p0, BOOL p1

### CLEAR_WEATHER_TYPE_PERSIST
- **Return Type**: void
- **Parameters**: 

### _CLEAR_WEATHER_TYPE_PERSIST_OVERTIME
- **Return Type**: void
- **Parameters**: int milliseconds

### GET_CURR_WEATHER_STATE
- **Return Type**: void
- **Parameters**: Hash* weatherType1, Hash* weatherType2, float* percentWeather2
- **Description**: Params: percentWeather2: 0f - 0.75f in R* Scripts  Old name: _GET_WEATHER_TYPE_TRANSITION

### SET_CURR_WEATHER_STATE
- **Return Type**: void
- **Parameters**: Hash weatherType1, Hash weatherType2, float percentWeather2, BOOL enabled
- **Description**: Params: BOOL p3 is always true  Old name: _SET_WEATHER_TYPE_TRANSITION

### _SET_WEATHER_TYPE_FROZEN
- **Return Type**: void
- **Parameters**: BOOL toggle

### _GET_FORCED_WEATHER
- **Return Type**: void
- **Parameters**: Hash* weather, Hash* p1
- **Description**: Returns the weather type that has been set by a script

### _0x2916B30DC6C41179
- **Return Type**: void
- **Parameters**: Hash weatherType

### _0xD3F943B88F55376A
- **Return Type**: void
- **Parameters**: Hash weatherType

### _0x243CEDE8F916B994
- **Return Type**: void
- **Parameters**: 

### _SET_OVERRIDE_WEATHER
- **Return Type**: void
- **Parameters**: Hash weatherType

### CLEAR_OVERRIDE_WEATHER
- **Return Type**: void
- **Parameters**: 

### _SET_WEATHER_VARIATION
- **Return Type**: void
- **Parameters**: const char* weatherType, const char* variation
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/weather/weather_variations.lua

### _CLEAR_WEATHER_VARIATION
- **Return Type**: void
- **Parameters**: const char* weatherType, BOOL p1

### WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE
- **Return Type**: void
- **Parameters**: float amplitude
- **Description**: Only used in smuggler2 script

### WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE
- **Return Type**: void
- **Parameters**: float maxAmplitude
- **Description**: Only used in smuggler2 script

### _GET_TEMPERATURE_AT_COORDS
- **Return Type**: float
- **Parameters**: float x, float y, float z

### _GET_TEMPERATURE_AT_COORDS
- **Return Type**: float
- **Parameters**: Vector3 vec

### SET_WIND_SPEED
- **Return Type**: void
- **Parameters**: float speed

### GET_WIND_SPEED
- **Return Type**: float
- **Parameters**: 

### SET_WIND_DIRECTION
- **Return Type**: void
- **Parameters**: float direction

### GET_WIND_DIRECTION
- **Return Type**: Vector3
- **Parameters**: 

### SET_RAIN
- **Return Type**: void
- **Parameters**: float intensity
- **Description**: Old name: _SET_RAIN_LEVEL

### GET_RAIN_LEVEL
- **Return Type**: float
- **Parameters**: 

### _0x745808BB01CEC6B9
- **Return Type**: void
- **Parameters**: float p0

### _SET_SNOW_LEVEL
- **Return Type**: void
- **Parameters**: float level

### GET_SNOW_LEVEL
- **Return Type**: float
- **Parameters**: 

### FORCE_LIGHTNING_FLASH
- **Return Type**: void
- **Parameters**: 
- **Description**: creates single lightning+thunder at random position

### _FORCE_LIGHTNING_FLASH_AT_COORDS
- **Return Type**: void
- **Parameters**: float x, float y, float z, float p3
- **Description**: p3 is always -1.0f in the scripts

### _FORCE_LIGHTNING_FLASH_AT_COORDS
- **Return Type**: void
- **Parameters**: Vector3 vec, float p3

### _0xA9342743B634A462
- **Return Type**: void
- **Parameters**: Any p0
- **Description**: nullsub, doesn't do anything

### GET_GAME_TIMER
- **Return Type**: int
- **Parameters**: 

### _GET_GAME_TIMER_NON_SCALED_CLIPPED
- **Return Type**: int
- **Parameters**: 
- **Description**: Returns rage::fwTimer::sm_nonScaledClippedTime

### GET_SYSTEM_TIME
- **Return Type**: int
- **Parameters**: 

### GET_NUMBER_OF_MICROSECONDS_SINCE_LAST_CALL
- **Return Type**: int
- **Parameters**: 

### GET_SCRIPT_TIME_WITHIN_FRAME_IN_MICROSECONDS
- **Return Type**: int
- **Parameters**: 

### RESET_SCRIPT_TIME_WITHIN_FRAME
- **Return Type**: void
- **Parameters**: 

### GET_FRAME_TIME
- **Return Type**: float
- **Parameters**: 

### GET_SYSTEM_TIME_STEP
- **Return Type**: float
- **Parameters**: 
- **Description**: Old name: _GET_BENCHMARK_TIME

### GET_FRAME_COUNT
- **Return Type**: int
- **Parameters**: 

### _0x6BED40493A1AFDB8
- **Return Type**: void
- **Parameters**: Any* p0, float p1

### _READ_INT_AS_FLOAT
- **Return Type**: float
- **Parameters**: int value
- **Description**: Reads the passed value as floating point value and returns it. Example: _READ_INT_AS_FLOAT(0x3F800000) returns 1.0f because 0x3F800000 is the hexadecimal representation of 1.0f.

### GET_RANDOM_FLOAT_IN_RANGE
- **Return Type**: float
- **Parameters**: float startRange, float endRange

### GET_RANDOM_INT_IN_RANGE
- **Return Type**: int
- **Parameters**: int startRange, int endRange

### GET_GROUND_Z_FOR_3D_COORD
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, float* groundZ, BOOL p4

### GET_GROUND_Z_FOR_3D_COORD
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, float* groundZ, BOOL p4

### GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, float* groundZ, Vector3* normal

### GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, float* groundZ, Vector3* normal

### _0xBBE5B63EFFB08E68
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### ASIN
- **Return Type**: float
- **Parameters**: float p0

### ACOS
- **Return Type**: float
- **Parameters**: float p0

### TAN
- **Return Type**: float
- **Parameters**: float p0

### ATAN
- **Return Type**: float
- **Parameters**: float p0

### ATAN2
- **Return Type**: float
- **Parameters**: float p0, float p1

### GET_DISTANCE_BETWEEN_COORDS
- **Return Type**: float
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2, BOOL useZ
- **Description**: If useZ is false, only the 2D plane (X-Y) will be considered for calculating the distance.  Consider using this faster native instead: BUILTIN::VDIST - DVIST always takes in consideration the 3D coordinates.

### GET_DISTANCE_BETWEEN_COORDS
- **Return Type**: float
- **Parameters**: Vector3 vec1, Vector3 vec2, BOOL useZ

### GET_ANGLE_BETWEEN_2D_VECTORS
- **Return Type**: float
- **Parameters**: float x1, float y1, float x2, float y2

### GET_HEADING_FROM_VECTOR_2D
- **Return Type**: float
- **Parameters**: float dx, float dy
- **Description**: dx = x1 - x2 dy = y1 - y2

### GET_CLOSEST_POINT_ON_LINE
- **Return Type**: Vector3
- **Parameters**: float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9

### GET_LINE_PLANE_INTERSECTION
- **Return Type**: BOOL
- **Parameters**: float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float* p12

### SET_BIT
- **Return Type**: void
- **Parameters**: int* address, int offset

### CLEAR_BIT
- **Return Type**: void
- **Parameters**: int* address, int offset

### _IS_BIT_FLAG_SET
- **Return Type**: BOOL
- **Parameters**: Any* bitFlags, int flag

### _IS_ANY_BIT_FLAG_SET
- **Return Type**: BOOL
- **Parameters**: Any* bitFlags

### _COUNT_BIT_FLAGS
- **Return Type**: int
- **Parameters**: Any* bitFlags

### _SET_BIT_FLAG
- **Return Type**: void
- **Parameters**: Any* bitFlags, int flag
- **Description**: Similar to SET_BIT but specifically designed for large (>32 flags) bit flag sets. The flags are stored in an int array where each int has the ability to hold 32 flags. Flags 0-31 would be stored in the first int, flags 32-63 in the second int, etc.

### _CLEAR_BIT_FLAG
- **Return Type**: void
- **Parameters**: Any* bitFlags, int flag

### _CLEAR_ALL_BIT_FLAGS
- **Return Type**: void
- **Parameters**: Any* bitFlags

### GET_HASH_KEY
- **Return Type**: Hash
- **Parameters**: const char* string
- **Description**: Computes a hash for the given string. It is hashed using Jenkins' One-at-a-Time hash algorithm (https://en.wikipedia.org/wiki/Jenkins_hash_function) Note: this implementation is case-insensitive.

### _GET_EASING_CURVE_VALUE
- **Return Type**: float
- **Parameters**: float t, float b, float d, int easingCurveType
- **Description**: https://easings.net/  enum class eEasingCurveType { TYPE_LINEAR, TYPE_QUADRATIC_IN, TYPE_QUADRATIC_OUT, TYPE_QUADRATIC_INOUT, TYPE_CUBIC_IN, TYPE_CUBIC_OUT, TYPE_CUBIC_INOUT, TYPE_QUARTIC_IN, TYPE_QUARTIC_OUT, TYPE_QUARTIC_INOUT, TYPE_QUINTIC_IN, TYPE_QUINTIC_OUT, TYPE_QUINTIC_INOUT, TYPE_EXPONENTIAL_IN, TYPE_EXPONENTIAL_OUT, TYPE_EXPONENTIAL_INOUT, TYPE_SINE_IN, TYPE_SINE_OUT, TYPE_SINE_INOUT, TYPE_CIRCULAR_IN, TYPE_CIRCULAR_OUT, TYPE_CIRCULAR_INOUT, TYPE_BOUNCE_IN, TYPE_BOUNCE_OUT, TYPE_BOUNCE_INOUT, TYPE_CUSTOM };

### IS_POSITION_OCCUPIED
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, float range, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, Any p9, BOOL p10

### IS_POSITION_OCCUPIED
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, float range, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, Any p9, BOOL p10

### CLEAR_AREA
- **Return Type**: void
- **Parameters**: float x, float y, float z, float radius, int flag
- **Description**: flag |= 1 | 1048576 | 524288 ALL_BASE, PROJECTILES, AMBIENT_POPULATION, BROADCAST

### CLEAR_AREA
- **Return Type**: void
- **Parameters**: Vector3 vec, float radius, int flag

### _CLEAR_VOLUME_AREA
- **Return Type**: void
- **Parameters**: Volume volume, int flag

### CLEAR_ANGLED_AREA_OF_VEHICLES
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7

### SET_CREDITS_ACTIVE
- **Return Type**: void
- **Parameters**: BOOL toggle

### NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME
- **Return Type**: void
- **Parameters**: 

### PAUSE_DEATH_ARREST_RESTART
- **Return Type**: void
- **Parameters**: BOOL toggle

### IGNORE_NEXT_RESTART
- **Return Type**: void
- **Parameters**: BOOL toggle

### SET_FADE_IN_AFTER_DEATH_ARREST
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: Sets whether the game should fade in after the player dies or is arrested.

### SET_FADE_IN_AFTER_LOAD
- **Return Type**: void
- **Parameters**: BOOL toggle

### OVERRIDE_SAVE_HOUSE
- **Return Type**: BOOL
- **Parameters**: BOOL override, float x, float y, float z, float heading, BOOL isAutosave, Vector3* returnCoords, float* returnHeading

### OVERRIDE_SAVE_HOUSE
- **Return Type**: BOOL
- **Parameters**: BOOL override, Vector3 vec, float heading, BOOL isAutosave, Vector3* returnCoords, float* returnHeading

### SHOOT_SINGLE_BULLET_BETWEEN_COORDS
- **Return Type**: void
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, BOOL p13

### SHOOT_SINGLE_BULLET_BETWEEN_COORDS
- **Return Type**: void
- **Parameters**: Vector3 vec1, Vector3 vec2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, BOOL p13

### FIRE_SINGLE_BULLET
- **Return Type**: void
- **Parameters**: Any* args

### GET_MODEL_DIMENSIONS
- **Return Type**: void
- **Parameters**: Hash modelHash, Vector3* minimum, Vector3* maximum

### IS_BIT_SET
- **Return Type**: BOOL
- **Parameters**: int address, int offset

### _0x0A487CC74A517FB5
- **Return Type**: void
- **Parameters**: Any p0

### IS_MINIGAME_IN_PROGRESS
- **Return Type**: BOOL
- **Parameters**: 

### SHOULD_USE_METRIC_MEASUREMENTS
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Returns whether the game's measurement system is set to metric.

### _SHOULD_USE_METRIC_MEASUREMENTS_2
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Same as SHOULD_USE_METRIC_MEASUREMENTS

### _SHOULD_USE_METRIC_TEMPERATURE
- **Return Type**: BOOL
- **Parameters**: 

### _SHOULD_USE_METRIC_WEIGHT
- **Return Type**: BOOL
- **Parameters**: 

### _SHOULD_USE_24_HOUR_CLOCK
- **Return Type**: BOOL
- **Parameters**: 

### COMPARE_STRINGS
- **Return Type**: int
- **Parameters**: const char* str1, const char* str2, BOOL matchCase, int maxLength

### ABSI
- **Return Type**: int
- **Parameters**: int value

### ABSF
- **Return Type**: float
- **Parameters**: float value

### IS_PROJECTILE_IN_AREA
- **Return Type**: BOOL
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2, BOOL ownedByPlayer
- **Description**: Determines whether there is a projectile within the specified coordinates. The coordinates form a rectangle.  ownedByPlayer = only projectiles fired by the player will be detected.

### IS_PROJECTILE_IN_AREA
- **Return Type**: BOOL
- **Parameters**: Vector3 vec1, Vector3 vec2, BOOL ownedByPlayer

### IS_PROJECTILE_TYPE_IN_AREA
- **Return Type**: BOOL
- **Parameters**: float xMin, float yMin, float zMin, float xMax, float yMax, float zMax, Hash weaponType, BOOL isPlayer
- **Description**: Determines whether there is a projectile of a specific type within the specified coordinates. The coordinates form a rectangle.

### IS_PROJECTILE_TYPE_IN_AREA
- **Return Type**: BOOL
- **Parameters**: Vector3 min, Vector3 max, Hash weaponType, BOOL isPlayer

### IS_PROJECTILE_TYPE_IN_ANGLED_AREA
- **Return Type**: BOOL
- **Parameters**: float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, BOOL p8

### IS_PROJECTILE_TYPE_WITHIN_DISTANCE
- **Return Type**: BOOL
- **Parameters**: float p0, float p1, float p2, Any p3, float p4, BOOL p5

### GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash weaponHash, float distance, Vector3* outCoords, BOOL p4, BOOL mustBeOwnedByThisPed

### GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash weaponHash, float distance, Vector3* outCoords, Object* outProjectile, BOOL p5, BOOL mustBeOwnedByThisPed

### IS_BULLET_IN_ANGLED_AREA
- **Return Type**: BOOL
- **Parameters**: float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7

### IS_BULLET_IN_AREA
- **Return Type**: BOOL
- **Parameters**: float p0, float p1, float p2, float p3, BOOL p4

### IS_BULLET_IN_BOX
- **Return Type**: BOOL
- **Parameters**: float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6

### HAS_BULLET_IMPACTED_IN_AREA
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, float p3, BOOL p4, BOOL p5
- **Description**: p3 - possibly radius?

### HAS_BULLET_IMPACTED_IN_AREA
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, float p3, BOOL p4, BOOL p5

### HAS_BULLET_IMPACTED_IN_BOX
- **Return Type**: BOOL
- **Parameters**: float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7

### _0x7A76104CC2CC69E8
- **Return Type**: Any
- **Parameters**: Entity entity, int p1, int p2

### _0xDC416CA762BC4F43
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### _0x970339EFA4FDE518
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### IS_ORBIS_VERSION
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Hardcoded to return false. Checks for PS4 Game Build.

### IS_DURANGO_VERSION
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Hardcoded to return false. Checks for XBOXONE Game Build.

### IS_PC_VERSION
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Hardcoded to return true.

### IS_STADIA_VERSION
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Hardcoded to return false.

### IS_STRING_NULL
- **Return Type**: BOOL
- **Parameters**: const char* string

### IS_STRING_NULL_OR_EMPTY
- **Return Type**: BOOL
- **Parameters**: const char* string

### IS_STRING_NULL_OR_EMPTY_OR_SPACES
- **Return Type**: BOOL
- **Parameters**: const char* string
- **Description**: Returns true if the entire string consists only of space characters.

### ARE_STRINGS_EQUAL
- **Return Type**: BOOL
- **Parameters**: const char* string1, const char* string2

### _DOES_STRING_EXIST_IN_STRING
- **Return Type**: BOOL
- **Parameters**: const char* string1, const char* string2

### _0x3C3C7B1B5EC08764
- **Return Type**: void
- **Parameters**: 

### _0x94E8CA3DEE952789
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x5B4A8121A47D844D
- **Return Type**: Any
- **Parameters**: Any p0

### STRING_TO_INT
- **Return Type**: BOOL
- **Parameters**: const char* string, int* outInteger
- **Description**: Returns false if it's a null or empty string or if the string is too long. outInteger will be set to -999 in that case.

### _INT_TO_STRING
- **Return Type**: void
- **Parameters**: int value, const char* format, char* buffer
- **Description**: Note: the buffer should be exactly 32 bytes long

### _0x74ACA66484CEBAF0
- **Return Type**: void
- **Parameters**: Any p0

### _0x49C44FE78A135A1D
- **Return Type**: void
- **Parameters**: Any p0

### _0xF650DCF5D6F312C1
- **Return Type**: void
- **Parameters**: Any p0

### SET_BITS_IN_RANGE
- **Return Type**: void
- **Parameters**: int* var, int rangeStart, int rangeEnd, int p3

### GET_BITS_IN_RANGE
- **Return Type**: int
- **Parameters**: int var, int rangeStart, int rangeEnd

### SET_GAME_PAUSED
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: Make sure to call this from the correct thread if you're using multiple threads because all other threads except the one which is calling SET_GAME_PAUSED will be paused.

### SET_THIS_SCRIPT_CAN_BE_PAUSED
- **Return Type**: void
- **Parameters**: BOOL toggle

### SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT
- **Return Type**: void
- **Parameters**: BOOL toggle

### SET_CHEAT_ACTIVE
- **Return Type**: void
- **Parameters**: int cheatId
- **Description**: Cheats are GTA IV cheats:  0 = unknown 1 = unknown (same as 0) 2 = Max Health and Armor 3 = Raise Wanted Level 4 = Lower Wanted Level 5 = unknown (does nothing) 6 = Change Weather 7 = Spawn Annihilator 8 = Spawn NRG 900 9 = Spawn FBI 10 = Spawn Jetmax 11 = Spawn Comet 12 = Spawn Turismo 13 = Spawn Cognoscenti 14 = Spawn Super GT 15 = Spawn Sanchez  Initially used in Max Payne 3, that's why we know the name.

### _0xB711EB4BC8D06013
- **Return Type**: void
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### POPULATE_NOW
- **Return Type**: void
- **Parameters**: 
- **Description**: spawns a few distant/out-of-sight peds, vehicles, animals etc each time it is called

### IS_GAME_SESSION_STATE_MACHINE_IDLE
- **Return Type**: BOOL
- **Parameters**: 

### _QUEUE_SAVEGAME_OPERATION
- **Return Type**: BOOL
- **Parameters**: int p0
- **Description**: p0 must be < 2

### _GET_STATUS_OF_SAVEGAME_OPERATION
- **Return Type**: int
- **Parameters**: int p0
- **Description**: Only 0 and 1 are valid for p0, higher values causes the native to return 2.

### _0x6C7B68D3CE60E8DE
- **Return Type**: Any
- **Parameters**: Any p0

### _0x627B68D9CE6EE8DE
- **Return Type**: Any
- **Parameters**: Any p0

### _0x7CF96F1250EF3221
- **Return Type**: Any
- **Parameters**: Any p0

### COPY_SCRIPT_STRUCT
- **Return Type**: void
- **Parameters**: Any* dst, Any* src, int size
- **Description**: Old name: _COPY_MEMORY

### ENABLE_DISPATCH_SERVICE
- **Return Type**: void
- **Parameters**: int dispatchService, BOOL toggle
- **Description**: enum DispatchType { DT_Invalid, DT_PoliceAutomobile, DT_PoliceHelicopter, DT_FireDepartment, DT_SwatAutomobile, DT_AmbulanceDepartment, DT_PoliceRiders, DT_PoliceVehicleRequest, DT_PoliceRoadBlock, DT_PoliceAutomobileWaitPulledOver, DT_PoliceAutomobileWaitCruising, DT_Gangs, DT_SwatHelicopter, DT_PoliceBoat, DT_ArmyVehicle, DT_OnFoot, DT_PoliceDogs };

### BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION
- **Return Type**: void
- **Parameters**: int dispatchService, BOOL toggle
- **Description**: dispatchService: see ENABLE_DISPATCH_SERVICE

### CREATE_INCIDENT
- **Return Type**: BOOL
- **Parameters**: int dispatchService, float x, float y, float z, int numUnits, float radius, int* outIncidentID, Any p7, Any p8
- **Description**: dispatchService: see ENABLE_DISPATCH_SERVICE

### CREATE_INCIDENT
- **Return Type**: BOOL
- **Parameters**: int dispatchService, Vector3 vec, int numUnits, float radius, int* outIncidentID, Any p7, Any p8

### _CREATE_INCIDENT_WITH_ENTITIES
- **Return Type**: BOOL
- **Parameters**: int dispatchService, float x, float y, float z, ItemSet itemSet, float radius, int* outIncidentID
- **Description**: dispatchService: see ENABLE_DISPATCH_SERVICE  The entities must be added to itemSet.

### _CREATE_INCIDENT_WITH_ENTITIES
- **Return Type**: BOOL
- **Parameters**: int dispatchService, Vector3 vec, ItemSet itemSet, float radius, int* outIncidentID

### DELETE_INCIDENT
- **Return Type**: void
- **Parameters**: int incidentId
- **Description**: Delete an incident with a given id.

### IS_INCIDENT_VALID
- **Return Type**: BOOL
- **Parameters**: int incidentId

### _SET_INCIDENT_UNK
- **Return Type**: void
- **Parameters**: int incidentId

### ADD_POP_MULTIPLIER_AREA
- **Return Type**: int
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2, float pedDensity, float trafficDensity, BOOL p8, BOOL p9

### ADD_POP_MULTIPLIER_AREA
- **Return Type**: int
- **Parameters**: Vector3 vec1, Vector3 vec2, float pedDensity, float trafficDensity, BOOL p8, BOOL p9

### DOES_POP_MULTIPLIER_AREA_EXIST
- **Return Type**: BOOL
- **Parameters**: int id

### REMOVE_POP_MULTIPLIER_AREA
- **Return Type**: void
- **Parameters**: int id, BOOL p1

### _ADD_POP_MULTIPLIER_VOLUME
- **Return Type**: int
- **Parameters**: Volume volume, float pedDensity, float vehicleDensity, BOOL p3, BOOL p4
- **Description**: Only used in script function PROCESS_ZONE_CREATION Returns Pop multiplier volume ID

### _DOES_POP_MULTIPLIER_AREA_EXIST_FOR_VOLUME
- **Return Type**: BOOL
- **Parameters**: Volume volume

### _REMOVE_POP_MULTIPLIER_AREA_FOR_VOLUME
- **Return Type**: void
- **Parameters**: Volume volume, int p1

### _0xF569E33FB72ED28E
- **Return Type**: void
- **Parameters**: 

### RESET_DISPATCH_IDEAL_SPAWN_DISTANCE
- **Return Type**: void
- **Parameters**: 

### SET_DISPATCH_IDEAL_SPAWN_DISTANCE
- **Return Type**: void
- **Parameters**: float fIdealSpawnDistance

### _RESET_DISPATCH_MIN_SPAWN_DISTANCE
- **Return Type**: void
- **Parameters**: 

### _SET_DISPATCH_MIN_SPAWN_DISTANCE
- **Return Type**: void
- **Parameters**: float minSpawnDistance

### _RESET_DISPATCH_MAX_SPAWN_DISTANCE
- **Return Type**: void
- **Parameters**: 

### _SET_DISPATCH_MAX_SPAWN_DISTANCE
- **Return Type**: void
- **Parameters**: float maxSpawnDistance

### _0x4B0501A468B749F8
- **Return Type**: void
- **Parameters**: 

### _0x6BCF7B5CD338281A
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2
- **Description**: _SET_DISPATCH_*, unused

### _ADD_DISPATCH_SPAWN_BLOCKING_AREA
- **Return Type**: Any
- **Parameters**: Volume volume

### REMOVE_DISPATCH_SPAWN_BLOCKING_AREA
- **Return Type**: void
- **Parameters**: Any p0

### RESET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN
- **Return Type**: void
- **Parameters**: 

### ADD_TACTICAL_NAV_MESH_POINT
- **Return Type**: void
- **Parameters**: float x, float y, float z, int p3
- **Description**: Params: p3 is 0 in R* Script utopia2

### ADD_TACTICAL_NAV_MESH_POINT
- **Return Type**: void
- **Parameters**: Vector3 vec, int p3

### CLEAR_TACTICAL_NAV_MESH_POINTS
- **Return Type**: void
- **Parameters**: 

### DISPLAY_ONSCREEN_KEYBOARD
- **Return Type**: void
- **Parameters**: int textType, const char* windowTitle, const char* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, int maxInputLength
- **Description**: enum eOnscreenKeyboardTextType { KTEXTTYPE_INVALID = -1, KTEXTTYPE_DEFAULT, KTEXTTYPE_EMAIL, KTEXTTYPE_PASSWORD, KTEXTTYPE_NUMERIC, KTEXTTYPE_ALPHABET, KTEXTTYPE_GAMERTAG, KTEXTTYPE_FILENAME, KTEXTTYPE_COUNT };

### UPDATE_ONSCREEN_KEYBOARD
- **Return Type**: int
- **Parameters**: 
- **Description**: Returns the current status of the onscreen keyboard, and updates the output.  Status Codes:  0 - User still editing 1 - User has finished editing 2 - User has canceled editing 3 - Keyboard isn't active

### CANCEL_ONSCREEN_KEYBOARD
- **Return Type**: void
- **Parameters**: 
- **Description**: Old name: _CANCEL_ONSCREEN_KEYBOARD

### NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS
- **Return Type**: void
- **Parameters**: int fontBitField

### ACTION_MANAGER_ENABLE_ACTION
- **Return Type**: void
- **Parameters**: Hash hash, BOOL enable
- **Description**: Appears to remove stealth kill action from memory (?)

### ACTION_MANAGER_IS_ACTION_ENABLED
- **Return Type**: BOOL
- **Parameters**: Hash hash

### GET_REAL_WORLD_TIME
- **Return Type**: int
- **Parameters**: 
- **Description**: Returns GET_GAME_TIMER() / 1000 Only used in rcm_pearson1.ysc

### SET_SUPER_JUMP_THIS_FRAME
- **Return Type**: void
- **Parameters**: Player player

### SCRIPT_RACE_INIT
- **Return Type**: void
- **Parameters**: int numCheckpoints, int numLaps, int numPlayers, Any p3

### SCRIPT_RACE_SHUTDOWN
- **Return Type**: void
- **Parameters**: 

### SCRIPT_RACE_PLAYER_HIT_CHECKPOINT
- **Return Type**: void
- **Parameters**: int part, int checkpoint, int lap, int time

### SCRIPT_RACE_GET_PLAYER_SPLIT_TIME
- **Return Type**: BOOL
- **Parameters**: Any p0, Any* p1, Any* p2

### START_END_USER_BENCHMARK
- **Return Type**: void
- **Parameters**: 
- **Description**: Begins with START_*. Next character in the name is either D or E.  Old name: _START_BENCHMARK_RECORDING

### STOP_END_USER_BENCHMARK
- **Return Type**: void
- **Parameters**: 
- **Description**: Begins with STOP_*. Next character in the name is either D or E.  Old name: _STOP_BENCHMARK_RECORDING

### RESET_END_USER_BENCHMARK
- **Return Type**: void
- **Parameters**: 
- **Description**: Begins with RESET_*. Next character in the name is either D or E.  Old name: _RESET_BENCHMARK_RECORDING

### SAVE_END_USER_BENCHMARK
- **Return Type**: void
- **Parameters**: 
- **Description**: Saves the benchmark recording to %USERPROFILE%\Documents\Rockstar Games\Red Dead Redemption 2\Benchmarks and submits some metrics.  Old name: _SAVE_BENCHMARK_RECORDING

### UI_STARTED_END_USER_BENCHMARK
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Hardcoded to return false.  Old name: _UI_IS_SINGLEPLAYER_PAUSE_MENU_ACTIVE

### GET_BENCHMARK_ITERATIONS
- **Return Type**: int
- **Parameters**: 
- **Description**: Returns value of the '-benchmarkIterations' command line option.  Old name: _GET_BENCHMARK_ITERATIONS_FROM_COMMAND_LINE

### GET_BENCHMARK_PASS
- **Return Type**: int
- **Parameters**: 
- **Description**: Returns value of the '-benchmarkPass' command line option.  Old name: _GET_BENCHMARK_PASS_FROM_COMMAND_LINE

### _0xDC057B86FC157031
- **Return Type**: Any
- **Parameters**: 
- **Description**: Hardcoded to return one/true.

### _0x9A252AA23D7098F2
- **Return Type**: void
- **Parameters**: 

### _DOES_ITEM_HAVE_VALID_BASE
- **Return Type**: BOOL
- **Parameters**: ScrHandle item

### _GET_ITEM_TYPE
- **Return Type**: int
- **Parameters**: ScrHandle handle
- **Description**: 0 = invalid 1 = CEntity 2 = rage::volBase 3 = rage::volSphere 4 = rage::volBox 5 = rage::volAggregate 6 = rage::volCylinder 7 = CScriptedCoverPoint 8 = rage::ptfxScriptInfo 9 = CPed 10 = CVehicle 11 = CObject 12 = CItemSet 13 = CPersistentCharacter

### _IS_BASE_A_PERSISTENT_CHARACTER
- **Return Type**: BOOL
- **Parameters**: ScrHandle handle

### _IS_BASE_A_COVER_POINT
- **Return Type**: BOOL
- **Parameters**: ScrHandle handle

### _0x553D67295DDD2309
- **Return Type**: void
- **Parameters**: Entity entity
- **Description**: UPDATE_PICKUP_COLLECTIBLE: set Eagle Eye fountain _J*, _K*, _L*

### _GET_VOLUME_FROM_INDEXED_ITEM
- **Return Type**: Volume
- **Parameters**: ScrHandle item

### _GET_ENTITY_FROM_ITEM
- **Return Type**: Entity
- **Parameters**: ScrHandle item

### _GET_PED_FROM_INDEXED_ITEM
- **Return Type**: Ped
- **Parameters**: ScrHandle item

### _GET_VEHICLE_FROM_INDEXED_ITEM
- **Return Type**: Vehicle
- **Parameters**: ScrHandle item

### _GET_OBJECT_FROM_INDEXED_ITEM
- **Return Type**: Object
- **Parameters**: ScrHandle item

### _0x33982467B1E349EF
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### _0x8314FC2013ECE2DA
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0x4D5C9CC7E7E23E09
- **Return Type**: void
- **Parameters**: 

### REGISTER_INTERACTION_LOCKON_PROMPT
- **Return Type**: BOOL
- **Parameters**: Entity entity, const char* text, float radius, float p3, int flag, float p5, float p6, Prompt prompt, BOOL p8, int p9
- **Description**: p3 is usually the same value of radius p8 determines whether the ILO prompt is a lock on prompt with RMB

### UNREGISTER_INTERACTION_LOCKON_PROMPT
- **Return Type**: BOOL
- **Parameters**: Entity entity

### _0xFC6ECB9170145ECE
- **Return Type**: void
- **Parameters**: 

### _0x35165C658077CD0B
- **Return Type**: Any
- **Parameters**: 

### _0x4B101DBCC9482F2D
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _IS_MISSION_CREATOR_ACTIVE
- **Return Type**: BOOL
- **Parameters**: 

### _0xA3A8926951471C82
- **Return Type**: void
- **Parameters**: 

### _CREATE_AI_MEMORY
- **Return Type**: void
- **Parameters**: Any* args, int aiMemoryType
- **Description**: aiMemoryType: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/_CREATE_AI_MEMORY

### _GET_AI_PED_DOES_HAVE_EVENT_MEMORY
- **Return Type**: BOOL
- **Parameters**: Any* args, int p1

### _0xEB946B9E579729AD
- **Return Type**: void
- **Parameters**: Ped ped, Any p1
- **Description**: Not implemented.

### _SET_AI_MEMORY_REACTIONS_ENABLED
- **Return Type**: void
- **Parameters**: BOOL enabled
- **Description**: Used in CAIConditionAmbientAIMemoryReactionsEnabled

### _0x8DB104CCEBCD58C5
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x68319452C5064ABA
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xDE2C3B74D2B3705C
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x49F3241C28EBBFBC
- **Return Type**: void
- **Parameters**: int p0

### _0x183672FE838A661B
- **Return Type**: void
- **Parameters**: Any* data

### _0x38C0C9CAE1544500
- **Return Type**: void
- **Parameters**: Hash p0

### _0x154340E87D8CC178
- **Return Type**: void
- **Parameters**: Any p0

### _0x94FCADCF9F0C368E
- **Return Type**: void
- **Parameters**: Any p0

### _0x0D0AE5081F88CFE1
- **Return Type**: BOOL
- **Parameters**: Hash p0

### _0xAF3A84C7DE6A1DC5
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _LOOT_TABLES_GET_INFO
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1, BOOL p2, Hash lootTableKey, Any* p4, Any p5

### _0xB1F6665AA54DCD5C
- **Return Type**: Any
- **Parameters**: Any p0

### _0x8BB99B85444544D9
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x6F02B5E50511721E
- **Return Type**: Any
- **Parameters**: Any p0

### _0xCC1BAF72D571DB8D
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _IS_PED_DECOMPOSED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### SET_PED_DECOMPOSED
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _0xAB26DEEE120FD3FD
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x082C043C7AFC3747
- **Return Type**: void
- **Parameters**: int compositeId, BOOL p1

### DISABLE_LOOTING_COMPOSITE_LOOTABLE_THIS_FRAME
- **Return Type**: void
- **Parameters**: int compositeId, BOOL p1

### _0xBB282CF5D2333FB8
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xAD44856A1CD29635
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x38C2BF94D15F464D
- **Return Type**: Any
- **Parameters**: Any p0

### _0x3A87FDA8F1B6CDFB
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x4647842FE8F31C1E
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _GET_LOOTING_EVENT_HAS_FIRED
- **Return Type**: BOOL
- **Parameters**: Ped ped, const char* eventName
- **Description**: Event names in the scripts: MGBegin, MGEnd, ReadyForCut

### _SET_LOOT_PELT_SATCHEL_ITEM
- **Return Type**: void
- **Parameters**: Ped ped, Any item

### _0x96282005C5C6801F
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xF63FA29D4A9ACA86
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x8C0F6A3D7236DEEB
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x7FA58CED69405F9A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xA08111B053D84B4D
- **Return Type**: void
- **Parameters**: Any p0
- **Description**: _CLEAR*

### _IS_GLOBAL_BLOCK_VALID
- **Return Type**: BOOL
- **Parameters**: int index

### _SET_GLOBAL_BLOCK_IS_LOADED
- **Return Type**: void
- **Parameters**: int index, BOOL toggle

### GAME_FRAMEWORK_MANAGER_INIT
- **Return Type**: BOOL
- **Parameters**: Hash transitionMode

### _GAME_FRAMEWORK_MANAGER_SHUTDOWN
- **Return Type**: void
- **Parameters**: 

### _GAME_FRAMEWORK_MANAGER_GET_MODE
- **Return Type**: Hash
- **Parameters**: 

### _IS_PLAYER_OWNING_STANDALONE_SP
- **Return Type**: BOOL
- **Parameters**: 

### _0x0358B8A41916C613
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _SET_GAME_LOGIC_PAUSED
- **Return Type**: void
- **Parameters**: 
- **Description**: Note: this native was added in build 1232.56

### STOP_CURRENT_LOADING_PROGRESS_TIMER
- **Return Type**: void
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### _0xDBDA48EC456ED908
- **Return Type**: void
- **Parameters**: 


## MISSIONDATA
### MISSIONDATA_IS_VALID
- **Return Type**: BOOL
- **Parameters**: Any p0

### MISSIONDATA_GET_CATAGORY
- **Return Type**: Hash
- **Parameters**: Hash missionId

### MISSIONDATA_GET_TEXTURE_NAME
- **Return Type**: Hash
- **Parameters**: Hash missionId

### MISSIONDATA_GET_TEXTURE_TXD
- **Return Type**: Hash
- **Parameters**: Hash missionId

### MISSIONDATA_WAS_COMPLETED
- **Return Type**: BOOL
- **Parameters**: Hash missionId
- **Description**: see: missions.meta

### MISSIONDATA_GET_RATING
- **Return Type**: int
- **Parameters**: Hash missionId

### _MISSIONDATA_SET_MISSION_RATING
- **Return Type**: void
- **Parameters**: Hash missionId, int rating
- **Description**: MISSION_RATING_INCOMPLETE = 0, MISSION_RATING_SKIPPED, MISSION_RATING_COMPLETE, MISSION_RATING_BRONZE, MISSION_RATING_SILVER, MISSION_RATING_GOLD,

### MISSIONDATA_IS_REQUIRED_STORY_MISSION
- **Return Type**: BOOL
- **Parameters**: Hash missionId

### _MISSIONDATA_SET_REPLAY_STATE_LOCKED
- **Return Type**: void
- **Parameters**: Hash missionId, int replayState
- **Description**: replayState: MISSIONDATA_GET_REPLAY_STATE

### MISSIONDATA_GET_REPLAY_STATE
- **Return Type**: int
- **Parameters**: Any p0

### MISSIONDATA_SET_RATING_SCORES
- **Return Type**: void
- **Parameters**: Hash missionId, int bronzeScore, int silverScore, int goldScore

### MISSIONDATA_SET_HIGH_SCORE
- **Return Type**: void
- **Parameters**: Hash missionId, int score

### MISSIONDATA_GET_HIGH_SCORE
- **Return Type**: int
- **Parameters**: Hash missionId

### _MISSIONDATA_IS_REPLAY_CATEGORY_LOCKED
- **Return Type**: BOOL
- **Parameters**: Hash category

### MISSIONDATA_SET_REPLAY_LOCKED_FOR_CATEGORY
- **Return Type**: void
- **Parameters**: Hash category, BOOL locked

### _MISSIONDATA_TIMECYCLE_BOX_SET_MODIFIER
- **Return Type**: void
- **Parameters**: const char* timecycleName

### _MISSIONDATA_TIMECYCLE_BOX_DELETE
- **Return Type**: void
- **Parameters**: 

### _MISSIONDATA_TIMECYCLE_BOX_EXISTS
- **Return Type**: BOOL
- **Parameters**: 


## MONEY
### _MONEY_GET_CASH_BALANCE
- **Return Type**: int
- **Parameters**: 

### _MONEY_DECREMENT_CASH_BALANCE
- **Return Type**: BOOL
- **Parameters**: int amount

### _MONEY_INCREMENT_CASH_BALANCE
- **Return Type**: BOOL
- **Parameters**: int amount, Hash addReason

### _NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN
- **Return Type**: BOOL
- **Parameters**: int cashBalance, int goldBarBalance

### _0x07AD9E43FD478527
- **Return Type**: BOOL
- **Parameters**: Any p0, Any p1

### _NETWORK_GET_CASH_BALANCE
- **Return Type**: int
- **Parameters**: 


## NETSHOPPING
### CASHINVENTORY_INIT_SESSION_STATUS
- **Return Type**: BOOL
- **Parameters**: int* p0, int* p1

### _CASHINVENTORY_IS_SESSION_READY
- **Return Type**: BOOL
- **Parameters**: 

### CASHINVENTORY_IS_CONNECTION_FAULTED
- **Return Type**: BOOL
- **Parameters**: 

### _CASHINVENTORY_INIT_SESSION_IS_FAULTED
- **Return Type**: BOOL
- **Parameters**: 

### _CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM
- **Return Type**: BOOL
- **Parameters**: Hash actionHash, int* id, Any* item, int p3

### _CASHINVENTORY_TRANSACTION_START
- **Return Type**: BOOL
- **Parameters**: int* id, Hash type, Hash actionHash

### _CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID
- **Return Type**: BOOL
- **Parameters**: int id

### _CASHINVENTORY_TRANSACTION_DELETE
- **Return Type**: BOOL
- **Parameters**: int id

### _CASHINVENTORY_TRANSACTION_VALIDATE_ITEM
- **Return Type**: int
- **Parameters**: Hash p0, Any* p1

### _0x38640A8C2DEF011B
- **Return Type**: int
- **Parameters**: int p0

### _0xA3B8D31C13CB4239
- **Return Type**: BOOL
- **Parameters**: int p0, Hash p1, Any* p2, int p3, Any* p4, int p5

### _CASHINVENTORY_TRANSACTION_ADD_AWARD
- **Return Type**: BOOL
- **Parameters**: int id, Hash hash, Any* p2, Any* p3

### _CASHINVENTORY_TRANSACTION_GET_ITEM_INFO
- **Return Type**: BOOL
- **Parameters**: int id, int index, Any* itemInfo

### _CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS
- **Return Type**: int
- **Parameters**: int id

### _CASHINVENTORY_TRANSACTION_GET_ACTION
- **Return Type**: Hash
- **Parameters**: int id

### _CASHINVENTORY_TRANSACTION_CHECKOUT
- **Return Type**: BOOL
- **Parameters**: int id

### _CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS
- **Return Type**: BOOL
- **Parameters**: int id, int* status

### _0xB6F4557060EF0FB4
- **Return Type**: int
- **Parameters**: int p0, int p1

### _CASHINVENTORY_TRANSACTION_RESPONSE_GET_ITEM_INFO
- **Return Type**: BOOL
- **Parameters**: int id, int index, Any* itemInfo

### _0xCE54C9ABE6FBC6DB
- **Return Type**: BOOL
- **Parameters**: Hash p0

### _0xA0B7094629724974
- **Return Type**: BOOL
- **Parameters**: Hash p0, Any p1

### _0x92A32BA29622763F
- **Return Type**: BOOL
- **Parameters**: int id, int index, Any* p2

### _0x3FA09DD57B93C0DE
- **Return Type**: BOOL
- **Parameters**: Hash p0, int p1, int p2, Any p3, int p4

### _0xD1555FBC96C88444
- **Return Type**: BOOL
- **Parameters**: Hash p0, int p1, int p2, Any p3, int p4


## NETWORK
### NETWORK_IS_SIGNED_ONLINE
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_GET_NP_UNAVAILABLE_REASON
- **Return Type**: int
- **Parameters**: 
- **Description**: Hardcoded to return zero.  ==== PS4 specific info ====  Returns some sort of unavailable reason: -1 = REASON_INVALID 0 = REASON_OTHER 1 = REASON_SYSTEM_UPDATE 2 = REASON_GAME_UPDATE 3 = REASON_SIGNED_OUT 4 = REASON_AGE 5 = REASON_CONNECTION  =================================

### NETWORK_HAS_VALID_ROS_CREDENTIALS
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Returns whether the signed-in user has valid Rockstar Online Services (ROS) credentials.

### NETWORK_IS_CLOUD_AVAILABLE
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_HAS_SOCIAL_CLUB_ACCOUNT
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_IS_HOST
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: If you are host, returns true else returns false.

### NETWORK_HAVE_ONLINE_PRIVILEGES
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_CHECK_USER_CONTENT_PRIVILEGES
- **Return Type**: BOOL
- **Parameters**: int p0

### NETWORK_CHECK_COMMUNICATION_PRIVILEGES
- **Return Type**: BOOL
- **Parameters**: int p0

### NETWORK_CAN_VIEW_GAMER_USER_CONTENT
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle

### _0xF23A6D6C11D8EC15
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle

### _0x3E8CCE6769DB5F34
- **Return Type**: int
- **Parameters**: int p0
- **Description**: Stadia only; always returns -1 on other platforms. p0 may be a BOOL.

### _0xDBDF80673BBA3D65
- **Return Type**: BOOL
- **Parameters**: int p0
- **Description**: Note: this native was added in build 1491.50

### NETWORK_SHOW_ACCOUNT_UPGRADE_UI
- **Return Type**: void
- **Parameters**: 

### NETWORK_IS_PROMOTION_ENABLED
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Hardcoded to return false.

### NETWORK_IS_CUSTOM_UPSELL_ENABLED
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Hardcoded to return false.

### NETWORK_SHOULD_SHOW_PROMOTION_DLG
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Hardcoded to return false.

### _0xFC6FCF4C03F1BBF6
- **Return Type**: void
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### _0x160F0CE6D76A39C9
- **Return Type**: Any
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### NETWORK_GET_PROMOTION_DLG_SEEN_COUNT
- **Return Type**: int
- **Parameters**: 
- **Description**: Hardcoded to return zero.

### _0xE5FF65CFF5160752
- **Return Type**: void
- **Parameters**: 

### NETWORK_CAN_ACCESS_MULTIPLAYER
- **Return Type**: BOOL
- **Parameters**: int* loadingState

### NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL
- **Return Type**: BOOL
- **Parameters**: 

### _NETWORK_GET_GLOBAL_ENTITY_FLAGS
- **Return Type**: int
- **Parameters**: Entity entity

### _0xA95470DA137587F5
- **Return Type**: void
- **Parameters**: BOOL p0

### _0xBB697756309D77EE
- **Return Type**: Any
- **Parameters**: BOOL p0

### _NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_SET_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT
- **Return Type**: BOOL
- **Parameters**: BOOL completed

### _0xD7D0DF27CB1765B5
- **Return Type**: BOOL
- **Parameters**: int p0

### NETWORK_SET_MP_MISSION_FLAG_ON_CURRENT_SLOT
- **Return Type**: BOOL
- **Parameters**: BOOL enabled, int flagIndex

### _0x3E74A687A73979C6
- **Return Type**: void
- **Parameters**: BOOL p0

### NETWORK_SESSION_IS_PRIVATE
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Checks for session flag 'SF_PRIVATE'

### _NETWORK_SESSION_GET_SESSION_ID
- **Return Type**: void
- **Parameters**: Any* sessionId
- **Description**: Note: this native was added in build 1311.23

### _NETWORK_SESSION_ARE_SESSION_IDS_EQUAL
- **Return Type**: BOOL
- **Parameters**: Any* sessionId1, Any* sessionId2
- **Description**: Note: this native was added in build 1311.23

### NETWORK_REQUEST_SESSION_SEAMLESS
- **Return Type**: BOOL
- **Parameters**: int flags, int seamlessType, Any* sessionRequestId
- **Description**: flags: enum eSessionRequestOptionFlags { SESSION_REQUEST_OPTION_FLAG_INCLUDE_GANG_MEMBERS = (1 << 1), SESSION_REQUEST_OPTION_FLAG_LEADER_KEEPS_GANG = (1 << 7), };  seamlessType: enum eSeamlessType { SEAMLESS_TYPE_NORMAL, SEAMLESS_TYPE_PVE, SEAMLESS_TYPE_DEV, SEAMLESS_TYPE_NO_SEAMLESS };

### NETWORK_SESSION_REQUEST_SESSION_SEAMLESS
- **Return Type**: BOOL
- **Parameters**: int flags, int seamlessType, int userHash, Any* sessionRequestId
- **Description**: Equivalent to NETWORK_REQUEST_SESSION_SEAMLESS if userHash == 0. Otherwise it is equivalent to NETWORK_SESSION_REQUEST_SESSION_COMPETITIVE(flags, MATCHTYPE_SEAMLESS, userHash, 0, sessionRequestId);  p1 is unused

### NETWORK_SESSION_REQUEST_SESSION_COMPETITIVE
- **Return Type**: BOOL
- **Parameters**: int flags, int matchType, int userHash, int p3, Any* sessionRequestId
- **Description**: matchType: enum eMatchType { MATCHTYPE_DEPRECATED, MATCHTYPE_UGCPLAYLIST, MATCHTYPE_UGCMISSION, MATCHTYPE_MINIGAME, MATCHTYPE_SEAMLESS, MATCHTYPE_PRIVATE_DO_NOT_USE };

### NETWORK_SESSION_REQUEST_SESSION_PRIVATE
- **Return Type**: BOOL
- **Parameters**: int flags, int numPlayers, int userHash, Any* sessionRequestId
- **Description**: Session flag 'SF_PRIVATE' is set internally p1 represents max amount of players in private session

### _NETWORK_SESSION_REQUEST_SESSION_ON_CALL
- **Return Type**: BOOL
- **Parameters**: int flags, int category, Any* p2, int userHash, Any* sessionRequestId
- **Description**: category: enum eOnCallType { NETWORK_SESSION_REQUEST_ON_CALL_TYPE_STORY = 2, NETWORK_SESSION_REQUEST_ON_CALL_TYPE_MATCH = 3 };

### _NETWORK_SESSION_REQUEST_SESSION_NOMINATED
- **Return Type**: BOOL
- **Parameters**: int flags, int userHash, int p2, Any* sessionRequestId

### NETWORK_SESSION_IS_SESSION_REQUEST_ID_VALID
- **Return Type**: BOOL
- **Parameters**: Any* sessionRequestId

### NETWORK_SESSION_GET_SESSION_TYPE
- **Return Type**: int
- **Parameters**: 

### _0x1413B6BF27AB7A95
- **Return Type**: int
- **Parameters**: 

### NETWORK_SESSION_IS_ANY_REQUEST_IN_PROGRESS
- **Return Type**: BOOL
- **Parameters**: 

### _0xAFA14F98327791CE
- **Return Type**: BOOL
- **Parameters**: Any* sessionRequestId

### NETWORK_SESSION_IS_REQUEST_IN_PROGRESS
- **Return Type**: BOOL
- **Parameters**: Any* sessionRequestId

### _NETWORK_SESSION_IS_REQUEST_IN_PROGRESS_BY_QUEUE_GROUP
- **Return Type**: BOOL
- **Parameters**: int queueGroup

### _NETWORK_SESSION_CANCEL_REQUEST
- **Return Type**: BOOL
- **Parameters**: Any* sessionRequestId

### _0xA6F1BAABFF6AD7B9
- **Return Type**: void
- **Parameters**: Any* p0

### _NETWORK_SESSION_GET_SESSION_REQUEST_RESULT
- **Return Type**: int
- **Parameters**: Any* sessionRequestId, int* p1
- **Description**: Returns result of session request: 0 - NOT_FOUND 1 - IN_PROGRESS 2 - TIMEOUT 3 - PLAYER_OFFLINE 4 - GANG_MEMBERS_CHANGED 5 - PLAYER_CANCELLED 6 - PLAYER_SET_TOO_LARGE 7 - MATCH_ACCEPTED 8 - OTHER

### NETWORK_SESSION_IS_REQUEST_PENDING_TRANSITION
- **Return Type**: BOOL
- **Parameters**: Any* sessionRequestId

### _NETWORK_SESSION_TRANSITION_TO_SESSION
- **Return Type**: BOOL
- **Parameters**: Any* sessionRequestId

### _NETWORK_SESSION_IS_NSRR_SUCCESS
- **Return Type**: BOOL
- **Parameters**: Any* sessionRequestId

### NETWORK_SESSION_LEFT_QUEUE_OR_REQUESTED_SESSION
- **Return Type**: BOOL
- **Parameters**: Any* sessionRequestId

### NETWORK_SESSION_LEAVE_SESSION
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_SESSION_IS_TRANSITIONING
- **Return Type**: BOOL
- **Parameters**: 

### _0xFD4272A137703449
- **Return Type**: void
- **Parameters**: 
- **Description**: Only used in R* Script startup_clip

### _NETWORK_SESSION_PLAYLIST_GO_TO_NEXT_CONTENT
- **Return Type**: void
- **Parameters**: 
- **Description**: Only used in R* Script net_rolling_playlist

### _NETWORK_SESSION_PLAYLIST_GET_UPCOMING_CONTENT
- **Return Type**: void
- **Parameters**: 
- **Description**: Only used in R* Script net_rolling_playlist

### NETWORK_DISABLE_REALTIME_MULTIPLAYER
- **Return Type**: void
- **Parameters**: 

### _0x71FA2D1880C48032
- **Return Type**: void
- **Parameters**: BOOL p0
- **Description**: Only used in R* Script fm_race_controller

### NETWORK_GET_GLOBAL_MULTIPLAYER_CLOCK
- **Return Type**: void
- **Parameters**: int* hours, int* minutes, int* seconds

### NETWORK_CLEAR_CLOCK_TIME_OVERRIDE
- **Return Type**: void
- **Parameters**: 

### NETWORK_IS_CLOCK_TIME_OVERRIDDEN
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_GET_GLOBAL_CLOCK
- **Return Type**: BOOL
- **Parameters**: int* hour, int* minute, int* second

### _NETWORK_CLOCK_TIME_OVERRIDE
- **Return Type**: void
- **Parameters**: int hour, int minute, int second, int transitionTime, BOOL pauseClock

### _NETWORK_CLOCK_TIME_OVERRIDE_2
- **Return Type**: void
- **Parameters**: int hour, int minute, int second, int transitionTime, BOOL pauseClock, BOOL clockwise

### _NETWORK_CLEAR_CLOCK_OVERRIDE_OVERTIME
- **Return Type**: void
- **Parameters**: int milliseconds

### _0x0E54D4DA6018FF8E
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_IS_FINDING_GAMERS
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_DID_FIND_GAMERS_SUCCEED
- **Return Type**: BOOL
- **Parameters**: 

### _0x7BCA0A3972708436
- **Return Type**: int
- **Parameters**: Any* outData, int p1

### NETWORK_CLEAR_FOUND_GAMERS
- **Return Type**: void
- **Parameters**: 

### _NETWORK_GET_GAMER_SESSION_FROM_HANDLE
- **Return Type**: BOOL
- **Parameters**: Any* data, int count

### _NETWORK_HAS_CURRENT_GET_GAMER_STATUS_STARTED
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_DID_GET_GAMER_STATUS_SUCCEED
- **Return Type**: BOOL
- **Parameters**: 

### _NETWORK_GET_GAMER_STATUS
- **Return Type**: int
- **Parameters**: Any* gamerHandle, int p1

### NETWORK_CLEAR_GET_GAMER_STATUS
- **Return Type**: void
- **Parameters**: 

### NETWORK_SET_SCRIPT_READY_FOR_EVENTS
- **Return Type**: void
- **Parameters**: BOOL toggle

### _0x316FD416C432C761
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Note: this native was added in build 1311.23

### _0x062842D61D0D53FD
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Note: this native was added in build 1311.23

### NETWORK_IS_GAME_IN_PROGRESS
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_IS_SESSION_ACTIVE
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_IS_IN_SESSION
- **Return Type**: BOOL
- **Parameters**: 

### _NETWORK_IS_IN_SESSION_LOBBY
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Hardcoded to return false.

### NETWORK_IS_SESSION_STARTED
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_CAN_SESSION_END
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_GET_GAME_MODE
- **Return Type**: int
- **Parameters**: 

### _NETWORK_SESSION_ADD_SESSION_FLAGS
- **Return Type**: BOOL
- **Parameters**: int flags
- **Description**: enum eSessionFlags { SESSION_FLAG_NONE = 0, SF_INSTANCE = (1 << 0), SF_MATCH = (1 << 1), SF_PRIVATE = (1 << 2), SF_BLOCK_INVITES = (1 << 3), SF_BLOCK_JOIN_VIA_PRESENCE = (1 << 4), SF_BLOCK_NON_HOST_INVITES = (1 << 5), SF_BLOCK_IN_PROGRESS_MATCHMAKING_BACKFILL = (1 << 6), SF_BLOCK_IN_GAMEPLAY_MATCHMAKING_BACKFILL = (1 << 7), SF_BLOCK_INVITES_TEMPORARY = (1 << 8), SF_IN_GAMEPLAY = (1 << 9), SF_COMPETITIVE = (1 << 10), SF_MATCHMAKING_BACKFILL_IS_BLOCKED = (1 << 11) };

### NETWORK_SESSION_REMOVE_SESSION_FLAGS
- **Return Type**: BOOL
- **Parameters**: int flags
- **Description**: See _NETWORK_SESSION_ADD_SESSION_FLAGS

### NETWORK_SESSION_GET_SESSION_FLAGS
- **Return Type**: int
- **Parameters**: 

### _NETWORK_SESSION_SET_PLAYER_FLAGS
- **Return Type**: BOOL
- **Parameters**: int flags

### _NETWORK_SESSION_REMOVE_PLAYER_FLAGS
- **Return Type**: BOOL
- **Parameters**: int flags

### _NETWORK_GET_SESSION_HOST
- **Return Type**: Player
- **Parameters**: 

### _0xD3A3C8B9F3BDEF81
- **Return Type**: Any
- **Parameters**: 

### _0x18B94666CF610AEB
- **Return Type**: BOOL
- **Parameters**: 

### _0x981146E5C9CE9250
- **Return Type**: BOOL
- **Parameters**: int inviteIndex

### _0xBF8276E51761F9DA
- **Return Type**: int
- **Parameters**: 

### _0xDCA4A74135E1DEA5
- **Return Type**: BOOL
- **Parameters**: Any p0

### NETWORK_HAS_PENDING_INVITE_FAILURE
- **Return Type**: BOOL
- **Parameters**: 

### _NETWORK_CAN_RECEIVE_INVITE_FROM_HANDLE
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle

### _0x704F92B3AF20D857
- **Return Type**: void
- **Parameters**: BOOL setting

### _0xF342F6BD0A8287D5
- **Return Type**: void
- **Parameters**: Any p0

### _0xD39A72AE5EBD57E5
- **Return Type**: void
- **Parameters**: 

### _NETWORK_SEND_SESSION_INVITE
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle, const char* contentId, Any* data, int dataSize, int p4, int flags

### _0xD1FFB246F4E088AC
- **Return Type**: BOOL
- **Parameters**: int p0

### _0x27B1AE4D8C652F08
- **Return Type**: int
- **Parameters**: int p0

### _0x6C27442A225A241A
- **Return Type**: int
- **Parameters**: int p0

### _0x78271BC02AE9AF83
- **Return Type**: int
- **Parameters**: int p0
- **Description**: Note: this native was added in build 1436.31

### _0x16EFB123C4451032
- **Return Type**: BOOL
- **Parameters**: int p0, Any* gamerHandle

### _0xC0CFFDA87C2C163D
- **Return Type**: Any
- **Parameters**: int p0, Any p1, int p2

### _0x5ED39DA62BEB1330
- **Return Type**: Any
- **Parameters**: int p0

### NETWORK_ACCEPT_RS_INVITE
- **Return Type**: BOOL
- **Parameters**: int p0

### _0x3AA0CDC63696166D
- **Return Type**: BOOL
- **Parameters**: int p0

### NETWORK_REQUEST_JOIN
- **Return Type**: int
- **Parameters**: Any p0

### _0xE8E633215471BB5D
- **Return Type**: int
- **Parameters**: Any p0

### _0xA2837A5E21FB5A58
- **Return Type**: BOOL
- **Parameters**: Any p0

### _0xE39600E50D608693
- **Return Type**: BOOL
- **Parameters**: Any p0, Any p1

### _0xD7BAD4062074B9C1
- **Return Type**: BOOL
- **Parameters**: Any p0

### _0xCA58D4FD20D70F24
- **Return Type**: int
- **Parameters**: Any p0

### _0xC028B3F52C707C49
- **Return Type**: BOOL
- **Parameters**: Any p0

### NETWORK_IS_PLATFORM_INVITE_PENDING
- **Return Type**: BOOL
- **Parameters**: 

### _0x5B9C6AC118FD4774
- **Return Type**: void
- **Parameters**: 

### _NETWORK_GET_PLATFORM_INVITE_ID
- **Return Type**: int
- **Parameters**: 

### NETWORK_ACTION_PLATFORM_INVITE
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_CLEAR_PLATFORM_INVITE
- **Return Type**: void
- **Parameters**: 

### _0x603469298A4308AF
- **Return Type**: void
- **Parameters**: BOOL p0

### _NETWORK_ARE_ONLINE_NOTIFICATIONS_SHOWN_IN_STORY_MODE
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Returns value of fwuiCachedSetting "general.onlineNotificationsInStoryMode"

### NETWORK_IS_IN_PLATFORM_PARTY
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Hardcoded to return false.

### _NETWORK_ARE_PLAYERS_IN_SAME_PLATFORM_PARTY
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle1, Any* gamerHandle2

### NETWORK_IS_IN_PLATFORM_PARTY_CHAT
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Hardcoded to return false.

### NETWORK_SEED_RANDOM_NUMBER_GENERATOR
- **Return Type**: void
- **Parameters**: int seed

### NETWORK_GET_RANDOM_INT_RANGED
- **Return Type**: int
- **Parameters**: int rangeStart, int rangeEnd

### NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT
- **Return Type**: void
- **Parameters**: int maxNumMissionParticipants, BOOL p1, int instanceId

### NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_GET_MAX_NUM_PARTICIPANTS
- **Return Type**: int
- **Parameters**: 
- **Description**: Seems to always return 0, but it's used in quite a few loops.  for (num3 = 0; num3 < NETWORK::0xCCD8C02D(); num3++) { if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::0x98F3B274(num3)) != 0) { var num5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::0x98F3B274(num3));

### NETWORK_GET_NUM_PARTICIPANTS
- **Return Type**: int
- **Parameters**: 

### NETWORK_GET_SCRIPT_STATUS
- **Return Type**: int
- **Parameters**: 

### NETWORK_REGISTER_HOST_BROADCAST_VARIABLES
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE
- **Return Type**: int
- **Parameters**: int* p0

### NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE
- **Return Type**: int
- **Parameters**: int* p0

### NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_GET_PLAYER_INDEX
- **Return Type**: int
- **Parameters**: Player player

### NETWORK_GET_PARTICIPANT_INDEX
- **Return Type**: int
- **Parameters**: int index

### NETWORK_GET_PLAYER_INDEX_FROM_PED
- **Return Type**: Player
- **Parameters**: Ped ped
- **Description**: Returns the Player associated to a given Ped when in an online session.

### NETWORK_GET_NUM_CONNECTED_PLAYERS
- **Return Type**: int
- **Parameters**: 
- **Description**: Returns the amount of players connected in the current session. Only works when connected to a session/server.

### NETWORK_IS_PLAYER_CONNECTED
- **Return Type**: BOOL
- **Parameters**: Player player

### NETWORK_GET_TOTAL_NUM_PLAYERS
- **Return Type**: int
- **Parameters**: 

### NETWORK_IS_PARTICIPANT_ACTIVE
- **Return Type**: BOOL
- **Parameters**: int p0

### NETWORK_IS_PLAYER_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Player player

### NETWORK_IS_PLAYER_A_PARTICIPANT
- **Return Type**: BOOL
- **Parameters**: Player player

### NETWORK_IS_HOST_OF_THIS_SCRIPT
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_GET_HOST_OF_THIS_SCRIPT
- **Return Type**: Player
- **Parameters**: 

### NETWORK_GET_HOST_OF_SCRIPT
- **Return Type**: Player
- **Parameters**: const char* scriptName, int p1, int p2

### NETWORK_GET_HOST_OF_THREAD
- **Return Type**: Player
- **Parameters**: int threadId

### NETWORK_SET_MISSION_FINISHED
- **Return Type**: void
- **Parameters**: 

### NETWORK_IS_SCRIPT_ACTIVE
- **Return Type**: BOOL
- **Parameters**: const char* scriptName, int p1, BOOL p2, int p3

### NETWORK_IS_SCRIPT_ACTIVE_BY_HASH
- **Return Type**: BOOL
- **Parameters**: Hash scriptHash, int p1, BOOL p2, int p3

### _NETWORK_IS_THREAD_ACTIVE
- **Return Type**: BOOL
- **Parameters**: int threadId

### _NETWORK_GET_INSTANCE_ID_OF_THREAD
- **Return Type**: int
- **Parameters**: int threadId

### NETWORK_GET_NUM_SCRIPT_PARTICIPANTS
- **Return Type**: int
- **Parameters**: const char* scriptName, int instanceId, Hash position

### NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT
- **Return Type**: int
- **Parameters**: 

### NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT
- **Return Type**: BOOL
- **Parameters**: Player p0, Any* p1, Any p2

### NETWORK_PREVENT_SCRIPT_HOST_MIGRATION
- **Return Type**: void
- **Parameters**: 

### NETWORK_IS_FEATURE_SUPPORTED
- **Return Type**: BOOL
- **Parameters**: int featureId

### PARTICIPANT_ID
- **Return Type**: Player
- **Parameters**: 
- **Description**: Return the local Participant ID

### PARTICIPANT_ID_TO_INT
- **Return Type**: int
- **Parameters**: 
- **Description**: Return the local Participant ID.  This native is exactly the same as 'PARTICIPANT_ID' native.

### NETWORK_GET_DESTROYER_OF_NETWORK_ID
- **Return Type**: int
- **Parameters**: int netId, Hash* weaponHash

### _0x6CF82A7F65A5AD5F
- **Return Type**: Player
- **Parameters**: Ped ped, Any* p1
- **Description**: _NETWORK_GET_A* - _NETWORK_GET_D*

### _0x236321F1178A5446
- **Return Type**: BOOL
- **Parameters**: Player player, Ped ped, Any* p2
- **Description**: _NETWORK_GET_A* - _NETWORK_GET_D*

### NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY
- **Return Type**: BOOL
- **Parameters**: Player player, Entity entity, int* p2

### NETWORK_GET_ENTITY_KILLER_OF_PLAYER
- **Return Type**: Entity
- **Parameters**: Player player, Hash* weaponHash

### NETWORK_RESURRECT_LOCAL_PLAYER
- **Return Type**: void
- **Parameters**: float x, float y, float z, float heading, int p4, BOOL p5, Any p6, BOOL p7

### NETWORK_RESURRECT_LOCAL_PLAYER
- **Return Type**: void
- **Parameters**: Vector3 vec, float heading, int p4, BOOL p5, Any p6, BOOL p7

### _NETWORK_RESURRECT_LOCAL_PLAYER_2
- **Return Type**: void
- **Parameters**: Any* args

### NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME
- **Return Type**: void
- **Parameters**: int time

### NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT
- **Return Type**: void
- **Parameters**: BOOL toggle

### NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD
- **Return Type**: BOOL
- **Parameters**: Entity entity

### NETWORK_GET_NETWORK_ID_FROM_ENTITY
- **Return Type**: int
- **Parameters**: Entity entity

### NETWORK_GET_ENTITY_FROM_NETWORK_ID
- **Return Type**: Entity
- **Parameters**: int netId

### NETWORK_GET_ENTITY_IS_NETWORKED
- **Return Type**: BOOL
- **Parameters**: Entity entity

### NETWORK_REGISTER_ENTITY_AS_NETWORKED
- **Return Type**: void
- **Parameters**: Entity entity

### NETWORK_DOES_NETWORK_ID_EXIST
- **Return Type**: BOOL
- **Parameters**: int netID

### _0x950ACD8F05B7B9DF
- **Return Type**: Any
- **Parameters**: Any p0
- **Description**: Related to container entity (RANSACK_ATTACHED_LOCKBOX / RANSACK_ATTACHED_CHEST)

### NETWORK_REQUEST_CONTROL_OF_NETWORK_ID
- **Return Type**: BOOL
- **Parameters**: int netId

### NETWORK_HAS_CONTROL_OF_NETWORK_ID
- **Return Type**: BOOL
- **Parameters**: int netId

### NETWORK_REQUEST_CONTROL_OF_ENTITY
- **Return Type**: BOOL
- **Parameters**: Entity entity

### _NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene

### NETWORK_REQUEST_CONTROL_OF_PICKUP_PLACEMENT
- **Return Type**: BOOL
- **Parameters**: Any p0

### NETWORK_HAS_CONTROL_OF_ENTITY
- **Return Type**: BOOL
- **Parameters**: Entity entity

### NETWORK_HAS_CONTROL_OF_PICKUP
- **Return Type**: BOOL
- **Parameters**: Pickup pickup

### _NETWORK_HAS_CONTROL_OF_ANIM_SCENE
- **Return Type**: BOOL
- **Parameters**: AnimScene animScene

### NETWORK_HAS_CONTROL_OF_PICKUP_PLACEMENT
- **Return Type**: BOOL
- **Parameters**: Any p0

### _0xF260AF6F43953316
- **Return Type**: int
- **Parameters**: ScrHandle handle
- **Description**: Same Native Handler as VEH_TO_NET, PED_TO_NET, OBJ_TO_NET and NETWORK_GET_NETWORK_ID_FROM_ENTITY

### VEH_TO_NET
- **Return Type**: int
- **Parameters**: Vehicle vehicle
- **Description**: Returns the network ID of the given vehicle.

### PED_TO_NET
- **Return Type**: int
- **Parameters**: Ped ped
- **Description**: Returns the network ID of the given ped.

### OBJ_TO_NET
- **Return Type**: int
- **Parameters**: Object object
- **Description**: Returns the network ID of the given object.

### _ANIM_SCENE_TO_NET
- **Return Type**: int
- **Parameters**: AnimScene animScene

### NET_TO_VEH
- **Return Type**: Vehicle
- **Parameters**: int netHandle

### NET_TO_PED
- **Return Type**: Ped
- **Parameters**: int netHandle
- **Description**: gets the ped id of a network id

### NET_TO_OBJ
- **Return Type**: Object
- **Parameters**: int netHandle
- **Description**: gets the object id of a network id

### NET_TO_ENT
- **Return Type**: Entity
- **Parameters**: int netHandle
- **Description**: gets the entity id of a network id

### _NET_TO_ANIM_SCENE
- **Return Type**: AnimScene
- **Parameters**: int netId

### _PROPSET_TO_NET
- **Return Type**: int
- **Parameters**: PropSet propSet

### _NET_TO_PROPSET
- **Return Type**: PropSet
- **Parameters**: int netId

### _0x0CC28C08613BA9E5
- **Return Type**: void
- **Parameters**: int p0
- **Description**: nullsub, doesn't do anything

### NETWORK_GET_LOCAL_HANDLE
- **Return Type**: void
- **Parameters**: Any* gamerHandle

### NETWORK_HANDLE_FROM_PLAYER
- **Return Type**: void
- **Parameters**: Player player, Any* gamerHandle

### NETWORK_HASH_FROM_PLAYER_HANDLE
- **Return Type**: Hash
- **Parameters**: Player player

### NETWORK_HANDLE_FROM_FRIEND
- **Return Type**: void
- **Parameters**: int friendIndex, Any* gamerHandle

### NETWORK_DISPLAYNAMES_FROM_HANDLES_START
- **Return Type**: int
- **Parameters**: Any* p0, Any p1
- **Description**: Hardcoded to return -1.

### NETWORK_GET_DISPLAYNAMES_FROM_HANDLES
- **Return Type**: int
- **Parameters**: Any p0, Any p1, Any p2
- **Description**: Hardcoded to return zero.

### _NETWORK_GET_DISPLAY_NAME_FROM_HANDLE
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle, char* displayName
- **Description**: Example:  char displayName[64]; if (_NETWORK_GET_DISPLAY_NAME_FROM_HANDLE(handle, displayName)) { // use displayName }

### NETWORK_ARE_HANDLES_THE_SAME
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle1, Any* gamerHandle2

### NETWORK_IS_HANDLE_VALID
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle

### NETWORK_GET_PLAYER_FROM_GAMER_HANDLE
- **Return Type**: Player
- **Parameters**: Any* gamerHandle

### NETWORK_IS_GAMER_IN_MY_SESSION
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle

### NETWORK_SHOW_PROFILE_UI
- **Return Type**: void
- **Parameters**: Any* gamerHandle

### _0x5759160AC17C13CE
- **Return Type**: void
- **Parameters**: Any* gamerHandle, const char* message

### _0xF302AB9D978352EE
- **Return Type**: int
- **Parameters**: Entity entity
- **Description**: Returns the entity's network ID.

### _0x4538EE7C321590BC
- **Return Type**: Entity
- **Parameters**: int networkId
- **Description**: Returns the entity associated with the given network ID.

### _0xA47D48D06AA5A188
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_GET_TOTAL_NUM_FRIENDS
- **Return Type**: int
- **Parameters**: 

### _0xA94ECE191D90637A
- **Return Type**: int
- **Parameters**: 

### _0x5CB8B0C846D0F30B
- **Return Type**: void
- **Parameters**: Any p0

### _0xFF36F36B07E69059
- **Return Type**: void
- **Parameters**: Any p0

### _NETWORK_GET_CURRENT_FRIEND_PAGE_DATA
- **Return Type**: BOOL
- **Parameters**: Any* p0

### _0xB389289F031F059A
- **Return Type**: int
- **Parameters**: 

### NETWORK_CAN_REFRESH_FRIEND_PAGE
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_REFRESH_CURRENT_FRIEND_PAGE
- **Return Type**: BOOL
- **Parameters**: 

### _0xDA1BFED8582F61F0
- **Return Type**: BOOL
- **Parameters**: 

### _0x232E1EB23CDB313C
- **Return Type**: BOOL
- **Parameters**: 

### _0x3E4A16BC669E71B3
- **Return Type**: BOOL
- **Parameters**: 

### _NETWORK_IS_FRIEND_HANDLE_ONLINE
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle

### _NETWORK_IS_FRIEND_HANDLE_IN_SAME_TITLE
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle

### NETWORK_IS_FRIEND
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle

### NETWORK_IS_PENDING_FRIEND
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle
- **Description**: Hardcoded to return false.

### NETWORK_ADD_FRIEND
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle, const char* message

### _NETWORK_REMOVE_FRIEND
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle

### _NETWORK_CAN_ADD_FRIEND
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle
- **Description**: On PC this returns true if gamerHandle is a valid handle.

### NETWORK_SET_PLAYER_IS_PASSIVE
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: Old name: _NETWORK_SET_PASSIVE_MODE_OPTION

### NETWORK_SET_FRIENDLY_FIRE_OPTION
- **Return Type**: void
- **Parameters**: BOOL toggle

### NETWORK_SET_RICH_PRESENCE
- **Return Type**: void
- **Parameters**: int p0, Any* p1, int p2, int p3

### NETWORK_GET_TIMEOUT_TIME
- **Return Type**: int
- **Parameters**: 

### _0xBC7D36946D19E60E
- **Return Type**: void
- **Parameters**: BOOL p0
- **Description**: Only used in fm_race_controller R* Script (PROCESS_LOCAL_PLAYER_INIT)

### _0x880A7202301E282B
- **Return Type**: BOOL
- **Parameters**: Any* p0, Any* p1, float x, float y, float z, float p5, Any p6
- **Description**: Params: p5 = 50.f, p6 = 0 in R* Script net_fetch (NET_FETCH_CLIENT_UPDATE_PED_ROLE_CLUE_IDLE)

### _0x880A7202301E282B
- **Return Type**: BOOL
- **Parameters**: Any* p0, Any* p1, Vector3 vec, float p5, Any p6

### _0xC964FCD3D1720697
- **Return Type**: Any
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### _0xEC089F84A9C16C62
- **Return Type**: Any
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### PREVENT_NETWORK_ID_MIGRATION
- **Return Type**: void
- **Parameters**: int netId

### KEEP_NETWORK_ID_IN_FAST_INSTANCE
- **Return Type**: void
- **Parameters**: int netId, BOOL p1, int p2

### _0x02C4C6C2900D84DF
- **Return Type**: void
- **Parameters**: Player player, Any p1
- **Description**: Only used in SP R* Script dominoes_sp: p1 = 0

### _0xD78A26024BB13E08
- **Return Type**: void
- **Parameters**: Player player

### SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES
- **Return Type**: void
- **Parameters**: int netId, BOOL toggle

### SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER
- **Return Type**: void
- **Parameters**: int netId, Player player, BOOL toggle

### SET_NETWORK_ID_STOP_CLONING
- **Return Type**: void
- **Parameters**: int networkId, BOOL bStopCloning

### NETWORK_SET_ENTITY_REMAINS_WHEN_UNNETWORKED
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle

### NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle
- **Description**: if set to true other network players can't see it if set to false other network player can see it ========================================= ^^ I attempted this by grabbing an object with GET_ENTITY_PLAYER_IS_FREE_AIMING_AT and setting this naive no matter the toggle he could still see it.  pc or last gen?  ^^ last-gen  Old name: _NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK

### _0xE31A04513237DC89
- **Return Type**: void
- **Parameters**: Entity entity

### SET_NETWORK_ID_VISIBLE_IN_CUTSCENE
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### IS_NETWORK_ID_OWNED_BY_PARTICIPANT
- **Return Type**: BOOL
- **Parameters**: int netId

### _NETWORK_GET_PLAYER_OWNER_OF_NETWORK_ID
- **Return Type**: Player
- **Parameters**: int netId

### SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE
- **Return Type**: void
- **Parameters**: BOOL local, BOOL remote, int instanceId

### PREVENT_MIGRATION_OF_ENTITIES_IN_FAST_INSTANCE_FOR_LOCAL_PLAYER
- **Return Type**: void
- **Parameters**: BOOL toggle

### SET_LOCAL_PLAYER_INVISIBLE_LOCALLY
- **Return Type**: void
- **Parameters**: BOOL p0

### SET_PLAYER_INVISIBLE_LOCALLY
- **Return Type**: void
- **Parameters**: Player player, BOOL toggle

### SET_PLAYER_VISIBLE_LOCALLY
- **Return Type**: void
- **Parameters**: Player player, BOOL toggle

### SET_ENTITY_VISIBLE_IN_CUTSCENE
- **Return Type**: void
- **Parameters**: Entity entity, BOOL p1, BOOL p2, int p3

### _SET_DOOR_NETWORKED
- **Return Type**: void
- **Parameters**: Hash doorHash

### _SET_DOOR_UNNETWORKED
- **Return Type**: void
- **Parameters**: Any p0, BOOL toggle

### IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID
- **Return Type**: BOOL
- **Parameters**: int netID

### ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID
- **Return Type**: void
- **Parameters**: int netID, BOOL toggle

### IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE
- **Return Type**: BOOL
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### IS_SPHERE_VISIBLE_TO_PLAYER
- **Return Type**: BOOL
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### _0xD42C543F73233041
- **Return Type**: void
- **Parameters**: BOOL p0

### RESERVE_NETWORK_MISSION_OBJECTS
- **Return Type**: void
- **Parameters**: int amount

### RESERVE_NETWORK_CLIENT_MISSION_OBJECTS
- **Return Type**: void
- **Parameters**: int amount

### RESERVE_NETWORK_MISSION_PEDS
- **Return Type**: void
- **Parameters**: int amount

### RESERVE_NETWORK_CLIENT_MISSION_PEDS
- **Return Type**: void
- **Parameters**: int amount

### RESERVE_NETWORK_MISSION_VEHICLES
- **Return Type**: void
- **Parameters**: int amount

### RESERVE_NETWORK_MISSION_PICKUPS
- **Return Type**: void
- **Parameters**: int amount

### CAN_REGISTER_MISSION_OBJECTS
- **Return Type**: BOOL
- **Parameters**: int amount

### CAN_REGISTER_MISSION_PEDS
- **Return Type**: BOOL
- **Parameters**: int amount

### CAN_REGISTER_MISSION_VEHICLES
- **Return Type**: BOOL
- **Parameters**: int amount

### CAN_REGISTER_MISSION_PICKUPS
- **Return Type**: BOOL
- **Parameters**: int amount

### CAN_REGISTER_MISSION_ENTITIES
- **Return Type**: BOOL
- **Parameters**: int ped_amt, int vehicle_amt, int object_amt, int pickup_amt

### GET_NUM_RESERVED_MISSION_OBJECTS
- **Return Type**: int
- **Parameters**: BOOL p0
- **Description**: p0 appears to be for MP

### GET_NUM_RESERVED_MISSION_PEDS
- **Return Type**: int
- **Parameters**: BOOL p0
- **Description**: p0 appears to be for MP

### GET_NUM_RESERVED_MISSION_VEHICLES
- **Return Type**: int
- **Parameters**: BOOL p0
- **Description**: p0 appears to be for MP

### _GET_NUM_RESERVED_MISSION_PICKUPS
- **Return Type**: int
- **Parameters**: BOOL p0

### GET_NUM_CREATED_MISSION_OBJECTS
- **Return Type**: int
- **Parameters**: BOOL p0

### GET_NUM_CREATED_MISSION_PEDS
- **Return Type**: int
- **Parameters**: BOOL p0

### GET_NUM_CREATED_MISSION_VEHICLES
- **Return Type**: int
- **Parameters**: BOOL p0

### _GET_NUM_CREATED_MISSION_PICKUPS
- **Return Type**: int
- **Parameters**: BOOL p0

### _GET_RESERVED_MISSION_ENTITIES_FOR_THREAD
- **Return Type**: void
- **Parameters**: int threadId, int* pedMax, int* vehicleMax, int* unkMax, int* pedMin, int* vehicleMin, int* unkMin
- **Description**: Only used in R* Script net_stable_manager

### GET_RESERVED_MISSION_ENTITIES_IN_AREA
- **Return Type**: void
- **Parameters**: float x, float y, float z, BOOL p3, int* peds, int* vehicles, int* objects, int* pickups
- **Description**: Used in Script Function NET_ACE_CLIENT_VERIFY_ENTITY_RESERVATIONS Coords: Slot world position  Old name: _GET_RESERVATIONS_FOR_SLOT_WORLD_POSITION

### GET_RESERVED_MISSION_ENTITIES_IN_AREA
- **Return Type**: void
- **Parameters**: Vector3 vec, BOOL p3, int* peds, int* vehicles, int* objects, int* pickups

### _0x5F328FC909F0E0FF
- **Return Type**: BOOL
- **Parameters**: int p0, int p1, int p2, int p3
- **Description**: Note: this native was added in build 1311.23

### GET_MAX_NUM_NETWORK_OBJECTS
- **Return Type**: int
- **Parameters**: 
- **Description**: Always returns 60

### GET_MAX_NUM_NETWORK_PEDS
- **Return Type**: int
- **Parameters**: 
- **Description**: Always returns 110

### GET_MAX_NUM_NETWORK_VEHICLES
- **Return Type**: int
- **Parameters**: 
- **Description**: Always returns 40

### GET_MAX_NUM_NETWORK_PICKUPS
- **Return Type**: int
- **Parameters**: 
- **Description**: Always returns 80

### _0x75FC34A2BA345BD1
- **Return Type**: BOOL
- **Parameters**: Entity entity, Player player, Any* p2

### _0x979765465A6F25FC
- **Return Type**: void
- **Parameters**: Entity entity, BOOL p1
- **Description**: Must be called from a background script, otherwise it will do nothing.

### _0x5133CF81924F1129
- **Return Type**: int
- **Parameters**: 
- **Description**: Hardcoded to return zero.

### _0x1E4E097D71D449FB
- **Return Type**: int
- **Parameters**: BOOL p0
- **Description**: Note: this native was added in build 1311.23

### _0x982D7AD755B8F62C
- **Return Type**: int
- **Parameters**: BOOL p0
- **Description**: Note: this native was added in build 1311.23

### _0x917AD74BDCF8B6E9
- **Return Type**: int
- **Parameters**: BOOL p0
- **Description**: Note: this native was added in build 1311.23

### _0xF8DC69DC1AD19072
- **Return Type**: int
- **Parameters**: BOOL p0
- **Description**: Note: this native was added in build 1311.23

### _0x744BFBB0CA908161
- **Return Type**: int
- **Parameters**: BOOL p0
- **Description**: Note: this native was added in build 1311.23

### _0x106CBDD5077DEDE1
- **Return Type**: int
- **Parameters**: BOOL p0
- **Description**: Note: this native was added in build 1311.23

### _0xBAF7E2979442B29F
- **Return Type**: int
- **Parameters**: BOOL p0
- **Description**: Note: this native was added in build 1311.23

### _0x039B692B3318FAB6
- **Return Type**: int
- **Parameters**: BOOL p0
- **Description**: Note: this native was added in build 1311.23

### _0x4835413EA6F9C9CD
- **Return Type**: int
- **Parameters**: BOOL p0
- **Description**: Note: this native was added in build 1311.23

### GET_NETWORK_TIME
- **Return Type**: int
- **Parameters**: 

### GET_NETWORK_TIME_ACCURATE
- **Return Type**: int
- **Parameters**: 

### HAS_NETWORK_TIME_STARTED
- **Return Type**: BOOL
- **Parameters**: 

### GET_TIME_OFFSET
- **Return Type**: int
- **Parameters**: int timeA, int timeB
- **Description**: Adds the first argument to the second.

### IS_TIME_LESS_THAN
- **Return Type**: BOOL
- **Parameters**: int timeA, int timeB
- **Description**: Subtracts the second argument from the first, then returns whether the result is negative.

### IS_TIME_MORE_THAN
- **Return Type**: BOOL
- **Parameters**: int timeA, int timeB
- **Description**: Subtracts the first argument from the second, then returns whether the result is negative.

### GET_TIME_DIFFERENCE
- **Return Type**: int
- **Parameters**: int timeA, int timeB
- **Description**: Subtracts the second argument from the first.

### GET_CLOUD_TIME_AS_INT
- **Return Type**: int
- **Parameters**: 

### CONVERT_POSIX_TIME
- **Return Type**: void
- **Parameters**: int posixTime, Any* timeStructure
- **Description**: Takes the specified time and writes it to the structure specified in the second argument.  struct date_time { int year; int PADDING1; int month; int PADDING2; int day; int PADDING3; int hour; int PADDING4; int minute; int PADDING5; int second; int PADDING6; };

### NETWORK_SET_IN_SPECTATOR_MODE
- **Return Type**: void
- **Parameters**: BOOL toggle, Ped playerPed

### _NETWORK_SET_IN_STATIC_SPECTATOR_MODE
- **Return Type**: void
- **Parameters**: BOOL toggle, float x, float y, float z

### _NETWORK_SET_IN_STATIC_SPECTATOR_MODE
- **Return Type**: void
- **Parameters**: BOOL toggle, Vector3 vec

### NETWORK_IS_IN_SPECTATOR_MODE
- **Return Type**: BOOL
- **Parameters**: 

### _NETWORK_IS_PLAYER_IN_SPECTATOR_MODE
- **Return Type**: BOOL
- **Parameters**: Player player

### NETWORK_SET_IN_MP_CUTSCENE
- **Return Type**: void
- **Parameters**: BOOL p0, BOOL p1, int p2, BOOL p3

### NETWORK_IS_IN_MP_CUTSCENE
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_IS_PLAYER_IN_MP_CUTSCENE
- **Return Type**: BOOL
- **Parameters**: Player player
- **Description**: Note: scripts seem to indicate that this was renamed to NETWORK_IS_PLAYER_IN_MP_FAST_INSTANCE

### _0x34BC1E79546BA543
- **Return Type**: void
- **Parameters**: BOOL p0
- **Description**: _NETWORK_A* - _NETWORK_C*

### _SET_NETWORK_RESPOT_TIMER
- **Return Type**: void
- **Parameters**: Entity entity, int timer, BOOL p2

### _0x26A867C0B7A456D1
- **Return Type**: BOOL
- **Parameters**: Entity entity
- **Description**: _GET_LAUNCH_PARAM_(RESPOT?)* Name is probably invalid since this native only reads data from parsed entity.

### SET_LOCAL_PLAYER_AS_GHOST
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: Old name: _SET_LOCAL_PLAYER_AS_GHOST

### IS_ENTITY_A_GHOST
- **Return Type**: BOOL
- **Parameters**: Entity entity
- **Description**: Old name: _IS_ENTITY_GHOSTED_TO_LOCAL_PLAYER

### _SET_PLAYER_VISIBILITY_TO_LOCAL_PLAYER_DISABLED
- **Return Type**: void
- **Parameters**: Player player, BOOL disabled
- **Description**: _SET_PLAYER_V* - _SET_S*

### _SET_ENTITY_GHOSTED_TO_LOCAL_PLAYER
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle

### IS_OBJECT_REASSIGNMENT_IN_PROGRESS
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Note: this native was added in build 1311.16

### _0x039AD6B57D5179FF
- **Return Type**: int
- **Parameters**: 
- **Description**: Note: this native was added in build 1311.23

### _0x02B3CDD652B3CDD6
- **Return Type**: int
- **Parameters**: 
- **Description**: Note: this native was added in build 1311.16  GET_NUM_*

### _GET_NUM_PEER_NEGOTIATION_RESPONSES
- **Return Type**: int
- **Parameters**: 
- **Description**: Note: this native was added in build 1311.16

### _NETWORK_DEBUG_REQUEST_ENTITY_POSITION
- **Return Type**: void
- **Parameters**: Any* p0
- **Description**: Must be called from a background script, otherwise it will do nothing.

### NETWORK_GET_NETWORK_ID_FROM_ROPE_ID
- **Return Type**: int
- **Parameters**: int ropeId

### NETWORK_GET_ROPE_ID_FROM_NETWORK_ID
- **Return Type**: int
- **Parameters**: int netId

### _NETWORK_SPAWN_CONFIG_ADD_SPAWN_POINT
- **Return Type**: void
- **Parameters**: float x, float y, float z, float heading

### _NETWORK_SPAWN_CONFIG_ADD_SPAWN_POINT
- **Return Type**: void
- **Parameters**: Vector3 vec, float heading

### _0xA63E4F050F20021F
- **Return Type**: void
- **Parameters**: 

### _NETWORK_SPAWN_CONFIG_ADD_EXCLUSION_VOLUME
- **Return Type**: void
- **Parameters**: Volume volume

### _NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME
- **Return Type**: void
- **Parameters**: Volume volume

### _0x0BF90CBB6B72977B
- **Return Type**: void
- **Parameters**: 

### _0x7B3FF2D193628126
- **Return Type**: void
- **Parameters**: Player player

### _0x19B52C20B5C4757C
- **Return Type**: void
- **Parameters**: 

### NETWORK_SPAWN_CONFIG_SET_FLAGS
- **Return Type**: void
- **Parameters**: int flags

### _0x6CEE2E30021DAEC6
- **Return Type**: void
- **Parameters**: 
- **Description**: _NETWORK_SPAWN_CONFIG_*

### _NETWORK_SPAWN_CONFIG_ADD_PROPERTY_SCRIPTED
- **Return Type**: void
- **Parameters**: int configProperty, BOOL include

### _0xB131E686BD97B3F8
- **Return Type**: void
- **Parameters**: 

### _NETWORK_SPAWN_CONFIG_ADD_PROPERTY_PREFERENCE
- **Return Type**: void
- **Parameters**: int configProperty, BOOL include, float weight

### _0x405DDEFB1F531B18
- **Return Type**: void
- **Parameters**: Volume volume, BOOL p1, Any p2, Any p3

### _0x43CF999205084B4B
- **Return Type**: void
- **Parameters**: 

### _0x13F592FC3BF0EA84
- **Return Type**: void
- **Parameters**: Volume volume, BOOL p1, float originalWeight, Any p3, Any p4

### _0xCF23AB5BD47B384D
- **Return Type**: void
- **Parameters**: Any p0

### _0xE5634491A58C2703
- **Return Type**: void
- **Parameters**: float p0

### NETWORK_SPAWN_CONFIG_SET_GROUND_TO_ROOT_OFFSET
- **Return Type**: void
- **Parameters**: float offset

### _NETWORK_SPAWN_CONFIG_SET_LEVEL_WATER_DEPTH
- **Return Type**: void
- **Parameters**: int waterDepthLevel

### NETWORK_SPAWN_CONFIG_SET_TUNING_FLOAT
- **Return Type**: void
- **Parameters**: Hash p0, float p1

### _0x5D3C528B7A7DF836
- **Return Type**: void
- **Parameters**: Hash nsctf
- **Description**: _NETWORK_SPAWN_CONFIG_*

### _0x2686BD9566B65EDA
- **Return Type**: void
- **Parameters**: float x, float y, float z

### _0x2686BD9566B65EDA
- **Return Type**: void
- **Parameters**: Vector3 vec

### _0xBB1EC8C2EEF33BAA
- **Return Type**: void
- **Parameters**: Entity entity

### _0x67CCDF74C4DF7169
- **Return Type**: BOOL
- **Parameters**: 

### _0xC8B6D18E22484643
- **Return Type**: void
- **Parameters**: 

### _0x97BCE4C4B3191228
- **Return Type**: void
- **Parameters**: 

### _0x41452E8A3B9C0C4B
- **Return Type**: int
- **Parameters**: 

### _NETWORK_SPAWN_CONFIG_SEARCH_IN_PROGRESS
- **Return Type**: BOOL
- **Parameters**: 

### _0x61BFBAA795E712AD
- **Return Type**: void
- **Parameters**: 

### _NETWORK_SPAWN_CONFIG_SET_CANCEL_SEARCH
- **Return Type**: void
- **Parameters**: 

### _0x691E4DE5309EAEFC
- **Return Type**: void
- **Parameters**: Any p0, Any* p1

### NETWORK_START_SOLO_TUTORIAL_SESSION
- **Return Type**: void
- **Parameters**: 

### NETWORK_END_TUTORIAL_SESSION
- **Return Type**: void
- **Parameters**: 

### NETWORK_IS_IN_TUTORIAL_SESSION
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION
- **Return Type**: BOOL
- **Parameters**: Player player, int index
- **Description**: Old name: _NETWORK_IS_PLAYER_EQUAL_TO_INDEX

### NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES
- **Return Type**: void
- **Parameters**: BOOL toggle

### NETWORK_ALLOW_ENTITY_FADING_FOR_INSTANCES
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle

### _0xDC6AD5C046F33AB4
- **Return Type**: void
- **Parameters**: BOOL p0, BOOL p1

### _0x6C7E04E9DE451789
- **Return Type**: void
- **Parameters**: 

### NETWORK_SET_LOCAL_PLAYER_PENDING_FAST_INSTANCE_ID
- **Return Type**: void
- **Parameters**: int instanceId

### _NETWORK_GET_PLAYER_FAST_INSTANCE_ID
- **Return Type**: int
- **Parameters**: Player player

### NETWORK_CONCEAL_PLAYER
- **Return Type**: void
- **Parameters**: Player player, BOOL toggle

### NETWORK_IS_PLAYER_CONCEALED
- **Return Type**: BOOL
- **Parameters**: Player player

### _0x40FEDB13870042F1
- **Return Type**: void
- **Parameters**: 
- **Description**: Note: this native was added in build 1355.30

### _0x422F9D6D6C7BC290
- **Return Type**: void
- **Parameters**: int p0
- **Description**: Note: this native was added in build 1355.30

### NETWORK_REQUEST_CLOUD_TUNABLES
- **Return Type**: void
- **Parameters**: 
- **Description**: Note: this native was added in build 1311.23, but was only used after build 1436.25

### NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_GET_TUNABLE_CLOUD_CRC
- **Return Type**: int
- **Parameters**: 

### NETWORK_DOES_TUNABLE_EXIST
- **Return Type**: BOOL
- **Parameters**: Hash tunableContext, Hash tunableName

### NETWORK_ACCESS_TUNABLE_INT
- **Return Type**: BOOL
- **Parameters**: Hash tunableContext, Hash tunableName, int* value

### NETWORK_ACCESS_TUNABLE_BOOL
- **Return Type**: BOOL
- **Parameters**: Hash tunableContext, Hash tunableName

### NETWORK_TRY_ACCESS_TUNABLE_INT_HASH
- **Return Type**: int
- **Parameters**: Hash tunableContext, Hash tunableName, int defaultValue

### NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH
- **Return Type**: float
- **Parameters**: Hash tunableContext, Hash tunableName, float defaultValue

### NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH
- **Return Type**: BOOL
- **Parameters**: Hash tunableContext, Hash tunableName, BOOL defaultValue

### _0x894B5ECAB45D2342
- **Return Type**: void
- **Parameters**: int netHandle, Any p1

### NETWORK_DISABLE_PROXIMITY_MIGRATION
- **Return Type**: void
- **Parameters**: int netID

### _COMMERCE_STORE_IS_OPEN
- **Return Type**: BOOL
- **Parameters**: 

### _COMMERCE_STORE_IS_ENABLED
- **Return Type**: BOOL
- **Parameters**: 

### CLOUD_HAS_REQUEST_COMPLETED
- **Return Type**: BOOL
- **Parameters**: int id

### CLOUD_DID_REQUEST_SUCCEED
- **Return Type**: BOOL
- **Parameters**: int id

### _GET_LAUNCH_PARAM_EXISTS
- **Return Type**: BOOL
- **Parameters**: const char* paramName

### _SET_LAUNCH_PARAM_VALUE
- **Return Type**: void
- **Parameters**: const char* paramName, const char* value

### _CLEAR_LAUNCH_PARAM
- **Return Type**: void
- **Parameters**: const char* paramName

### _SET_LAUNCH_PARAM_STRING
- **Return Type**: void
- **Parameters**: const char* params

### CLEAR_SERVICE_EVENT_ARGUMENTS
- **Return Type**: void
- **Parameters**: 
- **Description**: Old name: _CLEAR_LAUNCH_PARAMS

### UGC_IS_REQUEST_PENDING
- **Return Type**: BOOL
- **Parameters**: int ugcRequestId

### UGC_HAS_REQUEST_FINISHED
- **Return Type**: BOOL
- **Parameters**: int ugcRequestId

### UGC_DID_REQUEST_SUCCEED
- **Return Type**: BOOL
- **Parameters**: int ugcRequestId

### _0xCD53E6CBF609C012
- **Return Type**: BOOL
- **Parameters**: int ugcRequestId

### _UGC_QUERY_BY_CONTENT_TYPE
- **Return Type**: int
- **Parameters**: int p0, int maxGet, const char* contentTypeName, int p3, int p4, int p5
- **Description**: Returns ugcRequestId

### _UGC_QUERY_BY_CATEGORY
- **Return Type**: int
- **Parameters**: int categoryType, int p1, int maxGet, const char* contentTypeName, int p4, BOOL p5
- **Description**: Returns ugcRequestId

### _UGC_QUERY_BY_CONTENT_ID
- **Return Type**: int
- **Parameters**: const char* contentId, BOOL latestVersion, const char* contentTypeName
- **Description**: Returns ugcRequestId

### _UGC_IS_BOOK_MARKED
- **Return Type**: BOOL
- **Parameters**: const char* contentId

### UGC_CLEAR_QUERY_RESULTS
- **Return Type**: void
- **Parameters**: int ugcRequestId

### UGC_QUERY_WAS_FORCE_CANCELLED
- **Return Type**: BOOL
- **Parameters**: int ugcRequestId

### UGC_QUERY_GET_CONTENT_NUM
- **Return Type**: int
- **Parameters**: int ugcRequestId

### _UGC_QUERY_GET_CREATOR_HANDLE
- **Return Type**: Any
- **Parameters**: Any p0, int index, Any* gamerHandle

### _UGC_QUERY_GET_MISSION_DESC_HASH
- **Return Type**: Hash
- **Parameters**: Any p0, int index

### _UGC_QUERY_GET_DATE
- **Return Type**: void
- **Parameters**: Any p0, int index, Any* p2

### _UGC_QUERY_GET_POSIX_UPDATED_DATE
- **Return Type**: int
- **Parameters**: Any p0, Any p1

### _UGC_QUERY_GET_POSIX_PUBLISHED_DATE
- **Return Type**: int
- **Parameters**: Any p0, Any p1

### _UGC_QUERY_GET_VERSION
- **Return Type**: int
- **Parameters**: Any p0, int index, int p2

### _UGC_QUERY_GET_LANGUAGE
- **Return Type**: int
- **Parameters**: Any p0, int index

### _UGC_QUERY_GET_PUBLISHED
- **Return Type**: BOOL
- **Parameters**: Any p0, Any p1

### _UGC_QUERY_GET_RATING
- **Return Type**: float
- **Parameters**: Any p0, int index, int p2

### _0x5F0E99071582DECA
- **Return Type**: Any
- **Parameters**: Any p0, int index, int p2

### UGC_QUERY_GET_CONTENT_HAS_PLAYER_RECORD
- **Return Type**: BOOL
- **Parameters**: Any p0, int index

### _UGC_QUERY_GET_BOOK_MARKED
- **Return Type**: BOOL
- **Parameters**: Any p0, int index

### _UGC_HAS_PRIVILEGE
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Checks if the user has ROS privilege 14.

### UGC_REQUEST_CONTENT_DATA_FROM_PARAMS
- **Return Type**: int
- **Parameters**: const char* contentTypeName, const char* contentId, int fileId, int fileVersion, int languageId

### UGC_REQUEST_CACHED_DESCRIPTION
- **Return Type**: int
- **Parameters**: Hash description

### UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS
- **Return Type**: BOOL
- **Parameters**: Hash description

### UGC_HAS_DESCRIPTION_REQUEST_FINISHED
- **Return Type**: BOOL
- **Parameters**: Hash description

### UGC_DID_DESCRIPTION_REQUEST_SUCCEED
- **Return Type**: BOOL
- **Parameters**: Hash description

### UGC_RELEASE_CACHED_DESCRIPTION
- **Return Type**: BOOL
- **Parameters**: Hash description

### UGC_RELEASE_ALL_CACHED_DESCRIPTIONS
- **Return Type**: void
- **Parameters**: 

### UGC_SET_QUERY_DATA_FROM_OFFLINE
- **Return Type**: void
- **Parameters**: BOOL p0

### UGC_IS_LANGUAGE_SUPPORTED
- **Return Type**: BOOL
- **Parameters**: int languageId

### _0xD4022C7286B0DFA2
- **Return Type**: Any
- **Parameters**: const char* p0, int p1, int p2

### _NETWORK_PERSONA_PHOTO_WRITE_SC_PROFILE
- **Return Type**: BOOL
- **Parameters**: const char* texture, int personaPhotoType, int formatIndex
- **Description**: Returns false if pedshot push failed

### _NETWORK_PERSONA_PHOTO_WRITE_LOCAL
- **Return Type**: BOOL
- **Parameters**: const char* texture, int playerSlot, int p2, int personaPhotoLocalCacheType
- **Description**: Returns false if pedshot push failed

### _NETWORK_IS_PREVIOUS_UPLOAD_PENDING
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: _NETWORK_IS_T* - _NETWORK_RE*

### _0xCC4E72C339461ED1
- **Return Type**: Any
- **Parameters**: 

### _TEXTURE_DOWNLOAD_TEXTURE_NAME_IS_VALID
- **Return Type**: BOOL
- **Parameters**: const char* name

### TEXTURE_DOWNLOAD_REQUEST
- **Return Type**: int
- **Parameters**: Any* gamerHandle, const char* filePath, const char* name, BOOL p3
- **Description**: Returns textureDownloadId

### _MUGSHOT_TEXTURE_DOWNLOAD_REQUEST
- **Return Type**: int
- **Parameters**: Any* gamerHandle, int p1, const char* name, BOOL p3
- **Description**: Returns textureDownloadId

### UGC_TEXTURE_DOWNLOAD_REQUEST
- **Return Type**: int
- **Parameters**: Any* p0, Any p1, Any p2, Any p3, Any* p4, BOOL p5

### _LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST
- **Return Type**: int
- **Parameters**: int playerSlot, int personaPhotoLocalCacheType

### TEXTURE_DOWNLOAD_RELEASE
- **Return Type**: void
- **Parameters**: int textureDownloadId

### _TEXTURE_DOWNLOAD_RELEASE_BY_NAME
- **Return Type**: void
- **Parameters**: const char* name

### GET_STATUS_OF_TEXTURE_DOWNLOAD
- **Return Type**: int
- **Parameters**: int textureDownloadId
- **Description**: 0 = succeeded 1 = pending 2 = failed

### _PEDMUGSHOT_GET_STATUS
- **Return Type**: int
- **Parameters**: 

### _PEDMUGSHOT_TAKE
- **Return Type**: BOOL
- **Parameters**: 

### _PEDMUGSHOT_REQUEST_SEND
- **Return Type**: Any
- **Parameters**: 

### _0x814729078AED6D30
- **Return Type**: void
- **Parameters**: 

### NETWORK_HAVE_ROS_BANNED_PRIV
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_HAS_ROS_PRIVILEGE
- **Return Type**: BOOL
- **Parameters**: int index

### NETWORK_START_USER_CONTENT_PERMISSIONS_CHECK
- **Return Type**: int
- **Parameters**: Any* gamerHandle
- **Description**: Always returns -1. Seems to be XB1 specific.

### _NETWORK_AUTO_SESSION_SET_ALLOWED_TO_SPLIT
- **Return Type**: void
- **Parameters**: BOOL toggle

### NETWORK_AUTO_SESSION_IS_ALLOWED_TO_MERGE
- **Return Type**: BOOL
- **Parameters**: 

### _NETWORK_AUTO_SESSION_SET_ALLOWED_TO_MERGE
- **Return Type**: void
- **Parameters**: BOOL toggle, Any* p1, int p2

### _NETWORK_AUTO_SESSION_IS_AUTO_WARP_DISABLED
- **Return Type**: BOOL
- **Parameters**: 

### _NETWORK_AUTO_SESSION_SET_AUTO_WARP_ENABLED
- **Return Type**: void
- **Parameters**: BOOL toggle

### NETWORK_AUTO_SESSION_CAN_SPLIT_SESSION
- **Return Type**: BOOL
- **Parameters**: int* p0

### NETWORK_AUTO_SESSION_SPLIT_SESSION
- **Return Type**: BOOL
- **Parameters**: int playersToTake, int maxInstancePlayers, int sessionFlags, int bucketId

### _NETWORK_AUTO_SESSION_IS_PROCESSING_SESSION_SPLIT
- **Return Type**: BOOL
- **Parameters**: 

### _NETWORK_AUTO_SESSION_SPLIT_SESSION_SUCCESSFUL
- **Return Type**: BOOL
- **Parameters**: 

### _NETWORK_AUTO_SESSION_IS_INSTANCED_SESSION
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_AUTO_SESSION_FINISH_INSTANCE
- **Return Type**: void
- **Parameters**: 

### _0xFD8112109A96877C
- **Return Type**: void
- **Parameters**: 
- **Description**: Note: this native was added in build 1311.23

### _0x5A91BCEF74944E93
- **Return Type**: void
- **Parameters**: Player player, float p1

### _0xFB3205788F8AFA3F
- **Return Type**: int
- **Parameters**: 
- **Description**: Note: this native was added in build 1311.23

### _0x335AF56613CA0F49
- **Return Type**: void
- **Parameters**: int p0
- **Description**: Note: this native was added in build 1311.23

### _0x9E5A47744C0F0376
- **Return Type**: BOOL
- **Parameters**: int p0
- **Description**: Note: this native was added in build 1311.23

### _0xD3B6EBC6C3D77D44
- **Return Type**: void
- **Parameters**: int p0
- **Description**: Note: this native was added in build 1311.23

### _0xA7670F7991099680
- **Return Type**: void
- **Parameters**: int p0
- **Description**: Note: this native was added in build 1311.23

### _0x7673C0D2C5CDAC55
- **Return Type**: void
- **Parameters**: 
- **Description**: Note: this native was added in build 1311.23

### _0x3CBD6565D9C3B133
- **Return Type**: void
- **Parameters**: int p0, int p1, float p2
- **Description**: Note: this native was added in build 1311.23

### _0x0D183D8490EE4366
- **Return Type**: void
- **Parameters**: int p0, int p1
- **Description**: Note: this native was added in build 1311.23

### _0xC1968045EEB563B7
- **Return Type**: void
- **Parameters**: int p0
- **Description**: Note: this native was added in build 1311.23

### NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED
- **Return Type**: BOOL
- **Parameters**: 

### _0x0B6B4507AC5EA8B8
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_IS_RESETTING_POPULATION
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_RESET_POPULATION
- **Return Type**: BOOL
- **Parameters**: BOOL p0, int p1

### NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND
- **Return Type**: void
- **Parameters**: BOOL toggle

### _0x3034C77C79A58880
- **Return Type**: void
- **Parameters**: BOOL p0

### NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION
- **Return Type**: void
- **Parameters**: Entity entity, BOOL toggle
- **Description**: Old name: _NETWORK_ALLOW_LOCAL_ENTITY_ATTACHMENT

### NETWORK_SHOW_CHAT_RESTRICTION_MSC
- **Return Type**: void
- **Parameters**: Player player
- **Description**: nullsub, doesn't do anything

### NETWORK_SHOW_PSN_UGC_RESTRICTION
- **Return Type**: void
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### NETWORK_IS_CONNECTED_VIA_RELAY
- **Return Type**: BOOL
- **Parameters**: Player player
- **Description**: Old name: _NETWORK_IS_CONNECTION_ENDPOINT_RELAY_SERVER

### NETWORK_GET_AVERAGE_LATENCY
- **Return Type**: float
- **Parameters**: Player player
- **Description**: Old name: _NETWORK_GET_AVERAGE_LATENCY_FOR_PLAYER

### NETWORK_GET_AVERAGE_PING
- **Return Type**: float
- **Parameters**: Player player
- **Description**: Same as NETWORK_GET_AVERAGE_LATENCY (0xD414BE129BB81B32)  Old name: _NETWORK_GET_AVERAGE_LATENCY_FOR_PLAYER_2

### NETWORK_GET_AVERAGE_PACKET_LOSS
- **Return Type**: float
- **Parameters**: Player player
- **Description**: Old name: _NETWORK_GET_AVERAGE_PACKET_LOSS_FOR_PLAYER

### NETWORK_GET_NUM_UNACKED_RELIABLES
- **Return Type**: int
- **Parameters**: Player player
- **Description**: Old name: _NETWORK_GET_NUM_UNACKED_FOR_PLAYER

### NETWORK_GET_UNRELIABLE_RESEND_COUNT
- **Return Type**: int
- **Parameters**: Player player
- **Description**: Old name: _NETWORK_GET_UNRELIABLE_RESEND_COUNT_FOR_PLAYER

### NETWORK_GET_HIGHEST_RELIABLE_RESEND_COUNT
- **Return Type**: int
- **Parameters**: Player player
- **Description**: Old name: _NETWORK_GET_OLDEST_RESEND_COUNT_FOR_PLAYER

### NETWORK_DUMP_NET_IF_CONFIG
- **Return Type**: void
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### NETWORK_GET_NET_STATISTICS_INFO
- **Return Type**: void
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### NETWORK_IS_PLAYER_INDEX_VALID
- **Return Type**: BOOL
- **Parameters**: Player player
- **Description**: Returns true if the passed value is less than 32.

### _GET_PLAYER_WAYPOINT_IS_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Player player

### _0x455156F47DC6B78C
- **Return Type**: void
- **Parameters**: BOOL p0

### _SET_LOCAL_PLAYER_DAMAGE_MULTIPLIER_FOR_PLAYER
- **Return Type**: void
- **Parameters**: Player player, float damageMultiplier

### NETWORK_TRIGGER_DAMAGE_EVENT_FOR_ZERO_DAMAGE
- **Return Type**: void
- **Parameters**: Entity entity, BOOL p1
- **Description**: Old name: _NETWORK_SET_VEHICLE_WHEELS_DESTRUCTIBLE

### _0x5CD3AAD8FF9ED121
- **Return Type**: void
- **Parameters**: Any p0

### _0x51951DE06C0D1C40
- **Return Type**: void
- **Parameters**: Player player, int type

### _0xE3AB5EEFCB6671A2
- **Return Type**: void
- **Parameters**: int setting

### _0x9B39B0555CC692B5
- **Return Type**: void
- **Parameters**: 

### _0xFE53B1F8D43F19BF
- **Return Type**: int
- **Parameters**: Player player1, Player player2

### _0x862C5040F4888741
- **Return Type**: BOOL
- **Parameters**: Player player1, Player player2

### _0x2CD41AC000E6F611
- **Return Type**: void
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### _0xACC44768AF229042
- **Return Type**: void
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### _0x7E300B5B86AB1D1A
- **Return Type**: void
- **Parameters**: Any* p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14

### GET_UNIQUE_INT_FOR_PLAYER
- **Return Type**: int
- **Parameters**: Player player

### _0x780A13F780A13F1B
- **Return Type**: void
- **Parameters**: BOOL toggle

### _NETWORK_IS_TRACKED_PLAYER_VISIBLE
- **Return Type**: BOOL
- **Parameters**: Player player, Player trackedPlayer

### NETWORK_IS_AIM_CAM_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Player player

### _NETWORK_ALERT
- **Return Type**: void
- **Parameters**: Hash ctx, Hash lh, int ec, int h

### _0x19447FCAE97704DC
- **Return Type**: void
- **Parameters**: Hash ctx, int ec, BOOL ex, BOOL ro
- **Description**: Note: this native was added in build 1311.23

### _0x2C4E98DDA475364F
- **Return Type**: void
- **Parameters**: const char* p0
- **Description**: nullsub, doesn't do anything

### _0x3F0ABAE38A0515AD
- **Return Type**: void
- **Parameters**: int p0, int p1

### _0x3F2EE18A3E294801
- **Return Type**: int
- **Parameters**: int p0

### _SET_SOCIAL_MATCHMAKING_ALLOWED
- **Return Type**: void
- **Parameters**: BOOL toggle

### _GET_SOCIAL_MATCHMAKING_ALLOWED
- **Return Type**: BOOL
- **Parameters**: 

### NETWORK_AWARD_HAS_REACHED_MAXCLAIM
- **Return Type**: BOOL
- **Parameters**: Any p0

### _0x271F95E55C663B8B
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x64A36BA85CE01A81
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0xE10F2D7715ABABEC
- **Return Type**: Any
- **Parameters**: Any p0

### _0x7A8E8DF782B47EB0
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0x77B299E8799B1332
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0x923346025512DFB7
- **Return Type**: Any
- **Parameters**: Any p0

### _NETWORK_GET_XP
- **Return Type**: int
- **Parameters**: 

### _NETWORK_GET_RANK
- **Return Type**: int
- **Parameters**: 

### NETWORK_SET_RECENT_GAMERS_ENABLED
- **Return Type**: void
- **Parameters**: BOOL toggle

### _0x273E04A3A7AD1F2D
- **Return Type**: BOOL
- **Parameters**: 

### _NETWORK_ADD_PLAYER_TO_RECENT_GAMERS_LIST
- **Return Type**: void
- **Parameters**: Player player, int p1

### NETWORK_REQUEST_RECENT_GAMER_NAMES
- **Return Type**: BOOL
- **Parameters**: int p0, int playerCount

### _NETWORK_IS_RECENT_GAMER_NAMES_REQUEST_IN_PROGRESS
- **Return Type**: BOOL
- **Parameters**: 

### _NETWORK_DID_RECENT_GAMER_NAMES_REQUEST_SUCCEED
- **Return Type**: BOOL
- **Parameters**: 

### _NETWORK_GET_NUM_RECENT_GAMERS
- **Return Type**: int
- **Parameters**: 

### NETWORK_GET_RECENT_GAMER_NAMES
- **Return Type**: BOOL
- **Parameters**: int p0, int p1, Any* outData, int dataSize

### _0x49CF17A564918E8D
- **Return Type**: void
- **Parameters**: 

### _0xD637D327080CD86E
- **Return Type**: void
- **Parameters**: int p0

### _0x564552C6AF1EEAB1
- **Return Type**: void
- **Parameters**: 

### NETWORK_ACTIVITY_RESET_TO_IDLE
- **Return Type**: void
- **Parameters**: 

### NETWORK_ACTIVITY_SET_CURRENT
- **Return Type**: void
- **Parameters**: int netPlaylistActivity

### _REPORT_PLAYER
- **Return Type**: void
- **Parameters**: Player player, int reportType, const char* description, const char* horseName


## OBJECT
### CREATE_OBJECT
- **Return Type**: Object
- **Parameters**: Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic, BOOL p7, BOOL p8

### CREATE_OBJECT
- **Return Type**: Object
- **Parameters**: Hash modelHash, Vector3 vec, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic, BOOL p7, BOOL p8

### CREATE_OBJECT_NO_OFFSET
- **Return Type**: Object
- **Parameters**: Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic, BOOL p7

### CREATE_OBJECT_NO_OFFSET
- **Return Type**: Object
- **Parameters**: Hash modelHash, Vector3 vec, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic, BOOL p7

### DELETE_OBJECT
- **Return Type**: void
- **Parameters**: Object* object
- **Description**: Deletes the specified object, then sets the handle pointed to by the pointer to NULL.

### PLACE_OBJECT_ON_GROUND_PROPERLY
- **Return Type**: BOOL
- **Parameters**: Object object, BOOL p1

### SLIDE_OBJECT
- **Return Type**: BOOL
- **Parameters**: Object object, float toX, float toY, float toZ, float speedX, float speedY, float speedZ, BOOL collision

### SLIDE_OBJECT
- **Return Type**: BOOL
- **Parameters**: Object object, Vector3 to, Vector3 speed, BOOL collision

### SET_OBJECT_TARGETTABLE
- **Return Type**: void
- **Parameters**: Object object, BOOL targettable

### _SET_OBJECT_TARGETTABLE_2
- **Return Type**: void
- **Parameters**: Object object, BOOL targettable

### _SET_OBJECT_TARGETTABLE_FOCUS
- **Return Type**: void
- **Parameters**: Object object, BOOL p1, BOOL p2
- **Description**: When p1 and p2 are true you can focus on the object (similar to when you focus a ped)

### _0xF6E88489B4E6EBE5
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xE157A8A336C7F04A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x46CBCF0E98A4E156
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### GET_CLOSEST_OBJECT_OF_TYPE
- **Return Type**: Object
- **Parameters**: float x, float y, float z, float radius, Hash modelHash, BOOL missionScriptObject, BOOL scriptHostObject, BOOL networkObject
- **Description**: missionScriptObject - if true won't return mission script objects scriptHostObject - if true won't return script host objects networkObject - if true won't return networked objects

### GET_CLOSEST_OBJECT_OF_TYPE
- **Return Type**: Object
- **Parameters**: Vector3 vec, float radius, Hash modelHash, BOOL missionScriptObject, BOOL scriptHostObject, BOOL networkObject

### HAS_OBJECT_BEEN_BROKEN
- **Return Type**: BOOL
- **Parameters**: Any p0

### HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN
- **Return Type**: BOOL
- **Parameters**: float p0, float p1, float p2, float p3, Hash modelHash, Any p5

### GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS
- **Return Type**: Vector3
- **Parameters**: float xPos, float yPos, float zPos, float heading, float xOffset, float yOffset, float zOffset
- **Description**: Old name: _GET_OBJECT_OFFSET_FROM_COORDS

### GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS
- **Return Type**: Vector3
- **Parameters**: Vector3 pos, float heading, Vector3 offset

### _ADD_DOOR_TO_SYSTEM_NEW
- **Return Type**: void
- **Parameters**: Hash doorHash, BOOL p1, BOOL p2, BOOL p3, int threadId, int p5, BOOL p6
- **Description**: Registers a door, hashes: https://github.com/femga/rdr3_discoveries/tree/master/doorHashes

### _IS_DOOR_REGISTERED_WITH_NETWORK
- **Return Type**: BOOL
- **Parameters**: Hash doorHash

### REMOVE_DOOR_FROM_SYSTEM
- **Return Type**: void
- **Parameters**: Hash doorHash

### DOOR_SYSTEM_SET_DOOR_STATE
- **Return Type**: void
- **Parameters**: Hash doorHash, int state
- **Description**: Door lock states: enum eDoorState { DOORSTATE_INVALID = -1, DOORSTATE_UNLOCKED, DOORSTATE_LOCKED_UNBREAKABLE, DOORSTATE_LOCKED_BREAKABLE, DOORSTATE_HOLD_OPEN_POSITIVE, DOORSTATE_HOLD_OPEN_NEGATIVE };

### DOOR_SYSTEM_GET_DOOR_STATE
- **Return Type**: int
- **Parameters**: Hash doorHash

### DOOR_SYSTEM_SET_AUTOMATIC_RATE
- **Return Type**: void
- **Parameters**: Hash doorHash, float rate

### DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE
- **Return Type**: void
- **Parameters**: Hash doorHash, float distance

### _0xB3B1546D23DF8DE1
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### DOOR_SYSTEM_SET_OPEN_RATIO
- **Return Type**: void
- **Parameters**: Hash doorHash, float ajar, BOOL forceUpdate
- **Description**: Sets the ajar angle of a door. Ranges from -1.0 to 1.0, and 0.0 is closed / default.

### _0x3A77DAE8B4FD7586
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED
- **Return Type**: void
- **Parameters**: Hash doorHash, BOOL p1

### _IS_DOOR_REGISTERED_WITH_OWNER
- **Return Type**: BOOL
- **Parameters**: Hash doorHash
- **Description**: Returns true if door is alredy registered with owner

### _DOOR_SYSTEM_CHANGE_SCRIPT_OWNER
- **Return Type**: void
- **Parameters**: Hash doorHash

### _DOOR_SYSTEM_GET_AUTOMATIC_RATE
- **Return Type**: float
- **Parameters**: Hash doorHash

### _0x6E2AA80BB0C03728
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _DOOR_SYSTEM_SET_AUTOMATIC_STATE
- **Return Type**: void
- **Parameters**: Hash doorHash, BOOL disable
- **Description**: _ALLOW_* - _ATTACH_*

### DOOR_SYSTEM_GET_OPEN_RATIO
- **Return Type**: float
- **Parameters**: Hash doorHash

### _0x7F458B543006C8FE
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xACD4F9831DFAD7F5
- **Return Type**: Any
- **Parameters**: Any p0

### _0x0C0A373D181BF900
- **Return Type**: void
- **Parameters**: Any p0

### _0xA93F925F1942E434
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x4D8611DFE1126478
- **Return Type**: Any
- **Parameters**: Any p0

### _0x57C242543B7B8FB9
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x4AE07EBA3462C5D5
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x22031584496CFB70
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xC07B91B996C1DE89
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### IS_DOOR_REGISTERED_WITH_SYSTEM
- **Return Type**: BOOL
- **Parameters**: Hash doorHash

### IS_DOOR_CLOSED
- **Return Type**: BOOL
- **Parameters**: Hash doorHash

### _0x0943113E02322164
- **Return Type**: Any
- **Parameters**: Object object, int p1
- **Description**: Params: p1 = 23 in R* Scripts

### _0x614D0B4533F842D3
- **Return Type**: Any
- **Parameters**: Any p0

### _DOOR_SYSTEM_FORCE_SHUT
- **Return Type**: void
- **Parameters**: Hash doorHash, BOOL p1

### _0xEBA314768FB35D58
- **Return Type**: Any
- **Parameters**: Any p0

### _0x5230BF34EB0EC645
- **Return Type**: void
- **Parameters**: Any p0

### DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, float radius, Hash hash, BOOL p5

### DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, float radius, Hash hash, BOOL p5

### IS_POINT_IN_ANGLED_AREA
- **Return Type**: BOOL
- **Parameters**: float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, BOOL p10, BOOL p11

### SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY
- **Return Type**: void
- **Parameters**: Object object, BOOL toggle

### SET_OBJECT_PHYSICS_PARAMS
- **Return Type**: void
- **Parameters**: Object object, float weight, float p2, float p3, float p4, float p5, float gravity, float p7, float p8, float p9, float p10, float buoyancy
- **Description**: Adjust the physics parameters of a prop, or otherwise known as "object". This is useful for simulated gravity.  Other parameters seem to be unknown.  p2: seems to be weight and gravity related. Higher value makes the obj fall faster. Very sensitive? p3: seems similar to p2 p4: makes obj fall slower the higher the value p5: similar to p4

### GET_OBJECT_FRAGMENT_DAMAGE_HEALTH
- **Return Type**: float
- **Parameters**: Any p0, BOOL p1

### _0x235C863DA77BD88D
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN
- **Return Type**: void
- **Parameters**: Object object, BOOL toggle

### BREAK_OBJECT_FRAGMENT_CHILD
- **Return Type**: void
- **Parameters**: Object object, Any p1, BOOL p2

### BREAK_ALL_OBJECT_FRAGMENT_BONES
- **Return Type**: void
- **Parameters**: Object object

### _0xAAACF33CBF9B990A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _DAMAGE_BONE_ON_PROP
- **Return Type**: void
- **Parameters**: Object object, int bone

### FIX_OBJECT_FRAGMENT
- **Return Type**: void
- **Parameters**: Object object

### _0x58DE624FA7FB0E7F
- **Return Type**: Any
- **Parameters**: Any p0

### _0x491439AEF410A2FC
- **Return Type**: void
- **Parameters**: Any p0

### _SET_OBJECT_BREAK_SCALE
- **Return Type**: void
- **Parameters**: Object object, float scale

### _0xCEAB54F4632C6EF6
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### TRACK_OBJECT_VISIBILITY
- **Return Type**: void
- **Parameters**: Object object

### IS_OBJECT_VISIBLE
- **Return Type**: BOOL
- **Parameters**: Object object

### SET_OBJECT_TAKES_DAMAGE_FROM_COLLIDING_WITH_BUILDINGS
- **Return Type**: void
- **Parameters**: Object object, BOOL enabled

### ALLOW_DAMAGE_EVENTS_FOR_NON_NETWORKED_OBJECTS
- **Return Type**: void
- **Parameters**: BOOL enabled

### _0x6579860A5558524A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xDFA1237F5228263F
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _GET_LIGHT_INTENSITY_FROM_OBJECT
- **Return Type**: float
- **Parameters**: Object object

### _SET_LIGHT_INTENSITY_FOR_OBJECT
- **Return Type**: void
- **Parameters**: Object object, float lightIntensity

### _SET_LIGHT_TRANSLUCENCY_FOR_OBJECT
- **Return Type**: void
- **Parameters**: Object object, float value
- **Description**: Params: value = 0.0 - 586.67 (?)

### _SET_LIGHT_SCATTERING_DISABLED_FOR_OBJECT
- **Return Type**: void
- **Parameters**: Object object, BOOL disable

### _0x7FCD49388BC9B775
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xFA99E8E575F2FEF8
- **Return Type**: Any
- **Parameters**: Any p0

### GET_RAYFIRE_MAP_OBJECT
- **Return Type**: Object
- **Parameters**: float x, float y, float z, float radius, const char* name

### GET_RAYFIRE_MAP_OBJECT
- **Return Type**: Object
- **Parameters**: Vector3 vec, float radius, const char* name

### SET_STATE_OF_RAYFIRE_MAP_OBJECT
- **Return Type**: void
- **Parameters**: Object object, int state

### GET_STATE_OF_RAYFIRE_MAP_OBJECT
- **Return Type**: int
- **Parameters**: Object object

### DOES_RAYFIRE_MAP_OBJECT_EXIST
- **Return Type**: BOOL
- **Parameters**: Object object

### GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE
- **Return Type**: float
- **Parameters**: Object object

### CREATE_PICKUP
- **Return Type**: Pickup
- **Parameters**: Hash pickupHash, float x, float y, float z, int flags, int p5, BOOL p6, Hash modelHash, int p8, float p9, Any p10
- **Description**: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/Placement%20Flags https://github.com/femga/rdr3_discoveries/blob/master/objects/pickup_list.lua

### CREATE_PICKUP
- **Return Type**: Pickup
- **Parameters**: Hash pickupHash, Vector3 vec, int flags, int p5, BOOL p6, Hash modelHash, int p8, float p9, Any p10

### CREATE_PICKUP_ROTATE
- **Return Type**: Pickup
- **Parameters**: Hash pickupHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int flags, int p8, int p9, BOOL p10, Hash modelHash, int p12, float p13, Any p14
- **Description**: flags: see CREATE_PICKUP

### CREATE_PICKUP_ROTATE
- **Return Type**: Pickup
- **Parameters**: Hash pickupHash, Vector3 pos, Vector3 rot, int flags, int p8, int p9, BOOL p10, Hash modelHash, int p12, float p13, Any p14

### CREATE_AMBIENT_PICKUP
- **Return Type**: Object
- **Parameters**: Hash pickupHash, float x, float y, float z, int flags, int value, Hash modelHash, BOOL p7, BOOL p8, int p9, float p10
- **Description**: flags: see CREATE_PICKUP

### CREATE_AMBIENT_PICKUP
- **Return Type**: Object
- **Parameters**: Hash pickupHash, Vector3 vec, int flags, int value, Hash modelHash, BOOL p7, BOOL p8, int p9, float p10

### CREATE_PORTABLE_PICKUP
- **Return Type**: Object
- **Parameters**: Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash

### CREATE_PORTABLE_PICKUP
- **Return Type**: Object
- **Parameters**: Hash pickupHash, Vector3 vec, BOOL placeOnGround, Hash modelHash

### ATTACH_PORTABLE_PICKUP_TO_PED
- **Return Type**: void
- **Parameters**: Object pickupObject, Ped ped

### DETACH_PORTABLE_PICKUP_FROM_PED
- **Return Type**: void
- **Parameters**: Object pickupObject

### _HIDE_PICKUP_OBJECT
- **Return Type**: void
- **Parameters**: Object pickupObject, BOOL toggle

### SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER
- **Return Type**: void
- **Parameters**: Hash modelHash, int p1

### _0x3E2616E7EA539480
- **Return Type**: Any
- **Parameters**: Any p0

### SET_LOCAL_PLAYER_CAN_COLLECT_PORTABLE_PICKUPS
- **Return Type**: void
- **Parameters**: BOOL toggle

### GET_SAFE_PICKUP_COORDS
- **Return Type**: Vector3
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### GET_PICKUP_COORDS
- **Return Type**: Vector3
- **Parameters**: Pickup pickup

### REMOVE_ALL_PICKUPS_OF_TYPE
- **Return Type**: void
- **Parameters**: Hash pickupHash

### HAS_PICKUP_BEEN_COLLECTED
- **Return Type**: BOOL
- **Parameters**: Pickup pickup

### REMOVE_PICKUP
- **Return Type**: void
- **Parameters**: Pickup pickup

### SET_PICKUP_DO_NOT_AUTO_PLACE_ON_GROUND
- **Return Type**: void
- **Parameters**: Object pickupObject

### DOES_PICKUP_EXIST
- **Return Type**: BOOL
- **Parameters**: Pickup pickup

### DOES_PICKUP_OBJECT_EXIST
- **Return Type**: BOOL
- **Parameters**: Object pickupObject

### GET_PICKUP_OBJECT
- **Return Type**: Object
- **Parameters**: Pickup pickup

### IS_OBJECT_A_PORTABLE_PICKUP
- **Return Type**: BOOL
- **Parameters**: Object object

### _IS_PICKUP_TYPE_VALID
- **Return Type**: BOOL
- **Parameters**: Hash pickupHash

### DOES_PICKUP_OF_TYPE_EXIST_IN_AREA
- **Return Type**: BOOL
- **Parameters**: Hash pickupHash, float x, float y, float z, float radius

### DOES_PICKUP_OF_TYPE_EXIST_IN_AREA
- **Return Type**: BOOL
- **Parameters**: Hash pickupHash, Vector3 vec, float radius

### SET_PICKUP_REGENERATION_TIME
- **Return Type**: void
- **Parameters**: Pickup pickup, int duration

### FORCE_PICKUP_REGENERATE
- **Return Type**: void
- **Parameters**: Any p0

### _SET_NETWORK_PICKUP_USABLE_FOR_PLAYER
- **Return Type**: void
- **Parameters**: Player player, Hash pickupHash, BOOL isUsable
- **Description**: Params: p2 controls whether to make pickups usable/collectable or not in networked games

### SET_LOCAL_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_WITH_MODEL
- **Return Type**: void
- **Parameters**: Hash modelHash, BOOL toggle
- **Description**: Maximum amount of pickup models that can be disallowed is 10.  Old name: _SET_LOCAL_PLAYER_CAN_USE_PICKUPS_WITH_THIS_MODEL

### BLOCK_PICKUP_FROM_PLAYER_COLLECTION
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_PICKUP_NOT_LOOTABLE
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x1F5E07E14A86FAFC
- **Return Type**: void
- **Parameters**: BOOL p0
- **Description**: _SET_A(MBIENT_PICKUP_?)*

### SET_TEAM_PICKUP_OBJECT
- **Return Type**: void
- **Parameters**: Object object, Any p1, BOOL p2

### _0x9F52AD67D1A91BAD
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### PREVENT_COLLECTION_OF_PORTABLE_PICKUP
- **Return Type**: void
- **Parameters**: Object object, BOOL p1, BOOL p2

### SET_PICKUP_GENERATION_RANGE_MULTIPLIER
- **Return Type**: void
- **Parameters**: float multiplier

### SET_PICKUP_UNCOLLECTABLE
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_PICKUP_HIDDEN_WHEN_UNCOLLECTABLE
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_AMBIENT_PICKUP_LIFETIME
- **Return Type**: void
- **Parameters**: int lifetime

### SET_PICKUP_PARTICLE_FX_SPAWN
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_PICKUP_PARTICLE_FX_HIGHLIGHT
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SUPPRESS_PICKUP_REWARD_TYPE
- **Return Type**: void
- **Parameters**: int rewardType, BOOL suppress

### _0x20135AF9C10D2A3D
- **Return Type**: Any
- **Parameters**: Any p0

### _SET_PICKUP_COLLECTABLE_ON_MOUNT
- **Return Type**: void
- **Parameters**: Object object

### _0xDE116ECFFDD4B997
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### GET_WEAPON_TYPE_FROM_PICKUP_TYPE
- **Return Type**: Hash
- **Parameters**: Hash pickupHash

### _GET_AMMO_TYPE_FROM_PICKUP_TYPE
- **Return Type**: Hash
- **Parameters**: Hash pickupHash

### SET_OBJECT_TINT_INDEX
- **Return Type**: void
- **Parameters**: Object object, int textureVariation
- **Description**: Alt name: _SET_OBJECT_TINT  Old name: _SET_OBJECT_TEXTURE_VARIATION

### _GET_OBJECT_LIGHT_INTENSITY
- **Return Type**: float
- **Parameters**: Object object
- **Description**: Returns float value to be used with _SET_LIGHT_INTENSITY_FOR_OBJECT

### _SET_OBJECT_BURN_OPACITY
- **Return Type**: void
- **Parameters**: Object object, float opacity

### _SET_OBJECT_BURN_INTENSITY
- **Return Type**: void
- **Parameters**: Object object, float intensity

### _SET_OBJECT_BURN_LEVEL
- **Return Type**: void
- **Parameters**: Object object, float burnLevel, BOOL affectAsh
- **Description**: Seems to mostly have effect on wood-made objects https://imgur.com/a/32oQvOn

### _0x9A74A9CADFA8A598
- **Return Type**: void
- **Parameters**: Any p0

### _RESET_OBJECT_VELOCITY
- **Return Type**: void
- **Parameters**: Object object

### _SET_OBJECT_BURN_SPEED
- **Return Type**: void
- **Parameters**: Object object, float speed, float p2
- **Description**: p2 is usually the same as speed parameter

### _0xCBFBD38F2E0A263B
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### CONVERT_OLD_PICKUP_TYPE_TO_NEW
- **Return Type**: Hash
- **Parameters**: Hash pickupHash
- **Description**: Old name: _GET_PICKUP_HASH

### SET_FORCE_OBJECT_THIS_FRAME
- **Return Type**: void
- **Parameters**: float x, float y, float z, float p3

### SET_FORCE_OBJECT_THIS_FRAME
- **Return Type**: void
- **Parameters**: Vector3 vec, float p3

### _0xD91E55B6C005EB09
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE
- **Return Type**: void
- **Parameters**: Object object
- **Description**: Old name: _MARK_OBJECT_FOR_DELETION

### _0xCAAF2BCCFEF37F77
- **Return Type**: void
- **Parameters**: Object object, Any p1
- **Description**: _SET_OBJECT_*

### _0x08C5825A2932EA7B
- **Return Type**: Any
- **Parameters**: Any p0

### _0x7D4411D6736CD295
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x250EBB11E81A10BE
- **Return Type**: Any
- **Parameters**: Any p0

### _0x2BF1953C0C21AC88
- **Return Type**: Any
- **Parameters**: Any p0

### CREATE_OBJECT_SKELETON
- **Return Type**: BOOL
- **Parameters**: Object object

### _MAKE_ITEM_CARRIABLE
- **Return Type**: void
- **Parameters**: Object object
- **Description**: _PRE* or _Q* or _RE*

### _0xF65EDE5D02A7A760
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_AUTO_JUMPABLE_BY_HORSE
- **Return Type**: void
- **Parameters**: Object object, BOOL p1
- **Description**: Sets object as auto-jumpable by horse.

### _SET_NOT_JUMPABLE_BY_HORSE
- **Return Type**: void
- **Parameters**: Object object, BOOL p1
- **Description**: Sets object as not jumpable by horse.

### _SET_OBJECT_KICKABLE
- **Return Type**: void
- **Parameters**: Object object, BOOL kickable

### SET_CUSTOM_TEXTURES_ON_OBJECT
- **Return Type**: void
- **Parameters**: Object object, Hash txdHash, Any p2, Any p3

### _0xD503D6F0986D58BC
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xAEE6C800E124CFE1
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x3DF1A0A58498E209
- **Return Type**: void
- **Parameters**: Object object, Any p1


## PAD
### _SET_CONTROL_CONTEXT
- **Return Type**: void
- **Parameters**: int control, Hash context
- **Description**: Sets the current control context. Must be called every frame.  context: https://alloc8or.re/rdr3/doc/misc/input_contexts.txt For more information, see common:/data/control/settings.meta https://github.com/femga/rdr3_discoveries/tree/master/Controls

### _GET_CURRENT_CONTROL_CONTEXT
- **Return Type**: Hash
- **Parameters**: int control
- **Description**: Gets the current control context. See: _SET_CONTROL_CONTEXT

### _IS_CONTROL_ACTION_VALID
- **Return Type**: BOOL
- **Parameters**: Hash action, int control

### IS_CONTROL_ENABLED
- **Return Type**: BOOL
- **Parameters**: int control, Hash action

### IS_CONTROL_PRESSED
- **Return Type**: BOOL
- **Parameters**: int control, Hash action

### IS_CONTROL_RELEASED
- **Return Type**: BOOL
- **Parameters**: int control, Hash action

### IS_CONTROL_JUST_PRESSED
- **Return Type**: BOOL
- **Parameters**: int control, Hash action

### IS_CONTROL_JUST_RELEASED
- **Return Type**: BOOL
- **Parameters**: int control, Hash action

### GET_CONTROL_VALUE
- **Return Type**: int
- **Parameters**: int control, Hash action

### GET_CONTROL_NORMAL
- **Return Type**: float
- **Parameters**: int control, Hash action

### GET_CONTROL_UNBOUND_NORMAL
- **Return Type**: float
- **Parameters**: int control, Hash action

### SET_CONTROL_VALUE_NEXT_FRAME
- **Return Type**: BOOL
- **Parameters**: int control, Hash action, float value
- **Description**: This is for simulating player input. value is a float value from 0 - 1  control: see IS_CONTROL_ENABLED  Old name: _SET_CONTROL_NORMAL

### IS_DISABLED_CONTROL_PRESSED
- **Return Type**: BOOL
- **Parameters**: int control, Hash action

### IS_DISABLED_CONTROL_JUST_PRESSED
- **Return Type**: BOOL
- **Parameters**: int control, Hash action

### IS_DISABLED_CONTROL_JUST_RELEASED
- **Return Type**: BOOL
- **Parameters**: int control, Hash action

### GET_DISABLED_CONTROL_NORMAL
- **Return Type**: float
- **Parameters**: int control, Hash action

### GET_DISABLED_CONTROL_UNBOUND_NORMAL
- **Return Type**: float
- **Parameters**: int control, Hash action

### GET_CONTROL_HOW_LONG_AGO
- **Return Type**: int
- **Parameters**: int control
- **Description**: Returns time in ms since last input.

### _GET_DISABLED_CONTROL_HOW_LONG_AGO
- **Return Type**: int
- **Parameters**: int control

### IS_USING_KEYBOARD_AND_MOUSE
- **Return Type**: BOOL
- **Parameters**: int control
- **Description**: padIndex is not used  Old name: _IS_USING_KEYBOARD

### _0x43F35DDB2905D945
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xBD629C1C4F501C80
- **Return Type**: Any
- **Parameters**: Any p0

### HAVE_CONTROLS_CHANGED
- **Return Type**: BOOL
- **Parameters**: int control

### SET_CONTROL_LIGHT_EFFECT_COLOR
- **Return Type**: void
- **Parameters**: int control, int red, int green, int blue
- **Description**: nullsub, doesn't do anything  Old name: _SET_CONTROL_GROUP_COLOR

### CLEAR_CONTROL_LIGHT_EFFECT
- **Return Type**: void
- **Parameters**: int control
- **Description**: nullsub, doesn't do anything

### SET_CONTROL_LIGHT_EFFECT_FLASHING_COLOR
- **Return Type**: void
- **Parameters**: int control, int red, int green, int blue
- **Description**: nullsub, doesn't do anything

### SET_CONTROL_SHAKE
- **Return Type**: void
- **Parameters**: int control, int duration, int frequency
- **Description**: Old name: SET_PAD_SHAKE

### SET_CONTROL_TRIGGER_SHAKE
- **Return Type**: void
- **Parameters**: int control, int leftDuration, int leftFrequency, int rightDuration, int rightFrequency
- **Description**: nullsub, doesn't do anything

### STOP_CONTROL_SHAKE
- **Return Type**: void
- **Parameters**: int control
- **Description**: Old name: STOP_PAD_SHAKE

### SET_CONTROL_SHAKE_SUPPRESSED_ID
- **Return Type**: void
- **Parameters**: int control, int uniqueId
- **Description**: Old name: SET_PAD_SHAKE_SUPPRESSED_ID

### CLEAR_CONTROL_SHAKE_SUPPRESSED_ID
- **Return Type**: void
- **Parameters**: int control
- **Description**: Old name: _CLEAR_SUPPRESSED_PAD_RUMBLE

### IS_LOOK_INVERTED
- **Return Type**: BOOL
- **Parameters**: 

### SET_INPUT_EXCLUSIVE
- **Return Type**: void
- **Parameters**: int control, Hash action

### DISABLE_CONTROL_ACTION
- **Return Type**: void
- **Parameters**: int control, Hash action, BOOL disableRelatedActions

### ENABLE_CONTROL_ACTION
- **Return Type**: void
- **Parameters**: int control, Hash action, BOOL enableRelatedActions

### DISABLE_ALL_CONTROL_ACTIONS
- **Return Type**: void
- **Parameters**: int control

### _0x5F217BC1190503D8
- **Return Type**: void
- **Parameters**: const char* rumbleCurve, float p1
- **Description**: rumbleCurve: common_0/data/rumblecurves.meta

### _0x709BA8C08C5C008D
- **Return Type**: void
- **Parameters**: 

### _0x1252C029FC8EBB4D
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: _IS_R* - _IS_S*

### _0x52C68E92D6E23ADD
- **Return Type**: void
- **Parameters**: Any p0


## PATHFIND
### SET_ROADS_IN_AREA
- **Return Type**: void
- **Parameters**: float xMin, float yMin, float zMin, float xMax, float yMax, float zMax, Any p6, Any p7, Any p8

### SET_ROADS_IN_AREA
- **Return Type**: void
- **Parameters**: Vector3 min, Vector3 max, Any p6, Any p7, Any p8

### SET_ROADS_IN_ANGLED_AREA
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10

### SET_ROADS_IN_VOLUME
- **Return Type**: void
- **Parameters**: Volume volume, BOOL p1, BOOL p2, BOOL p3

### RESET_ROADS_IN_VOLUME
- **Return Type**: void
- **Parameters**: Volume volume, BOOL p1

### SET_ROADS_BACK_TO_ORIGINAL
- **Return Type**: void
- **Parameters**: float xMin, float yMin, float zMin, float xMax, float yMax, float zMax, Any p6, Any p7

### SET_ROADS_BACK_TO_ORIGINAL
- **Return Type**: void
- **Parameters**: Vector3 min, Vector3 max, Any p6, Any p7

### SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8

### _0xAFE2AE66F6251C66
- **Return Type**: void
- **Parameters**: float xMin, float yMin, float zMin, float xMax, float yMax, float zMax, int p6, Any p7

### _0xAFE2AE66F6251C66
- **Return Type**: void
- **Parameters**: Vector3 min, Vector3 max, int p6, Any p7

### _0x4358BCF14C91761C
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9

### _0xB03944057FD735BA
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x6C3F12ECEB6D2E2A
- **Return Type**: void
- **Parameters**: float xMin, float yMin, float zMin, float xMax, float yMax, float zMax, Any p6, Any p7

### _0x6C3F12ECEB6D2E2A
- **Return Type**: void
- **Parameters**: Vector3 min, Vector3 max, Any p6, Any p7

### _0x5A4E1A41E3A02AD0
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### GET_CLOSEST_VEHICLE_NODE
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, Vector3* outPosition, int nodeType, float p5, float p6

### GET_CLOSEST_VEHICLE_NODE
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, Vector3* outPosition, int nodeType, float p5, float p6

### _0xCA27A86CAA4E98ED
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### GET_CLOSEST_VEHICLE_NODE_WITH_HEADING
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, Vector3* outPosition, float* outHeading, int nodeType, float p6, float p7

### GET_CLOSEST_VEHICLE_NODE_WITH_HEADING
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, Vector3* outPosition, float* outHeading, int nodeType, float p6, float p7

### GET_NTH_CLOSEST_VEHICLE_NODE
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, int nthClosest, Vector3* outPosition, int unknown1, float unknown2, Any unknown3

### GET_NTH_CLOSEST_VEHICLE_NODE
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, int nthClosest, Vector3* outPosition, int unknown1, float unknown2, Any unknown3

### GET_NTH_CLOSEST_VEHICLE_NODE_ID
- **Return Type**: int
- **Parameters**: float x, float y, float z, int nth, int nodetype, float p5, float p6

### GET_NTH_CLOSEST_VEHICLE_NODE_ID
- **Return Type**: int
- **Parameters**: Vector3 vec, int nth, int nodetype, float p5, float p6

### GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, int nthClosest, Vector3* outPosition, float* heading, Any* unknown1, int unknown2, float unknown3, float unknown4

### GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, int nthClosest, Vector3* outPosition, float* heading, Any* unknown1, int unknown2, float unknown3, float unknown4

### GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING
- **Return Type**: int
- **Parameters**: float x, float y, float z, int nthClosest, float* returnHeading, int* returnNumLanes, int nodeFlags, float zMeasureMult, float zTolerance
- **Description**: Returns the nth closest vehicle node with a heading to a coord

### GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING
- **Return Type**: int
- **Parameters**: Vector3 vec, int nthClosest, float* returnHeading, int* returnNumLanes, int nodeFlags, float zMeasureMult, float zTolerance

### GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, float desiredX, float desiredY, float desiredZ, int nthClosest, Vector3* outPosition, float* outHeading, int nodetype, Any p10, Any p11

### GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, Vector3 desired, int nthClosest, Vector3* outPosition, float* outHeading, int nodetype, Any p10, Any p11

### IS_VEHICLE_NODE_ID_VALID
- **Return Type**: BOOL
- **Parameters**: int vehicleNodeId
- **Description**: Returns true if the id is non zero.

### GET_VEHICLE_NODE_POSITION
- **Return Type**: void
- **Parameters**: int nodeId, Vector3* outPosition

### GET_VEHICLE_NODE_IS_SWITCHED_OFF
- **Return Type**: BOOL
- **Parameters**: int nodeID

### GET_CLOSEST_ROAD
- **Return Type**: Any
- **Parameters**: float x, float y, float z, float p3, int p4, Vector3* p5, Vector3* p6, Any* p7, Any* p8, float* p9, BOOL p10

### GET_CLOSEST_ROAD
- **Return Type**: Any
- **Parameters**: Vector3 vec, float p3, int p4, Vector3* p5, Vector3* p6, Any* p7, Any* p8, float* p9, BOOL p10

### ARE_NODES_LOADED_FOR_AREA
- **Return Type**: BOOL
- **Parameters**: float x1, float y1, float x2, float y2

### REQUEST_PATH_NODES_IN_AREA_THIS_FRAME
- **Return Type**: BOOL
- **Parameters**: float x1, float y1, float x2, float y2
- **Description**: Old name: REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT

### GET_RANDOM_VEHICLE_NODE
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, float radius, int minLanes, BOOL avoidDeadEnds, BOOL avoidHighways, Vector3* outPosition, int* nodeId

### GET_RANDOM_VEHICLE_NODE
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, float radius, int minLanes, BOOL avoidDeadEnds, BOOL avoidHighways, Vector3* outPosition, int* nodeId

### _GET_SPAWN_DATA_FOR_ROAD_NODE
- **Return Type**: void
- **Parameters**: int nodeId, float x, float y, float z, Vector3* outCoords, float* heading

### _GET_SPAWN_DATA_FOR_ROAD_NODE
- **Return Type**: void
- **Parameters**: int nodeId, Vector3 vec, Vector3* outCoords, float* heading

### IS_POINT_ON_ROAD
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, Vehicle vehicle
- **Description**: Gets a value indicating whether the specified position is on a road.

### IS_POINT_ON_ROAD
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, Vehicle vehicle

### SET_PED_PATHS_IN_AREA
- **Return Type**: void
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown, Any p7

### SET_PED_PATHS_IN_AREA
- **Return Type**: void
- **Parameters**: Vector3 vec1, Vector3 vec2, BOOL unknown, Any p7

### _0xE5EF9DE716FF737E
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### GET_SAFE_COORD_FOR_PED
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, BOOL onGround, Vector3* outPosition, int flags

### GET_SAFE_COORD_FOR_PED
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, BOOL onGround, Vector3* outPosition, int flags

### SET_PED_PATHS_BACK_TO_ORIGINAL
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### _0xCF213A5FC3ABFC08
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### ADD_NAVMESH_REQUIRED_REGION
- **Return Type**: void
- **Parameters**: float x, float y, float radius

### IS_NAVMESH_LOADED_IN_AREA
- **Return Type**: BOOL
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2
- **Description**: Returns whether navmesh for the region is loaded.

### IS_NAVMESH_LOADED_IN_AREA
- **Return Type**: BOOL
- **Parameters**: Vector3 vec1, Vector3 vec2

### GET_NUM_NAVMESHES_EXISTING_IN_AREA
- **Return Type**: int
- **Parameters**: float p0, float p1, float p2, float p3, float p4, float p5

### _NAVMESH_ACTIVATE_SWAP
- **Return Type**: BOOL
- **Parameters**: const char* name

### _NAVMESH_DEACTIVATE_SWAP
- **Return Type**: BOOL
- **Parameters**: const char* name

### _NAVMESH_IS_SWAP_ACTIVE
- **Return Type**: BOOL
- **Parameters**: const char* name

### _NAVMESH_DOES_SWAP_EXIST
- **Return Type**: BOOL
- **Parameters**: const char* name

### _0x5A3B54ADDF5472A3
- **Return Type**: int
- **Parameters**: const char* p0

### _NAVMESH_ASSIGN_NAVMESH_TO_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, const char* navMeshName

### ADD_NAVMESH_BLOCKING_OBJECT
- **Return Type**: Any
- **Parameters**: float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, Any p8

### REMOVE_NAVMESH_BLOCKING_OBJECT
- **Return Type**: void
- **Parameters**: Any p0

### DOES_NAVMESH_BLOCKING_OBJECT_EXIST
- **Return Type**: BOOL
- **Parameters**: Any p0

### _ADD_NAVMESH_BLOCKING_VOLUME
- **Return Type**: BOOL
- **Parameters**: Volume volume, int flags

### _REMOVE_NAVMESH_BLOCKING_VOLUME
- **Return Type**: void
- **Parameters**: Volume volume

### _DOES_NAVMESH_BLOCKING_VOLUME_EXIST
- **Return Type**: BOOL
- **Parameters**: Volume volume

### _0x6DAD6630AE4A74CB
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### NAVMESH_REQUEST_PATH
- **Return Type**: int
- **Parameters**: Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, int bitFlag
- **Description**: Starts a nav mesh query for a path between coordinates with a given ped and returns a handle to be validated by _NAVMESH_REQUESTED_QUERY_STATUS and then _NAVMESH_REQUESTED_PATH_WAYPOINTS_FOUND  Only bit flag values used in scripts are 0, 23, and 29. 23 is used with dogs and horses. 29 with legendary animals.

### NAVMESH_REQUEST_PATH
- **Return Type**: int
- **Parameters**: Ped ped, Vector3 vec1, Vector3 vec2, int bitFlag

### _NAVMESH_CLEAR_REQUESTED_PATH
- **Return Type**: BOOL
- **Parameters**: int path
- **Description**: Called in scripts after finished with requested pathes. Immediately resets all values connected to the path handle except query status, which changes from 1 to 2 before eventually becoming fully invalidated to 0.

### _NAVMESH_REQUESTED_QUERY_STATUS
- **Return Type**: int
- **Parameters**: int path
- **Description**: Returns eNavMeshQueryStatus enum eNavMeshQueryStatus { QS_NOT_FOUND, QS_COMPLETE, QS_PENDING };  It appears that the pending state of 2 is at least also used when cleaning up a request (_NAVMESH_CLEAR_REQUESTED_PATH) or if a request never completes. Eventually queries are invalidated and return 0.  Old name: _NAVMESH_QUERY_STATUS

### _NAVMESH_REQUESTED_PATH_WAYPOINTS_FOUND
- **Return Type**: BOOL
- **Parameters**: int path
- **Description**: Returns true if a path of waypoints was found. Waypoints can be retrieved with _NAVMESH_REQUESTED_PATH_NUM_WAYPOINTS and _NAVMESH_REQUESTED_PATH_WAYPOINT_BY_INDEX

### _NAVMESH_REQUESTED_PATH_WAYPOINTS_TERRAIN
- **Return Type**: int
- **Parameters**: int path
- **Description**: Returns a bit flag for seemingly terrain within the waypoints in the path. Checked against bit value 2 to match water in the path, seems to always contain at least 1 though regardless of location/ped.

### _NAVMESH_REQUESTED_PATH_NUM_WAYPOINTS
- **Return Type**: int
- **Parameters**: int path
- **Description**: Returns the number of waypoints for a requested path (NAVMESH_REQUEST_PATH) if the query is completed (_NAVMESH_REQUESTED_QUERY_STATUS). For use with _NAVMESH_REQUESTED_PATH_WAYPOINT_BY_INDEX

### _NAVMESH_REQUESTED_PATH_WAYPOINT_BY_INDEX
- **Return Type**: Vector3
- **Parameters**: int path, int waypointIndex
- **Description**: Returns a vector3 waypoint at the specified index for a path. Use _NAVMESH_REQUESTED_PATH_NUM_WAYPOINTS to get available indexes.

### GET_APPROX_FLOOR_FOR_POINT
- **Return Type**: float
- **Parameters**: float x, float y
- **Description**: Returns CGameWorldHeightMap's minimum Z value at specified point (grid node).

### SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME
- **Return Type**: void
- **Parameters**: float multiplier

### SET_IGNORE_NO_GPS_FLAG
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: nullsub, doesn't do anything

### GET_GPS_BLIP_ROUTE_LENGTH
- **Return Type**: int
- **Parameters**: 

### _0xEFC535C9FAF563B3
- **Return Type**: Any
- **Parameters**: Any p0

### _0x665B21666351CB37
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### GET_GPS_BLIP_ROUTE_FOUND
- **Return Type**: BOOL
- **Parameters**: 

### _0x54F4D7B6670FBB5A
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0x34C9AF25649172D0
- **Return Type**: void
- **Parameters**: Any p0

### _0xF2A2177AC848B3A8
- **Return Type**: void
- **Parameters**: Volume volume, int p1, int p2
- **Description**: GPS disabled zone: p1 = 0 Clearing GPS disabled zone: p1 = 1

### _0x4BDEBEA5702B97A9
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### _0x264E9A5CD78C338F
- **Return Type**: void
- **Parameters**: Any p0

### _0x869A7015BD4606E9
- **Return Type**: void
- **Parameters**: Any p0

### _SIMULATED_ROUTE_CREATE
- **Return Type**: Any
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2, int p6

### _SIMULATED_ROUTE_CREATE
- **Return Type**: Any
- **Parameters**: Vector3 vec1, Vector3 vec2, int p6

### _SIMULATED_ROUTE_DELETE
- **Return Type**: void
- **Parameters**: Any p0

### _SIMULATED_ROUTE_EXISTS
- **Return Type**: BOOL
- **Parameters**: Any p0

### SIMULATED_ROUTE_IS_LOADED
- **Return Type**: BOOL
- **Parameters**: Any p0

### SIMULATED_ROUTE_TRAVEL_TO_POINT
- **Return Type**: void
- **Parameters**: Any p0, float p1, float p2

### SIMULATED_ROUTE_GET_ETA
- **Return Type**: float
- **Parameters**: Any p0


## PED
### CREATE_PED
- **Return Type**: Ped
- **Parameters**: Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostPed, BOOL p7, BOOL p8

### CREATE_PED
- **Return Type**: Ped
- **Parameters**: Hash modelHash, Vector3 vec, float heading, BOOL isNetwork, BOOL bScriptHostPed, BOOL p7, BOOL p8

### DELETE_PED
- **Return Type**: void
- **Parameters**: Ped* ped
- **Description**: Deletes the specified ped, then sets the handle pointed to by the pointer to NULL.

### _SET_REMOVE_PED_NETWORKED
- **Return Type**: void
- **Parameters**: Ped ped, int p1

### _0x7C08E7CB8D951B70
- **Return Type**: void
- **Parameters**: Ped ped, float p1
- **Description**: Only used in SP _SET_REMOVE_PED*

### _SET_PED_TO_BE_REMOVED
- **Return Type**: void
- **Parameters**: Ped ped, float p1, float p2, int p3, Any p4

### CLONE_PED
- **Return Type**: Ped
- **Parameters**: Ped ped, BOOL isNetwork, BOOL bScriptHostPed, BOOL copyHeadBlendFlag

### CLONE_PED_TO_TARGET
- **Return Type**: void
- **Parameters**: Ped ped, Ped targetPed
- **Description**: Copies ped's components and props to targetPed. Can be used to clear anything from a ped by cloning it, including bullet holes.

### IS_PED_IN_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Ped ped, Vehicle vehicle, BOOL atGetIn
- **Description**: Gets a value indicating whether the specified ped is in the specified vehicle.

### IS_PED_IN_MODEL
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash modelHash

### IS_PED_IN_ANY_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Ped ped, BOOL atGetIn
- **Description**: Gets a value indicating whether the specified ped is in any vehicle.

### _0x9851DE7AEC10B4E1
- **Return Type**: void
- **Parameters**: float x, float y, float z, float p3, int p4, Any p5

### _0x9851DE7AEC10B4E1
- **Return Type**: void
- **Parameters**: Vector3 vec, float p3, int p4, Any p5

### IS_PED_INJURED
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Gets a value indicating whether this ped's health is below its injured threshold.  The default threshold is 100.

### IS_PED_FATALLY_INJURED
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Gets a value indicating whether this ped's health is below its fatally injured threshold. The default threshold is 100. If the handle is invalid, the function returns true.

### IS_PED_DEAD_OR_DYING
- **Return Type**: BOOL
- **Parameters**: Ped ped, BOOL p1

### _SET_PED_BLEEDOUT_PROFILE
- **Return Type**: void
- **Parameters**: Ped ped, Hash bleedoutProfile
- **Description**: Bleedout profiles: Animal_FastBleedout Animal_Generic Human_FastBleedout Human_Generic Human_Mission  For more information, see common/data/ai/peddamageinfo.meta

### IS_PED_AIMING_FROM_COVER
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_RELOADING
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Returns whether the specified ped is reloading.

### IS_PED_A_PLAYER
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _IS_ANIMAL_CONTROLLED_BY_A_PLAYER
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Returns true only if it's a player ped and an animal as well. _IS_ANY_* - _IS_CONTROL_*

### CREATE_PED_INSIDE_VEHICLE
- **Return Type**: Ped
- **Parameters**: Vehicle vehicle, Hash modelHash, int seatIndex, BOOL p3, BOOL p4, BOOL p5
- **Description**: seatIndex: enum eVehicleSeat { VS_ANY_PASSENGER = -2, VS_DRIVER, VS_FRONT_RIGHT, VS_BACK_LEFT, VS_BACK_RIGHT, VS_EXTRA_LEFT_1, VS_EXTRA_RIGHT_1, VS_EXTRA_LEFT_2, VS_EXTRA_RIGHT_2, VS_EXTRA_LEFT_3, VS_EXTRA_RIGHT_3, VS_NUM_SEATS };

### SET_PED_DESIRED_HEADING
- **Return Type**: void
- **Parameters**: Ped ped, float heading

### FORCE_ALL_HEADING_VALUES_TO_ALIGN
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: Old name: _FREEZE_PED_CAMERA_ROTATION

### IS_PED_FACING_PED
- **Return Type**: BOOL
- **Parameters**: Ped ped, Ped otherPed, float angle
- **Description**: angle is ped's view cone

### IS_PED_IN_MELEE_COMBAT
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Notes: The function only returns true while the ped is: A.) Swinging a random melee attack (including pistol-whipping)  B.) Reacting to being hit by a melee attack (including pistol-whipping)  C.) Is locked-on to an enemy (arms up, strafing/skipping in the default fighting-stance, ready to dodge+counter).  You don't have to be holding the melee-targeting button to be in this stance; you stay in it by default for a few seconds after swinging at someone. If you do a sprinting punch, it returns true for the duration of the punch animation and then returns false again, even if you've punched and made-angry many peds

### _0x6DB875AFC584FA32
- **Return Type**: Any
- **Parameters**: Ped ped, int p1
- **Description**: Only used in R* SP Script winter1: p1 = 5000 _SET_PED_M*

### IS_PED_STOPPED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_SITTING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0x09D7AFD3716DA8E1
- **Return Type**: BOOL
- **Parameters**: Ped ped, int p1

### _0x9C81338B2E62CE0A
- **Return Type**: BOOL
- **Parameters**: Player player, Ped ped, int shotNearRecentlyTime
- **Description**: If returned true: CHECK_SHOT_NEAR: Succeeded shot near If returned false: CHECK_SHOT_NEAR: Failed shot near

### _0xB7DBB2986B87E230
- **Return Type**: BOOL
- **Parameters**: Ped ped, float p1

### _0xD355E2F1BB41087E
- **Return Type**: BOOL
- **Parameters**: Ped ped, float p1

### IS_ANY_PED_SHOOTING_IN_AREA
- **Return Type**: BOOL
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7

### IS_ANY_PED_SHOOTING_IN_AREA
- **Return Type**: BOOL
- **Parameters**: Vector3 vec1, Vector3 vec2, BOOL p6, BOOL p7

### IS_PED_SHOOTING
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Returns whether the specified ped is shooting.

### TIME_SINCE_PED_LAST_SHOT
- **Return Type**: float
- **Parameters**: Ped ped
- **Description**: Returns time since the specified ped last shot, in seconds. (fPlayerJustShotTime)

### SET_PED_ACCURACY
- **Return Type**: void
- **Parameters**: Ped ped, int accuracy
- **Description**: accuracy = 0-100, 100 being perfectly accurate

### GET_PED_ACCURACY
- **Return Type**: int
- **Parameters**: Ped ped

### IS_PED_MODEL
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash modelHash

### EXPLODE_PED_HEAD
- **Return Type**: void
- **Parameters**: Ped ped, Hash weaponHash
- **Description**: Forces the ped to fall back and kills it.  It doesn't really explode the ped's head but it kills the ped

### ADD_ARMOUR_TO_PED
- **Return Type**: void
- **Parameters**: Ped ped, int amount
- **Description**: Same as SET_PED_ARMOUR, but ADDS 'amount' to the armor the Ped already has.

### _0x5CA20FBE49891BBD
- **Return Type**: void
- **Parameters**: Ped ped, int p1
- **Description**: Used in Script Function MP_MAIN_OFFLINE__INITIALIZE_FLOW & PROCESS_GENERIC_PLAYER_INITIALIZATION

### SET_PED_INTO_VEHICLE
- **Return Type**: void
- **Parameters**: Ped ped, Vehicle vehicle, int seatIndex
- **Description**: Ped: The ped to warp. vehicle: The vehicle to warp the ped into. seatIndex: see CREATE_PED_INSIDE_VEHICLE

### SET_PED_MOVE_ANIMS_BLEND_OUT
- **Return Type**: void
- **Parameters**: Ped ped

### _0x606D529DADA3C940
- **Return Type**: void
- **Parameters**: Ped ped, Any p1
- **Description**: Not implemented.

### IS_PED_MALE
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Returns true/false if the ped is/isn't male.

### IS_PED_HUMAN
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Returns true/false if the ped is/isn't humanoid.

### GET_VEHICLE_PED_IS_IN
- **Return Type**: Vehicle
- **Parameters**: Ped ped, BOOL lastVehicle
- **Description**: Gets the vehicle the specified Ped is in.  If the Ped is not in a vehicle and includeLastVehicle is true, the vehicle they were last in is returned.

### RESET_PED_LAST_VEHICLE
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: Resets the value for the last vehicle driven by the Ped.

### _0xC6136B40FFFB778B
- **Return Type**: void
- **Parameters**: BOOL p0

### _0x6E8B87139854022D
- **Return Type**: void
- **Parameters**: Ped ped, const char* clipset
- **Description**: Only used in SP R* Script train_robbery3: p1 = CLIPSET@VEH_TRAIN@HANDCART@BASE_PANIC & CLIPSET@VEH_TRAIN@HANDCART@BASE_PANIC_JOHN

### _GET_NUM_FREE_SLOTS_IN_PED_POOL
- **Return Type**: int
- **Parameters**: 

### _RESERVE_AMBIENT_PEDS
- **Return Type**: void
- **Parameters**: int numPeds

### _RESERVE_AMBIENT_PEDS_TOTAL
- **Return Type**: void
- **Parameters**: int numPeds

### _UNRESERVE_AMBIENT_PEDS
- **Return Type**: void
- **Parameters**: int numPeds

### _GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED
- **Return Type**: int
- **Parameters**: 

### _GET_NUM_RESERVED_AMBIENT_PEDS_READY
- **Return Type**: int
- **Parameters**: 

### _ARE_ALL_AMBIENT_PED_RESERVATIONS_READY
- **Return Type**: BOOL
- **Parameters**: 

### _SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME
- **Return Type**: void
- **Parameters**: float multiplier

### _0x9E3842E5DAD69F80
- **Return Type**: void
- **Parameters**: Volume volume
- **Description**: Only used in SP R* Script loanshark_hunter

### _SET_AMBIENT_PED_DENSITY_MULTIPLIER_THIS_FRAME
- **Return Type**: void
- **Parameters**: float multiplier

### SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME
- **Return Type**: void
- **Parameters**: float multiplier

### _SET_AMBIENT_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME
- **Return Type**: void
- **Parameters**: float multiplier

### _SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME
- **Return Type**: void
- **Parameters**: float multiplier

### _SET_SCENARIO_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME
- **Return Type**: void
- **Parameters**: float multiplier

### _SET_SCENARIO_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME
- **Return Type**: void
- **Parameters**: float multiplier

### _SET_SCENARIO_PED_DENSITY_THIS_FRAME
- **Return Type**: void
- **Parameters**: Hash configHash
- **Description**: Sets the scenario ped density to the given config.  Valid configs: - BLACKWATER - DEFAULT - NEWBORDEAUX - RHODES - STRAWBERRY - TUMBLEWEED - VALENTINE - VANHORN  See common/data/ai/densityscoringconfigs.meta for more information.

### INSTANTLY_FILL_PED_POPULATION
- **Return Type**: void
- **Parameters**: 

### _0xBFA6B7731C3BAF02
- **Return Type**: void
- **Parameters**: 
- **Description**: Only used in R* Script tg_p (CLIENT__AMBIENT_POPULATION - Player starts the populate in region)

### IS_INSTANTLY_FILL_PED_POPULATION_FINISHED
- **Return Type**: BOOL
- **Parameters**: 

### SET_PED_NON_CREATION_AREA
- **Return Type**: void
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2
- **Description**: The distance between these points, is the diagonal of a box (remember it's 3D).

### SET_PED_NON_CREATION_AREA
- **Return Type**: void
- **Parameters**: Vector3 vec1, Vector3 vec2

### CLEAR_PED_NON_CREATION_AREA
- **Return Type**: void
- **Parameters**: 

### _ATTACH_VOLUME_TO_ENTITY
- **Return Type**: void
- **Parameters**: Volume volume, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int p8, BOOL p9

### _ATTACH_VOLUME_TO_ENTITY
- **Return Type**: void
- **Parameters**: Volume volume, Entity entity, Vector3 offset, Vector3 rot, int p8, BOOL p9

### _DETACH_VOLUME_FROM_ENTITY
- **Return Type**: void
- **Parameters**: Volume volume, Entity entity

### SET_PED_ONTO_MOUNT
- **Return Type**: void
- **Parameters**: Ped ped, Ped mount, int seatIndex, BOOL p3

### _REMOVE_PED_FROM_MOUNT
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1, BOOL p2

### CREATE_PED_ON_MOUNT
- **Return Type**: Ped
- **Parameters**: Ped mount, Hash modelHash, int index, BOOL p3, BOOL p4, BOOL p5, BOOL p6

### _IS_MOUNT_SEAT_FREE
- **Return Type**: BOOL
- **Parameters**: Ped mount, int seat

### IS_PED_ON_MOUNT
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_FULLY_ON_MOUNT
- **Return Type**: BOOL
- **Parameters**: Ped ped, BOOL p1

### GET_MOUNT
- **Return Type**: Ped
- **Parameters**: Ped ped

### _GET_LAST_LED_MOUNT
- **Return Type**: Ped
- **Parameters**: Ped ped
- **Description**: Returns last horse the ped was leading

### _GET_LAST_MOUNT
- **Return Type**: Ped
- **Parameters**: Ped ped

### _0xED1C764997A86D5A
- **Return Type**: void
- **Parameters**: Ped ped1, Ped ped2
- **Description**: Only used in R* Script nb_stalking_hunter

### _0xB8AB265426CFE6DD
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: _SET_HO*

### _0xE8D1CCB9375C101B
- **Return Type**: int
- **Parameters**: Ped mount, Player player
- **Description**: Returns dismounted timestamp

### _0xA691C10054275290
- **Return Type**: void
- **Parameters**: Ped mount, Player player, int dismountedTimestamp

### _0x6734F0A6A52C371C
- **Return Type**: void
- **Parameters**: Player player, int horseSlot

### _0x024EC9B649111915
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1

### SET_PED_OWNS_ANIMAL
- **Return Type**: void
- **Parameters**: Ped ped, Ped animal, BOOL p2

### _GET_ACTIVE_ANIMAL_OWNER
- **Return Type**: Ped
- **Parameters**: Ped animal

### _CLEAR_ACTIVE_ANIMAL_OWNER
- **Return Type**: void
- **Parameters**: Ped horse, BOOL clear
- **Description**: Used in Script Functions PLAYER_HORSE_RELEASE_HORSE_TO_AMBIENT_WORLD (p1 = true), HORSE_SETUP_PLAYER_HORSE_ATTRIBUTES (p1 = false) Set to false for player horse in scripts and seems it's only true when releasing/changing a player horse? Cannot determine what effect it has, but it doesn't seem to affect _GET_HORSE_TAMING_STATE

### _GET_HORSE_TAMING_STATE
- **Return Type**: int
- **Parameters**: Ped horse
- **Description**: Returns an int based on enum eTamingState  enum eTamingState { ATS_INVALID = 0, ATS_INACTIVE, ATS_TARGET_DETECTED, ATS_CALLED_OUT, ATS_MOUNTABLE, ATS_BEING_PATTED, ATS_BREAKING_ACTIVE, ATS_SPOOKED, ATS_RETREATING, ATS_FLEEING };

### _0x54D3CD482742C482
- **Return Type**: void
- **Parameters**: Ped animal, float p2

### _0x5CB2EBB467BE3ED6
- **Return Type**: void
- **Parameters**: Ped animal, float p2

### _0x9F0F28B42C4EE80A
- **Return Type**: void
- **Parameters**: Ped animal, float p2

### _SET_MOUNT_BONDING_LEVEL
- **Return Type**: void
- **Parameters**: Ped ped, int bondingLevel

### _SET_MOUNT_SECURITY_ENABLED
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle
- **Description**: Note: this native was added in build 1232.40

### _0x9B65444C07B782BF
- **Return Type**: void
- **Parameters**: Ped ped, const char* p1
- **Description**: Only used in SP R* Script winter1: p1 = Winter1Mount

### IS_ANIMAL_INTERACTION_POSSIBLE
- **Return Type**: BOOL
- **Parameters**: Ped ped, Ped animal

### _IS_ANIMAL_INTERACTION_RUNNING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0x8BE24D74D74C6E9B
- **Return Type**: Ped
- **Parameters**: Ped ped
- **Description**: Used in Script Function NET_CAMP_DOG_CLIENT_HANDLE_ANIMAL_INTERACTION

### _0x77243ED4F7CAAA55
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _IS_I* - _IS_L*

### IS_PED_ON_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Ped ped, BOOL p1
- **Description**: Gets a value indicating whether the specified ped is on top of any vehicle.  Return 1 when ped is on vehicle. Return 0 when ped is not on a vehicle.

### IS_PED_ON_SPECIFIC_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Ped ped, Vehicle vehicle

### _WARP_PED_OUT_OF_VEHICLE
- **Return Type**: void
- **Parameters**: Ped ped

### SET_PED_MONEY
- **Return Type**: void
- **Parameters**: Ped ped, int amount

### GET_PED_MONEY
- **Return Type**: int
- **Parameters**: Ped ped

### SET_BLOCKING_OF_NON_TEMPORARY_EVENTS_FOR_AMBIENT_PEDS_THIS_FRAME
- **Return Type**: void
- **Parameters**: BOOL p0

### _0x34EDDD59364AD74A
- **Return Type**: void
- **Parameters**: Ped ped, Any* p1

### _0x2D976DBDC731DF80
- **Return Type**: void
- **Parameters**: Ped ped

### IS_PED_SITTING_IN_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Ped ped, Vehicle vehicle
- **Description**: Detect if ped is sitting in the specified vehicle [True/False]

### IS_PED_SITTING_IN_ANY_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Detect if ped is in any vehicle [True/False]

### IS_PED_ON_FOOT
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_PLANTING_BOMB
- **Return Type**: BOOL
- **Parameters**: Ped ped

### GET_DEAD_PED_PICKUP_COORDS
- **Return Type**: Vector3
- **Parameters**: Ped ped, float p1, float p2

### IS_PED_IN_ANY_BOAT
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_IN_ANY_HELI
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_IN_ANY_PLANE
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_IN_FLYING_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0x256EDD55C6BE1482
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _IS_PED_FL* - _IS_PED_FU*

### GET_PED_LAST_DAMAGE_BONE
- **Return Type**: BOOL
- **Parameters**: Ped ped, int* outBone

### CLEAR_PED_LAST_DAMAGE_BONE
- **Return Type**: void
- **Parameters**: Ped ped

### _GET_PED_DAMAGE_CLEANLINESS
- **Return Type**: int
- **Parameters**: Ped ped
- **Description**: enum ePedDamageCleanliness { PED_DAMAGE_CLEANLINESS_POOR, PED_DAMAGE_CLEANLINESS_GOOD, PED_DAMAGE_CLEANLINESS_PERFECT };

### _SET_PED_DAMAGE_CLEANLINESS
- **Return Type**: void
- **Parameters**: Ped ped, int damageCleanliness
- **Description**: damageCleanliness: see _GET_PED_DAMAGE_CLEANLINESS

### _GET_PED_DAMAGED
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Returns true if _GET_PED_DAMAGE_CLEANLINESS was ever lower than 2

### _SET_PED_DAMAGED
- **Return Type**: void
- **Parameters**: Ped ped, BOOL damaged

### _SET_PLAYER_CURRENT_ANIMAL_DAMAGE_MODIFIER
- **Return Type**: Any
- **Parameters**: Player player, float modifier, int p2, int p3
- **Description**: Animal Skin Quality Modifier Params: p2 = 2, p3 = 3 in R* Scripts

### _UPDATE_ANIMAL_DAMAGE_MODIFIER
- **Return Type**: void
- **Parameters**: Player player

### _GET_PLAYER_CURRENT_ANIMAL_DAMAGE_MODIFIER
- **Return Type**: float
- **Parameters**: Player player
- **Description**: Returns animal skin quality modifier

### _0xB29C553BA582D09E
- **Return Type**: Any
- **Parameters**: Any* p0, Hash model, int damageCleanliness, int p3
- **Description**: Used in Script Function SATCHEL_COUNT_BREAKDOWN_COMPONENTS

### _0x101B45C5F56D970F
- **Return Type**: BOOL
- **Parameters**: Any* p0, Ped ped, int damageCleanliness, int p3

### _COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS
- **Return Type**: int
- **Parameters**: Any* outInventoryItemArray, Ped ped, int damageCleanliness, int skinningQuality
- **Description**: Related to dead animals items/loots Notice: skinningQuality is partially calculated using pedQuality

### COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE
- **Return Type**: BOOL
- **Parameters**: Any p0, Ped pedAttached, int damageCleanliness

### SET_AI_WEAPON_DAMAGE_MODIFIER
- **Return Type**: void
- **Parameters**: float value

### RESET_AI_WEAPON_DAMAGE_MODIFIER
- **Return Type**: void
- **Parameters**: 

### _SET_TOTAL_PED_DAMAGE_FROM_AI
- **Return Type**: void
- **Parameters**: Ped ped, float totalDamage
- **Description**: _SET_W(EAPON?)*

### _0xA6D6F03095C88F59
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: _DELETE_*

### _GET_TOTAL_PED_DAMAGE_FROM_AI
- **Return Type**: float
- **Parameters**: Ped ped
- **Description**: _GET_WA*

### SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER
- **Return Type**: void
- **Parameters**: Ped ped, float damageModifier
- **Description**: Old name: _SET_PED_DAMAGE_MODIFIER

### GET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER
- **Return Type**: float
- **Parameters**: Ped ped

### _SET_CURRENT_DEFENSE_AGAINST_PLAYERS_MODIFIER
- **Return Type**: void
- **Parameters**: Ped horse, float modifier

### _0x763FA8A9D76EE3A7
- **Return Type**: float
- **Parameters**: Ped ped
- **Description**: Used in Script Function NB_EVENT_OVERRIDE__HANDLE__EVENT_DAMAGE_ENTITY

### SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER
- **Return Type**: void
- **Parameters**: float modifier

### _SET_ACCURACY_AGAINST_LOCAL_PLAYER_MODIFIER
- **Return Type**: void
- **Parameters**: Ped ped, float modifier

### _GET_ACCURACY_AGAINST_LOCAL_PLAYER_MODIFIER
- **Return Type**: float
- **Parameters**: Ped ped

### _SET_PED_HEADSHOT_DAMAGE_MULTIPLIER
- **Return Type**: void
- **Parameters**: Ped ped, float multiplier

### _0xDEE8D30AA5C2E28D
- **Return Type**: void
- **Parameters**: Ped ped, Hash p1, BOOL p2

### _0xE1B3BE07D3AADDED
- **Return Type**: void
- **Parameters**: Ped ped, int p1, BOOL p2

### _0x32CEDA9A0AB4CEF7
- **Return Type**: void
- **Parameters**: Ped ped, Hash p1, BOOL p2

### _0x52A24D8A1DA89658
- **Return Type**: void
- **Parameters**: Ped ped, int p1, BOOL p2

### _0x34B5CEAC180A5D6E
- **Return Type**: void
- **Parameters**: Ped ped, Hash p1, BOOL p2

### _0x4F27603E44A8E4C0
- **Return Type**: void
- **Parameters**: Ped ped, int p1, BOOL p2

### _0x3FDCC1F8C17E303E
- **Return Type**: void
- **Parameters**: Ped ped, int p1, float p2
- **Description**: Changes health bar around heart core icon INITIALISE_NEW_ROLE - Applying Super Jump buffs: p1 = 10, p2 = 0.0f INITIALISE_NEW_ROLE - Clearing up Super Jump buffs: p1 = 10, p2 = 1.0f _SET_D*

### _0xE50C9816B3F22D8B
- **Return Type**: void
- **Parameters**: Ped ped, Hash p1, float p2
- **Description**: _SET_D*

### _SET_DEFENSE_MODIFIER_FOR_PED
- **Return Type**: void
- **Parameters**: Ped ped, float modifier

### _SET_MIN_PED_HEALTH_THRESHOLD
- **Return Type**: void
- **Parameters**: Ped ped, float healthAmount

### _0xC5B78E41DCF8227C
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: _SET_H* - _SET_I*

### SET_PED_CAN_BE_TARGETTED
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### SET_PED_CAN_BE_TARGETTED_BY_TEAM
- **Return Type**: void
- **Parameters**: Ped ped, int team, BOOL toggle

### SET_PED_CAN_BE_TARGETTED_BY_PLAYER
- **Return Type**: void
- **Parameters**: Ped ped, Player player, BOOL toggle

### _SET_INTERACTION_LOCKON_FLAG
- **Return Type**: void
- **Parameters**: Ped ped, Player player, int flag, BOOL enable

### IS_PED_FALLING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _IS_PED_SLIDING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_JUMPING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_CLIMBING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _IS_PED_CLIMBING_LADDER
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0x577C60BA06D0EA64
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _IS_PED_C* - _IS_PED_D*

### IS_PED_VAULTING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_DIVING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_OPENING_DOOR
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Returns true if the ped is currently opening a door (CTaskOpenDoor).  Old name: _IS_PED_OPENING_A_DOOR

### _0x5C6C7C70CA302801
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _IS_PED_IN*

### _0xB91AB3BE7F655D49
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _IS_PED_J* - _IS_PED_L*

### IS_PED_IN_ANY_TAXI
- **Return Type**: BOOL
- **Parameters**: Ped ped

### SET_PED_ID_RANGE
- **Return Type**: void
- **Parameters**: Ped ped, float value

### _GET_PED_ID_RANGE
- **Return Type**: float
- **Parameters**: Ped ped

### SET_PED_HIGHLY_PERCEPTIVE
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### SET_PED_INJURED_ON_GROUND_BEHAVIOUR
- **Return Type**: void
- **Parameters**: Ped ped, float unk

### DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR
- **Return Type**: void
- **Parameters**: Ped ped

### _0x028E7B3BBA0BD2FC
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: _SET_ST* - _SET_SW*

### _0xFA8C10DCE0706D43
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _HAS_PED_*

### _SET_PED_ANIMAL_DETECTION_MODIFIER
- **Return Type**: void
- **Parameters**: Ped ped, float modifier

### _0x2BA9D7BF629F920C
- **Return Type**: float
- **Parameters**: Ped ped
- **Description**: Used in Script Function CHECK_IS_PLAYER_SEEN _GET_PED_*

### SET_PED_SEEING_RANGE
- **Return Type**: void
- **Parameters**: Ped ped, float value

### _0x900CA00CE703E1E2
- **Return Type**: float
- **Parameters**: Ped ped
- **Description**: Used in Script Function AGGRO_SHOULD_PED_HEAR_DEATH _GET_PED_*

### SET_PED_HEARING_RANGE
- **Return Type**: void
- **Parameters**: Ped ped, float value

### SET_PED_VISUAL_FIELD_MIN_ANGLE
- **Return Type**: void
- **Parameters**: Ped ped, float value

### SET_PED_VISUAL_FIELD_MAX_ANGLE
- **Return Type**: void
- **Parameters**: Ped ped, float value

### SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE
- **Return Type**: void
- **Parameters**: Ped ped, float range

### SET_PED_VISUAL_FIELD_CENTER_ANGLE
- **Return Type**: void
- **Parameters**: Ped ped, float angle

### _0x9AB33CB5834885B3
- **Return Type**: void
- **Parameters**: Ped ped, float p1, float p2, float p3, float p4
- **Description**: _SET_PED_M*

### _0x899DFA0009AC93DE
- **Return Type**: void
- **Parameters**: Ped ped, float p1
- **Description**: _SET_PED_O*

### _0x3A5697B80FED5EBE
- **Return Type**: void
- **Parameters**: Ped ped, float p1, float p2, float p3, float p4
- **Description**: _SET_PED_MO*

### SET_PED_STEALTH_MOVEMENT
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle, Any p2, Any p3
- **Description**: Not implemented.

### GET_PED_STEALTH_MOVEMENT
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Returns whether the entity is in stealth mode

### _SET_PED_CROUCH_MOVEMENT
- **Return Type**: void
- **Parameters**: Ped ped, BOOL state, int p2, BOOL immediately

### GET_PED_CROUCH_MOVEMENT
- **Return Type**: BOOL
- **Parameters**: Ped ped

### GET_PED_IS_DOING_COMBAT_ROLL
- **Return Type**: BOOL
- **Parameters**: Ped ped

### CREATE_GROUP
- **Return Type**: int
- **Parameters**: int taskAllocator
- **Description**: Creates a new ped group. Groups can contain up to 8 peds.  The parameter is unused.  Returns a handle to the created group, or 0 if a group couldn't be created.

### SET_PED_AS_GROUP_LEADER
- **Return Type**: void
- **Parameters**: Ped ped, int groupId, BOOL p2

### SET_PED_AS_GROUP_MEMBER
- **Return Type**: void
- **Parameters**: Ped ped, int groupId

### SET_PED_CAN_TELEPORT_TO_GROUP_LEADER
- **Return Type**: void
- **Parameters**: Ped pedHandle, int groupId, BOOL toggle
- **Description**: This only will teleport the ped to the group leader if the group leader teleports (sets coords).  Only works in singleplayer

### REMOVE_GROUP
- **Return Type**: void
- **Parameters**: int groupId

### REMOVE_PED_FROM_GROUP
- **Return Type**: void
- **Parameters**: Ped ped

### IS_PED_GROUP_MEMBER
- **Return Type**: BOOL
- **Parameters**: Ped ped, int groupId, BOOL p2

### _IS_PED_GROUP_LEADER
- **Return Type**: BOOL
- **Parameters**: Ped ped, int groupId

### IS_PED_HANGING_ON_TO_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Ped ped

### SET_GROUP_SEPARATION_RANGE
- **Return Type**: void
- **Parameters**: int groupId, float separationRange
- **Description**: Sets the range at which members will automatically leave the group.

### _0x89E59DBD15E21177
- **Return Type**: void
- **Parameters**: int groupId, int p1
- **Description**: _SET_C*

### IS_PED_PRONE
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _IS_PED_INVESTIGATING
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _IS_PED_IN*

### IS_PED_IN_COMBAT
- **Return Type**: BOOL
- **Parameters**: Ped ped, Ped target

### CAN_PED_IN_COMBAT_SEE_TARGET
- **Return Type**: BOOL
- **Parameters**: Ped ped, Ped target

### IS_PED_JACKING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_BEING_JACKED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_BEING_STUNNED
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash weaponType

### GET_PEDS_JACKER
- **Return Type**: Ped
- **Parameters**: Ped ped

### GET_JACK_TARGET
- **Return Type**: Ped
- **Parameters**: Ped ped

### IS_PED_FLEEING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_IN_COVER
- **Return Type**: BOOL
- **Parameters**: Ped ped, BOOL p1, BOOL p2

### _0x2DD4E0E26DFAD97D
- **Return Type**: BOOL
- **Parameters**: Ped ped1, Ped ped2, float p2
- **Description**: _IS_PED_M* - _IS_PED_O*

### _PED_WAS_KILLED_BY_HEADSHOT
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _PED_DUELING_DID_PLAYER_HEADSHOT_OPPONENT
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_IN_COVER_FACING_LEFT
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_GOING_INTO_COVER
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_RESPONDING_TO_THREAT
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _GET_ACTIVE_DYNAMIC_SCENARIO_2
- **Return Type**: Hash
- **Parameters**: Ped ped
- **Description**: Returns kneeling, sitting, squating, and sleeping scenario hashes

### _GET_ACTIVE_DYNAMIC_SCENARIO
- **Return Type**: Hash
- **Parameters**: Ped ped
- **Description**: Returns kneeling, sitting, squating, and sleeping scenario hashes

### _GIVE_PED_SCENARIO_PROP
- **Return Type**: BOOL
- **Parameters**: Ped ped, Object object, const char* conditionalAnim, const char* p3, const char* p4, BOOL p5

### GIVE_PED_HASH_SCENARIO_PROP
- **Return Type**: BOOL
- **Parameters**: Ped ped, Object object, const char* conditionalAnim, Hash scenarioType, Hash p4, BOOL p5

### _GIVE_PED_SCENARIO_PROP_DYNAMIC
- **Return Type**: BOOL
- **Parameters**: Ped ped, Object object, const char* p2, const char* p3, BOOL p4
- **Description**: Only used in SP R* Script rcm_jack2

### _REQUEST_PROP_SCENARIO_PED
- **Return Type**: Any
- **Parameters**: Ped ped, Object object, const char* p2, const char* p3, const char* p4, BOOL p5

### _REQUEST_PED_FOR_SCENARIO_TYPE
- **Return Type**: Any
- **Parameters**: Ped ped, Object object, const char* p2, Hash scenarioType, const char* p4, BOOL p5

### _GET_PED_REGISTER_PROP
- **Return Type**: Entity
- **Parameters**: Ped ped, const char* propName, BOOL detachProp
- **Description**: Gets a registered/attached prop entity for a particular ped. Second parameter will detach the prop entity from the ped if true. Props primarily appear to come from scenarios, such as a broom or hay bale.  Known props: https://pastebin.com/ap2NEJqB

### GET_SEAT_PED_IS_TRYING_TO_ENTER
- **Return Type**: int
- **Parameters**: Ped ped

### GET_PED_SOURCE_OF_DEATH
- **Return Type**: Entity
- **Parameters**: Ped ped
- **Description**: Returns the entity that killed the ped  It is best to check if the Ped is dead before asking for its killer.

### GET_PED_CAUSE_OF_DEATH
- **Return Type**: Hash
- **Parameters**: Ped ped
- **Description**: Returns the hash of the weapon/model/object that killed the ped.

### GET_PED_TIME_OF_DEATH
- **Return Type**: int
- **Parameters**: Ped ped

### COUNT_PEDS_IN_COMBAT_WITH_TARGET
- **Return Type**: int
- **Parameters**: Ped ped, int flag

### _GET_PEDS_IN_COMBAT_WITH_TARGET
- **Return Type**: int
- **Parameters**: Ped ped, ItemSet itemset, int flag

### COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS
- **Return Type**: int
- **Parameters**: Ped ped, float x, float y, float z, float radius, int flag

### COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS
- **Return Type**: int
- **Parameters**: Ped ped, Vector3 vec, float radius, int flag

### GET_CURRENT_TARGET_FOR_PED
- **Return Type**: Entity
- **Parameters**: Ped ped

### SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH
- **Return Type**: void
- **Parameters**: Ped ped, Hash hash

### _GET_DEFAULT_RELATIONSHIP_GROUP_HASH
- **Return Type**: Hash
- **Parameters**: Hash modelHash

### SET_PED_RELATIONSHIP_GROUP_HASH
- **Return Type**: void
- **Parameters**: Ped ped, Hash relationshipGroup

### SET_RELATIONSHIP_BETWEEN_GROUPS
- **Return Type**: void
- **Parameters**: int relationship, Hash group1, Hash group2

### CLEAR_RELATIONSHIP_BETWEEN_GROUPS
- **Return Type**: void
- **Parameters**: int relationship, Hash group1, Hash group2

### ADD_RELATIONSHIP_GROUP
- **Return Type**: BOOL
- **Parameters**: const char* name, Hash* groupHash
- **Description**: The hash of the created relationship group is output in the second parameter.

### REMOVE_RELATIONSHIP_GROUP
- **Return Type**: void
- **Parameters**: Hash groupHash

### GET_RELATIONSHIP_BETWEEN_PEDS
- **Return Type**: int
- **Parameters**: Ped ped1, Ped ped2

### GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH
- **Return Type**: Hash
- **Parameters**: Ped ped

### GET_PED_RELATIONSHIP_GROUP_HASH
- **Return Type**: Hash
- **Parameters**: Ped ped

### GET_RELATIONSHIP_BETWEEN_GROUPS
- **Return Type**: int
- **Parameters**: Hash group1, Hash group2

### _0xDC91F22F09BC6C2F
- **Return Type**: void
- **Parameters**: Hash group, BOOL p1
- **Description**: Used in Script Function MP_MAIN_OFFLINE__INITIALIZE_GAME _SET_RELATIONSHIP_*

### _0x9629FAF6460D35CB
- **Return Type**: void
- **Parameters**: Hash group, BOOL p1

### _0x4E68C7EF706DF35D
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float p4, Hash relationshipGroup

### _0x4E68C7EF706DF35D
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float p4, Hash relationshipGroup

### _0x3ACCE14DFA6BA8C2
- **Return Type**: int
- **Parameters**: Ped ped, int p1, float x, float y, float z, float p5, ItemSet itemset
- **Description**: Used in R* Script net_fetch (NET_FETCH_UPDATE_RECIPIENT_PROP_ILO_IN_COMBAT) and various SP Scripts Params: p1 = 4/5/6, p5 = 40.f/100.f, coords = Player ped Perhaps returns some distance (Clearing that the local player is able to use ILO while in combat because they are near the recipient but also near hated peds) _GET_NUM_M* - _GET_PEDS_J*

### _0x3ACCE14DFA6BA8C2
- **Return Type**: int
- **Parameters**: Ped ped, int p1, Vector3 vec, float p5, ItemSet itemset

### SET_PED_TO_INFORM_RESPECTED_FRIENDS
- **Return Type**: void
- **Parameters**: Ped ped, float radius, int maxFriends

### _0x40C9155AF8BC13F3
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _IS_PED_RE*

### _0xF4860514AD354226
- **Return Type**: int
- **Parameters**: ScrHandle shockingEvent, float x, float y, float z, float p4, int* p5
- **Description**: Only used in SP Scripts Returns count / index _C*

### _0xF4860514AD354226
- **Return Type**: int
- **Parameters**: ScrHandle shockingEvent, Vector3 vec, float p4, int* p5

### IS_PED_RESPONDING_TO_EVENT
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash eventType
- **Description**: eventType: https://alloc8or.re/rdr3/doc/enums/eEventType.txt

### _0x5E9FAF6C513347B4
- **Return Type**: Entity
- **Parameters**: Ped ped, Hash eventType
- **Description**: Only used in R* SP Scripts _GET_PED_IN*

### _0x326F7951EF0D7F75
- **Return Type**: Any
- **Parameters**: Ped ped, Hash eventType
- **Description**: Only used in R* SP Script short_update _GET_TARGET_* - _GET_TRACKED*

### _0xE76687023D8C8505
- **Return Type**: Entity
- **Parameters**: Hash perscharModel, int p1
- **Description**: Used for AUDIO / ANIMSCENE (REFERENCE_REGIONAL_CHARACTER) Params: p1 = 0 _GET_PED_IN*

### _0xCB8F4C9343EBE240
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash eventType, Vector3* coords
- **Description**: Only used in R* SP Scripts _GET_PLAYER_W* - _GET_RANDOM_*

### SET_PED_FIRING_PATTERN
- **Return Type**: void
- **Parameters**: Ped ped, Hash patternHash
- **Description**: Used in various R* MP & SP Scripts

### _SET_PED_FIRING_PATTERN_2
- **Return Type**: void
- **Parameters**: Ped ped, Hash patternHash
- **Description**: Used in R* MP Script fm_mission_controller and various R* SP Scripts for ambush*

### _SET_PED_FIRING_PATTERN_3
- **Return Type**: void
- **Parameters**: Ped ped, Hash patternHash
- **Description**: Only used in R* MP Script fm_mission_controller

### SET_PED_SHOOT_RATE
- **Return Type**: void
- **Parameters**: Ped ped, int shootRate
- **Description**: Params: shootRate = 0 - 1000

### _0x3C529A827998F9B3
- **Return Type**: void
- **Parameters**: Ped ped, int p1, int p2
- **Description**: _SET_PED_TA* - _SET_PED_TO_*

### _0x1F44B7E283C09EDE
- **Return Type**: void
- **Parameters**: Ped ped, float p1, int p2
- **Description**: Only used in SP R* Scripts Params: p2 = same as p2 of 0x3C529A827998F9B3 _SET_PED_TA* - _SET_PED_TO_*

### SET_COMBAT_FLOAT
- **Return Type**: void
- **Parameters**: Ped ped, int combatType, float newValue
- **Description**: combatType can be between 0-14. See GET_COMBAT_FLOAT below for a list of possible parameters. https://github.com/femga/rdr3_discoveries/tree/master/AI/COMBAT_FLOATS

### GET_COMBAT_FLOAT
- **Return Type**: float
- **Parameters**: Ped ped, int combatType

### GET_GROUP_SIZE
- **Return Type**: void
- **Parameters**: int groupId, BOOL* hasLeader, int* numberOfFollowers

### DOES_GROUP_EXIST
- **Return Type**: BOOL
- **Parameters**: int groupId

### _0x0455546F23FF08E4
- **Return Type**: BOOL
- **Parameters**: int groupId
- **Description**: _DOES_GROUP_* - _DOES_N*

### IS_GROUP_LOCALLY_CONTROLLED
- **Return Type**: BOOL
- **Parameters**: int groupId

### GET_PED_GROUP_INDEX
- **Return Type**: int
- **Parameters**: Ped ped
- **Description**: Returns the groupId of which the specified ped is a member of.

### IS_PED_IN_GROUP
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _IS_PED_LEADING_ANY_GROUP
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _IS_PED_L* - _IS_PED_M*

### GET_PLAYER_PED_IS_FOLLOWING
- **Return Type**: Player
- **Parameters**: Ped ped

### SET_GROUP_FORMATION
- **Return Type**: void
- **Parameters**: int groupId, int formationType
- **Description**: eFormationType  0: Default 1: Circle Around Leader 2: Alternative Circle Around Leader 3: Line, with Leader at center

### _GET_GROUP_FORMATION
- **Return Type**: int
- **Parameters**: int groupId

### SET_GROUP_FORMATION_SPACING
- **Return Type**: void
- **Parameters**: int groupId, float p1, float p2, float p3

### RESET_GROUP_FORMATION_DEFAULT_SPACING
- **Return Type**: void
- **Parameters**: int groupId

### _0xB05CC690CDE8A4A9
- **Return Type**: BOOL
- **Parameters**: int groupId, float p1
- **Description**: Used to set up bad guy groups in nb_kidnapped R* Script (MP_RE_KIDNAPPED): p1 = 4.f _SET_FORMATION_*

### ADD_CUSTOM_FORMATION_LOCATION
- **Return Type**: void
- **Parameters**: int groupId, float x, float y, float z, int position

### ADD_CUSTOM_FORMATION_LOCATION
- **Return Type**: void
- **Parameters**: int groupId, Vector3 vec, int position

### ADD_FORMATION_LOCATION
- **Return Type**: BOOL
- **Parameters**: int groupId, float p1, float p2, float p3

### SET_FORMATION_POSITIONS_TARGET_RADIUS
- **Return Type**: BOOL
- **Parameters**: int groupId, float radius

### _SET_FORMATION_AUTO_ASSIGN_POSITION
- **Return Type**: void
- **Parameters**: int groupId, BOOL toggle

### _SET_PED_FORMATION_POSITION
- **Return Type**: void
- **Parameters**: Ped ped, int position, BOOL toggle

### _0x8AF8E647D6B2A649
- **Return Type**: int
- **Parameters**: int groupId, Ped ped
- **Description**: Returns offset (0 < 32) to be used with MISC::SET_BIT _GET_PED_CR*

### _0x87C2724A56F66020
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: _CLEAR_PED_E* - _CLEAR_PED_L*

### _0xD5BD1B5318A81994
- **Return Type**: void
- **Parameters**: int groupId, BOOL p1
- **Description**: _SET_FORMATION_*

### _0x9BBEAF8B0C007F1E
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: _SET_PLAYER_CAN_B* - _SET_PLAYER_CAN_U*

### _0xC99F104BDF8C7F5A
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: _SET_PLAYER_N* - _SET_PLAYER_S*

### _0x02E741E19E39628C
- **Return Type**: void
- **Parameters**: Ped ped, float p1
- **Description**: _SET_PLAYER_SN* - _SET_PLAYER_STAMINA*

### _0x97C475212B327666
- **Return Type**: void
- **Parameters**: int groupId, BOOL p1
- **Description**: _SET_SCENARIO_PED_* - _SET_SPAWNER_*

### _0x154B7E841AC7412F
- **Return Type**: void
- **Parameters**: int groupId, BOOL p1
- **Description**: _SET_SCENARIO_PED_* - _SET_SPAWNER_*

### _0x8AFCCC0F18D70018
- **Return Type**: void
- **Parameters**: int groupId, BOOL p1
- **Description**: _SET_FORMATION_*

### _0xE1103300F3456DE7
- **Return Type**: void
- **Parameters**: int groupId, float p1, float p2
- **Description**: _SET_FORMATION_P*

### _0xA8A95CECB1906EA2
- **Return Type**: void
- **Parameters**: int groupId, BOOL p1
- **Description**: _SET_ENABLE_B* - _SET_ENABLE_H*

### _0xDDFAD4DEAA7FA362
- **Return Type**: void
- **Parameters**: int groupId, float p1, float p2, float p3, float p4
- **Description**: _SET_FORMATION_P*

### _0x966DE09688A1DE39
- **Return Type**: void
- **Parameters**: int groupId, float p1, float p2, float p3, float p4
- **Description**: _SET_FORMATION_P*

### _0x7E5185B979706210
- **Return Type**: void
- **Parameters**: int groupId, int p1
- **Description**: _SET_FORMATION_P*

### _0x40C3524D4ED83554
- **Return Type**: void
- **Parameters**: int groupId, BOOL p1
- **Description**: _SET_SCENARIO_PED_* - _SET_SPAWNER_*

### _0x86FAFC18E3D4380C
- **Return Type**: void
- **Parameters**: int groupId, BOOL p1

### _0x07EA5B053FA60AC7
- **Return Type**: void
- **Parameters**: int groupId, BOOL p1

### _0xF9CBD46433E36713
- **Return Type**: void
- **Parameters**: Ped ped, Entity targetEntity, float p2, float p3, float p4, float p5, float p6, float p7, float p8, const char* p9
- **Description**: Used in Script Function PLAYER_HEAD_TRACKING_MAINTAIN

### GET_VEHICLE_PED_IS_USING
- **Return Type**: Vehicle
- **Parameters**: Ped ped

### GET_VEHICLE_PED_IS_ENTERING
- **Return Type**: Vehicle
- **Parameters**: Ped ped

### _GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO
- **Return Type**: Vehicle
- **Parameters**: Ped horse

### _GET_LAST_VEHICLE_DRAFT_HORSE_WAS_ATTACHED_TO
- **Return Type**: Vehicle
- **Parameters**: Ped horse

### GET_SEAT_PED_IS_USING
- **Return Type**: int
- **Parameters**: Ped ped

### _GET_TRANSPORT_PED_IS_SEATED_ON
- **Return Type**: Entity
- **Parameters**: Ped ped

### IS_PED_ENTERING_ANY_TRANSPORT
- **Return Type**: BOOL
- **Parameters**: Ped ped

### SET_PED_GRAVITY
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _0x96595B36D6A2279B
- **Return Type**: void
- **Parameters**: Ped animal, BOOL toggle
- **Description**: Only used in R* Script mob4 combined with SET_ANIMAL_TUNING_BOOL_PARAM _SET_PED_S* - _SET_PED_TARGET_*

### _SET_PED_IMMERSION_FLAG
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle
- **Description**: Only used in R* Script beat_sharp_shooter Blocks ped from swimming underwater

### _0xA90684ED185CCB4B
- **Return Type**: void
- **Parameters**: Ped animal, BOOL p1, float p2, float p3
- **Description**: Only used in R* Script mob4 and rcm_mason4 _SET_PED_DEFENSIVE_* - _SET_PED_DESIRED_*

### _FAKE_SET_PED_LOCO_INJURED
- **Return Type**: void
- **Parameters**: Ped ped, BOOL enabled

### _FORCE_PED_DEATH
- **Return Type**: void
- **Parameters**: Ped ped, Ped pedKiller, Hash weapon

### APPLY_DAMAGE_TO_PED
- **Return Type**: void
- **Parameters**: Ped ped, int damageAmount, BOOL damageArmour, int boneId, Ped pedKiller
- **Description**: damages a ped with the given amount

### _0xBAD2A311667A50D7
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: _SET_PED_D*

### GET_PED_TYPE
- **Return Type**: int
- **Parameters**: Ped ped

### SET_PED_AS_COP
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle
- **Description**: Turns the desired ped into a cop. If you use this on the player ped, you will become almost invisible to cops dispatched for you. You will also report your own crimes, get a generic cop voice, get a cop-vision-cone on the radar, and you will be unable to shoot at other cops. Toggling ped as "false" has no effect; you must change p0's ped model to disable the effect. toggle = bSetRelGroup

### _0x405180B14DA5A935
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: _SET_PED_A*

### _SET_PED_INTERACTION_PERSONALITY
- **Return Type**: void
- **Parameters**: Ped ped, Hash personality
- **Description**: personality (script_mp_rel): NONE, AGGRESSIVE, TIMID (non-aggressive), CRIPPS, SCRIPTEDINTIMIDATION, MAGGIE, MARCEL, SCRIPTEDSALOON personality (script_rel): AVOID, SCRIPTEDOUTLAW, TIMIDGUARDDOG, SCRIPTEDTIMIDROB, AGGRESSIVECAMPER, LAZYDOG, KIERANTIEDUP, SCRIPTEDGALA

### _GET_PED_INTERACTION_PERSONALITY
- **Return Type**: Hash
- **Parameters**: Ped ped

### _SET_PED_PERSONALITY
- **Return Type**: void
- **Parameters**: Ped ped, Hash personality
- **Description**: Hashes: STANDARD_PED_AGRO_GUARD, BOUNTY_HUNTER, PLAYER_HORSE, LAW_POLICE, GUARD_DOG, ATTACK_DOG Personalities can also be found in common:/data/ai/interactionpersonalities

### _0x329772C47DBB2FBC
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: _SET_PED_P* - _SET_PED_R*

### _GET_IS_PED_IN_DISPUTE_WITH_PED
- **Return Type**: BOOL
- **Parameters**: Ped ped, Ped pedInDisputeWith
- **Description**: Returns true if ped is in a dispute another ped (pedInDisputeWith can also be 0)

### _0x94132D7C8D3575C4
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _GET_IS_PED_*

### _0x8AF46E5159A5B620
- **Return Type**: void
- **Parameters**: Ped ped, Hash speechParams
- **Description**: _SET_PED_IN*

### _0x45FEA6D5539BD474
- **Return Type**: void
- **Parameters**: Ped ped, const char* p1
- **Description**: _SET_PED_IN*

### _SET_PED_INTERACTION_POSITIVE_RESPONSE
- **Return Type**: void
- **Parameters**: Ped ped, const char* speech

### _0xE37ACEE15AC50C7E
- **Return Type**: void
- **Parameters**: Ped ped, const char* p1
- **Description**: _SET_PED_IN*

### _SET_PED_INTERACTION_NEGATIVE_RESPONSE
- **Return Type**: void
- **Parameters**: Ped ped, const char* speech

### _0x41C23A8E6B344867
- **Return Type**: void
- **Parameters**: Ped ped, const char* p1
- **Description**: _SET_PED_IN*

### GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION
- **Return Type**: BOOL
- **Parameters**: Ped ped, Player player

### GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION
- **Return Type**: BOOL
- **Parameters**: Ped ped, Player player

### _0xA7DC9266ED6A4E51
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: _CLEAR_PED_B* - _CLEAR_PED_C*

### _0x89816B58C3466262
- **Return Type**: Any
- **Parameters**: Ped ped
- **Description**: _GET_PED_B* - _GET_PED_C*

### _0x97B06669AC569003
- **Return Type**: void
- **Parameters**: Ped ped1, Ped ped2
- **Description**: _CLEAR*

### _0x85F500F4E24CA43E
- **Return Type**: void
- **Parameters**: Ped ped, float p1
- **Description**: Used in Script Function SKCS_PLAYER_ROBBING _SET_PED_A*

### _0x9B9B9FA0EA283E3D
- **Return Type**: void
- **Parameters**: Ped ped, float p1
- **Description**: Used in Script Function SKCS_PLAYER_ROBBING _SET_PED_SHOULD_PLAY_* - _SET_PED_SW*

### _0xEC60D1D225BC50AA
- **Return Type**: void
- **Parameters**: Ped ped, float p1
- **Description**: _SET_C*

### _0x12F2D161BF4031FC
- **Return Type**: void
- **Parameters**: Ped ped, float p1
- **Description**: _SET_A* - _SET_B*

### _0x0ADA3EC589E1736E
- **Return Type**: void
- **Parameters**: 

### _GET_IS_PED_BEING_ROBBED
- **Return Type**: BOOL
- **Parameters**: Ped ped, Player player, BOOL trueUntilPlayerPocketsItem
- **Description**: If p2 is false, then this native will return true until the interaction is complete. If true, the native will return true until player pockets robbery item. _GET_IS_PED_[M-R]*

### _0xD55DB4466D00A258
- **Return Type**: BOOL
- **Parameters**: Ped legendaryAnimal
- **Description**: Used in Script Function LA_CHECK_ALERTED _GET_IS_PED_*

### SET_PED_MAX_HEALTH
- **Return Type**: void
- **Parameters**: Ped ped, int value
- **Description**: Sets the maximum health of a ped.

### GET_PED_MAX_HEALTH
- **Return Type**: int
- **Parameters**: Ped ped

### _SET_PED_HEALTH_CONFIG
- **Return Type**: void
- **Parameters**: Ped ped, Hash configHash
- **Description**: configHash: see pedhealth.meta

### INIT_PED_DEFAULT_HEALTH
- **Return Type**: void
- **Parameters**: Ped ped

### SET_PED_MAX_TIME_IN_WATER
- **Return Type**: void
- **Parameters**: Ped ped, float value

### SET_PED_MAX_TIME_UNDERWATER
- **Return Type**: void
- **Parameters**: Ped ped, float value

### _0xAF041C10756C30FB
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1, BOOL p2, BOOL p3
- **Description**: _CLEAR_PED_D*

### _0x5AF24CA9C974E51A
- **Return Type**: void
- **Parameters**: Ped ped1, Ped ped2
- **Description**: _SET_C*

### SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE
- **Return Type**: void
- **Parameters**: Ped ped, int state
- **Description**: state: enum eKnockOffVehicle { KNOCKOFFVEHICLE_DEFAULT, KNOCKOFFVEHICLE_NEVER, KNOCKOFFVEHICLE_EASY, KNOCKOFFVEHICLE_HARD };

### CAN_KNOCK_PED_OFF_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Ped ped

### KNOCK_PED_OFF_VEHICLE
- **Return Type**: void
- **Parameters**: Ped ped

### GET_PED_AS_GROUP_MEMBER
- **Return Type**: Ped
- **Parameters**: int groupID, int memberNumber

### GET_PED_AS_GROUP_LEADER
- **Return Type**: Ped
- **Parameters**: int groupID

### SET_PED_KEEP_TASK
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### IS_PED_SWIMMING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_SWIMMING_UNDER_WATER
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0xDC88D06719070C39
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _IS_PED_IN_* (near water?) Returns true if ped is swimming in water

### SET_CREATE_RANDOM_COPS
- **Return Type**: void
- **Parameters**: BOOL toggle

### IS_PED_IN_ANY_TRAIN
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_GETTING_INTO_A_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0x550CB89DD7F4FA3D
- **Return Type**: BOOL
- **Parameters**: Ped ped1, Ped ped2
- **Description**: _HAS_PED_*

### SET_ENABLE_HANDCUFFS
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1, BOOL p2
- **Description**: Ped can not pull out a weapon when true

### SET_ENABLE_BOUND_ANKLES
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _0x8822F139408B8D0A
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: If returned true, SET_ENABLE_BOUND_ANKLES is called in R* Script guama2 _GET_D* - _GET_E*

### _0x8822F124788B8D0A
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: Only used in R* Script train_robbery4 _SET_PED_D*

### RESET_PED_WEAPON_MOVEMENT_CLIPSET
- **Return Type**: void
- **Parameters**: Ped ped

### _SET_PED_GETUP_ANIMATION
- **Return Type**: void
- **Parameters**: Ped ped, const char* animName, BOOL p2

### _0x88A95BB640FC186F
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: Used in R* Script generic_weight_control_item _CLEAR_PED_E* - CLEAR_PED_(G?)L*

### RESET_PED_IN_VEHICLE_CONTEXT
- **Return Type**: void
- **Parameters**: Ped ped

### _0x878E8104FA27CDAE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, Hash p1

### SET_PED_GESTURE_GROUP
- **Return Type**: void
- **Parameters**: Ped ped, const char* gesture, int p2

### _SET_PED_DESIRED_LOCO_FOR_MODEL
- **Return Type**: void
- **Parameters**: Ped ped, const char* locomotionArchetype
- **Description**: Seems to set the ped's loco type. Values used in the scripts: algie angry_female arthur_healthy cowboy cowboy_f default default_female free_slave_01 free_slave_02 gold_panner guard_lantern injured_general john_marston lilly_millet lone_prisoner lost_man mp_ova_hunter mp_ova_hunter_female murfree old_female primate rally waiter war_veteran

### _CLEAR_PED_DESIRED_LOCO_FOR_MODEL
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: Clears locomotion archetype

### _SET_PED_DESIRED_LOCO_MOTION_TYPE
- **Return Type**: void
- **Parameters**: Ped ped, const char* locoMotionType
- **Description**: Sets peds motion type

### _CLEAR_PED_DESIRED_LOCO_MOTION_TYPE
- **Return Type**: void
- **Parameters**: Ped ped

### _0x2371C39D4F91C288
- **Return Type**: void
- **Parameters**: Ped ped

### _REQUEST_PED_GETUP_ANIMATION
- **Return Type**: void
- **Parameters**: Ped ped, const char* getUpType
- **Description**: Known get up animation types: REAR, FRONT

### PED_COWER_IN_PLACE
- **Return Type**: void
- **Parameters**: Ped ped, Ped ped2

### PED_COWER_MOVE_TO_POINT
- **Return Type**: void
- **Parameters**: Ped ped, float p1, float p2, float p3, Ped ped2, float p5

### _0x16F798A05BB9E3B5
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: _PED_COWER_M*

### _PED_EMOTIONAL_PRESET_LOCO_MOTION
- **Return Type**: void
- **Parameters**: Ped ped, const char* presetName, Ped targetPed, int duration, int flag
- **Description**: target: 0 affects everyone duration: -1 indefinite flag: always 4 in R* Scripts

### _PED_CLEAR_LOCO_MOTION
- **Return Type**: void
- **Parameters**: Ped ped

### _0x32CCAD8A981B53D3
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: _STOP_(?)*

### _SET_PED_DRUNKNESS
- **Return Type**: void
- **Parameters**: Ped ped, BOOL enabled, float drunknessLevel
- **Description**: SOBER = 0.0f, SLIGHTLY_DRUNK = 0.25f, MODERATELY_DRUNK = 0.5f, VERY_DRUNK = 1.0f

### _IS_PED_DRUNK
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _GET_PED_DRUNKNESS
- **Return Type**: float
- **Parameters**: Ped ped
- **Description**: Returns ped drunk level _H* or _I*

### GET_ANIM_INITIAL_OFFSET_POSITION
- **Return Type**: Vector3
- **Parameters**: const char* animDict, const char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9

### GET_ANIM_INITIAL_OFFSET_POSITION
- **Return Type**: Vector3
- **Parameters**: const char* animDict, const char* animName, Vector3 vec, Vector3 rot, float p8, int p9

### GET_ANIM_INITIAL_OFFSET_ROTATION
- **Return Type**: Vector3
- **Parameters**: const char* animDict, const char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9

### GET_ANIM_INITIAL_OFFSET_ROTATION
- **Return Type**: Vector3
- **Parameters**: const char* animDict, const char* animName, Vector3 vec, Vector3 rot, float p8, int p9

### SET_PED_RANDOM_COMPONENT_VARIATION
- **Return Type**: void
- **Parameters**: Ped ped, int p1

### KNOCK_OFF_PED_PROP
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4

### SET_BLOCKING_OF_NON_TEMPORARY_EVENTS
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _GET_BLOCKING_OF_NON_TEMPORARY_EVENTS
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0xC17A94CC8FC3C61A
- **Return Type**: void
- **Parameters**: Entity entity, int boneId, float p2, float p3, float p4
- **Description**: _SET_PED_P* - _SET_PED_R*

### _SET_PED_SCALE
- **Return Type**: void
- **Parameters**: Ped ped, float scale

### _0x134775B093AD5C38
- **Return Type**: float
- **Parameters**: Ped ped
- **Description**: _GET_PED_M*

### _GET_PED_HEIGHT
- **Return Type**: float
- **Parameters**: Ped ped

### _GET_PED_MODEL_SIZE_FROM_HASH
- **Return Type**: int
- **Parameters**: Hash modelHash
- **Description**: PS_SMALL = 0, PS_MEDIUM, PS_MEDIUM_LARGE, PS_LARGE, PS_EXTRA_LARGE

### REGISTER_TARGET
- **Return Type**: void
- **Parameters**: Ped ped, Ped targetPed, BOOL p2

### _REGISTER_HATED_TARGETS_IN_AREA
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float radius

### _REGISTER_HATED_TARGETS_IN_AREA
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float radius

### REGISTER_HATED_TARGETS_AROUND_PED
- **Return Type**: void
- **Parameters**: Ped ped, float radius
- **Description**: Based on TASK_COMBAT_HATED_TARGETS_AROUND_PED, the parameters are likely similar (PedHandle, and area to attack in).

### _IS_TARGET
- **Return Type**: BOOL
- **Parameters**: Ped ped, Ped targetPed

### _REMOVE_TARGET
- **Return Type**: void
- **Parameters**: Ped ped, Ped targetPed

### GET_CLOSEST_PED
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, float radius, BOOL p4, BOOL p5, Ped* outPed, BOOL p7, BOOL p8, BOOL p9, int pedType
- **Description**: Gets the closest ped in a radius.

### GET_CLOSEST_PED
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, float radius, BOOL p4, BOOL p5, Ped* outPed, BOOL p7, BOOL p8, BOOL p9, int pedType

### CAN_PED_RAGDOLL
- **Return Type**: BOOL
- **Parameters**: Ped ped

### SET_PED_TO_RAGDOLL
- **Return Type**: BOOL
- **Parameters**: Ped ped, int timeMin, int timeMax, int ragdollType, BOOL abortIfInjured, BOOL abortIfDead, const char* nmTaskMessageParameterName
- **Description**: nmTaskMessageParameterName: See physicstasks.ymt. Search for DraggedByCart or 0xD00820D7 (Used in R* SP Script marston8)

### SET_PED_TO_RAGDOLL_WITH_FALL
- **Return Type**: BOOL
- **Parameters**: Ped ped, int timeMin, int timeMax, int ragdollType, float falldirX, float falldirY, float falldirZ, float p7, float p8, float p9, float p10, float p11, float p12, float p13

### SET_PED_TO_RAGDOLL_WITH_FALL
- **Return Type**: BOOL
- **Parameters**: Ped ped, int timeMin, int timeMax, int ragdollType, Vector3 falldir, float p7, float p8, float p9, float p10, float p11, float p12, float p13

### SET_PED_RAGDOLL_ON_COLLISION
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle, BOOL p2
- **Description**: Causes Ped to ragdoll on collision with any object (e.g Running into trashcan). If applied to player you will sometimes trip on the sidewalk.

### _SET_PED_TO_DISABLE_RAGDOLL
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### IS_PED_RAGDOLL
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: If the ped handle passed through the parenthesis is in a ragdoll state this will return true.

### IS_PED_RUNNING_RAGDOLL_TASK
- **Return Type**: BOOL
- **Parameters**: Ped ped

### SET_PED_RAGDOLL_FORCE_FALL
- **Return Type**: void
- **Parameters**: Ped ped

### _0x8CB2553C559102C1
- **Return Type**: void
- **Parameters**: Ped ped, int p1, BOOL p2
- **Description**: _SET_PED_T* - SET_PED_U*

### _0xFD3C31A2E45671E7
- **Return Type**: void
- **Parameters**: Ped ped, int p1
- **Description**: _DISABLE_A* - _DISABLE_C*

### RESET_PED_RAGDOLL_TIMER
- **Return Type**: void
- **Parameters**: Ped ped

### SET_PED_CAN_RAGDOLL
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _0x3AEC4A410ECAF30D
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _IS_PED_R*

### IS_PED_RUNNING_MOBILE_PHONE_TASK
- **Return Type**: BOOL
- **Parameters**: Ped ped

### SET_RAGDOLL_BLOCKING_FLAGS
- **Return Type**: void
- **Parameters**: Ped ped, int flags
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/AI/RAGDOLL_BLOCKING_FLAGS  flags: enum eRagdollBlockingFlags { RBF_BULLET_IMPACT = (1 << 0), RBF_VEHICLE_IMPACT = (1 << 1), RBF_FIRE = (1 << 2), RBF_ELECTROCUTION = (1 << 3), RBF_PLAYER_IMPACT = (1 << 4), RBF_EXPLOSION = (1 << 5), RBF_IMPACT_OBJECT = (1 << 6), RBF_MELEE = (1 << 7), RBF_RUBBER_BULLET = (1 << 8), RBF_FALLING = (1 << 9), RBF_WATER_JET = (1 << 10), RBF_DROWNING = (1 << 11), RBF_0x9F52E2C4 = (1 << 12), RBF_PLAYER_BUMP = (1 << 13), RBF_PLAYER_RAGDOLL_BUMP = (1 << 14), RBF_PED_RAGDOLL_BUMP = (1 << 15), RBF_VEHICLE_GRAB = (1 << 16), RBF_SMOKE_GRENADE = (1 << 17), RBF_HORSE_BUMP = (1 << 18), RBF_ACTIVATE_ON_COLLISION = (1 << 19) };

### CLEAR_RAGDOLL_BLOCKING_FLAGS
- **Return Type**: void
- **Parameters**: Ped ped, int flags
- **Description**: flags: see SET_RAGDOLL_BLOCKING_FLAGS

### _0x9F933E0985E12C51
- **Return Type**: void
- **Parameters**: Ped ped, float p1, float p2, float p3

### _0x88B2026A3B0BE33D
- **Return Type**: void
- **Parameters**: Ped ped, float p1

### SET_PED_DEFENSIVE_AREA_VOLUME
- **Return Type**: void
- **Parameters**: Ped ped, Volume volume, BOOL p2, BOOL p3, BOOL p4

### SET_PED_SPHERE_DEFENSIVE_AREA
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float radius, BOOL p5, BOOL p6, BOOL p7

### SET_PED_SPHERE_DEFENSIVE_AREA
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float radius, BOOL p5, BOOL p6, BOOL p7

### _SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, Entity entity, float x, float y, float z, float radius, int p6, BOOL p7

### _SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, Entity entity, Vector3 vec, float radius, int p6, BOOL p7

### _SET_PED_DEFENSIVE_AREA_TO_ANGLED_AREA
- **Return Type**: void
- **Parameters**: Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, Any p7, BOOL p8, BOOL p9, Entity entity, BOOL p11
- **Description**: _SET_PED_(A?)*

### _SET_PED_DEFENSIVE_AREA_TO_ANGLED_AREA
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec1, Vector3 vec2, Any p7, BOOL p8, BOOL p9, Entity entity, BOOL p11

### SET_PED_DEFENSIVE_AREA_DIRECTION
- **Return Type**: void
- **Parameters**: Ped ped, float p1, float p2, float p3, BOOL p4

### REMOVE_PED_DEFENSIVE_AREA
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle
- **Description**: Ped will no longer get angry when you stay near him.

### GET_PED_DEFENSIVE_AREA_POSITION
- **Return Type**: Vector3
- **Parameters**: Ped ped, BOOL p1

### IS_PED_DEFENSIVE_AREA_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Ped ped, BOOL p1

### _GET_PED_DEFENSIVE_VOLUME
- **Return Type**: Volume
- **Parameters**: Ped ped, Any p1

### _0x4EC4EA2F72B36358
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: _SET_PED_A*

### _0xCF0B19806473D324
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z
- **Description**: _SET_PED_COMBAT_*

### _0xCF0B19806473D324
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec

### _0xB4B7C92FCE7347B7
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: _RESET_PED_C*

### REVIVE_INJURED_PED
- **Return Type**: void
- **Parameters**: Ped ped

### RESURRECT_PED
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: This function will simply bring the dead ped back to life.  Before calling this function, you may want to declare the position, where your Resurrected ped to be spawn at because theres a chance the ped will fall through the map  Also, disabling any assigned task immediately helped in the number of scenarios, where If you want peds to perform certain decided tasks.

### SET_PED_NAME_DEBUG
- **Return Type**: void
- **Parameters**: Ped ped, const char* name
- **Description**: nullsub, doesn't do anything

### SPECIAL_FUNCTION_DO_NOT_USE
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1

### _0x7020839C7302D8AC
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _HAS_*

### _0xE1AADD0055D76603
- **Return Type**: void
- **Parameters**: Ped ped, Entity entity, int boneIndex1, int boneIndex2, float x, float y, float z, float p7, BOOL p8, BOOL p9, int p10
- **Description**: _C*

### _0xE1AADD0055D76603
- **Return Type**: void
- **Parameters**: Ped ped, Entity entity, int boneIndex1, int boneIndex2, Vector3 vec, float p7, BOOL p8, BOOL p9, int p10

### _0x5A1A929C8B729B4A
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: _C*

### _0x97A38B65EBDA3D50
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: _SET_PED_D*

### _0x06A10B4D7F50B0C3
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _GET_PED_D*

### _0x88A5564B19C15391
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0x354CA4DDDEEC397A
- **Return Type**: int
- **Parameters**: Ped ped

### _0xFEA6126C34DF2532
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: METAPED_PLAYER_COMPONENTS_SET_META_TYPE_TO_BE_BYPASSED: Setting visibility _SET_M* - _SET_P*

### _0xA967D6A8ED2D713B
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: _SET_PED_P* - _SET_PED_R*

### APPLY_PED_BLOOD_SPECIFIC
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, float p2, float p3, float p4, float p5, Any p6, float p7, Any* p8

### _0x58D32261AE0F0843
- **Return Type**: void
- **Parameters**: Ped ped, int boneId, float p2, float p3, float p4, float p5, float p6, float p7, const char* p8

### _0x735662994E60A710
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: _SET_PED_F*

### _0x91BAB9E064F036CD
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x897934E868EDDD6C
- **Return Type**: void
- **Parameters**: Ped ped, int p1, float p2, float p3, float p4

### _SET_PED_ACTIVATE_WOUND_EFFECT
- **Return Type**: void
- **Parameters**: Ped ped, int p1, int boneId, float moveWoundLeftRight, float bloodFountainPressure, float yaw, float bloodFountainDirection, float bloodFountainPulse, float p8, float p9
- **Description**: bloodFountainPressure: visible effect from 0.0 till 20.0 yaw: visible effect from -3.0 till 3.0 bloodFountainDirection: 1.0 left side, -1.0 right side bloodFountainPulse: from 0.1 (low) till 1.0 (fast) make blood fountain from your stomach: _SET_PED_ACTIVATE_WOUND_EFFECT(ped, unk, 2, 14411, 0.0, 0.1, 0.0, 0.0, 3.0, -1.0, 1.0)

### _UPDATE_PED_WOUND_EFFECT
- **Return Type**: void
- **Parameters**: Ped ped, float value
- **Description**: Params: 0.0f to remove wound effects

### APPLY_PED_DAMAGE_PACK
- **Return Type**: void
- **Parameters**: Ped ped, const char* damagePack, float damage, float mult
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/peds_customization/ped_decals.lua

### CLEAR_PED_BLOOD_DAMAGE
- **Return Type**: void
- **Parameters**: Ped ped

### CLEAR_PED_BLOOD_DAMAGE_BY_ZONE
- **Return Type**: void
- **Parameters**: Ped ped, int p1

### CLEAR_PED_DAMAGE_DECAL_BY_ZONE
- **Return Type**: void
- **Parameters**: Ped ped, int p1, const char* p2

### _CLEAR_PED_BLOOD_DAMAGE_FACIAL
- **Return Type**: void
- **Parameters**: Ped ped, int p1

### _0x34C11114887150FD
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xD8544F6260F5F01E
- **Return Type**: void
- **Parameters**: Ped ped, int p1
- **Description**: METAPED_PLAYER_COMPONENTS_SET_META_TYPE_TO_BE_BYPASSED: Setting visibility p1 is mostly 10 _CLEAR_PED_N* - _CLEAR_PED_W*

### _0xEB8886E1065654CD
- **Return Type**: void
- **Parameters**: Ped ped, int p1, const char* p2, float p3
- **Description**: Washing player's face/hands now _FA* - _FI*

### FADE_AND_DESTROY_PED
- **Return Type**: void
- **Parameters**: Ped* ped

### _IS_PED_QUEUED_FOR_DELETION
- **Return Type**: BOOL
- **Parameters**: Ped ped

### CLEAR_PED_WETNESS
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: It clears the wetness of the selected Ped/Player. Clothes have to be wet to notice the difference.

### SET_PED_WETNESS_HEIGHT
- **Return Type**: void
- **Parameters**: Ped ped, float height
- **Description**: It adds the wetness level to the player clothing/outfit. As if player just got out from water surface.

### _0xF9CFF5BB70E8A2CB
- **Return Type**: void
- **Parameters**: Ped ped, float p1
- **Description**: _SET_PED_WETNESS*

### SET_PED_WETNESS_ENABLED_THIS_FRAME
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: combined with PED::SET_PED_WETNESS_HEIGHT(), this native makes the ped drenched in water up to the height specified in the other function

### _0xA7A806677F8DE138
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: Washing player's face/hands now _CLEAR_PED_E* - _CLEAR_PED_L*

### _0xA064BBABB064446F
- **Return Type**: void
- **Parameters**: Any p0

### CLEAR_PED_ENV_DIRT
- **Return Type**: void
- **Parameters**: Ped ped

### SET_PED_SWEAT
- **Return Type**: void
- **Parameters**: Ped ped, float sweat

### CLEAR_PED_DECORATIONS
- **Return Type**: void
- **Parameters**: Ped ped

### WAS_PED_SKELETON_UPDATED
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Despite this function's name, it simply returns whether the specified handle is a Ped.

### GET_PED_BONE_COORDS
- **Return Type**: Vector3
- **Parameters**: Ped ped, int boneId, float offsetX, float offsetY, float offsetZ
- **Description**: Gets the position of the specified bone of the specified ped.  ped: The ped to get the position of a bone from. boneId: The ID of the bone to get the position from. This is NOT the index. offsetX: The X-component of the offset to add to the position relative to the bone's rotation. offsetY: The Y-component of the offset to add to the position relative to the bone's rotation. offsetZ: The Z-component of the offset to add to the position relative to the bone's rotation.

### GET_PED_BONE_COORDS
- **Return Type**: Vector3
- **Parameters**: Ped ped, int boneId, Vector3 offset

### ADD_SCENARIO_BLOCKING_AREA
- **Return Type**: int
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, int blockingFlags
- **Description**: blockingFlags: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/eScenarioBlockingFlags

### ADD_SCENARIO_BLOCKING_AREA
- **Return Type**: int
- **Parameters**: Vector3 vec1, Vector3 vec2, BOOL p6, int blockingFlags

### REMOVE_SCENARIO_BLOCKING_AREAS
- **Return Type**: void
- **Parameters**: 

### REMOVE_SCENARIO_BLOCKING_AREA
- **Return Type**: void
- **Parameters**: Any p0, BOOL p1

### _ADD_SCENARIO_BLOCKING_VOLUME
- **Return Type**: Any
- **Parameters**: Volume volume, BOOL p1, int flag
- **Description**: flag: see ADD_SCENARIO_BLOCKING_AREA

### _0x6F46F8ACB44C4FC1
- **Return Type**: Any
- **Parameters**: Any p0

### _IS_SCENARIO_BLOCKING_AREA_VALID
- **Return Type**: BOOL
- **Parameters**: Any p0

### IS_PED_USING_SCENARIO_HASH
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash scenarioHash
- **Description**: Equivalent to IS_PED_USING_SCENARIO from V but takes a hash instead of a string.

### IS_PED_USING_ANY_SCENARIO
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_USING_THIS_SCENARIO
- **Return Type**: BOOL
- **Parameters**: Ped ped, int scenario

### _CAN_PED_USE_SCENARIO_POINT
- **Return Type**: BOOL
- **Parameters**: Ped ped, int scenario, Any p2, Any p3, Any p4
- **Description**: p2 is always 0, p3 is always 0, p4 is always 1

### _0x1148F706CF4EBDDA
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash p1, int p2
- **Description**: _CAN_PED_SEE* - _CAN_PED_USE_(SCENARIO_HASH?)*

### SET_PED_PANIC_EXIT_SCENARIO
- **Return Type**: BOOL
- **Parameters**: Ped ped, float x, float y, float z

### SET_PED_PANIC_EXIT_SCENARIO
- **Return Type**: BOOL
- **Parameters**: Ped ped, Vector3 vec

### TOGGLE_SCENARIO_PED_COWER_IN_PLACE
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle
- **Description**: If toggle is true, when the ped is using a scenario he will stop it and become scared If toggle is false, the ped will not be scared anymore and continue his scenario  Old name: _SET_PED_SCARED_WHEN_USING_SCENARIO

### _0xD8CEEED54C672B5D
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT
- **Return Type**: BOOL
- **Parameters**: Ped ped, float x, float y, float z
- **Description**: Old name: _SET_PED_SHOULD_PLAY_DIRECTED_SCENARIO_EXIT

### SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT
- **Return Type**: BOOL
- **Parameters**: Ped ped, Vector3 vec

### SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT
- **Return Type**: void
- **Parameters**: Ped ped

### SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT
- **Return Type**: void
- **Parameters**: Ped ped

### SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT
- **Return Type**: BOOL
- **Parameters**: Ped ped, float x, float y, float z, int lookIntensity
- **Description**: lookIntensity: 0 - REACT_LOOK_NONE 1 - REACT_LOOK_LOW 2 - REACT_LOOK_MEDIUM 3 - REACT_LOOK_HIGH

### SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT
- **Return Type**: BOOL
- **Parameters**: Ped ped, Vector3 vec, int lookIntensity

### SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT
- **Return Type**: BOOL
- **Parameters**: Ped ped, float x, float y, float z, int lookIntensity
- **Description**: lookIntensity: see SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT

### SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT
- **Return Type**: BOOL
- **Parameters**: Ped ped, Vector3 vec, int lookIntensity

### SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT
- **Return Type**: BOOL
- **Parameters**: Ped ped, float x, float y, float z, int lookIntensity, BOOL p5
- **Description**: lookIntensity: see SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT

### SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT
- **Return Type**: BOOL
- **Parameters**: Ped ped, Vector3 vec, int lookIntensity, BOOL p5

### SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT
- **Return Type**: BOOL
- **Parameters**: Ped ped, float x, float y, float z, int lookIntensity, BOOL p5
- **Description**: lookIntensity: see SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT

### SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT
- **Return Type**: BOOL
- **Parameters**: Ped ped, Vector3 vec, int lookIntensity, BOOL p5

### _0xF9331B3A314EB49D
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0xE735A7DA22E88359
- **Return Type**: void
- **Parameters**: Any p0

### _0x82CB0F3F0C7785E5
- **Return Type**: Any
- **Parameters**: Any p0

### _0xCA95C156C14B2054
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_FACIAL_IDLE_ANIM_OVERRIDE
- **Return Type**: void
- **Parameters**: Ped ped, const char* animName, const char* animDict

### CLEAR_FACIAL_IDLE_ANIM_OVERRIDE
- **Return Type**: void
- **Parameters**: Ped ped

### _REQUEST_PED_FACIAL_MOOD_THIS_FRAME
- **Return Type**: void
- **Parameters**: Ped ped, Hash mood, int p2
- **Description**: mood: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/fwFacialAnimRequest__Mood Params: p2 = 6 in R* Scripts

### _0xD2F0FE8805D91647
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_PED_CAN_PLAY_GESTURE_ANIMS
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2

### _0x7EDB3C766B0D073F
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: Only used in R* Script net_moonshine_property _A* - _B*

### SET_PED_CAN_PLAY_AMBIENT_ANIMS
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _0x4F63433CE3C08230
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: Only used in R* Script shop_harriet _SET_PED_F*

### SET_PED_CAN_ARM_IK
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _SET_PED_CAN_UNK_BODYPART_IK
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle
- **Description**: _SET_PED_CAN_(?)_IK*

### SET_PED_CAN_HEAD_IK
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### SET_PED_CAN_LEG_IK
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### SET_PED_CAN_TORSO_IK
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### SET_PED_CAN_TORSO_REACT_IK
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### SET_PED_CAN_TORSO_VEHICLE_IK
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### IS_PED_HEADTRACKING_PED
- **Return Type**: BOOL
- **Parameters**: Ped ped1, Ped ped2

### IS_PED_HEADTRACKING_ENTITY
- **Return Type**: BOOL
- **Parameters**: Ped ped, Entity entity

### _DISABLE_AMBIENT_LOOK_AT_REQUESTS
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _DISABLE_ALL_LOOK_AT_REQUESTS
- **Return Type**: void
- **Parameters**: Ped ped, int p1

### _0xCD9E5F94A2F38683
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: _SET_PED_R* - _SET_PED_S*

### SET_PED_CLOTH_PIN_FRAMES
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: Old name: SET_PED_CLOTH_PACKAGE_INDEX

### _0x1D4636C90BBEFACB
- **Return Type**: void
- **Parameters**: Ped ped, int p1
- **Description**: _SET_PED_CA* - _SET_PED_CO*

### _0xEF371232BC6053E1
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: _ADD_*

### _0x86F0B6730C32AC14
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: _SET_PED_*

### _0x8101BA1C0B462412
- **Return Type**: void
- **Parameters**: Ped ped, int ropeId
- **Description**: _ATTACH_*

### SET_PED_CONFIG_FLAG
- **Return Type**: void
- **Parameters**: Ped ped, int flagId, BOOL value
- **Description**: flagId: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/ePedScriptConfigFlags https://alloc8or.re/rdr3/doc/enums/ePedScriptConfigFlags.txt https://github.com/femga/rdr3_discoveries/tree/master/AI/CPED_CONFIG_FLAGS

### SET_PED_RESET_FLAG
- **Return Type**: void
- **Parameters**: Ped ped, int flagId, BOOL doReset
- **Description**: Needs to be called every frame  flagid:https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/ePedScriptResetFlags https://github.com/femga/rdr3_discoveries/tree/master/AI/CPED_RESET_FLAGS

### GET_PED_CONFIG_FLAG
- **Return Type**: BOOL
- **Parameters**: Ped ped, int flagId, BOOL p2
- **Description**: flagId: see SET_PED_CONFIG_FLAG

### GET_PED_RESET_FLAG
- **Return Type**: BOOL
- **Parameters**: Ped ped, int flagId

### _0xC6981AFF6D2A71C2
- **Return Type**: void
- **Parameters**: Any p0

### _0xE0FE107AB174D64A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_PED_GROUP_MEMBER_PASSENGER_INDEX
- **Return Type**: void
- **Parameters**: Ped ped, int index

### IS_PED_EVASIVE_DIVING
- **Return Type**: BOOL
- **Parameters**: Ped ped, Entity* evadingEntity
- **Description**: Presumably returns the Entity that the Ped is currently diving out of the way of.

### _SHOOT_TRIGGER_AT_COORDS
- **Return Type**: Any
- **Parameters**: Ped ped, float x, float y, float z, int p4, float p5, int p6, float p7
- **Description**: Triggers a gunshot Params: p5 = -1 in R* Scripts

### _SHOOT_TRIGGER_AT_COORDS
- **Return Type**: Any
- **Parameters**: Ped ped, Vector3 vec, int p4, float p5, int p6, float p7

### _IS_THIS_MODEL_A_HORSE
- **Return Type**: BOOL
- **Parameters**: Hash model

### SET_PED_MODEL_IS_SUPPRESSED
- **Return Type**: void
- **Parameters**: Hash model, BOOL toggle

### _IS_PED_MODEL_SUPPRESSED
- **Return Type**: BOOL
- **Parameters**: Hash model

### _0x7ABBD9E449E0DB00
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1

### _SET_PED_DISABLE_KICK_MOVE
- **Return Type**: void
- **Parameters**: Ped ped, BOOL disable
- **Description**: Disables being able to kick move ped.

### SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _0xE6CB36F43A95D75F
- **Return Type**: void
- **Parameters**: Any p0

### SET_PED_LEG_IK_MODE
- **Return Type**: void
- **Parameters**: Ped ped, int mode

### _IS_PED_IN_POINT
- **Return Type**: BOOL
- **Parameters**: Ped ped, float x, float y, float z, float radius, BOOL p5
- **Description**: If returned true: There are enemy peds near friendly turn in ped. Going to aggro. If returned false: Moving back to idle as there aren't any remaining enemy peds near ped _IS_PED_IN_*

### _IS_PED_IN_POINT
- **Return Type**: BOOL
- **Parameters**: Ped ped, Vector3 vec, float radius, BOOL p5

### _SET_PED_CAN_BE_LASSOED
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle
- **Description**: SET_PED_CAN_*

### SET_PED_COMBAT_MOVEMENT
- **Return Type**: void
- **Parameters**: Ped ped, int combatMovement
- **Description**: 0 - Stationary (Will just stand in place) 1 - Defensive (Will try to find cover and very likely to blind fire) 2 - Offensive (Will attempt to charge at enemy but take cover as well) 3 - Suicidal Offensive (Will try to flank enemy in a suicidal attack)

### GET_PED_COMBAT_MOVEMENT
- **Return Type**: int
- **Parameters**: Ped ped

### _0x815C0074A1BC0D93
- **Return Type**: void
- **Parameters**: Ped ped, int p1
- **Description**: _SET_PED_COMBAT_R - _SET_PED_C*

### _0xFFDE295662405B25
- **Return Type**: int
- **Parameters**: Ped ped
- **Description**: _GET_PED_COMBAT_M* - _GET_PED_C*

### SET_PED_COMBAT_ABILITY
- **Return Type**: void
- **Parameters**: Ped ped, int abilityLevel
- **Description**: abilityLevel: enum eCombatAbilityLevel { CAL_POOR, CAL_AVERAGE, CAL_PROFESSIONAL };

### SET_PED_COMBAT_RANGE
- **Return Type**: void
- **Parameters**: Ped ped, int range
- **Description**: range: enum eCombatRange { CR_NEAR, CR_MEDIUM, CR_FAR, CR_VERY_FAR };

### SET_PED_COMBAT_ATTRIBUTES
- **Return Type**: void
- **Parameters**: Ped ped, int attributeIndex, BOOL enabled
- **Description**: attributeIndex: https://alloc8or.re/rdr3/doc/enums/eCombatAttribute.txt https://github.com/femga/rdr3_discoveries/tree/master/AI/COMBAT_ATTRIBUTES

### _GET_PED_COMBAT_ATTRIBUTE
- **Return Type**: BOOL
- **Parameters**: Ped ped, int attributeIndex

### _SET_PED_COMBAT_ATTRIBUTE_HASH
- **Return Type**: void
- **Parameters**: Ped ped, Hash p1
- **Description**: Hashes: GUARD, COMBAT_ANIMAL, LAW, LAW_SHERIFF _SET_PED_COMBAT_A* - _SET_PED_COMBAT_M*

### SET_PED_TARGET_LOSS_RESPONSE
- **Return Type**: void
- **Parameters**: Ped ped, int responseType
- **Description**: TLR_ExitTask = 0, TLR_NeverLoseTarget, TLR_SearchForTarget

### _0x0A4618FFD517E24D
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x712B2C2B2471B493
- **Return Type**: void
- **Parameters**: Ped ped, Hash p1
- **Description**: _SET_PED_MO*

### _0x00B380FF2DF6AB7A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_PED_COMBAT_STYLE
- **Return Type**: void
- **Parameters**: Ped ped, Hash combatStyleHash, int p2, float duration
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/AI/COMBAT_STYLES Params: p2 is usually 1, sometimes 0 or 2 duration in seconds, -1.0 = forever

### _CLEAR_PED_COMBAT_STYLE
- **Return Type**: void
- **Parameters**: Ped ped, int p1
- **Description**: Params: p1 = 1 in R* Scripts

### _SET_PED_COMBAT_STYLE_MOD
- **Return Type**: void
- **Parameters**: Ped ped, Hash combatStyleModHash, float duration
- **Description**: duration in seconds, -1.0 = forever

### _CLEAR_PED_COMBAT_STYLE_MOD
- **Return Type**: void
- **Parameters**: Ped ped, Hash combatStyleModHash
- **Description**: _CLEAR_PED_COMBAT_*

### _0x5BF0B9D9A8E227A0
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _IS_PED_B* - _IS_PED_C*

### _0x642720D8D69328B6
- **Return Type**: void
- **Parameters**: Ped ped, Hash p1
- **Description**: _SET_PED_M*

### IS_PED_PERFORMING_MELEE_ACTION
- **Return Type**: BOOL
- **Parameters**: Ped ped, int p1, Hash p2

### _0x99DF2639DA76C1DC
- **Return Type**: BOOL
- **Parameters**: Ped ped1, Ped ped2, int p2
- **Description**: _CAN_PED_*

### _GET_PED_MELEE_ACTION_PHASE
- **Return Type**: float
- **Parameters**: Ped ped

### IS_PED_BEING_STEALTH_KILLED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### GET_MELEE_TARGET_FOR_PED
- **Return Type**: Ped
- **Parameters**: Ped ped

### _0xDEDBED3020DA49DC
- **Return Type**: void
- **Parameters**: Any p0

### _0xA405BF9F01960C16
- **Return Type**: void
- **Parameters**: Any p0

### _GET_PED_BRAWLING_STYLE
- **Return Type**: Hash
- **Parameters**: Ped ped

### _SET_PED_BRAWLING_STYLE
- **Return Type**: void
- **Parameters**: Ped ped, Hash brawlingStyle
- **Description**: brawlingStyle: enum eBrawlingStyle : Hash { BS_AI = 0x802C604D, BS_AI_BARBRAWL = 0x4FF5F0C7, BS_AI_DEFENSIVE = 0xD888F2FD, BS_AI_MOONSHINE_BARBRAWL = 0xA01B433A, BS_ALLIGATOR = 0x7A5548ED, BS_ALLIGATOR_LARGE = 0x368EC7CB, BS_ALLY = 0x69C76C14, BS_ANIMAL = 0xD777C754, BS_BADGER = 0x7E7C3F53, BS_BEAR = 0x0BC66E35, BS_BEAVER = 0x4E313783, BS_BOAR = 0x176A5831, BS_BOUNTY_HUNTER = 0x3900654C, BS_BRUISER = 0x4514DB61, BS_BULL = 0x4E50C5D2, BS_COUGAR = 0x9DAA7CCB, BS_COW = 0xB0E91295, BS_COYOTE = 0xA448EB69, BS_DEER = 0xA781E6B3, BS_DOG = 0x5A4155C4, BS_ELK = 0x408697F0, BS_FEMALE = 0x6A3BB2C2, BS_FEMALE_STRONG = 0x4DAFDD84, BS_GANGUP = 0xD0CECFF2, BS_GOAT = 0x078E649F, BS_HORSE = 0xF6B775F3, BS_MICAH_FINALE = 0x1F0BB27A, BS_MOOSE = 0x968917AB, BS_MUSKRAT = 0x1EDC33AC, BS_NO_MELEE = 0x25B5F931, BS_PIG = 0x22EAD110, BS_PLAYER = 0x78BAEF07, BS_PLAYER_FINALE = 0xF9E77D2D, BS_PLAYER_MOONSHINER = 0x687BF19F, BS_PLAYER_WINTER1 = 0x3C6A802F, BS_QUICK = 0xC4CABB1B, BS_RACCOON = 0x505F8917, BS_SHEEP = 0x6827CCCF, BS_SNAKE = 0x82BEBC4B, BS_TIMID = 0x431AEF77, BS_WOLF = 0xA8F023D4 };

### _0x9D8DFE2DE9CB4DFC
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: _RESET_PED_*

### _0xC48AF420371C7407
- **Return Type**: Any
- **Parameters**: Ped ped, Hash grapple
- **Description**: _SET_PED_M*

### _0x5EFA8A3D8A60D662
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x242EDF85D4E87B65
- **Return Type**: Any
- **Parameters**: Any p0

### _SET_PED_COMBAT_BEHAVIOUR
- **Return Type**: void
- **Parameters**: Ped ped, Hash behaviour

### _0x9A4AC116CC1EEE14
- **Return Type**: void
- **Parameters**: Any p0

### _0xE20027B414BFE6C7
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_PED_BEAT_MULTIPLIER
- **Return Type**: void
- **Parameters**: Ped ped, float p1
- **Description**: NET_FETCH_CLIENT_UPDATE_PED_FIGHT_PROFICIENCY: Changing parry multiplier for ped

### _SET_PED_ACTION_DISABLE_FLAG
- **Return Type**: void
- **Parameters**: Ped ped, int actionDisableFlag
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/AI/COMBAT_ACTION_DISABLE_FLAGS

### _CLEAR_PED_ACTION_DISABLE_FLAG
- **Return Type**: void
- **Parameters**: Ped ped, int actionDisableFlag

### _IS_PED_ACTION_DISABLE_FLAG_ENABLED
- **Return Type**: BOOL
- **Parameters**: Ped ped, int actionDisableFlag

### _SET_PED_TARGET_ACTION_DISABLE_FLAG
- **Return Type**: void
- **Parameters**: Ped ped, int actionDisableFlag

### _CLEAR_PED_TARGET_ACTION_DISABLE_FLAG
- **Return Type**: void
- **Parameters**: Ped ped, int actionDisableFlag

### _IS_PED_TARGET_ACTION_DISABLE_FLAG_ENABLED
- **Return Type**: BOOL
- **Parameters**: Ped ped, int actionDisableFlag

### _0x57F35552E771BE9D
- **Return Type**: void
- **Parameters**: Ped ped, int p1
- **Description**: _SET_PED_M*

### _0x7C10221CE718AA72
- **Return Type**: void
- **Parameters**: Ped ped, int p1
- **Description**: _CLEAR_PED_M*

### _0x0D3B1568917EBDA0
- **Return Type**: BOOL
- **Parameters**: Ped ped, int p1
- **Description**: _IS_PED_M*

### _0x29F3539189D3E277
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xE9E06EA514A69061
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_PED_WRITHING_DURATION
- **Return Type**: void
- **Parameters**: Ped ped, float writhingDuration1, float writhingDuration2, int p3

### _GET_PED_REMAINING_REVIVAL_TIME
- **Return Type**: float
- **Parameters**: Ped ped, BOOL normalized
- **Description**: normalized / non normalized 0.0        / 1000.0         STARTED IN WRITHE STAGE 1.0        / 0.0            END OF WRITHE, DEAD -1.0                        DEAD  Returns some value from AI task 562 (unknown).

### SET_PAUSE_PED_WRITHE_BLEEDOUT
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _0x12EB4E31F092C9B3
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _GET_IS_PED_(BLEEDING_OUT?)*

### GET_PED_IS_GRAPPLING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### GET_PED_IS_BEING_GRAPPLED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _GET_PED_GRAPPLER
- **Return Type**: Ped
- **Parameters**: Ped ped

### GET_PED_GRAPPLE_STATE
- **Return Type**: int
- **Parameters**: Ped ped

### _GET_PED_GRAPPLE_STYLE
- **Return Type**: Hash
- **Parameters**: Ped ped

### _SET_PED_GRAPPLE_STYLE
- **Return Type**: Any
- **Parameters**: Ped ped, Hash style
- **Description**: Hashes: GS_DRAGGING, GS_FACE_TO_BACK, GS_FACE_TO_FACE, GS_FACE_TO_FACE_WALL, GS_MOUNTED

### _SET_PED_GRAPPLE_SEQUENCE
- **Return Type**: void
- **Parameters**: Ped ped, const char* grappleSequence

### _SET_PED_GRAPPLE_FLAG
- **Return Type**: void
- **Parameters**: Ped ped, int flag, BOOL enable

### _CLEAR_PED_GRAPPLE_FLAG
- **Return Type**: void
- **Parameters**: Ped ped, int flag

### _GET_PED_GRAPPLE_FLAG
- **Return Type**: int
- **Parameters**: Ped ped

### _SET_PED_GRAPPLE_ACTION
- **Return Type**: void
- **Parameters**: Ped ped, Hash grappleAction

### _SET_PED_GRAPPLE_EFFECT_MULTIPLIER
- **Return Type**: Any
- **Parameters**: Ped ped, float multiplier

### _SET_PED_GRAPPLE_ANIMATION
- **Return Type**: void
- **Parameters**: Ped ped, Hash grappleAnim

### SET_PED_FLEE_ATTRIBUTES
- **Return Type**: void
- **Parameters**: Ped ped, int attributeFlags, BOOL enable
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/AI/FLEE_ATTRIBUTES  attributeFlags: enum eFleeAttribute { FA_FORCE_EXIT_VEHICLE = (1 << 16), FA_DISABLE_MOUNT_USAGE = (1 << 20), FA_DISABLE_ENTER_VEHICLES = (1 << 22), };

### _IS_PED_COWERING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_ANY_PED_NEAR_POINT
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, float radius

### IS_ANY_PED_NEAR_POINT
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, float radius

### FORCE_PED_AI_AND_ANIMATION_UPDATE
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1, BOOL p2

### _0xC2722B252C79E641
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, BOOL p3
- **Description**: _FORCE_PED_*

### _IS_PED_DOING_SCENARIO_TRANSITION
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0x2DC0E8DCBD3546E9
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _IS_PED_D*

### _ADD_SCENARIO_TRANSITION
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: Forces transition now, called together with 0xD65FDC686A031C83

### _GIVE_PED_HASH_COMMAND
- **Return Type**: void
- **Parameters**: Ped ped, Hash commandHash, float activationDuration
- **Description**: Ped Command Hash are special commands, that can be activated to change conditional anim variations or trigger transitions between conditional anims. https://github.com/femga/rdr3_discoveries/blob/master/animations/scenarios

### _GET_IS_PED_COMMAND_HASH_PRESENT
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash commandHash

### IS_PED_HEADING_TOWARDS_POSITION
- **Return Type**: BOOL
- **Parameters**: Ped ped, float x, float y, float z, float p4

### IS_PED_HEADING_TOWARDS_POSITION
- **Return Type**: BOOL
- **Parameters**: Ped ped, Vector3 vec, float p4

### _0x600BBDD29820370C
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: Not implemented.

### REQUEST_PED_VISIBILITY_TRACKING
- **Return Type**: void
- **Parameters**: Ped ped

### RELEASE_PED_VISIBILITY_TRACKING
- **Return Type**: void
- **Parameters**: Ped ped

### REQUEST_PED_VEHICLE_VISIBILITY_TRACKING
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1

### REQUEST_PED_USE_SMALL_BBOX_VISIBILITY_TRACKING
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1

### GET_TRACKED_PED_PIXELCOUNT
- **Return Type**: int
- **Parameters**: Ped ped

### IS_TRACKED_PED_VISIBLE
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Returns whether or not a ped is visible within your FOV, not this check auto's to false after a certain distance. Target needs to be tracked first, won't work otherwise.

### _IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN
- **Return Type**: BOOL
- **Parameters**: Ped ped, float percent

### _IS_PED_VISIBILITY_TRACKED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### CAN_PED_BE_MOUNTED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _IS_META_PED_FISH
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Returns true if given ped is a fish. _IS_ME* - _IS_MO*

### IS_EVENT_IN_QUEUE
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash eventType

### CAN_PED_SEE_ENTITY
- **Return Type**: int
- **Parameters**: Ped ped, Entity targetEntity, BOOL p2, BOOL p3
- **Description**: Returns: 0 - CTR_CANNOT_TARGET 1 - CTR_CAN_TARGET 2 - CTR_NOT_SURE_YET

### CAN_PED_SEE_PED_CACHED
- **Return Type**: int
- **Parameters**: Ped ped, Ped targetPed, BOOL p2

### _0x0EA9EACBA3B01601
- **Return Type**: float
- **Parameters**: Ped ped1, Ped ped2, BOOL p2
- **Description**: _CAN_PED_B* - _CAN_PED_I*

### GET_PED_BONE_INDEX
- **Return Type**: int
- **Parameters**: Ped ped, int boneId
- **Description**: no bone = -1

### _0xC5303F460A40D21D
- **Return Type**: int
- **Parameters**: Ped ped, int p1
- **Description**: Returns boneIndex _GET_PED_N* - _GET_PED_R*

### _0xE29D8CD66553DBAA
- **Return Type**: void
- **Parameters**: Ped horse
- **Description**: _SET_PED_R* -_SET_PED_S*

### _0xB06F5F1DEF417216
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0xFC23348F0F4E245F
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x9184788BFF1EDAD7
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_PED_DIRT_CLEANED
- **Return Type**: void
- **Parameters**: Ped ped, float p1, int p2, BOOL p3, BOOL p4
- **Description**: Params: ped, 0f, -1, true, true in R* MP Scripts _SET_PED_DE* - _SET_PED_F*

### _0x0105FEE8F9091255
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xD049920CD29F6CC8
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0xBB3E5370EBB6BE28
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x2FA568BFA725F8D6
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x56E4BAD93D33453C
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x75A082563B4452E5
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x16802C32B2FCA06B
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x8BA0C65AC15A7D33
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x0FFDF937E5C11382
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### _0x5FCF25D584065BFD
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0xA2116C1E4ED85C24
- **Return Type**: void
- **Parameters**: Ped ped, BOOL inverted
- **Description**: _SET_PED_*

### FORCE_PED_MOTION_STATE
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash motionStateHash, BOOL p2, int p3, BOOL p4
- **Description**: motionStateHash: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/FORCE_PED_MOTION_STATE

### _0x75D3333409CD33CE
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### GET_PED_CURRENT_MOVE_BLEND_RATIO
- **Return Type**: BOOL
- **Parameters**: Ped ped, float* speedX, float* speedY
- **Description**: Old name: _GET_PED_CURRENT_MOVEMENT_SPEED

### SET_PED_MAX_MOVE_BLEND_RATIO
- **Return Type**: void
- **Parameters**: Ped ped, float value

### SET_PED_MIN_MOVE_BLEND_RATIO
- **Return Type**: void
- **Parameters**: Ped ped, float value

### _0xBC1DC48270468444
- **Return Type**: void
- **Parameters**: Any p0

### _0x46BF2A810679D6E6
- **Return Type**: float
- **Parameters**: Ped ped, float maxMoveBlendRatio
- **Description**: Returns vehicle (desired) speed _COMPUTE_(VEHICLE_SPEED_USING_BLEND_RATIO?)*

### _0xCA95924C893A0C91
- **Return Type**: float
- **Parameters**: Ped ped, float p1
- **Description**: Returns vehicle speed _COMPUTE_*

### _HORSE_AGITATE
- **Return Type**: void
- **Parameters**: Ped mount, BOOL kickOffRider
- **Description**: _H* - _I*

### _0x413697EC260AABBF
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0xCAC43D060099EA72
- **Return Type**: void
- **Parameters**: Ped ped

### _0xC9151483CC06A414
- **Return Type**: void
- **Parameters**: Ped ped

### _0xAD3330E3C3E98007
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xB8E2D655E1D5BD39
- **Return Type**: Any
- **Parameters**: Any p0

### _0x7BB810E8B343AC7B
- **Return Type**: Any
- **Parameters**: Any p0

### SET_PED_MOVE_RATE_OVERRIDE
- **Return Type**: void
- **Parameters**: Ped ped, float value
- **Description**: Min: 0.0f Max: 1.15f

### GET_PED_NEARBY_VEHICLES
- **Return Type**: int
- **Parameters**: Ped ped, Any* sizeAndVehs

### GET_PED_NEARBY_PEDS
- **Return Type**: int
- **Parameters**: Ped ped, Any* sizeAndPeds, int ignoredPedType, int p3

### IS_PED_READY_TO_RENDER
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0x6A489892E813951A
- **Return Type**: void
- **Parameters**: Any p0

### IS_PED_USING_ACTION_MODE
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _IS_PED_USING_ACTION_MODE_2
- **Return Type**: BOOL
- **Parameters**: Ped ped

### SET_PED_USING_ACTION_MODE
- **Return Type**: void
- **Parameters**: Ped ped, BOOL bActionModeEnabled, int p2, const char* action

### SET_PED_CAPSULE
- **Return Type**: void
- **Parameters**: Ped ped, float value
- **Description**: Overrides the ped's collision capsule radius for the current tick. Must be called every tick to be effective.  Setting this to 0.001 will allow warping through some objects.

### _GET_RIDER_OF_MOUNT
- **Return Type**: Ped
- **Parameters**: Ped mount, BOOL p1

### SPAWNPOINTS_START_SEARCH
- **Return Type**: void
- **Parameters**: float x, float y, float z, float width, float p4, int spawnpointsFlag, float p6, int duration, float p8
- **Description**: Params: p4 = 35.f, duration = 5000 in R* Scripts

### SPAWNPOINTS_START_SEARCH
- **Return Type**: void
- **Parameters**: Vector3 vec, float width, float p4, int spawnpointsFlag, float p6, int duration, float p8

### SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA
- **Return Type**: void
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2, float width, int spawnpointsFlag, float p8, int duration, float p10
- **Description**: Searching area between coords 1 and 2

### SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA
- **Return Type**: void
- **Parameters**: Vector3 vec1, Vector3 vec2, float width, int spawnpointsFlag, float p8, int duration, float p10

### _SPAWNPOINTS_START_SEARCH_WITH_VOLUME
- **Return Type**: void
- **Parameters**: Volume volume, int spawnpointsFlag, float p2, int duration, float p4

### SPAWNPOINTS_CANCEL_SEARCH
- **Return Type**: void
- **Parameters**: 

### SPAWNPOINTS_IS_SEARCH_ACTIVE
- **Return Type**: BOOL
- **Parameters**: 

### SPAWNPOINTS_IS_SEARCH_COMPLETE
- **Return Type**: BOOL
- **Parameters**: 

### SPAWNPOINTS_IS_SEARCH_FAILED
- **Return Type**: BOOL
- **Parameters**: 

### SPAWNPOINTS_GET_NUM_SEARCH_RESULTS
- **Return Type**: int
- **Parameters**: 

### SPAWNPOINTS_GET_SEARCH_RESULT
- **Return Type**: void
- **Parameters**: int randomInt, float* x, Any* y, float* z

### SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS
- **Return Type**: void
- **Parameters**: Any p0, Any* p1

### SET_IK_TARGET
- **Return Type**: void
- **Parameters**: Ped ped, int ikIndex, Entity entityLookAt, int boneLookAt, float offsetX, float offsetY, float offsetZ, Any p7, int blendInDuration, int blendOutDuration

### SET_IK_TARGET
- **Return Type**: void
- **Parameters**: Ped ped, int ikIndex, Entity entityLookAt, int boneLookAt, Vector3 offset, Any p7, int blendInDuration, int blendOutDuration

### _REQUEST_PED_EMOTIONAL_PRESET
- **Return Type**: void
- **Parameters**: Ped ped, const char* name
- **Description**: For more information, see common:/data/emotional_presets.meta

### _HAS_PED_EMOTIONAL_PRESET_LOADED
- **Return Type**: BOOL
- **Parameters**: Ped ped, const char* name
- **Description**: See _REQUEST_PED_EMOTIONAL_PRESET

### _REMOVE_PED_EMOTIONAL_PRESET
- **Return Type**: void
- **Parameters**: Ped ped, const char* name
- **Description**: See _REQUEST_PED_EMOTIONAL_PRESET

### _REQUEST_MOTION_TYPE_ASSET
- **Return Type**: void
- **Parameters**: Hash nameHash, Ped ped

### HAS_MOTION_TYPE_ASSET_LOADED
- **Return Type**: BOOL
- **Parameters**: Hash nameHash, Ped ped

### _REMOVE_MOTION_TYPE_ASSET
- **Return Type**: void
- **Parameters**: Hash nameHash, Ped ped

### _0x290B2E6CCDE532E1
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _IS_PED_L* - _IS_PED_M*

### _0x0EEF7A81C17679DB
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _IS_PED_L* - _IS_PED_M*

### SET_PED_LOD_MULTIPLIER
- **Return Type**: void
- **Parameters**: Ped ped, float multiplier

### _GET_PED_LOD_MULTIPLIER
- **Return Type**: float
- **Parameters**: Ped ped

### _0xA218D2BBCAA7388C
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### IS_ANY_HOSTILE_PED_NEAR_POINT
- **Return Type**: BOOL
- **Parameters**: Ped ped, float x, float y, float z, float radius

### IS_ANY_HOSTILE_PED_NEAR_POINT
- **Return Type**: BOOL
- **Parameters**: Ped ped, Vector3 vec, float radius

### _0xCBDE59C48F2B06F5
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x6A190B94C2541A99
- **Return Type**: void
- **Parameters**: Any p0

### IS_TARGET_PED_IN_PERCEPTION_AREA
- **Return Type**: BOOL
- **Parameters**: Ped ped, Ped targetPed, float p2, float customDistance, float p4, float p5
- **Description**: Returns true if ped is in perception (focused and looking at target ped) Most float params are -1.f in R* Scripts

### SET_POP_CONTROL_SPHERE_THIS_FRAME
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### IS_PED_HOGTIED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_BEING_HOGTIED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0x3D9F958834AB9C30
- **Return Type**: Ped
- **Parameters**: Ped ped

### _0x913D04A5176F84C9
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _IS_PED_S* - _IS_PED_U*

### IS_PED_HOGTYING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _GET_PED_LASSO_HOGTIE_FLAG
- **Return Type**: BOOL
- **Parameters**: Ped ped, int flagId
- **Description**: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/Lasso%20Hogtie%20Flags https://github.com/femga/rdr3_discoveries/tree/master/AI/LASSO_HOGTIE_FLAG

### SET_PED_LASSO_HOGTIE_FLAG
- **Return Type**: void
- **Parameters**: Ped ped, int flagId, BOOL value

### _0x4642182A298187D0
- **Return Type**: int
- **Parameters**: Ped ped, int p1, Any* p2, int p3, int p4

### _0x6B67320E0D57856A
- **Return Type**: void
- **Parameters**: Ped ped, Any* p1, int p2, BOOL p3

### _GET_FIRST_ENTITY_PED_IS_CARRYING
- **Return Type**: Entity
- **Parameters**: Ped ped

### _0xAA6C49AE90A32299
- **Return Type**: void
- **Parameters**: Ped ped, Hash p1

### _GET_CARRIER_AS_PED
- **Return Type**: Ped
- **Parameters**: Entity entity

### _GET_CARRIER_AS_MOUNT
- **Return Type**: Ped
- **Parameters**: Entity entity

### _GET_CARRIER_AS_HUMAN
- **Return Type**: Ped
- **Parameters**: Entity entity

### GET_CARRIED_ATTACHED_INFO_FOR_SLOT
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### DETACH_CARRIABLE_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity, BOOL p1, BOOL p2

### FIND_ALL_ATTACHED_CARRIABLE_ENTITIES
- **Return Type**: void
- **Parameters**: Ped ped, ItemSet itemset

### IS_PED_CARRYING_SOMETHING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0xB65927F861E7AE39
- **Return Type**: BOOL
- **Parameters**: Ped ped, int p1

### _0xA1FBAC56D38563E2
- **Return Type**: BOOL
- **Parameters**: Volume volume

### _0x6F43C351A5D51E2F
- **Return Type**: Any
- **Parameters**: Ped ped, Any* p1

### IS_PED_LASSOED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _GET_LASSOER_OF_PED
- **Return Type**: Entity
- **Parameters**: Ped ped
- **Description**: _IS_PED_S* - _IS_PED_U*

### _GET_LASSO_TARGET
- **Return Type**: Entity
- **Parameters**: Ped ped

### _GET_LASSOED_LASSOER
- **Return Type**: Ped
- **Parameters**: Ped ped

### SET_LOOTING_FLAG
- **Return Type**: void
- **Parameters**: Ped ped, int lootFlag, BOOL enabled
- **Description**: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/CLootingFlags__Flags https://github.com/femga/rdr3_discoveries/tree/master/AI/LOOTING_FLAGS  lootFlag: enum eLootFlag { LOOT_FLAG_IS_CRITICAL_LOOT_TARGET = 7, LOOT_FLAG_IGNORE_WATER_CHECKS = 8, LOOT_FLAG_ANIMAL_FLAGGED_FOR_TAGGING = 23, };

### _GET_LOOTING_FLAG
- **Return Type**: BOOL
- **Parameters**: Ped ped, int lootFlag
- **Description**: lootFlag: see SET_LOOTING_FLAG

### _REFRESH_LOOT_STATE_FOR_PED
- **Return Type**: int
- **Parameters**: Ped ped, int p1, Ped* lootTarget, int p3, int p4
- **Description**: Returns loot state enum eLootState { LAP_NONE, LAP_RESUMING, LAP_GETTING_ON_FOOT, LAP_DISTANT_NAV, LAP_CHOOSING_ACTION, LAP_APPROACHING, LAP_ENTERING, LAP_LOOTING, LAP_EXITING };  _POSSE_* - _REGISTER_HATED*

### GET_PED_LOOT_STATUS_MP
- **Return Type**: int
- **Parameters**: Ped ped
- **Description**: enum ePedLootStatus { PLS_NONE, PLS_PRE_LOOT, PLS_SAMPLING, PLS_SKINNING };

### _0x4B19F171450E0D4F
- **Return Type**: Ped
- **Parameters**: Ped ped

### _0x758F081DB204DDDE
- **Return Type**: BOOL
- **Parameters**: Ped ped

### GET_LOOTING_PICKUP_TARGET_ENTITY
- **Return Type**: Entity
- **Parameters**: Ped ped

### _0x7B5C293238EE4F20
- **Return Type**: Any
- **Parameters**: Any p0

### _0xAE6B68A83ABBE7C0
- **Return Type**: void
- **Parameters**: Any p0

### _0xA4B6432E3880F2F9
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _ADD_PED_SUBSCRIBE_TO_LEGENDARY_BLIPS
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _REMOVE_PED_SUBSCRIBE_TO_LEGENDARY_BLIPS
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_INCAPACITATED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _SET_PED_INCAPACITATION_MODIFIERS
- **Return Type**: void
- **Parameters**: Ped ped, BOOL canBeIncapacitated, int threshold, int bleedoutTime, int p4

### _GET_PED_CAN_BE_INCAPACITATED_THIS_FRAME
- **Return Type**: BOOL
- **Parameters**: Ped ped

### SET_PED_CAN_BE_INCAPACITATED
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle
- **Description**: When set on a player ped, its just like when you die in RDO

### _GET_PED_INCAPACITATION_HEALTH
- **Return Type**: int
- **Parameters**: Ped ped

### _SET_PED_INCAPACITATION_TOTAL_BLEED_OUT_DURATION
- **Return Type**: void
- **Parameters**: Ped ped, float duration

### _RESET_PED_INCAPACITATION_BLEED_OUT_DURATION
- **Return Type**: void
- **Parameters**: Ped ped

### _SET_PED_INCAPACITATION_FLAGS
- **Return Type**: void
- **Parameters**: Ped ped, int flags

### _0x92A1B55A59720395
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _INCAPACITATED_REVIVE
- **Return Type**: void
- **Parameters**: Ped ped, Ped ped2

### _GET_INCAPACITATION_TIME_REMAINING
- **Return Type**: int
- **Parameters**: Ped ped

### _SET_PED_KNOCKED_BY_ONE_HIT
- **Return Type**: void
- **Parameters**: Ped ped, float p1

### _0x2E5B5D1F1453E08E
- **Return Type**: void
- **Parameters**: Ped ped, int p1

### _0x29924EB8EE9DB926
- **Return Type**: void
- **Parameters**: Ped ped, float p1
- **Description**: _SET_PED_K* or _SET_PED_L*

### _SET_PED_ACTIVE_PLAYER_TYPE
- **Return Type**: void
- **Parameters**: Ped ped, Hash playerType
- **Description**: Params: hash - ARTHUR or JOHN _SET_PED_(A-D)*

### _0xCB86D3E3E3708901
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0x633F83B301C87994
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x5203038FF8BAE577
- **Return Type**: BOOL
- **Parameters**: Ped ped, int p1, int p2

### _0x7F090958AE95B61B
- **Return Type**: BOOL
- **Parameters**: Ped ped, int p1

### _0xC494C76A34266E82
- **Return Type**: void
- **Parameters**: Ped ped, int p1
- **Description**: [WARDROBE] Player took off their disguise: p1 = 13 [WARDROBE] Player put on a disguise: p1 = 0

### _0xC3995D396F1D97B6
- **Return Type**: BOOL
- **Parameters**: Ped ped, int p1, int p2
- **Description**: _GET_PED_G* - _GET_PED_I*

### _0x15F4732C357B1D6D
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x947E43F544B6AB34
- **Return Type**: BOOL
- **Parameters**: Ped ped, Player player, int flag, int ms
- **Description**: flags: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/0x947E43F544B6AB34 _GET_PED_G* - _GET_PED_I(NTERACTION?)*

### _0x32417CB860A3BDC4
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xE737D5F14304A2EC
- **Return Type**: void
- **Parameters**: Ped ped, Player player, int p2
- **Description**: Only used in R* Script nb_animal_attack: p2 = 120000 _SET_PED_SH* - _SET_PED_SP*

### _0xEBD49472BCCF7642
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_PLAYER_GREET_DISABLED_FOR_PED
- **Return Type**: void
- **Parameters**: Ped ped, Player player, int duration

### _SET_PLAYER_ANTAGONIZE_DISABLED_FOR_PED
- **Return Type**: void
- **Parameters**: Ped ped, Player player, int duration

### _0xB9BDFAE609DFB7C5
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0xF7327ACC7A89AEF1
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _GET_PED_ATTITUDE
- **Return Type**: int
- **Parameters**: Ped ped, Player player
- **Description**: AI_ATTITUDE_NEUTRAL = 0, AI_ATTITUDE_FRIENDLY, AI_ATTITUDE_WARY, AI_ATTITUDE_COMBATIVE, AI_ATTITUDE_NEVER_MET

### _0x1E017404784AA6A3
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash p1

### _0x2B4CE170DE09F346
- **Return Type**: void
- **Parameters**: Ped ped, Hash p1

### _0x7C8AA850617651D9
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _GET_PED_MOTIVATION
- **Return Type**: float
- **Parameters**: Ped ped, int motivationState, Ped targetPed
- **Description**: If targetPed is set to 0 the ped motivationState affects everyone

### _SET_PED_MOTIVATION
- **Return Type**: void
- **Parameters**: Ped ped, int motivationState, float threshold, Ped targetPed
- **Description**: enum eMotivationState { TOILET_STATE, FEAR_STATE, ANGRY_STATE, AGITATION_STATE, HUNGRY_STATE, TIRED_STATE, SAD_STATE, BRAVE_STATE, OFFER_ITEM_STATE, SUSPICION, DRUNK_STATE };  If targetPed is set to 0 the ped motivationState affects everyone

### _0x23BDE06596A22CEC
- **Return Type**: void
- **Parameters**: Ped ped, int p1, float p2, Any p3

### _0xCDFB8C04D4C95D9B
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _GET_IS_PED_MOTIVATION_STATE_ENABLED
- **Return Type**: BOOL
- **Parameters**: Ped ped, int motivationState
- **Description**: motivationState: see _SET_PED_MOTIVATION

### _SET_PED_MOTIVATION_STATE_OVERRIDE
- **Return Type**: void
- **Parameters**: Ped ped, int motivationState, BOOL enabled
- **Description**: motivationState: see _SET_PED_MOTIVATION

### _SET_PED_MOTIVATION_MODIFIER
- **Return Type**: void
- **Parameters**: Ped ped, int motivationState, float modifier
- **Description**: The higher the modifier, the slower the motivationState value will decrease

### _0xFD8E853F0BC2E942
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_PED_SCENT
- **Return Type**: void
- **Parameters**: Ped ped, float scent
- **Description**: 0.0 - 1.0 Modifies the "scent line" on the ped's body when using Eagle Eye.

### _SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER
- **Return Type**: void
- **Parameters**: Ped ped, float p1

### _RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER
- **Return Type**: void
- **Parameters**: Ped ped

### _0xC6C4E15CF7D52FEA
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_PED_VOICE_VOLUME
- **Return Type**: void
- **Parameters**: Ped ped, float volume
- **Description**: _SET_PED_S* - _SET_PED_T*

### _0x0F967019CC853BCC
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _IS_PED_DRAGGING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_BEING_DRAGGED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0x070A3841406C43D5
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _ADD_PED_STAY_OUT_VOLUME
- **Return Type**: BOOL
- **Parameters**: Ped ped, Volume volume

### _REMOVE_PED_STAY_OUT_VOLUME
- **Return Type**: BOOL
- **Parameters**: Ped ped, Volume volume

### _0x9E66708B2B41F14A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xF634E2892220EF34
- **Return Type**: void
- **Parameters**: Ped ped, Any p1

### _0xAAC0EE3B4999ABB5
- **Return Type**: void
- **Parameters**: Ped ped, Ped targetPed

### GET_PED_MOTION_FOCUS_ENTITY
- **Return Type**: Entity
- **Parameters**: Ped ped

### _SET_CHAR_EXPRESSION
- **Return Type**: void
- **Parameters**: Ped ped, int index, float value
- **Description**: Sets MetaPedExpression at index specified. Morphs components, such as changing body size or facial features.  Note: You have to update the ped's variation (using 0xCC8CA3E88256E58F) after calling this native  index = MetaPedExpression IDs List of face features: https://pastebin.com/9jb88FXW Full list of MetaPedExpressions: https://pastebin.com/Ld76cAn7 value: -1.0 to 1.0 (values beyond this likely won't sync to other clients)  This native also allows you to change a horse's gender.  Old name: _SET_PED_FACE_FEATURE

### _GET_CHAR_EXPRESSION
- **Return Type**: float
- **Parameters**: Ped ped, int index
- **Description**: Gets MetaPedExpression at index specified  For index, see: _SET_CHAR_EXPRESSION  Old name: _GET_PED_FACE_FEATURE

### _0x5BB04BC74A474B47
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x9078FB0557364099
- **Return Type**: void
- **Parameters**: Any p0

### IS_PED_FALLING_OVER
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _HAS_PED_BEEN_SHOVED_RECENTLY
- **Return Type**: BOOL
- **Parameters**: Ped ped, int ms

### _GET_PED_TRANQUILIZER
- **Return Type**: Ped
- **Parameters**: Ped ped

### _0x0D497AA69059FE40
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xD7D2F45C56A4F4DF
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _SET_PED_CULL_RANGE
- **Return Type**: void
- **Parameters**: Ped ped, float p1, float p2
- **Description**: The higher the multiplier the less the engine renders culls (https://docs.unity3d.com/Manual/OcclusionCulling.html)

### _0x1D23D3F70606D788
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _GET_META_PED_TYPE
- **Return Type**: int
- **Parameters**: Ped ped
- **Description**: enum eMetaPedType { MPT_MALE, MPT_FEMALE, MPT_TEEN, MPT_ANIMAL, MPT_NONE };

### _IS_META_PED_USING_COMPONENT
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash component

### _0xBD0E4F52F6D95242
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _IS_PED_M* - _IS_PED_O*

### _IS_PED_CHILD
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0xFFA1594703ED27CA
- **Return Type**: void
- **Parameters**: Ped ped, int p1

### _SET_META_PED_TAG
- **Return Type**: void
- **Parameters**: Ped ped, Hash drawable, Hash albedo, Hash normal, Hash material, Hash palette, int tint0, int tint1, int tint2
- **Description**: Use to apply metaped player components Replaces asset, alternatively you can remove assets using REMOVE_TAG_FROM_META_PED

### REMOVE_TAG_FROM_META_PED
- **Return Type**: void
- **Parameters**: Ped ped, Hash component, int p2

### _0xA2B8E47442C76CEC
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _GET_NUM_COMPONENT_CATEGORIES_IN_PED
- **Return Type**: int
- **Parameters**: Ped ped
- **Description**: Works similar to 0x90403E8107B60E81 (_GET_NUM_COMPONENTS_IN_PED) but is used to get category hashes instead

### _GET_PED_COMPONENT_CATEGORY_BY_INDEX
- **Return Type**: Hash
- **Parameters**: Ped ped, int index
- **Description**: Returns category hash that each ped component has. Hash examples: MASKS, HATS, HEADS, HORSE_MANES

### _GET_NUM_COMPONENTS_IN_PED
- **Return Type**: int
- **Parameters**: Ped ped

### _0x9B90842304C938A7
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _UPDATE_PED_VARIATION
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4, BOOL p5
- **Description**: Update variation on ped, needed after first creation, or when component or texture/overlay is changed

### _0xCB1A3864C524F784
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xFA0D206B489A6846
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0xA4AC05B1A364EBC5
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0x1298B3D8E4C2409F
- **Return Type**: void
- **Parameters**: Any p0

### _0xA274F51EF7E34B95
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xC2EF407645BEECDC
- **Return Type**: Any
- **Parameters**: Any p0

### _EQUIP_META_PED_OUTFIT
- **Return Type**: void
- **Parameters**: Ped ped, Hash hash
- **Description**: Note: you have to update your ped's variation after calling (using 0xCC8CA3E88256E58F)  Body Types: MPCREATOR_NEUTRAL MPCREATOR_SKINNY MPCREATOR_SKINNY_MUSCULAR MPCREATOR_HEAVY MPCREATOR_HEAVY_MUSCULAR  eBodyWeightOutfit (pedattributes.ymt): -2045421226 (smallest) -1745814259 -325933489 -1065791927 -844699484 -1273449080 927185840 149872391 399015098 -644349862 1745919061 (default) 1004225511 1278600348 502499352 -2093198664 -1837436619 1736416063 2040610690 -1173634986 -867801909 1960266524 (biggest)  https://github.com/femga/rdr3_discoveries/blob/master/peds_customization/ped_outfits.lua  Alt name: _EQUIP_META_PED_OUTFIT_COMPONENT

### _0xFA742B82D093D848
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _GET_PED_META_OUTFIT_HASH
- **Return Type**: Hash
- **Parameters**: Ped ped

### _0xA2F8B3B5FEDFC100
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _EQUIP_META_PED_SUBOUTFIT
- **Return Type**: void
- **Parameters**: Ped ped, Hash suboutfit, int p2

### _DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL
- **Return Type**: BOOL
- **Parameters**: Hash outfit, Hash model

### _DOES_META_PED_SUBOUTFIT_EXIST_FOR_PED_MODEL
- **Return Type**: BOOL
- **Parameters**: Hash outfit, Hash suboutfit, Hash model

### _0x62FDF4E678E40CC6
- **Return Type**: Any
- **Parameters**: Entity entity, Any p1
- **Description**: Returns p1 value for 0x8E84119A23C16623

### _RESET_PED_COMPONENTS
- **Return Type**: void
- **Parameters**: Ped ped

### _0x370A973252741AC4
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: _RESET_PED_*

### _SET_RANDOM_OUTFIT_VARIATION
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1

### GET_NUM_META_PED_OUTFITS
- **Return Type**: int
- **Parameters**: Ped ped

### _EQUIP_META_PED_OUTFIT_PRESET
- **Return Type**: void
- **Parameters**: Ped ped, int presetId, BOOL p2
- **Description**: Sets the outfit preset for the ped. The presetId is an index which determines its preset outfit. p2 is always false in the scripts. If p2 is true as player, then certain components like facial hair and hair will not be removed. Old name: _SET_PED_OUTFIT_PRESET

### _EQUIP_META_PED_OUTFIT_EXTRA
- **Return Type**: void
- **Parameters**: Ped ped, int component, Any p2, Any p3
- **Description**: Changes Multiplayer ped face and body type components, they can be stacked Params: p3 = 1 Body shape for mp_male from 124 - 128, 110 - 115 for mp_female Face shape for mp_male from 110 - 123, 96 - 109 for mp_female Cloth type for mp_male from 0 - 109, 0 - 95 for mp_female

### _IS_META_PED_OUTFIT_EQUIPPED
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash outfit
- **Description**: Used in script function HORSE_IS_META_PED_OUTFIT_SADDLE_EQUIPPED

### _0x851966E1E35AF491
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_TEXTURE_OUTFIT_TINTS
- **Return Type**: void
- **Parameters**: Ped ped, Hash componentCategory, Hash palette, int tint0, int tint1, int tint2
- **Description**: Used in script function METAPED_CLOTHING__XML__APPLY_OUTFIT_TINTS_TO_PED

### _REQUEST_META_PED
- **Return Type**: int
- **Parameters**: Hash model, int p1
- **Description**: Returns requestId Params: p1 = 1 in R* Scripts (Used in SP only)

### _HAS_META_PED_REQUEST_LOADED
- **Return Type**: BOOL
- **Parameters**: int requestId

### _IS_META_PED_REQUEST_VALID
- **Return Type**: BOOL
- **Parameters**: int requestId

### _CREATE_META_PED
- **Return Type**: Ped
- **Parameters**: int requestId, float x, float y, float z, float heading, BOOL p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9
- **Description**: Only used in SP scripts, for example odriscolls1: BOOLS: true, true, true, false, false

### _CREATE_META_PED
- **Return Type**: Ped
- **Parameters**: int requestId, Vector3 vec, float heading, BOOL p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9

### _RELEASE_META_PED_REQUEST
- **Return Type**: void
- **Parameters**: int requestId

### _REQUEST_META_PED_OUTFIT
- **Return Type**: int
- **Parameters**: Hash model, Hash outfit
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/clothes/metaped_outfits.lua Returns requestId, to be used with 0x74F512E29CB717E2

### _0x27E8A84C12B0B7D1
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0x273915CE30780986
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _RELEASE_META_PED_OUTFIT_REQUEST
- **Return Type**: void
- **Parameters**: int requestId

### _0x3FCBB5FCFD968698
- **Return Type**: int
- **Parameters**: Hash drawable, Hash albedo, Hash normal, Hash material, Any p4
- **Description**: Used for script function PROCESS_PLAYER_HAT_EVENT Returns requestId to be used with 0x13E7320C762F0477

### _REQUEST_META_PED_ASSET_BUNDLE
- **Return Type**: int
- **Parameters**: Hash asset, int p1
- **Description**: Returns requestId Params: p1 = 1 in R* Scripts

### _REQUEST_META_PED_COMPONENT
- **Return Type**: Any
- **Parameters**: int metaPedType, Any p1, int p2, int p3, int p4

### _RELEASE_META_PED_ASSET_REQUEST
- **Return Type**: void
- **Parameters**: int requestId

### _HAS_META_PED_ASSET_LOADED
- **Return Type**: BOOL
- **Parameters**: int requestId

### _IS_META_PED_ASSET_VALID
- **Return Type**: BOOL
- **Parameters**: int requestId

### _CREATE_META_PED_ASSET
- **Return Type**: Entity
- **Parameters**: Hash asset, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, BOOL p7, BOOL p8, BOOL p9
- **Description**: Creates prop from metaped asset bundle https://github.com/femga/rdr3_discoveries/blob/master/objects/metaped_asset_bundles_list.lua Creates a pickup-able metaped component. asset doesn't seems to be related to component hashes. Hash example : 0xD20354AB (https ://i.imgur.com/dzHkcDb.png)

### _CREATE_META_PED_ASSET
- **Return Type**: Entity
- **Parameters**: Hash asset, Vector3 pos, Vector3 rot, BOOL p7, BOOL p8, BOOL p9

### _HAS_META_PED_OUTFIT_LOADED
- **Return Type**: BOOL
- **Parameters**: int requestId

### _IS_META_PED_OUTFIT_REQUEST_VALID
- **Return Type**: BOOL
- **Parameters**: int requestId

### _CREATE_META_PED_OUTFIT_PED
- **Return Type**: Ped
- **Parameters**: int requestId, float x, float y, float z, float heading, BOOL p5, BOOL p6, BOOL p7, BOOL p8
- **Description**: Creates metaped from ped outfit requestId. See _REQUEST_METAPED_OUTFIT

### _CREATE_META_PED_OUTFIT_PED
- **Return Type**: Ped
- **Parameters**: int requestId, Vector3 vec, float heading, BOOL p5, BOOL p6, BOOL p7, BOOL p8

### _APPLY_PED_META_PED_OUTFIT
- **Return Type**: BOOL
- **Parameters**: int requestId, Ped ped, BOOL p2, BOOL p3
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/clothes/metaped_outfits.lua

### _SET_META_PED_WEARINESS
- **Return Type**: void
- **Parameters**: Ped ped, float weariness
- **Description**: Sets ped eye redness, weariness: 0.f to 1.f

### _0xF47D54B986F0A346
- **Return Type**: void
- **Parameters**: Ped ped, int danceIntensity
- **Description**: Used in Script Function MOONSHINE_BAND_CLIENT_PATRON_UPDATE

### _0x3EFED081B4834BA1
- **Return Type**: void
- **Parameters**: Any p0

### _0x0FB1BA7FF73B41E1
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0xB292203008EBBAAC
- **Return Type**: Any
- **Parameters**: Any p0

### _0xD4D403EA031F351C
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _GET_PELT_FROM_HORSE
- **Return Type**: int
- **Parameters**: Ped horse, int index
- **Description**: Returns peltId

### _SET_PELT_FOR_HORSE
- **Return Type**: void
- **Parameters**: Ped horse, int peltId

### _0xC412AA1C73111FE0
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _CLEAR_PELT_FROM_HORSE
- **Return Type**: void
- **Parameters**: Ped horse, int peltId

### _SET_PED_LIGHTS
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _0xD049FDAF089FDDB0
- **Return Type**: void
- **Parameters**: Ped ped, Hash p1, float p2

### _0xDD9540E7B1C9714F
- **Return Type**: void
- **Parameters**: Ped ped, Hash p1, float r, float g, float b

### _0x55546004A244302A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_HEALTH_RECHARGE_MULTIPLIER
- **Return Type**: void
- **Parameters**: Ped ped, int multiplier

### _GET_HEALTH_RECHARGE_MULTIPLIER
- **Return Type**: float
- **Parameters**: Ped ped

### _SET_STAMINA_DEPLETION_MULTIPLIER
- **Return Type**: void
- **Parameters**: Ped ped, int multiplier

### _GET_STAMINA_DEPLETION_MULTIPLIER
- **Return Type**: float
- **Parameters**: Ped ped

### _SET_STAMINA_RECHARGE_MULTIPLIER
- **Return Type**: void
- **Parameters**: Ped ped, int multiplier

### _GET_STAMINA_RECHARGE_MULTIPLIER
- **Return Type**: float
- **Parameters**: Ped ped

### _CHANGE_PED_STAMINA
- **Return Type**: BOOL
- **Parameters**: Ped ped, float amount
- **Description**: Alters entity's stamina by 'amount'. Can be negative (to drain stamina). float amount: -1000.0 - 1000.0

### _GET_PED_STAMINA
- **Return Type**: float
- **Parameters**: Ped ped

### _GET_PED_STAMINA_NORMALIZED
- **Return Type**: float
- **Parameters**: Ped ped
- **Description**: Returns stamina normalizedValue / normalizedUnlockedMax

### _GET_PED_MAX_STAMINA
- **Return Type**: float
- **Parameters**: Ped ped

### _0x36513AFFC703C60D
- **Return Type**: void
- **Parameters**: Any p0
- **Description**: _RESET_PED_*

### _RESTORE_PED_STAMINA
- **Return Type**: void
- **Parameters**: Ped ped, float stamina
- **Description**: 0.0 <= stamina <= 100.0

### _0xFC3B580C4380B5B7
- **Return Type**: int
- **Parameters**: Ped ped

### _0xEA8763E505AFD49A
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0xE4EF4382E22C780C
- **Return Type**: void
- **Parameters**: Any p0

### _0xD61FCF9FCFD515B7
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x8D9DB115FBA8E23D
- **Return Type**: void
- **Parameters**: Any p0

### _GET_NUM_RESERVED_HEALTH
- **Return Type**: Any
- **Parameters**: Ped ped

### _0xD97BC27AC039F681
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0xF6A8C4B4A11AE89C
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### _0xE4C95E0AE31C6512
- **Return Type**: void
- **Parameters**: Ped ped, Any p1

### _GET_PED_LAST_DROPPED_HAT
- **Return Type**: Object
- **Parameters**: Ped ped

### _0x5D4CD22A8C82A81A
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1
- **Description**: Related to ped hat _SET_PED_LA* - _SET_PED_LE*

### _0xBF567DF2BEF211A6
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _CREATE_GRAVITY_WELL
- **Return Type**: int
- **Parameters**: float xPos, float yPos, float zPos, float heading, float radius, float p5, float p6, float p7, BOOL stopAtDestination
- **Description**: Creates a handle to an instance of "CScriptResource_GravityWell", this system forces local ped to target specified position when moving, however player still can interrupt this. Can be useful to "point" player at some specific position. Only works while on-foot.  _CREATE_[P-Z]

### _CREATE_GRAVITY_WELL
- **Return Type**: int
- **Parameters**: Vector3 pos, float heading, float radius, float p5, float p6, float p7, BOOL stopAtDestination

### _REMOVE_GRAVITY_WELL
- **Return Type**: void
- **Parameters**: int handle
- **Description**: Removes gravity well by handle returned from 0x4F5EBE70081E5A20

### _IS_PED_INTIMIDATED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0x7EE3A8660F38797E
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _IS_PED_H* - _IS_PED_I*

### _0xA180FBD502A03125
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _REQUEST_TEXTURE
- **Return Type**: int
- **Parameters**: Hash albedoHash, Hash normalHash, Hash materialHash
- **Description**: Creates a texture override data for ped and returns it's index. So you can replace any texture of any ped's component. Also, you can add overlays on it, such as aging, lipstick and more. Textures can be reused by multiple peds at once. You can keep only 32 textures at once(including other peds).  https://github.com/femga/rdr3_discoveries/blob/master/clothes/change_overlays_script.lua materialHash: https://github.com/femga/rdr3_discoveries/blob/master/clothes/cloth_drawable_albedo_normal_material_TEMPORARY.lua

### _APPLY_TEXTURE_ON_PED
- **Return Type**: void
- **Parameters**: Ped ped, Hash componentHash, int textureId

### _RELEASE_TEXTURE
- **Return Type**: void
- **Parameters**: int textureId
- **Description**: Removes a texture created by 0xC5E7204F322E49EB.

### _UPDATE_PED_TEXTURE
- **Return Type**: void
- **Parameters**: int textureId
- **Description**: Should be called at least once for any new texture override. Otherwise component textures will be just black. Also needs to be called for updating any ped overlays to apply the changes.

### _RESET_PED_TEXTURE
- **Return Type**: void
- **Parameters**: int textureId
- **Description**: Removes every texture layer but the base layer Clearing texture's data: setting params to default values, but keep overlays.

### _IS_TEXTURE_VALID
- **Return Type**: BOOL
- **Parameters**: int textureId

### _ADD_TEXTURE_LAYER
- **Return Type**: int
- **Parameters**: int textureId, Hash albedoHash, Hash normalHash, Hash materialHash, int blendType, float texAlpha, int sheetGridIndex
- **Description**: Creates ped overlay in texture override data and returns it's index. This index are used for further overlay editing.  albedoHash: a hash of overlay's albedo texture colorType: a color type(from 0 to 2). 0 is used for overlays with RGB colors usually.

### _REMOVE_PED_OVERLAY
- **Return Type**: void
- **Parameters**: int textureId, int overlayId

### _SET_TEXTURE_LAYER_SHEET_GRID_INDEX
- **Return Type**: void
- **Parameters**: int textureId, int layerId, int sheetGridIndex

### _SET_TEXTURE_LAYER_ALPHA
- **Return Type**: void
- **Parameters**: int textureId, int layerId, float texAlpha

### _SET_TEXTURE_LAYER_ROUGHNESS
- **Return Type**: void
- **Parameters**: int textureId, int layerId, float texRough

### _SET_TEXTURE_LAYER_PALLETE
- **Return Type**: void
- **Parameters**: int textureId, int layerId, Hash paletteHash
- **Description**: paletteHash: https://raw.githubusercontent.com/femga/rdr3_discoveries/master/clothes/cloth_color_palletes.lua

### _SET_TEXTURE_LAYER_TINT
- **Return Type**: void
- **Parameters**: int textureId, int layerId, int tint0, int tint1, int tint2
- **Description**: Seem color is not RGB or HSV

### _SET_TEXTURE_LAYER_MOD
- **Return Type**: void
- **Parameters**: int textureId, int layerId, Hash modTextureHash, float modAlpha, int modChannel

### _SET_TEXTURE_LAYER_TEXTURE_MAP
- **Return Type**: void
- **Parameters**: int textureId, int layerId, Hash albedoHash, Hash normalHash, Hash materialHash

### _CLEAR_PED_TEXTURE
- **Return Type**: void
- **Parameters**: int textureId
- **Description**: Removes every texture layer Old Name: _RESET_PED_TEXTURE_2

### _0xC991EF46FE323867
- **Return Type**: void
- **Parameters**: Ped ped, Any p1
- **Description**: Not implemented.

### _0x1F8215D0E446F593
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### IS_LOCATION_SPAWN_SAFE
- **Return Type**: BOOL
- **Parameters**: Ped ped, float p1

### _0x53BA7D96B9A421D9
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x96C7B659854DE629
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_HORSE_AVOIDANCE_LEVEL
- **Return Type**: void
- **Parameters**: Ped horse, int avoidanceLevel
- **Description**: -1 - HORSE_ASSIST__NO_CHANGE 0 - HORSE_ASSIST__MANUAL 1 - HORSE_ASSIST__SEMIASSIST 2 - HORSE_ASSIST__FULLASSIST

### RESET_HORSE_AVOIDANCE_LEVEL_TO_DEFAULT
- **Return Type**: void
- **Parameters**: Ped horse

### _SET_PED_USE_HORSE_MAP_COLLISION
- **Return Type**: Any
- **Parameters**: Ped ped, BOOL toggle
- **Description**: Doesn't actually return anything.

### _0x5B73975B4F12F7F3
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### GET_META_PED_ASSET_GUIDS
- **Return Type**: BOOL
- **Parameters**: Ped ped, int index, Hash* drawable, Hash* albedo, Hash* normal, Hash* material
- **Description**: This is a way to get what drawables a ped has equipped Example: you are able to tell if the ped has the drawable PLAYER_ZERO_HAT_017 attached Note: this works with non shop components, direct .ydd files.

### GET_META_PED_ASSET_TINT
- **Return Type**: BOOL
- **Parameters**: Ped ped, int index, Hash* pallete, int* tint0, int* tint1, int* tint2

### _SET_PED_BLACKBOARD_INT
- **Return Type**: void
- **Parameters**: Ped ped, const char* variableName, int value, int removeTimer
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/AI/BLACKBOARDS Blackboard natives allow you to apply and check certain data to/for peds. Blackboard bools, floats and strings are subdivided into 6 sections: "all", "animation", "any", "code", "global" and "script" Most changes are only visible for "script" blackboards, some "script" blackboards change ped motions "removeTimer" is self-removal timer, can be "-1" so your data will not be removed by the game (forever); 100 = 1 second

### _SET_PED_BLACKBOARD_BOOL
- **Return Type**: void
- **Parameters**: Ped ped, const char* variableName, BOOL value, int removeTimer

### _SET_PED_BLACKBOARD_FLOAT
- **Return Type**: void
- **Parameters**: Ped ped, const char* variableName, float value, int removeTimer

### _SET_PED_BLACKBOARD_HASH
- **Return Type**: void
- **Parameters**: Ped ped, const char* variableName, const char* value, int removeTimer
- **Description**: p1: BodyPartChained OverloadMostInjuredBodyPart  p2: LeftLeg Legs RightArm

### _REMOVE_PED_BLACKBOARD_INT
- **Return Type**: void
- **Parameters**: Ped ped, const char* variableName

### _REMOVE_PED_BLACKBOARD_BOOL
- **Return Type**: void
- **Parameters**: Ped ped, const char* variableName

### _REMOVE_PED_BLACKBOARD_FLOAT
- **Return Type**: void
- **Parameters**: Ped ped, const char* variableName

### _REMOVE_PED_BLACKBOARD_HASH
- **Return Type**: void
- **Parameters**: Ped ped, const char* variableName

### _GET_PED_BLACKBOARD_BOOL
- **Return Type**: BOOL
- **Parameters**: Ped ped, const char* variableName
- **Description**: Can be used to get a peds foliage active status: variableName = FoliageActive

### _GET_PED_BLACKBOARD_FLOAT
- **Return Type**: float
- **Parameters**: Ped ped, const char* variableName
- **Description**: Can be used to get a peds foliage raw height: variableName = FoliageHeight

### _GET_PED_BLACKBOARD_HASH
- **Return Type**: Hash
- **Parameters**: Ped ped, const char* variableName

### GET_PED_BLACKBOARD_SCRIPT_INT
- **Return Type**: int
- **Parameters**: Ped ped, const char* variableName

### GET_PED_BLACKBOARD_SCRIPT_BOOL
- **Return Type**: BOOL
- **Parameters**: Ped ped, const char* variableName

### GET_PED_BLACKBOARD_SCRIPT_FLOAT
- **Return Type**: float
- **Parameters**: Ped ped, const char* variableName

### _SET_TANK_ATTRIBUTE_SIZE
- **Return Type**: void
- **Parameters**: Ped ped, int attributeIndex, float size
- **Description**: Size will be permanent

### _0xA31D350D66FA1855
- **Return Type**: Any
- **Parameters**: Any p0

### _IS_USING_SLIPSTREAM
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _IS_TRACKED_* - IS_V*

### _0xEEDC9B29314B2733
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9

### _0x5C90E20C25E6D83C
- **Return Type**: void
- **Parameters**: Any p0

### _0x10F96086123B939F
- **Return Type**: void
- **Parameters**: Ped legendaryPed, Ped preyPed, float p2
- **Description**: NB_CUSTOM_CLIENT_ON_CREATE_COMPLETE - set legendary to not avoid prey

### _0x3FDBB99EFD8CE4AF
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x7E8F9949B7AABBF0
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x5DA36CCCB63C0895
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0x56076667E7C2DCD6
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _APPLY_SHOP_ITEM_TO_PED
- **Return Type**: void
- **Parameters**: Ped ped, Hash componentHash, BOOL immediately, BOOL isMp, BOOL p4

### _REMOVE_SHOP_ITEM_FROM_PED
- **Return Type**: void
- **Parameters**: Ped ped, Hash componentHash, int p2, BOOL p3
- **Description**: Directly removes a shop item component from a ped Params: p2 and p3 are always 0

### REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY
- **Return Type**: void
- **Parameters**: Ped ped, Hash componentCategory, int p2, BOOL p3
- **Description**: Params: p2, p3 usually 0 in R* Scripts

### _UPDATE_SHOP_ITEM_WEARABLE_STATE
- **Return Type**: void
- **Parameters**: Ped ped, Hash componentHash, Hash wearableState, int p3, BOOL p4, int p5

### _GET_SHOP_ITEM_COMPONENT_AT_INDEX
- **Return Type**: Hash
- **Parameters**: Ped ped, int index, BOOL p2, Any* argStruct, Any* argStruct2

### _GET_SHOP_ITEM_NUM_WEARABLE_STATES
- **Return Type**: int
- **Parameters**: Hash componentHash, BOOL isMpFemale, BOOL p2
- **Description**: Returns the number of wearable states available for a shop item / component. p2 seems to be true in scripts.  For use with 0x6243635AF2F1B826 (_GET_SHOP_ITEM_AVAILABLE_WEARABLE_STATE_BY_INDEX)

### _GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX
- **Return Type**: Hash
- **Parameters**: Hash componentHash, int wearableStateIndex, BOOL isMpFemale, BOOL p3
- **Description**: Gets an available wearable state by index for a shop item / component - it does not retreive what the current state is. p3 seems to be true in scripts.  Use 0xFFCC2DB2D9953401 (_GET_SHOP_ITEM_NUM_WEARABLE_STATES) to get the number of available wearable states

### _GET_SHOP_ITEM_COMPONENT_CATEGORY
- **Return Type**: Hash
- **Parameters**: Hash componentHash, int metapedType, BOOL isMP

### _0x31B2E7F2E3C58B89
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _GET_SHOP_ITEM_BASE_LAYERS
- **Return Type**: BOOL
- **Parameters**: Hash shopItem, Any p1, Ped ped, int metapedType, BOOL p4, Hash* drawable, Hash* albedo, Hash* normal, Hash* material, Hash* p9, Hash* p10, Hash* p11, Hash* p12

### _0xAAB86462966168CE
- **Return Type**: Any
- **Parameters**: Ped ped, BOOL isMP
- **Description**: Related to _0x704C908E9C405136 for component loading _S*

### _GET_SHOP_ITEM_HAT_COMPONENT
- **Return Type**: Any
- **Parameters**: Ped ped, int metapedType, BOOL p2

### _REFRESH_META_PED_SHOP_ITEMS
- **Return Type**: void
- **Parameters**: Ped ped, int p1
- **Description**: p1 is always 1

### _0xD103F6DBB5442BE8
- **Return Type**: void
- **Parameters**: Ped ped, int p1
- **Description**: Params: p1 either a 1 or 0, so perhaps BOOL _SET_PED_A*

### _SET_PED_PROMPT_NAME_FROM_GXT_ENTRY
- **Return Type**: void
- **Parameters**: Ped ped, Hash gxtEntryHash

### _SET_PED_PROMPT_NAME
- **Return Type**: void
- **Parameters**: Ped ped, const char* name

### _SET_PED_PROMPT_NAME_FROM_GXT_ENTRY_2
- **Return Type**: void
- **Parameters**: Ped ped, Hash gxtEntryHash

### _SET_PED_PROMPT_NAME_2
- **Return Type**: void
- **Parameters**: Ped ped, const char* name

### _0xF917F92BF22ECBAB
- **Return Type**: void
- **Parameters**: Any p0

### _0x49DADFC4CD808B0A
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _HAS_PED_TAKEN_GORE_DAMAGE
- **Return Type**: BOOL
- **Parameters**: Ped ped, int limb
- **Description**: limb: 3 = Left Hand, 4 = Left Arm, 6 = Right Hand, 7 = Right Arm, 9 = Left Foot, 10 = Left Leg, 12 = Right Foot, 13 = Right Leg, 37 = Head

### _0x704C908E9C405136
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: _CLEAR*

### _0x7406C71F4AC2FFCC
- **Return Type**: void
- **Parameters**: Any p0

### _0x28508173C6A7CC18
- **Return Type**: void
- **Parameters**: Any p0

### _0x52250B92EA70BE3D
- **Return Type**: Any
- **Parameters**: Any p0

### _SET_PED_QUALITY
- **Return Type**: void
- **Parameters**: Ped ped, int quality
- **Description**: quality: see _GET_PED_QUALITY

### _GET_PED_QUALITY
- **Return Type**: int
- **Parameters**: Ped ped
- **Description**: Returns Ped Quality to be used to calculate Skinning Quality  enum ePedQuality { PQ_INVALID = -1, PQ_LOW, PQ_MEDIUM, PQ_HIGH, PQ_MAX };

### _0xCE7A6C1D5CDE1F9D
- **Return Type**: void
- **Parameters**: Ped ped, Object object, const char* propName, const char* animName

### _0x604E1010E3162E86
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0xE8ABE3B73FC7FE17
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _REMOVE_PED_PROP
- **Return Type**: void
- **Parameters**: Ped ped, const char* propName

### _SET_TOTAL_PED_DAMAGE_FALLOFF_BONUS
- **Return Type**: void
- **Parameters**: Ped ped, float bonus
- **Description**: _SET_W(EAPON?)*

### _0x095C2277FED731DB
- **Return Type**: Any
- **Parameters**: Any p0

### _0x09171A6F8FDE5DC1
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0x09E378C52B1433B5
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0x6507AC3BD7C99009
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, float p3
- **Description**: _IS_N* - _IS_P*

### _0x6507AC3BD7C99009
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, float p3

### _GET_PLAYER_PED_WATER_DEPTH
- **Return Type**: float
- **Parameters**: Ped ped
- **Description**: Returns how deep the water is below the ped (if in water) -1.0f = Not in water 10.0f = Max water depth

### _SET_PED_TRAIL_EFFECT
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1, float duration
- **Description**: duration in seconds

### _0xEBAAC9A750E7563B
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: If returned true: PROCESS_RESIZING_TRACKING_BOUNDS_VOLUME - Scaling UP the bounds due to tracking If returned false: PROCESS_RESIZING_TRACKING_BOUNDS_VOLUME - Scaling DOWN the bounds due to tracking _IS_PED_T* - _IS_PED_U*

### _0x992187D975635DF5
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x0B787A37EEDD226F
- **Return Type**: void
- **Parameters**: Any p0, Any p1


## PERSCHAR
### _0x63AA2B8EB087886A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _GET_PERSCHAR_MODEL_NAME
- **Return Type**: Hash
- **Parameters**: Hash persCharHash

### _0x8BC555034A5A5E8C
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x70605812ABC9FF0F
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xDC9655D47DEC0353
- **Return Type**: Any
- **Parameters**: Any p0

### _0x2DF89CD2ED1D0BDE
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x535A66AAD2BF68F9
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xCEB40B678E403759
- **Return Type**: Any
- **Parameters**: Any p0

### _SET_PERSCHAR_SCHEDULE
- **Return Type**: void
- **Parameters**: Hash persCharHash, const char* schedule

### _0x8B44273A92CD406C
- **Return Type**: void
- **Parameters**: Any p0

### _0xE0E65E0D261F7507
- **Return Type**: void
- **Parameters**: Any p0

### _0x112DDF56300BC6E5
- **Return Type**: Any
- **Parameters**: Any p0

### _CREATE_PERSISTENT_CHARACTER
- **Return Type**: PersChar
- **Parameters**: Hash hash

### _IS_PERSISTENT_CHARACTER_VALID
- **Return Type**: BOOL
- **Parameters**: PersChar persChar

### _DELETE_PERSCHAR
- **Return Type**: void
- **Parameters**: PersChar persChar

### _0x5EE6FCCC9C832CA2
- **Return Type**: Vector3
- **Parameters**: Any p0

### _0x59C7AD6FEA2AC449
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0xBB68908CD11AEBDC
- **Return Type**: void
- **Parameters**: PersChar persChar

### _0x94995829ED15A598
- **Return Type**: Vector3
- **Parameters**: Any p0

### _GET_PERSCHAR_PED_INDEX
- **Return Type**: Ped
- **Parameters**: PersChar persChar

### _GET_PERSCHAR_INDEX_FROM_PED_INDEX
- **Return Type**: PersChar
- **Parameters**: Ped ped

### _0xF8DE7154F7D1458F
- **Return Type**: Any
- **Parameters**: Any p0

### _0x669C25840C6F7AE2
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _RETASK_PERSISTENT_CHARACTER
- **Return Type**: void
- **Parameters**: PersChar persChar

### _0x0B3A99AB6713AA52
- **Return Type**: void
- **Parameters**: Any p0

### _IS_PERSISTENT_CHARACTER_DEAD
- **Return Type**: BOOL
- **Parameters**: PersChar persChar

### _REVIVE_PERSCHAR
- **Return Type**: BOOL
- **Parameters**: PersChar persChar

### _0xD4B614179BCD0654
- **Return Type**: void
- **Parameters**: Any p0

### _0x406808610220405B
- **Return Type**: void
- **Parameters**: Any p0

### _0xA2B18FF8D39F6D87
- **Return Type**: void
- **Parameters**: Any p0

### _0xE4C51A8A3BD1664C
- **Return Type**: Any
- **Parameters**: Any p0

### _0x8AE4EFA464DAE42D
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xA4DCB3F0DD7488BD
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0xD95D777F828B2BBB
- **Return Type**: void
- **Parameters**: Any p0

### _0x92690B0822493CE0
- **Return Type**: void
- **Parameters**: 

### _0xEFC5C6670E0B99BA
- **Return Type**: void
- **Parameters**: 

### _0x2E957AA81F2C61C9
- **Return Type**: void
- **Parameters**: 

### _0xB173599D61FAEB31
- **Return Type**: void
- **Parameters**: 

### _0x08FC896D2CB31FCC
- **Return Type**: Entity
- **Parameters**: Any p0, BOOL p1

### _FORCE_SPAWN_PERSCHAR
- **Return Type**: Entity
- **Parameters**: PersChar persChar, BOOL p1

### _FORCE_DESPAWN_PERSCHAR
- **Return Type**: void
- **Parameters**: PersChar persChar

### _0xFCC6DB8DBE709BC8
- **Return Type**: void
- **Parameters**: PersChar persChar

### _0xA8C406C2A56EDC16
- **Return Type**: void
- **Parameters**: PersChar persChar

### _0x4F81EAD1DE8FA19B
- **Return Type**: void
- **Parameters**: PersChar persChar

### _0x6759BEE6762E140B
- **Return Type**: void
- **Parameters**: PersChar persChar

### _0xB65E7F733956CF25
- **Return Type**: void
- **Parameters**: PersChar persChar

### _0x4AFC7288C77238B3
- **Return Type**: Any
- **Parameters**: Any p0

### _0xA8120EBEAF290C7A
- **Return Type**: Any
- **Parameters**: Any p0

### _0x69786495C92A3044
- **Return Type**: Any
- **Parameters**: Any p0

### _0xEC254C2C9B0F08F1
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x9C7F95946E304778
- **Return Type**: Any
- **Parameters**: Any p0, Any p1


## PERSISTENCE
### _0x7A1BD123E5CDB6E5
- **Return Type**: void
- **Parameters**: 

### PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA
- **Return Type**: void
- **Parameters**: float x, float y, float z, float radius

### PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA
- **Return Type**: void
- **Parameters**: Vector3 vec, float radius

### _0x065887B694359799
- **Return Type**: void
- **Parameters**: Any p0

### _0xFC9806DA9A460093
- **Return Type**: void
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2

### _0xFC9806DA9A460093
- **Return Type**: void
- **Parameters**: Vector3 vec1, Vector3 vec2

### _0xB03140014ACA6C40
- **Return Type**: void
- **Parameters**: Any p0, Any p1
- **Description**: nullsub, doesn't do anything

### _0xE225CEF1901F6108
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x8DE104BEC243A73B
- **Return Type**: void
- **Parameters**: Any p0

### _PERSISTENCE_REFRESH_TOWN_VOLUME
- **Return Type**: void
- **Parameters**: Volume volume
- **Description**: Only used in R* script long_update.ysc in script function REFRESH_CLOSEST_TOWN

### _0xBA2C49EA6A8D24FF
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### _0x2E545965DF98D476
- **Return Type**: Any
- **Parameters**: Any p0

### _0xF5622FA6ACFCA7DB
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x3CA5E58C9731A16B
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xDC0A1F0ECEC9F0C0
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x5A79220F6D38D7C3
- **Return Type**: Any
- **Parameters**: Any p0

### _0xCFDA2518F322D836
- **Return Type**: Any
- **Parameters**: Any p0

### _0x1F56FB3FDB4EAF65
- **Return Type**: Any
- **Parameters**: Any p0

### _0x291CC21D1FB6790E
- **Return Type**: void
- **Parameters**: Any p0

### PERSISTENCE_ADD_SCENARIO_LOOTED
- **Return Type**: void
- **Parameters**: int scenario

### _PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED
- **Return Type**: BOOL
- **Parameters**: int scenario

### _PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z

### _PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS
- **Return Type**: BOOL
- **Parameters**: Vector3 vec

### _PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS_WITH_MODEL
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, Hash model

### _PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS_WITH_MODEL
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, Hash model

### _0x66DAA3A9274E8E82
- **Return Type**: void
- **Parameters**: 
- **Description**: _PERSISTENCE_*


## PHYSICS
### ADD_ROPE
- **Return Type**: int
- **Parameters**: float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, float maxLength, float minLength, float p10, BOOL p11, BOOL p12, BOOL rigid, float p14, BOOL breakWhenShot, Any* unkPtr, BOOL p17
- **Description**: There are 19 types of rope, from type = 0 to type = 18 Rope definitions are stored in ropedata.xml Rope types 0, 15 and 18 have proper physics for hanging objects (taut, do not sag, small to medium diameter, good aspect for a rope)

### ADD_ROPE
- **Return Type**: int
- **Parameters**: Vector3 vec, Vector3 rot, float length, int ropeType, float maxLength, float minLength, float p10, BOOL p11, BOOL p12, BOOL rigid, float p14, BOOL breakWhenShot, Any* unkPtr, BOOL p17

### _ADD_ROPE_2
- **Return Type**: int
- **Parameters**: float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, BOOL isNetworked, int p9, float p10

### _ADD_ROPE_2
- **Return Type**: int
- **Parameters**: Vector3 vec, Vector3 rot, float length, int ropeType, BOOL isNetworked, int p9, float p10

### DELETE_ROPE
- **Return Type**: void
- **Parameters**: int* ropeId

### _RELEASE_ROPE
- **Return Type**: void
- **Parameters**: int ropeId

### DELETE_CHILD_ROPE
- **Return Type**: void
- **Parameters**: int ropeId

### _BREAK_ROPE
- **Return Type**: void
- **Parameters**: int* ropeId, int* ropeTop, int* ropeBottom, float offsetX, float offsetY, float offsetZ, int p6
- **Description**: ropeTop returns top half of rope, ropeBottom returns bottom half of rope

### _BREAK_ROPE
- **Return Type**: void
- **Parameters**: int* ropeId, int* ropeTop, int* ropeBottom, Vector3 offset, int p6

### DOES_ROPE_EXIST
- **Return Type**: BOOL
- **Parameters**: int ropeId

### _IS_ROPE_BROKEN
- **Return Type**: BOOL
- **Parameters**: int ropeId

### _ROPE_CHANGE_VISIBILITY
- **Return Type**: void
- **Parameters**: int* ropeId, BOOL visible

### ROPE_DRAW_SHADOW_ENABLED
- **Return Type**: void
- **Parameters**: int* ropeId, BOOL toggle

### GET_ROPE_VERTEX_COUNT
- **Return Type**: int
- **Parameters**: int ropeId

### _0xE54BF2CE6C7D23A9
- **Return Type**: void
- **Parameters**: int ropeId, int p1, float x, float y, float z

### _0xE54BF2CE6C7D23A9
- **Return Type**: void
- **Parameters**: int ropeId, int p1, Vector3 vec

### _0x9C24846D0A4A2776
- **Return Type**: void
- **Parameters**: Any p0

### _0x0CB16D05E03FB525
- **Return Type**: void
- **Parameters**: Any p0

### _0xF27F1A8DE4F50A1B
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### _0x21D0890D88DFB0B0
- **Return Type**: void
- **Parameters**: int ropeId, BOOL p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, int p10

### ATTACH_ENTITIES_TO_ROPE
- **Return Type**: void
- **Parameters**: int ropeId, Entity entity1, Entity entity2, float ent1X, float ent1Y, float ent1Z, float ent2X, float ent2Y, float ent2Z, float length, int alwaysZero1, int alwaysZero2, const char* boneName1, const char* boneName2, BOOL p14, int boneId1, int boneId2, int alwaysZero3, int alwaysZero4, BOOL p19, BOOL p20
- **Description**: Attaches entity 1 to entity 2. If you use a boneName (p12/p13) make sure boneId (p15/p16) is set to -1.

### ATTACH_ENTITIES_TO_ROPE
- **Return Type**: void
- **Parameters**: int ropeId, Entity entity1, Entity entity2, Vector3 ent1, Vector3 ent2, float length, int alwaysZero1, int alwaysZero2, const char* boneName1, const char* boneName2, BOOL p14, int boneId1, int boneId2, int alwaysZero3, int alwaysZero4, BOOL p19, BOOL p20

### _ATTACH_ENTITIES_TO_ROPE_2
- **Return Type**: void
- **Parameters**: int ropeId, Entity entity1, Entity entity2, float ent1X, float ent1Y, float ent1Z, float ent2X, float ent2Y, float ent2Z, const char* boneName1, const char* boneName2
- **Description**: Attaches a rope to two entities: binds two bones from two entities; one entity can be an object, i.e. a suspension point, the other an NPC bone

### _ATTACH_ENTITIES_TO_ROPE_2
- **Return Type**: void
- **Parameters**: int ropeId, Entity entity1, Entity entity2, Vector3 ent1, Vector3 ent2, const char* boneName1, const char* boneName2

### _ATTACH_ENTITES_TO_ROPE_3
- **Return Type**: void
- **Parameters**: int ropeId, Entity entity1, Entity entity2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, Any p10

### _0x69C810B72291D831
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### _0xB7469CB9AC3C0FD4
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7

### _0xC64E7A62632AD2FE
- **Return Type**: void
- **Parameters**: int ropeId, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7

### _IS_ROPE_ATTACHED_TO_ENTITY
- **Return Type**: BOOL
- **Parameters**: int ropeId, Entity entity

### DETACH_ROPE_FROM_ENTITY
- **Return Type**: void
- **Parameters**: int ropeId, Entity entity

### _HITCH_HORSE
- **Return Type**: void
- **Parameters**: Ped horse, float x, float y, float z

### _HITCH_HORSE
- **Return Type**: void
- **Parameters**: Ped horse, Vector3 vec

### _UNHITCH_HORSE
- **Return Type**: void
- **Parameters**: Ped horse

### _0x6EA0E93CFFA472CC
- **Return Type**: void
- **Parameters**: Any p0

### _0xBDDA142759307528
- **Return Type**: void
- **Parameters**: Any p0

### _0x32F4DBFDFCCCC735
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0xF8CA39D5C0D1D9A1
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xEAF529446488EB18
- **Return Type**: void
- **Parameters**: Any p0

### _0x31160EC47E7C9549
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x5E981C764DF33117
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### ROPE_SET_UPDATE_ORDER
- **Return Type**: void
- **Parameters**: int ropeId, Any p1

### _0xFB9153A54AC713E8
- **Return Type**: void
- **Parameters**: int ropeId, BOOL p1

### _0xD699E688B49C0FD2
- **Return Type**: void
- **Parameters**: int ropeId, float p1, float p2, float p3, BOOL p4

### _0xBB3E9B073E66C3C9
- **Return Type**: void
- **Parameters**: int ropeId, BOOL p1, BOOL p2, BOOL p3, BOOL p4

### _0x522FA3F490E2F7AC
- **Return Type**: void
- **Parameters**: int ropeId, Any p1, Any p2

### _0x3900491C0D61ED4B
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xC89E7410A93AC19A
- **Return Type**: void
- **Parameters**: int ropeId, float p1

### _0x1D97DA8ACB5D2582
- **Return Type**: void
- **Parameters**: int ropeId, int p1

### _CREATE_ROPE_WINDING_ABILITY
- **Return Type**: void
- **Parameters**: int ropeId, const char* p1, const char* ropeModelType, float length, BOOL p4
- **Description**: Combining this with ADD_ROPE enables winding p1: mostly empty (0) ropeModelType: RB_L_Wrist02, RB_R_Wrist02, ropeAttach, noose01x_Rope_03, SKEL_Neck0, SKEL_L_FOOT, SKEL_Neck1, Root_s_meatbit_Chunck_Xlarge01x _CREATE_*

### GET_ROPE_LAST_VERTEX_COORD
- **Return Type**: Vector3
- **Parameters**: int ropeId

### GET_ROPE_VERTEX_COORD
- **Return Type**: Vector3
- **Parameters**: int ropeId, int vertex

### START_ROPE_WINDING
- **Return Type**: void
- **Parameters**: int ropeId

### STOP_ROPE_WINDING
- **Return Type**: void
- **Parameters**: int ropeId

### START_ROPE_UNWINDING_FRONT
- **Return Type**: void
- **Parameters**: int ropeId

### STOP_ROPE_UNWINDING_FRONT
- **Return Type**: void
- **Parameters**: int ropeId

### _START_ROPE_UNWINDING_BACK
- **Return Type**: void
- **Parameters**: int ropeId

### _STOP_ROPE_UNWINDING_BACK
- **Return Type**: void
- **Parameters**: int ropeId

### _0x461FCBDEB4D06717
- **Return Type**: void
- **Parameters**: int ropeId, BOOL p1

### _0x423C6B1F3786D28B
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x76BAD9D538BCA1AA
- **Return Type**: void
- **Parameters**: int ropeId, float p1

### _0xB40EA9E0D2E2F7F3
- **Return Type**: void
- **Parameters**: int ropeId, float p1

### _ROPE_GET_FORCED_LENGTH
- **Return Type**: float
- **Parameters**: int ropeId

### _0x751DF00EEFF122E3
- **Return Type**: void
- **Parameters**: Any p0

### ROPE_FORCE_LENGTH
- **Return Type**: void
- **Parameters**: int ropeId, float length
- **Description**: Forces a rope to a certain length.

### _0x8D59079C37C21D78
- **Return Type**: void
- **Parameters**: int ropeId, float p1
- **Description**: _ROPE_SET_*

### _0x814D453FCFDF119F
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x1FC92BDBA1106BD2
- **Return Type**: void
- **Parameters**: int ropeId, float p1

### _0xDEDE679ED29DD4E7
- **Return Type**: void
- **Parameters**: int ropeId, BOOL p1

### _0xF1EA2A881EB7F2CD
- **Return Type**: void
- **Parameters**: int ropeId, BOOL p1

### _0x5A989B7EE3672A56
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x483D4E917B0D35A9
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _ROPE_GET_BREAKER_OF_ROPE
- **Return Type**: Player
- **Parameters**: int ropeId

### SET_DAMPING
- **Return Type**: void
- **Parameters**: Entity entity, int vertex, float value

### ACTIVATE_PHYSICS
- **Return Type**: void
- **Parameters**: Entity entity

### BREAK_ENTITY_GLASS
- **Return Type**: void
- **Parameters**: Entity entity, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, BOOL p10

### _0x8EEDFD8921389928
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9

### SET_DISABLE_BREAKING
- **Return Type**: void
- **Parameters**: Object object, BOOL toggle

### SET_DISABLE_FRAG_DAMAGE
- **Return Type**: void
- **Parameters**: Object object, BOOL toggle

### _0x5BD7457221CC5FF4
- **Return Type**: void
- **Parameters**: Any p0, Any p1


## PLAYER
### GET_PLAYER_PED
- **Return Type**: Ped
- **Parameters**: Player player

### _GET_PLAYER_PED_2
- **Return Type**: Ped
- **Parameters**: Player player

### _0x325434C68358D282
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: Only used in script function UPDATE_PLAYER_JUST_DIED_STATE

### GET_PLAYER_PED_SCRIPT_INDEX
- **Return Type**: Ped
- **Parameters**: Player player
- **Description**: Does the same like PLAYER::GET_PLAYER_PED

### SET_PLAYER_MODEL
- **Return Type**: void
- **Parameters**: Player player, Hash modelHash, BOOL p2
- **Description**: Make sure to request the model first and wait until it has loaded.

### _NETWORK_HAS_PLAYER_VALID_PED
- **Return Type**: BOOL
- **Parameters**: Player player
- **Description**: Returns true if the given player has a valid ped.

### GET_PLAYER_TEAM
- **Return Type**: int
- **Parameters**: Player player
- **Description**: Gets the player's team. Returns -1 in singleplayer.

### SET_PLAYER_TEAM
- **Return Type**: void
- **Parameters**: Player player, int team, BOOL bRestrictToThisScript
- **Description**: Sets the player's team.

### GET_WANTED_LEVEL_RADIUS
- **Return Type**: float
- **Parameters**: int p0

### GET_WANTED_LEVEL_THRESHOLD
- **Return Type**: int
- **Parameters**: int wantedLevel

### SET_PLAYER_WANTED_LEVEL
- **Return Type**: void
- **Parameters**: Player player, int wantedLevel, BOOL disableNoMission
- **Description**: nullsub, doesn't do anything

### IS_PLAYER_WANTED_LEVEL_GREATER
- **Return Type**: BOOL
- **Parameters**: Player player, int wantedLevel

### CLEAR_PLAYER_WANTED_LEVEL
- **Return Type**: void
- **Parameters**: Player player
- **Description**: nullsub, doesn't do anything

### IS_PLAYER_DEAD
- **Return Type**: BOOL
- **Parameters**: Player player

### SET_PLAYER_CONTROL
- **Return Type**: void
- **Parameters**: Player player, BOOL toggle, int flags, BOOL bPreventHeadingChange
- **Description**: flags: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/eSetPlayerControlFlags

### GET_PLAYER_WANTED_LEVEL
- **Return Type**: int
- **Parameters**: Player player

### SET_MAX_WANTED_LEVEL
- **Return Type**: void
- **Parameters**: int maxWantedLevel

### _SET_MAX_WANTED_LEVEL_2
- **Return Type**: void
- **Parameters**: int maxWantedLevel

### SET_POLICE_RADAR_BLIPS
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: If toggle is set to false: The police won't be shown on the (mini)map  If toggle is set to true: The police will be shown on the (mini)map

### IS_PLAYER_PLAYING
- **Return Type**: BOOL
- **Parameters**: Player player
- **Description**: Checks whether the specified player has a Ped, the Ped is not dead, is not injured and is not arrested.

### SET_EVERYONE_IGNORE_PLAYER
- **Return Type**: void
- **Parameters**: Player player, BOOL toggle

### GET_IS_PLAYER_UI_PROMPT_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Player player, int p1

### _MODIFY_PLAYER_UI_PROMPT
- **Return Type**: void
- **Parameters**: Player player, int promptType, int promptMode, BOOL disabled
- **Description**: Params: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/ePromptType promptType is mostly 34 (PP_TRACK_ANIMAL), promptMode = 0 (PP_MODE_BLOCK) in R* Scripts

### _GET_PLAYER_UI_PROMPT_IS_DISABLED
- **Return Type**: BOOL
- **Parameters**: Player player, int promptType, int promptMode
- **Description**: Returns false if PromptType is enabled Params: See 0x0751D461F06E41CE

### _MODIFY_PLAYER_UI_PROMPT_FOR_PED
- **Return Type**: void
- **Parameters**: Player player, Ped ped, int promptType, int promptMode, BOOL enabled
- **Description**: Params: See 0x0751D461F06E41CE

### _GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED
- **Return Type**: BOOL
- **Parameters**: Player player, Ped ped, int promptType, int promptMode
- **Description**: Returns true if PromptType is enabled for ped (mount) Params: See 0x0751D461F06E41CE

### _0x93624B36E8851B42
- **Return Type**: void
- **Parameters**: Player player

### _0x9073EC5456651A90
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x2E67707BEC52CA4B
- **Return Type**: void
- **Parameters**: Any p0

### SET_ALL_RANDOM_PEDS_FLEE
- **Return Type**: void
- **Parameters**: Player player, BOOL toggle
- **Description**: Sets whether all random peds will run away from player if they are agitated (threatened) (bool=true), or some peds can stand up for themselves (bool=false).

### SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME
- **Return Type**: void
- **Parameters**: Player player

### SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME
- **Return Type**: void
- **Parameters**: Player player

### _0x1D256EED194F5B58
- **Return Type**: void
- **Parameters**: Any p0

### _0x5B7B97E99F84138B
- **Return Type**: Any
- **Parameters**: Any p0

### _SET_DISABLE_PLAYER_WANTED_LEVEL
- **Return Type**: void
- **Parameters**: Player player, BOOL disable
- **Description**: Disables the players ability to be wanted by lawmen

### _GET_WANTED_LEVEL_MULTIPLIER
- **Return Type**: float
- **Parameters**: 
- **Description**: Returns -1.0f if no multiplier has been set

### SET_WANTED_LEVEL_MULTIPLIER
- **Return Type**: void
- **Parameters**: float multiplier

### RESET_WANTED_LEVEL_DIFFICULTY
- **Return Type**: void
- **Parameters**: Player player

### UPDATE_WANTED_POSITION_THIS_FRAME
- **Return Type**: void
- **Parameters**: Player player

### SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME
- **Return Type**: void
- **Parameters**: Player player

### REPORT_POLICE_SPOTTED_PLAYER
- **Return Type**: void
- **Parameters**: Player player

### SET_LAW_RESPONSE_DELAY_OVERRIDE
- **Return Type**: void
- **Parameters**: float p0

### RESET_LAW_RESPONSE_DELAY_OVERRIDE
- **Return Type**: void
- **Parameters**: 

### CAN_PLAYER_START_MISSION
- **Return Type**: BOOL
- **Parameters**: Player player

### IS_PLAYER_READY_FOR_CUTSCENE
- **Return Type**: BOOL
- **Parameters**: Player player

### IS_PLAYER_TARGETTING_ENTITY
- **Return Type**: BOOL
- **Parameters**: Player player, Entity entity, BOOL p2

### GET_PLAYER_TARGET_ENTITY
- **Return Type**: BOOL
- **Parameters**: Player player, Entity* entity

### _0x927861B2C08DBEA5
- **Return Type**: BOOL
- **Parameters**: Player player
- **Description**: _GET_A* - _GET_C*

### _IS_PLAYER_FREE_FOCUSING
- **Return Type**: BOOL
- **Parameters**: Player player
- **Description**: Checks if player is focused on any entity

### GET_PLAYER_INTERACTION_TARGET_ENTITY
- **Return Type**: BOOL
- **Parameters**: Player player, Entity* outEntity, BOOL p2, BOOL p3

### _0xBEA3A6E5F5F79A6F
- **Return Type**: Any
- **Parameters**: Any p0, Any p1
- **Description**: _GET_PLAYER_I*

### _IS_PLAYER_IN_SCOPE
- **Return Type**: BOOL
- **Parameters**: Player player

### IS_PLAYER_FREE_AIMING
- **Return Type**: BOOL
- **Parameters**: Player player
- **Description**: Gets a value indicating whether the specified player is currently aiming freely.

### IS_PLAYER_FREE_AIMING_AT_ENTITY
- **Return Type**: BOOL
- **Parameters**: Player player, Entity entity
- **Description**: Gets a value indicating whether the specified player is currently aiming freely at the specified entity.

### GET_ENTITY_PLAYER_IS_FREE_AIMING_AT
- **Return Type**: BOOL
- **Parameters**: Player player, Entity* entity

### _0x3DAABE78A23694BC
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x7AE93C45EC14A166
- **Return Type**: BOOL
- **Parameters**: Player player, Ped* ped
- **Description**: Only used in script function PROCESS_PED_INTERRUPT_DIALOGUE _GET_PLAYER_*

### SET_PLAYER_LOCKON_RANGE_OVERRIDE
- **Return Type**: void
- **Parameters**: Player player, float range
- **Description**: Affects the range of auto aim target.

### SET_PLAYER_CAN_BE_HASSLED_BY_GANGS
- **Return Type**: void
- **Parameters**: Player player, BOOL toggle
- **Description**: Sets whether this player can be hassled by gangs.

### SET_PLAYER_CAN_USE_COVER
- **Return Type**: void
- **Parameters**: Player player, BOOL toggle
- **Description**: Sets whether this player can take cover.

### _0xD1A70C1E8D1031FE
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xACA45DDCEF6071C4
- **Return Type**: void
- **Parameters**: Player player, BOOL p1
- **Description**: _SET_PLAYER_CAN_BE_* - _SET_PLAYER_CAN_USE_*

### _0xA0C683284DF027C7
- **Return Type**: void
- **Parameters**: Player player, int p1, BOOL enable
- **Description**: Params: p1 is mostly 15, sometimes 1 in R* Scripts (Function: PLAYER_TOGGLE_PICK_UP_HATS) _SET_PLAYER_*

### _SET_PLAYER_CAN_MERCY_KILL
- **Return Type**: void
- **Parameters**: Player player, BOOL toggle

### _0x4EC8BE63B8A5D4EF
- **Return Type**: void
- **Parameters**: Player player, int p1

### GET_MAX_WANTED_LEVEL
- **Return Type**: int
- **Parameters**: 
- **Description**: Gets the maximum wanted level the player can get. Ranges from 0 to 5.

### IS_PLAYER_TARGETTING_ANYTHING
- **Return Type**: BOOL
- **Parameters**: Player player

### RESTORE_PLAYER_STAMINA
- **Return Type**: void
- **Parameters**: Player player, float p1

### _0x8591EE69CC3ED257
- **Return Type**: void
- **Parameters**: Player player, BOOL toggle
- **Description**: SET_PLAYER_S/T*

### GET_PLAYER_GROUP
- **Return Type**: int
- **Parameters**: Player player
- **Description**: Returns the group ID the player is member of.

### _0x3D9DA5C9EFD20D88
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x2BEED53B912537D0
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x908D4B72854C8F62
- **Return Type**: void
- **Parameters**: Any p0

### _0xD1F6B912785BFD35
- **Return Type**: Any
- **Parameters**: Any p0

### _0xC4873B053054C04B
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7

### _0xCA59808E51FD67C4
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xBA5CA1FEB5DE0DF6
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### _0x0869D499A7848309
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7

### _0xB331D8A73F9D2BDF
- **Return Type**: BOOL
- **Parameters**: Player player, Any* p1
- **Description**: _IS_PLAYER_I* - _IS_PLAYER_P*

### _ADD_PLAYER_AS_FOLLOW_TARGET
- **Return Type**: void
- **Parameters**: Player player, Ped ped, float p2, float p3, int followMode, int followPriority, BOOL p6
- **Description**: Used in script function: NET_AUTO_FOLLOW_UPDATE_LEADER_VALUES followMode: HORSEFOLLOWMODE_AUTO = 0, HORSEFOLLOWMODE_SIDE_ONLY, HORSEFOLLOWMODE_BEHIND_ONLY, HORSEFOLLOWMODE_BEHIND_AND_SIDE, HORSEFOLLOWMODE_BEHIND_CLOSE followPriority: HORSEFOLLOWPRIORITY_STEER_ASSIST = 0, HORSEFOLLOWPRIORITY_AMBIENT, HORSEFOLLOWPRIORITY_NORMAL, HORSEFOLLOWPRIORITY_HIGH

### _REMOVE_PLAYER_AS_FOLLOW_TARGET
- **Return Type**: void
- **Parameters**: Player player, Ped ped

### _0x12E09E278C6C29B7
- **Return Type**: void
- **Parameters**: Any p0

### _0xDD33A82352C4652F
- **Return Type**: void
- **Parameters**: Player player, Ped ped, int p2

### _0x1FDA57E8908F2609
- **Return Type**: void
- **Parameters**: Player player, Ped ped, BOOL useSteerassist

### _0x84481018E668E1B8
- **Return Type**: void
- **Parameters**: Player player, Ped ped, Any p2

### _0x2009F8AB7A5E9D6D
- **Return Type**: BOOL
- **Parameters**: Player player
- **Description**: _IS_PLAYER_F*

### _IS_PLAYER_FOLLOWING_TARGET
- **Return Type**: BOOL
- **Parameters**: Player player, Ped ped

### _0xE7F8707269544B29
- **Return Type**: BOOL
- **Parameters**: Player player, Ped ped
- **Description**: _IS_PLAYER_A* - _IS_PLAYER_BE*

### _0xE631EAF35828FA67
- **Return Type**: Any
- **Parameters**: Any p0

### _0x086549F3B0381CB1
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### IS_PLAYER_CONTROL_ON
- **Return Type**: BOOL
- **Parameters**: Player player
- **Description**: Returns whether the player can control himself.

### IS_PLAYER_SCRIPT_CONTROL_ON
- **Return Type**: BOOL
- **Parameters**: Player player

### IS_PLAYER_CLIMBING
- **Return Type**: BOOL
- **Parameters**: Player player
- **Description**: Returns TRUE if the player ('s ped) is climbing at the moment.

### _0xEBB6E27AC2FF32DA
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0xB15CD2F9932C9AB5
- **Return Type**: Any
- **Parameters**: Any p0

### _0x621D1B289CAF5978
- **Return Type**: BOOL
- **Parameters**: Player player
- **Description**: _IS_PLAYER_S* - _IS_PLAYER_T*

### IS_PLAYER_BEING_ARRESTED
- **Return Type**: BOOL
- **Parameters**: Player player, BOOL atArresting
- **Description**: Return true while player is being arrested / busted.  If atArresting is set to 1, this function will return 1 when player is being arrested (while player is putting his hand up, but still have control)  If atArresting is set to 0, this function will return 1 only when the busted screen is shown.

### RESET_PLAYER_ARREST_STATE
- **Return Type**: void
- **Parameters**: Player player

### _0xCBB54CC7FFFFAB86
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0xBED386157F65942C
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xDAB6A2FC56B7DE65
- **Return Type**: Any
- **Parameters**: Any p0

### _0x0F4EAF69DA41AF43
- **Return Type**: Any
- **Parameters**: Any p0

### _SET_BOUNTY_TARGET
- **Return Type**: void
- **Parameters**: Player player, Player target

### _CLEAR_BOUNTY_TARGET
- **Return Type**: void
- **Parameters**: Player player

### GET_PLAYERS_LAST_VEHICLE
- **Return Type**: Vehicle
- **Parameters**: 

### GET_PLAYER_INDEX
- **Return Type**: Player
- **Parameters**: 
- **Description**: Returns the same as PLAYER_ID and NETWORK_PLAYER_ID_TO_INT

### INT_TO_PLAYERINDEX
- **Return Type**: Player
- **Parameters**: int value
- **Description**: Simply returns whatever is passed to it (Regardless of whether the handle is valid or not).

### INT_TO_PARTICIPANTINDEX
- **Return Type**: int
- **Parameters**: int value
- **Description**: Simply returns whatever is passed to it (Regardless of whether the handle is valid or not).

### PLAYER_ID
- **Return Type**: Player
- **Parameters**: 
- **Description**: This returns YOUR 'identity' as a Player type.  Always returns 0 in story mode.

### PLAYER_PED_ID
- **Return Type**: Ped
- **Parameters**: 
- **Description**: Returns current player ped

### NETWORK_PLAYER_ID_TO_INT
- **Return Type**: int
- **Parameters**: 
- **Description**: Does exactly the same thing as PLAYER_ID()

### HAS_FORCE_CLEANUP_OCCURRED
- **Return Type**: BOOL
- **Parameters**: int cleanupFlags

### FORCE_CLEANUP
- **Return Type**: void
- **Parameters**: int cleanupFlags

### FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME
- **Return Type**: void
- **Parameters**: const char* name, int cleanupFlags

### FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID
- **Return Type**: void
- **Parameters**: int id, int cleanupFlags

### GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP
- **Return Type**: int
- **Parameters**: 

### _SET_PLAYER_MOOD
- **Return Type**: void
- **Parameters**: Player player, int mood
- **Description**: mood: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/ePedMood

### _GET_PLAYER_MOOD
- **Return Type**: int
- **Parameters**: Player player
- **Description**: See _SET_PLAYER_MOOD

### SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE
- **Return Type**: void
- **Parameters**: Player player, Vehicle vehicle

### _0xC71D07C96946E263
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE
- **Return Type**: void
- **Parameters**: Player player

### IS_SYSTEM_UI_BEING_DISPLAYED
- **Return Type**: BOOL
- **Parameters**: 

### _0xD48227263E3D06AE
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9

### _0x3946FC742AC305CD
- **Return Type**: void
- **Parameters**: Player player, Ped ped, const char* p2, float x, float y, float z, Entity targetEntity, const char* p7

### _0x3946FC742AC305CD
- **Return Type**: void
- **Parameters**: Player player, Ped ped, const char* p2, Vector3 vec, Entity targetEntity, const char* p7

### _0xA28056CD1B04B250
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10

### _0xC67A4910425F11F1
- **Return Type**: void
- **Parameters**: Player player, const char* name
- **Description**: _DISABLE_*(PLAYER_FORCED_INTERACTION_LOCKON?)

### SET_PLAYER_INVINCIBLE
- **Return Type**: void
- **Parameters**: Player player, BOOL toggle
- **Description**: Simply sets you as invincible (Health will not deplete).

### GET_PLAYER_INVINCIBLE
- **Return Type**: BOOL
- **Parameters**: Player player
- **Description**: Returns the player's invincibility status.

### SET_PLAYER_LOCKON
- **Return Type**: void
- **Parameters**: Player player, BOOL toggle

### SET_LOCKON_TO_FRIENDLY_PLAYERS
- **Return Type**: void
- **Parameters**: Player player, BOOL toggle

### SET_PLAYER_TARGETING_MODE
- **Return Type**: void
- **Parameters**: int targetMode
- **Description**: Sets your targeting mode for when you're on foot. enum eTargetingMode { TARGETING_MODE_INVALID = -1, TARGETING_MODE_CAUSAL, (Wide) TARGETING_MODE_NORMAL, TARGETING_MODE_HARD, (Narrow) TARGETING_MODE_EXPERT (Free Aim) };

### _SET_PLAYER_IN_VEHICLE_TARGETING_MODE
- **Return Type**: void
- **Parameters**: int targetMode
- **Description**: Sets your targeting mode for when you're in a vehicle (perhaps a mount/horse). see SET_PLAYER_TARGETING_MODE for eTargetingMode

### _0x747257807B8721CE
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x8702D9150D9FBB3D
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xCB0B9506BC91E441
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED
- **Return Type**: void
- **Parameters**: Player player

### HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED
- **Return Type**: BOOL
- **Parameters**: Player player

### CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED
- **Return Type**: void
- **Parameters**: Player player

### HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED
- **Return Type**: BOOL
- **Parameters**: Player player

### _0xEACEBAAE0A33FB3F
- **Return Type**: void
- **Parameters**: Any p0

### _0x72AD59F7B7FB6E24
- **Return Type**: BOOL
- **Parameters**: Player player, int p1
- **Description**: _HAS_PLAYER_D*

### _0x1A6E84F13C952094
- **Return Type**: BOOL
- **Parameters**: Player player, int p1, Any* p2

### _SET_PLAYER_DAMAGE_INFO_OVERRIDE
- **Return Type**: void
- **Parameters**: Player player, const char* damageInfo
- **Description**: damageInfo: STANDARD_PED_DAMAGE, STANDARD_FEMALE_PED_DAMAGE, STANDARD_PLAYER_PED_DAMAGE_MP, STANDARD_FEMALE_PLAYER_PED_DAMAGE_MP

### _0x1F488807BC8E0630
- **Return Type**: void
- **Parameters**: Player player
- **Description**: _RESET_PLAYER_A* - _RESET_PLAYER_I*

### SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE
- **Return Type**: void
- **Parameters**: Player player, float multiplier
- **Description**: This can be between 1.0f - 50.0f

### SET_SWIM_MULTIPLIER_FOR_PLAYER
- **Return Type**: void
- **Parameters**: Player player, float multiplier
- **Description**: Swim speed multiplier. Multiplier goes up to 1.49f

### _0x73EB2EF2E92D23BF
- **Return Type**: BOOL
- **Parameters**: 

### SET_PLAYER_FORCED_AIM
- **Return Type**: void
- **Parameters**: Player player, BOOL toggle, Ped ped, int p3, BOOL p4

### _0x310CE349E0C0EC4B
- **Return Type**: void
- **Parameters**: Player player, Ped ped, int p2

### DISABLE_PLAYER_FIRING
- **Return Type**: void
- **Parameters**: Player player, BOOL toggle
- **Description**: Inhibits the player from using any method of combat including melee and firearms.  NOTE: Only disables the firing for one frame

### _0xEBFF94328FF7A18A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xF993373285053D77
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0xE956C2340A76272E
- **Return Type**: Any
- **Parameters**: Any p0

### _ENABLE_CUSTOM_DEADEYE_ABILITY
- **Return Type**: void
- **Parameters**: Player player, BOOL enable

### _0xDE6C85975F9D4894
- **Return Type**: Any
- **Parameters**: Any p0

### _0xBBA140062B15A8AC
- **Return Type**: void
- **Parameters**: Player player
- **Description**: Used in script function INIT_DEADEYE_SLOWDOWN _SPECIAL_ABILITY*

### _SPECIAL_ABILITY_SET_DISABLED
- **Return Type**: void
- **Parameters**: Player player, BOOL disabled

### _IS_SPECIAL_ABILITY_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Player player

### _MODIFY_INFINITE_TRAIL_VISION
- **Return Type**: void
- **Parameters**: Player player, BOOL toggle
- **Description**: Toggle handles wether Deadeye and Eagleeye are infinite or not.

### _SPECIAL_ABILITY_SET_EAGLE_EYE_DISABLED
- **Return Type**: void
- **Parameters**: Player player

### _SPECIAL_ABILITY_RESTORE_BY_AMOUNT
- **Return Type**: void
- **Parameters**: Player player, float amount, int p2, int p3, int p4
- **Description**: Restores Deadeye by given amount. Params: p2, p3, p4 = 0, 0, 1 in R* Scripts

### _0xFA437FA0738C370C
- **Return Type**: void
- **Parameters**: Player player, float p1, int p2, int p3, int p4
- **Description**: Params: p1, p2, p3, p4 = 1.f, 0, 0, 0 in R* Scripts _SPECIAL_ABILITY*

### _SPECIAL_ABILITY_RESTORE_OUTER_RING
- **Return Type**: void
- **Parameters**: Player player, float amount
- **Description**: Only used in R* SP Script short_update Restores Deadeye Outer Ring

### _GET_PLAYER_REQUIRED_DEAD_EYE_AMOUNT
- **Return Type**: float
- **Parameters**: Player player
- **Description**: If player has less Dead Eye than required, Dead Eye cant be triggered.

### _SPECIAL_ABILITY_GET_AMOUNT_CACHED
- **Return Type**: float
- **Parameters**: Player player
- **Description**: Returns Deadeye value from player

### _SPECIAL_ABILITY_DRAIN_BY_AMOUNT
- **Return Type**: void
- **Parameters**: Player player, float amount, Any p2
- **Description**: Drains Deadeye by given amount.

### _SPECIAL_ABILITY_START_RESTORE
- **Return Type**: void
- **Parameters**: Player player, int p1, BOOL p2
- **Description**: Params: p1 = -1 in R* Scripts

### _SET_SPECIAL_ABILITY_MULTIPLIER
- **Return Type**: void
- **Parameters**: Player player, float multiplier

### _GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER
- **Return Type**: float
- **Parameters**: Player player

### _SET_SPECIAL_ABILITY_TYPE
- **Return Type**: void
- **Parameters**: Player player, int type
- **Description**: SPECIAL_ABILITY_NONE = -1, SPECIAL_ABILITY_CAR_SLOWDOWN, SPECIAL_ABILITY_RAGE, SPECIAL_ABILITY_BULLET_TIME, SPECIAL_ABILITY_SNAPSHOT, SPECIAL_ABILITY_INSULT, SPECIAL_ABILITY_DEADEYE, SPECIAL_ABILITY_REVIVE

### _0x22B3CABEDDB538B2
- **Return Type**: void
- **Parameters**: Player player, float p1

### _SET_SPECIAL_ABILITY_DURATION_COST
- **Return Type**: void
- **Parameters**: Player player, float durationCost
- **Description**: durationCost: per second

### _SET_SPECIAL_ABILITY_DISABLE_TIMER
- **Return Type**: void
- **Parameters**: Player player, float timer
- **Description**: Only used in R* SP Script short_update

### _0x57D9991DC1334151
- **Return Type**: Any
- **Parameters**: Any p0

### _0x21091B4BEB6376EE
- **Return Type**: Any
- **Parameters**: Any p0

### _SET_SPECIAL_ABILITY_ACTIVATION_COST
- **Return Type**: void
- **Parameters**: Player player, float activationCost, int p2

### _0x4D1699543B1C023C
- **Return Type**: void
- **Parameters**: Player player, float p1
- **Description**: _SET_SPECIAL_ABILITY_*

### _GET_PLAYER_DEAD_EYE_METER_LEVEL
- **Return Type**: float
- **Parameters**: Player player, BOOL p1

### _GET_PLAYER_DEAD_EYE
- **Return Type**: float
- **Parameters**: Player player

### _GET_PLAYER_CACHED_DEAD_EYE_AMOUNT
- **Return Type**: float
- **Parameters**: Player player

### _GET_PLAYER_MAX_DEAD_EYE
- **Return Type**: float
- **Parameters**: Player player, Any p1

### _GET_PLAYER_HEALTH
- **Return Type**: float
- **Parameters**: Player player

### _GET_PLAYER_STAMINA
- **Return Type**: float
- **Parameters**: Player player

### _SET_PLAYER_STAT_FLAG_HASH
- **Return Type**: void
- **Parameters**: Player player, Hash p1
- **Description**: _N*, _O* or _PE*

### _SET_USED_ITEM_EFFECT
- **Return Type**: void
- **Parameters**: float health, float stamina, float deadeye, int healthCore, int staminaCore, int deadeyeCore

### _0x08E22898A6AF4905
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xBEFED69CE8317F91
- **Return Type**: Any
- **Parameters**: Any p0

### _ENABLE_EAGLEEYE
- **Return Type**: void
- **Parameters**: Player player, BOOL enable
- **Description**: (Un)lock Eagle Eye functionality

### _IS_SECONDARY_SPECIAL_ABILITY_ENABLED
- **Return Type**: BOOL
- **Parameters**: Player player
- **Description**: Returns true if eagle eye is enabled for the player

### _SECONDARY_SPECIAL_ABILITY_SET_ACTIVE
- **Return Type**: void
- **Parameters**: Player player
- **Description**: Activates EagleEye, called together with 0x28A13BF6B05C3D83

### _SECONDARY_SPECIAL_ABILITY_SET_DISABLED
- **Return Type**: void
- **Parameters**: Player player, BOOL disabled
- **Description**: Deactivates EagleEye, called together with 0xC0B21F235C02139C

### _IS_SECONDARY_SPECIAL_ABILITY_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Player player

### _0x107F2A66E1C4C83A
- **Return Type**: void
- **Parameters**: Any p0

### START_PLAYER_TELEPORT
- **Return Type**: void
- **Parameters**: Player player, float x, float y, float z, float heading, BOOL p5, BOOL p6, BOOL p7, BOOL p8

### START_PLAYER_TELEPORT
- **Return Type**: void
- **Parameters**: Player player, Vector3 vec, float heading, BOOL p5, BOOL p6, BOOL p7, BOOL p8

### _0x2C2D287748E8E9B7
- **Return Type**: void
- **Parameters**: BOOL p0

### UPDATE_PLAYER_TELEPORT
- **Return Type**: BOOL
- **Parameters**: Player player

### STOP_PLAYER_TELEPORT
- **Return Type**: void
- **Parameters**: 
- **Description**: Disables the player's teleportation

### IS_PLAYER_TELEPORT_ACTIVE
- **Return Type**: BOOL
- **Parameters**: 

### GET_PLAYER_CURRENT_STEALTH_NOISE
- **Return Type**: float
- **Parameters**: Player player

### SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER
- **Return Type**: void
- **Parameters**: Player player, float regenRate

### _GET_PLAYER_HEALTH_RECHARGE_MULTIPLIER
- **Return Type**: float
- **Parameters**: Player player

### _SET_PLAYER_HEALTH_RECHARGE_TIME_MODIFIER
- **Return Type**: void
- **Parameters**: Player player, float modifier
- **Description**: Setting player's Health recharge time to zero forces immediate health regen

### SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER
- **Return Type**: void
- **Parameters**: Player player, float multiplier

### _GET_PLAYER_STAMINA_RECHARGE_MULTIPLIER
- **Return Type**: float
- **Parameters**: Player player

### _SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER
- **Return Type**: void
- **Parameters**: Player player, float multiplier

### _GET_PLAYER_STAMINA_DEPLETION_MULTIPLIER
- **Return Type**: float
- **Parameters**: Player player

### _SET_PED_ACTIVE_PLAYER_HORSE
- **Return Type**: void
- **Parameters**: Player player, Ped horse
- **Description**: Seems to work similar to 0xD2CB0FB0FDCB473D

### _GET_ACTIVE_HORSE_FOR_PLAYER
- **Return Type**: Ped
- **Parameters**: Player player

### _SET_PED_AS_SADDLE_HORSE_FOR_PLAYER
- **Return Type**: void
- **Parameters**: Player player, Ped mount

### _GET_SADDLE_HORSE_FOR_PLAYER
- **Return Type**: Ped
- **Parameters**: Player player

### SET_PED_AS_TEMP_PLAYER_HORSE
- **Return Type**: BOOL
- **Parameters**: Player player, Ped horse

### _GET_TEMP_PLAYER_HORSE
- **Return Type**: Ped
- **Parameters**: Player player

### _0x77B0B6D17A3AC9AA
- **Return Type**: void
- **Parameters**: Any p0, Any p1
- **Description**: nullsub, doesn't do anything

### _SET_PLAYER_MOUNT_STATE_ACTIVE
- **Return Type**: void
- **Parameters**: Player player, BOOL active
- **Description**: Name could potentially be inaccurate. Used in Script Function HORSE_SETUP_PLAYER_HORSE_ATTRIBUTES (p1 = true) _SET_PLAYER_L* - _SET_PLAYER_M*

### _0x694FFA4308060CD1
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### BOOST_PLAYER_HORSE_SPEED_FOR_TIME
- **Return Type**: void
- **Parameters**: Player player, float speedBoost, int duration

### SET_PLAYER_WEAPON_DAMAGE_MODIFIER
- **Return Type**: void
- **Parameters**: Player player, float modifier
- **Description**: This modifies the damage value of your weapon. Whether it is a multiplier or base damage is unknown.

### SET_PLAYER_WEAPON_DEFENSE_MODIFIER
- **Return Type**: void
- **Parameters**: Player player, float modifier

### _0x818241B3EDA84191
- **Return Type**: void
- **Parameters**: Player player, BOOL p1
- **Description**: _SET_PLAYER_DAMAGE_* - _SET_PLAYER_DEFENSE_*

### SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER
- **Return Type**: void
- **Parameters**: Player player, float modifier

### _SET_PLAYER_EXPLOSIVE_WEAPON_DAMAGE_MODIFIER
- **Return Type**: void
- **Parameters**: Player player, float modifier

### _0x83C989D5B5B5B466
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x03B4B759A8990505
- **Return Type**: Any
- **Parameters**: Any p0

### _0x67659A8F248E0141
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE
- **Return Type**: void
- **Parameters**: Player player, float damageDecrease
- **Description**: Decreases the damage the player receives while on horseback

### _SET_AI_PLAYER_DEFENSE_MODIFIER_AGAINST_AI
- **Return Type**: void
- **Parameters**: Player player, float modifier
- **Description**: Sets Player's Defense against AI modifier

### _GET_AI_PLAYER_DEFENSE_MODIFIER_AGAINST_AI
- **Return Type**: float
- **Parameters**: Player player

### _0x19B2C7A6C34FAD54
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x9422743A5BA50E10
- **Return Type**: Any
- **Parameters**: Any p0

### _SET_PLAYER_DEFENSE_MODIFIER
- **Return Type**: void
- **Parameters**: Player player, float weaponDefenseMod, float meleeDefenseMod
- **Description**: Sets stamina core drains peed using ranged damage scale and melee damage scale

### _SET_PLAYER_DEFENSE_TYPE_MODIFIER
- **Return Type**: void
- **Parameters**: Player player, int type, float defenseModifier
- **Description**: bullet damage modifier: type = 4 explosive damage Defense mod: type = 7 fire damage Defense mod: type = 8, 15

### SET_PLAYER_WEAPON_TYPE_DAMAGE_MODIFIER
- **Return Type**: void
- **Parameters**: Player player, Hash weaponHash, float damageModifier

### _GET_PLAYER_WEAPON_DAMAGE
- **Return Type**: float
- **Parameters**: Player player, Hash weaponHash

### _0x5C2E5E3CAEEB1F58
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _SET_PLAYER_WEAPON_GROUP_DAMAGE_MODIFIER
- **Return Type**: void
- **Parameters**: Player player, Hash weaponGroup, float modifier

### _SET_PLAYER_WEAPON_GROUP_AS_INSTANT_KILL
- **Return Type**: void
- **Parameters**: Player player, Hash weaponGroup, BOOL toggle

### _SET_PLAYER_TRAMPLE_DAMAGE_MODIFIER
- **Return Type**: void
- **Parameters**: Player player, float modifier

### _SET_PLAYER_LASSO_DAMAGE_PER_SECOND
- **Return Type**: void
- **Parameters**: Player player, float damage
- **Description**: _SET_PLAYER_A* - _SET_PLAYER_C*

### _SET_PLAYER_TOTAL_ACCURACY_MODIFIER
- **Return Type**: void
- **Parameters**: Player player, float accuracy

### _SET_PLAYER_LOCAL_ACCURACY_FLOOR_MODIFIER
- **Return Type**: void
- **Parameters**: Player player, float accuracy

### _SET_PLAYER_REMOTE_ACCURACY_FLOOR_MODIFIER
- **Return Type**: void
- **Parameters**: Player player, float accuracy

### _0x3AD212429E095EFB
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_PLAYER_NOISE_MULTIPLIER
- **Return Type**: void
- **Parameters**: Player player, float multiplier

### _0x113EF458AB6CDA67
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_PLAYER_SNEAKING_NOISE_MULTIPLIER
- **Return Type**: void
- **Parameters**: Player player, float multiplier

### SIMULATE_PLAYER_INPUT_GAIT
- **Return Type**: void
- **Parameters**: Player player, float speed, int duration, float heading, BOOL p4, BOOL p5

### RESET_PLAYER_INPUT_GAIT
- **Return Type**: void
- **Parameters**: Player player

### SET_PLAYER_SIMULATE_AIMING
- **Return Type**: void
- **Parameters**: Player player, BOOL toggle

### SET_PLAYER_CLOTH_PIN_FRAMES
- **Return Type**: void
- **Parameters**: Ped ped, int p1

### HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Player player

### GET_PLAYER_RECEIVED_BATTLE_EVENT_RECENTLY
- **Return Type**: BOOL
- **Parameters**: Player player, int p1, BOOL p2

### _SET_MOUNT_PROMPT_DISABLED
- **Return Type**: void
- **Parameters**: BOOL disabled

### IS_PLAYER_RIDING_TRAIN
- **Return Type**: BOOL
- **Parameters**: Player player
- **Description**: Returns true if the player is riding a train.

### _0x9AFCF9FE1884BF62
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x1E8099F449ABB0BA
- **Return Type**: Any
- **Parameters**: Any p0

### _GET_DEADEYE_ABILITY_LEVEL
- **Return Type**: int
- **Parameters**: Player player

### _SET_DEADEYE_ABILITY_LEVEL
- **Return Type**: void
- **Parameters**: Player player, int level
- **Description**: Max level is 5.

### _IS_DEADEYE_ABILITY_LOCKED
- **Return Type**: BOOL
- **Parameters**: Player player, int abilityType

### _SET_DEADEYE_ABILITY_LOCKED
- **Return Type**: void
- **Parameters**: Player player, int abilityType, BOOL toggle

### _SET_DEADEYE_TAGGING_ENABLED
- **Return Type**: void
- **Parameters**: Player player, BOOL toggle

### _GET_IS_DEADEYE_TAGGING_ENABLED
- **Return Type**: BOOL
- **Parameters**: Player player

### _0x3C4AE8506638C7E2
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x51139D8C17B16FBC
- **Return Type**: Any
- **Parameters**: Any p0

### _0x8F44EBB3BA8F6D44
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_DEADEYE_TAGGING_CONFIG
- **Return Type**: void
- **Parameters**: Player player, int filter

### _0xE92261BD28C0878F
- **Return Type**: Any
- **Parameters**: Any p0

### _SET_DEADEYE_ABILITY_DEPLETION_DELAY
- **Return Type**: void
- **Parameters**: Player player, float delay
- **Description**: Only used in R* SP Script short_update

### _0xA54000D4BFD90BDE
- **Return Type**: Any
- **Parameters**: Any p0

### _0x6EDB5D08CB03E763
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x27AD7162D3FED01E
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _GET_NUM_MARKED_DEADEYE_TARGETS
- **Return Type**: int
- **Parameters**: Player player

### _0xC93A9A45430D484E
- **Return Type**: Any
- **Parameters**: Any p0

### _0x570A13A4CA2799BB
- **Return Type**: void
- **Parameters**: Player player, BOOL p1
- **Description**: Used in script function INIT_DEADEYE_SLOWDOWN

### _0x3ACAC8832E77BC93
- **Return Type**: void
- **Parameters**: Player player, BOOL p1
- **Description**: Used in script function INIT_DEADEYE_SLOWDOWN

### _0x2B12B6FC8B8772AB
- **Return Type**: void
- **Parameters**: Player player, int p1

### _0xE910932F4B30BE23
- **Return Type**: void
- **Parameters**: Player player

### _0x131E294EF60160DF
- **Return Type**: void
- **Parameters**: Player player, float p1, float p2, float p3, float p4, Any p5

### _0x0E9057A9DA78D0F8
- **Return Type**: void
- **Parameters**: Player player, int bitflag

### _0x263D69767F76059C
- **Return Type**: void
- **Parameters**: Player player, int p1

### _REGISTER_EAGLE_EYE_FOR_ENTITY
- **Return Type**: void
- **Parameters**: Player player, Entity entity, BOOL p2
- **Description**: Used for setting up eagle eye for entity Params: p2 = re-register or not?

### _REGISTER_EAGLE_EYE_TRAILS_FOR_ENTITY
- **Return Type**: void
- **Parameters**: Player player, Entity entity, Any p2

### _UNREGISTER_EAGLE_EYE_FOR_ENTITY
- **Return Type**: void
- **Parameters**: Player player, Entity entity

### _UNREGISTER_EAGLE_EYE_TRAILS_FOR_ENTITY
- **Return Type**: void
- **Parameters**: Player player, Entity entity, Any p2

### _0xE5D3EB37ABC1EB03
- **Return Type**: void
- **Parameters**: Player player
- **Description**: _CLEAR_FACIAL_* - _CLEAR_PED_BLOOD*

### _IS_EAGLE_EYE_REGISTERED_FOR_ENTITY
- **Return Type**: BOOL
- **Parameters**: Player player, Entity entity

### _0x6852288340B43239
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xE50A67C33514A390
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xD288E02E364972D2
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _EAGLE_EYE_DISABLE_TRACKING_TRAIL
- **Return Type**: void
- **Parameters**: Entity entity, const char* trail, Any p2, Any p3

### _0x6ECFC621A168424C
- **Return Type**: void
- **Parameters**: Entity entity1, Entity entity2, Any p2, float p3

### _0xDC5E09D012D759C4
- **Return Type**: void
- **Parameters**: Entity entity1, Entity entity2, Any p2

### _0x00B156AFEBCC5AE0
- **Return Type**: void
- **Parameters**: Any p0

### _0xC58CE6824E604DEC
- **Return Type**: void
- **Parameters**: Any p0

### _0x330CA55A3647FA1C
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xA62BBAAE67A05BB0
- **Return Type**: Any
- **Parameters**: Any p0

### _EAGLE_EYE_SET_COLOR
- **Return Type**: void
- **Parameters**: Player player, BOOL p1, Any* p2
- **Description**: false: default eagleeye color true: green eagleeye color

### _0x22C8B10802301381
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _EAGLE_EYE_SET_DRAIN_RATE_MODIFIER
- **Return Type**: void
- **Parameters**: Player player, float modifier

### _0x06E1FB78B1E59CA5
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1

### _EAGLE_EYE_SET_PLUS_FLAG_DISABLED
- **Return Type**: void
- **Parameters**: Ped ped, BOOL disabled

### _0x3813E11A378958A5
- **Return Type**: Any
- **Parameters**: Any p0

### _EAGLE_EYE_SET_FOCUS_ON_ASSOCIATED_CLUE_TRAIL
- **Return Type**: void
- **Parameters**: Player player, Entity linkedWaypointPed

### _0x0F9CF06986300875
- **Return Type**: void
- **Parameters**: Any p0

### _EAGLE_EYE_SET_TRACKING_UPGRADE
- **Return Type**: void
- **Parameters**: Player player, float p1

### _EAGLE_EYE_SET_TRACKING_UPGRADE_2
- **Return Type**: void
- **Parameters**: Player player, float p1

### _0x1DA5C5B0923E1B85
- **Return Type**: Any
- **Parameters**: Any p0

### _0xAAED694CE814817F
- **Return Type**: Any
- **Parameters**: Any p0

### EAGLE_EYE_SET_CUSTOM_ENTITY_TINT
- **Return Type**: void
- **Parameters**: Entity entity, int red, int green, int blue

### _0xBC02B3D151D3859F
- **Return Type**: void
- **Parameters**: Entity entity, Any p1

### _EAGLE_EYE_SET_CUSTOM_DISTANCE
- **Return Type**: void
- **Parameters**: Entity entity, float distance

### _0xF21C7A3F3FFBA629
- **Return Type**: void
- **Parameters**: Player player
- **Description**: _CLEAR_FACIAL_* - _CLEAR_PED_BLOOD*

### _SET_PLAYER_MANAGE_BUFF_SUPER_JUMP
- **Return Type**: void
- **Parameters**: Player player, float p1

### _SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG
- **Return Type**: void
- **Parameters**: int flagId, BOOL toggle
- **Description**: see personaabilities.meta enum ePersonaAbilityFlag { PERSONA_CAN_AUTOESCAPE_FROM_LASSO, PERSONA_HAT_BLOCKS_FIRST_HEADSHOT, PERSONA_FULL_AUTO_FOR_ALL_WEAPONS, PERSONA_MIGHT_LIVE_AFTER_DEADLY_DAMAGE, PERSONA_IGNORE_AIM_BEFORE_FIRING_RESTRICTIONS, PERSONA_DEADEYE_INSTANT_RELOAD, PERSONA_USE_PHOSPHOROUS_ROUNDS, PERSONA_CONT_DEADEYE_ON_TAKING_COVER, PERSONA_CONT_DEADEYE_ON_RELOAD, PERSONA_CONT_DEADEYE_ON_SHOOTING, PERSONA_CONT_DEADEYE_ON_EXITING_AIM, PERSONA_DISABLE_PLAYER_CANCELLING_DEADEYE, PERSONA_CONT_DEADEYE_ON_RAGDOLL, PERSONA_USE_EXPLOSIVE_ROUNDS, PERSONA_EXIT_DEADEYE_ON_TAKING_DAMAGE, PERSONA_CARRY_TWO_MONEYBAGS, PERSONA_ABILITY_LONG_PICK_HERBS, PERSONA_ABILITY_UNBREAKABLE_LASSO, PERSONA_CONT_DEADEYE_ON_SPRINTING, PERSONA_CANT_DEAL_HEADSHOTS, PERSONA_HANGMAN, PERSONA_ALLOW_DEADEYE_WITH_MELEE_WEAPONS, PERSONA_ALLOW_DEADEYE_WHILE_UNARMED, PERSONA_DISABLE_DEADEYE_PERFECT_ACCURACY, PERSONA_CANT_DEAL_HEADSHOTS_TO_PLAYERS, PERSONA_CANT_DEAL_CRITICAL_DAMAGE, PERSONA_CANT_DEAL_CRITICAL_DAMAGE_TO_PLAYERS, PERSONA_ALLOW_EAGLEEYE_IN_COMBAT, PERSONA_CONT_EAGLEEYE_ON_SPRINT, PERSONA_SUPPRESS_LENGENDARY_EAGLEEYE_TRAIL_COLOR };

### _SET_PLAYER_MAX_AMMO_OVERRIDE_FOR_AMMO_TYPE
- **Return Type**: void
- **Parameters**: Player player, Hash ammoType, int amount

### _0xC900A465364A85D6
- **Return Type**: void
- **Parameters**: Player player

### _0xCFB2EED4FCB7BD77
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x2BB8D58E88777499
- **Return Type**: void
- **Parameters**: Any p0

### _0x00EB5A760638DB55
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x65887EAC535A0B0C
- **Return Type**: void
- **Parameters**: Any p0

### _SET_WEAPON_DEGRADATION_MODIFIER
- **Return Type**: void
- **Parameters**: Player player, float modifier

### _SET_BOW_DRAW_REDUCTION_TIME_IN_DEADEYE
- **Return Type**: void
- **Parameters**: Player player, float drawReductionTime

### _SET_BOW_STAMINA_DRAIN_SPEED
- **Return Type**: void
- **Parameters**: Player player, float staminaDrain
- **Description**: Decreases Stamina bar drain speed by % when drawing a bow.

### _SET_DAMAGE_CLOSE_DISTANCE_BONUS
- **Return Type**: void
- **Parameters**: Player player, float closeRangeLowerBound, float closeRangeUpperBound

### _SET_DAMAGE_CLOSE_DISTANCE_BONUS_TOTAL
- **Return Type**: void
- **Parameters**: Player player, float closeDamageBonus

### _SET_DAMAGE_FAR_DISTANCE_BONUS
- **Return Type**: void
- **Parameters**: Player player, float farRangeLowerBound, float farRangeUpperBound

### _SET_DAMAGE_FAR_DISTANCE_BONUS_TOTAL
- **Return Type**: void
- **Parameters**: Player player, float farDamageBonus

### _0x6C54E69516CC56BD
- **Return Type**: Any
- **Parameters**: Any p0

### _0x3A8611BD7BDE84F7
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xC177C827CEFC0AA4
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xBD96185264DDAAEA
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x628E742FE1F79C4A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_PLAYER_INTERACTION_POSITIVE_RESPONSE
- **Return Type**: void
- **Parameters**: Player player, const char* speech

### _SET_PLAYER_INTERACTION_NEGATIVE_RESPONSE
- **Return Type**: void
- **Parameters**: Player player, const char* speech

### _0x216BC0D3D2E413D2
- **Return Type**: void
- **Parameters**: Player player, Any p1

### _0x45EF176B532CA851
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xA342495F93B7B838
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x3BB84F812E052C90
- **Return Type**: void
- **Parameters**: Any p0

### _0x9FC5A003FB76EDBD
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x0FAF95D71ED67ADE
- **Return Type**: void
- **Parameters**: Player player, const char* p1

### _0x988C9045531B9FCE
- **Return Type**: void
- **Parameters**: Player player, const char* p1

### _0x06C3DB00B69D5435
- **Return Type**: void
- **Parameters**: Player player, const char* p1

### _0xBB6EA5D59E926095
- **Return Type**: void
- **Parameters**: int category, Hash emote
- **Description**: NPEW__ENUM__EMOTE_CATEGORY_INVALID = -1 NPEW__ENUM__EMOTE_CATEGORY_ACTIONS NPEW__ENUM__EMOTE_CATEGORY_ANTAGONIZE NPEW__ENUM__EMOTE_CATEGORY_REACTIONS NPEW__ENUM__EMOTE_CATEGORY_GREET NPEW__ENUM__NUM_EMOTE_CATEGORIES NPEW__ENUM__NUM_DISPLAY_TEXTURES

### _0xE1D356F5A66D0FFA
- **Return Type**: BOOL
- **Parameters**: Hash emote

### _0x929DDD5538F3DF1F
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xFA7DAAE3959E6C7B
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x9461A8FAB0378E5B
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xCB61A63AA53D7D22
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xCFFC3ECCD7A5CCEB
- **Return Type**: void
- **Parameters**: Player player, Hash weapon, BOOL p2

### _0x76F7E1BCD623A429
- **Return Type**: void
- **Parameters**: Any p0

### _0x585CE159DB46FADB
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_PLAYER_RESET_FLAG
- **Return Type**: void
- **Parameters**: Player player, int playerResetFlag, BOOL p2
- **Description**: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/ePlayerResetFlags https://github.com/femga/rdr3_discoveries/tree/master/AI/PLAYER_RESET_FLAGS

### _GET_PLAYER_RESET_FLAG
- **Return Type**: BOOL
- **Parameters**: Player player, int playerResetFlag
- **Description**: playerResetFlag: See 0x9F9A829C6751F3C7

### GET_MOUNT_OWNED_BY_PLAYER
- **Return Type**: Ped
- **Parameters**: Player player

### _GET_PLAYER_OWNER_OF_MOUNT
- **Return Type**: Player
- **Parameters**: Ped mount

### _SET_PLAYER_OWNS_MOUNT
- **Return Type**: void
- **Parameters**: Player player, Ped mount
- **Description**: Seems to enable active horse equipment prompt when being near it and enables the control that opens the inventory as well

### _GET_VEHICLE_OWNED_BY_PLAYER
- **Return Type**: Vehicle
- **Parameters**: Player player

### _GET_PLAYER_OWNER_OF_VEHICLE
- **Return Type**: Player
- **Parameters**: Vehicle vehicle

### _SET_PLAYER_OWNS_VEHICLE
- **Return Type**: void
- **Parameters**: Player player, Vehicle vehicle

### _GET_PLAYER_HUNTING_WAGON
- **Return Type**: Vehicle
- **Parameters**: Player player

### _SET_PLAYER_HUNTING_WAGON
- **Return Type**: void
- **Parameters**: Player player, Vehicle wagon
- **Description**: Only applies to HUNTERCART01

### _0x9044835BE9D9DBFE
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY
- **Return Type**: Hash
- **Parameters**: Entity entity, Hash* type
- **Description**: Returns name hash (name) and outHash includes the type.

### _GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME
- **Return Type**: Hash
- **Parameters**: Hash p0, BOOL model, BOOL outfit
- **Description**: p0: mostly Ped Hashes

### GET_TARGET_CHARACTER_NAME_SCRIPT_OVERRIDE_HASH
- **Return Type**: Hash
- **Parameters**: Ped ped

### GET_TARGET_CHARACTER_NAME_FOR_LOCAL_PLAYER
- **Return Type**: Hash
- **Parameters**: Ped ped

### _0xDA9D7BE231FE865F
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP
- **Return Type**: void
- **Parameters**: Player player, int p1, Hash discoveryHash

### _GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_SP
- **Return Type**: BOOL
- **Parameters**: Player player, int p1, Hash discoveryHash

### _0xCDDD4B74660E2335
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x77E83C315A3B31CA
- **Return Type**: void
- **Parameters**: Any p0

### _SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP
- **Return Type**: void
- **Parameters**: Hash discoveryHash

### GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP
- **Return Type**: BOOL
- **Parameters**: Hash discoveryHash

### _MODIFY_PLAYER_DISCOVERED_CHARACTER_NAME_MP_SET_UNDISCOVERED
- **Return Type**: void
- **Parameters**: Hash discoveryHash

### _SET_SHOW_INFO_CARD
- **Return Type**: void
- **Parameters**: Player player, BOOL showingInfoCard

### _0x4DBC4873707E8FD6
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0xCEDC16930526F728
- **Return Type**: void
- **Parameters**: Any p0

### _0x14E57F88BA0A07FC
- **Return Type**: void
- **Parameters**: Hash location

### _0x2E1ABE627C95ED9B
- **Return Type**: Any
- **Parameters**: 

### _0x497A18F8F88AA9D8
- **Return Type**: void
- **Parameters**: 

### _0x4F0D2256AAE94EDA
- **Return Type**: void
- **Parameters**: int p0

### _SET_LOCKON_FOCUS_FIRE_VFX
- **Return Type**: void
- **Parameters**: Player player, const char* p1
- **Description**: Focus Fire VFX start for player: p1 = focusfire

### _0x0B7803F6F7BB43E0
- **Return Type**: Any
- **Parameters**: 
- **Description**: Hardcoded to return zero/false.

### _0xC74EB3F2EC169F6B
- **Return Type**: Any
- **Parameters**: Any p0
- **Description**: Hardcoded to return zero/false.

### _0x3B296934DB026873
- **Return Type**: void
- **Parameters**: Any p0, Any p1
- **Description**: nullsub, doesn't do anything

### SET_MIN_TIME_BEFORE_HORSE_BUCKING
- **Return Type**: void
- **Parameters**: Ped mount, int iMinBuckTime

### _0xF4CB347D7B5EB0FD
- **Return Type**: Any
- **Parameters**: 

### _0xCD7CA3013FD12749
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _FORCE_REST_SCENARIO
- **Return Type**: void
- **Parameters**: BOOL toggle

### _0x57028FD99886F6F9
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: _IS_PLAYER_D* - _IS_PLAYER_F*

### _0x35A33783EC3C3448
- **Return Type**: void
- **Parameters**: Any p0

### _0x39D8D7082BC34B72
- **Return Type**: void
- **Parameters**: Any p0

### _0x1AD8AD999C27F44A
- **Return Type**: void
- **Parameters**: Any p0


## POPULATION
### GET_NUM_MODELS_IN_POPULATION_SET
- **Return Type**: int
- **Parameters**: Hash popSetHash

### GET_PED_MODEL_NAME_IN_POPULATION_SET
- **Return Type**: Hash
- **Parameters**: Hash popSetHash, int index

### GET_RANDOM_MODEL_FROM_POPULATION_SET
- **Return Type**: Hash
- **Parameters**: Hash popSetHash, int flags, Hash p2, BOOL p3, BOOL p4, float x, float y, float z

### GET_RANDOM_MODEL_FROM_POPULATION_SET
- **Return Type**: Hash
- **Parameters**: Hash popSetHash, int flags, Hash p2, BOOL p3, BOOL p4, Vector3 vec

### _CREATE_POPZONE_FROM_VOLUME
- **Return Type**: PopZone
- **Parameters**: Volume volume

### _DELETE_SCRIPT_POPZONE
- **Return Type**: void
- **Parameters**: PopZone popZone

### _IS_POPZONE_VALID
- **Return Type**: BOOL
- **Parameters**: PopZone popZone

### SET_POPZONE_POPULATION_SET
- **Return Type**: void
- **Parameters**: PopZone popZone, Hash populationSetHash

### _0x7E6BC0B94F5928F0
- **Return Type**: void
- **Parameters**: PopZone popZone, int p1, int p2

### _0x578E2FA64E847C60
- **Return Type**: void
- **Parameters**: PopZone popZone, int p1

### _0x08892122769770D5
- **Return Type**: void
- **Parameters**: PopZone popZone, BOOL p1

### _0x0F1861101C9A9944
- **Return Type**: void
- **Parameters**: PopZone popZone, BOOL p1

### SET_SPAWNER_INFO_PRIORITY
- **Return Type**: void
- **Parameters**: Hash p0, Hash p1, int priority

### CLEAR_SPAWNER_INFO_PRIORITY
- **Return Type**: void
- **Parameters**: Hash p0, Hash p1

### _0x638FCFC6042A9473
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _ADD_AMBIENT_AVOIDANCE_RESTRICTION
- **Return Type**: void
- **Parameters**: Volume volume, int includeFlags, int excludeFlags, Hash p3, Hash p4, Hash p5, int p6
- **Description**: flags: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/PedFilterFlags

### _REMOVE_AMBIENT_AVOIDANCE_RESTRICTION
- **Return Type**: void
- **Parameters**: Volume volume
- **Description**: flags: see 0xB56D41A694E42E86

### _ADD_AMBIENT_SPAWN_RESTRICTION
- **Return Type**: void
- **Parameters**: Volume volume, int includeFlags, int excludeFlags, Hash p3, Hash p4, Hash p5, int p6
- **Description**: flags: see 0xB56D41A694E42E86

### _REMOVE_AMBIENT_SPAWN_RESTRICTION
- **Return Type**: void
- **Parameters**: Volume volume

### _0x2161278C6322F740
- **Return Type**: void
- **Parameters**: int includeFlags, int excludeFlags, int p2, Hash p3, int p4, Volume volume

### _0xF45E46DEECF7DF6E
- **Return Type**: void
- **Parameters**: int bitFlag, Any p1, Any p2, Any p3, Any p4

### _0x8EC7CD701F872F87
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### _0xC4533E3E87125C9E
- **Return Type**: void
- **Parameters**: Any p0

### _SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES
- **Return Type**: void
- **Parameters**: Ped ped, int p1
- **Description**: Params: p1 = 1 & 2 in R* Scripts, 0 = Disable avoidance, 1 = Enabled avoidance, 2 = Enabled avoidance (?)

### _0xDBBF12EA7C1029B2
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x247F86595D396344
- **Return Type**: void
- **Parameters**: Any p0

### _0x324AB2A68AD8AEE5
- **Return Type**: void
- **Parameters**: 

### DISABLE_AMBIENT_ROAD_POPULATION
- **Return Type**: void
- **Parameters**: BOOL unk

### ENABLE_AMBIENT_ROAD_POPULATION
- **Return Type**: void
- **Parameters**: 

### _0x2660E7720EDC4BD0
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _GET_RANDOM_FISH_TYPE_FOR_LOCATION
- **Return Type**: Hash
- **Parameters**: 
- **Description**: Returns model hash of the closest fish

### _0xEC116EDB683AD479
- **Return Type**: void
- **Parameters**: BOOL p0
- **Description**: Only used for Special Event (XMAS). _SET_P*


## POSSE
### _0xC086FF658B2E51DB
- **Return Type**: Any
- **Parameters**: 

### _0xC086FF658B2E51DA
- **Return Type**: Any
- **Parameters**: Any p0

### _0xC087FF658B2E51DA
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### POSSE_GET_POSSE_MEMBERSHIP_COUNT
- **Return Type**: int
- **Parameters**: 

### _0xC089FF658B2E51DA
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xC08AFF658B2E51DA
- **Return Type**: void
- **Parameters**: Any p0

### _0xC08BFF658B2E51DA
- **Return Type**: Any
- **Parameters**: Any p0

### _0xC08AFF658B2E51DB
- **Return Type**: void
- **Parameters**: Any p0

### _0xC08CFF658B2E51DA
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xC09CFF658B2E51DA
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0xC08DEF658B2E51DA
- **Return Type**: Any
- **Parameters**: Any p0

### _0xC08DFF658B2E51DA
- **Return Type**: Any
- **Parameters**: 

### _0xC08DFF658B2E51DB
- **Return Type**: Any
- **Parameters**: Any p0

### _0xC08EFF658B2E51DB
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xC08FFF658B2E51DA
- **Return Type**: Any
- **Parameters**: 

### _0xC08FFF658B2E51DB
- **Return Type**: Any
- **Parameters**: Any p0

### _0xC084FF658B2E61DA
- **Return Type**: Any
- **Parameters**: Any p0

### _0xC084FF658B2E71DA
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0xC084FF658B2E81DA
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0xC084FF658B2E52DA
- **Return Type**: Any
- **Parameters**: Any p0

### _0xC084FF658B2E53DA
- **Return Type**: Any
- **Parameters**: 

### _0xC084FF658B2E54DA
- **Return Type**: Any
- **Parameters**: Any p0

### _0xC084FF658B2E55DA
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xC484FF658B2E55DA
- **Return Type**: void
- **Parameters**: Any p0

### _0xC584FF658B2E55DA
- **Return Type**: void
- **Parameters**: Any p0

### _0xC684FF658B2E55DA
- **Return Type**: void
- **Parameters**: Any p0

### _0xC184FF658B2E55DA
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xC284FF658B2E55DA
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0xC394FF658B2E55DA
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0xC07CFF658B2E51DA
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xC06CFF658B2E51DA
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2


## PROPSET
### _REQUEST_PROP_SET
- **Return Type**: BOOL
- **Parameters**: Hash hash

### _REQUEST_PROP_SET_2
- **Return Type**: BOOL
- **Parameters**: Hash hash
- **Description**: Same as _REQUEST_PROP_SET

### _HAS_PROP_SET_LOADED
- **Return Type**: BOOL
- **Parameters**: Hash hash

### _HAS_PROP_SET_LOADED_2
- **Return Type**: BOOL
- **Parameters**: Hash hash
- **Description**: Same as _HAS_PROP_SET_LOADED

### _SET_PROP_SET_AS_NO_LONGER_NEEDED
- **Return Type**: void
- **Parameters**: PropSet propSet

### _DELETE_PROP_SET
- **Return Type**: void
- **Parameters**: PropSet propSet, BOOL p1, BOOL p2

### _RELEASE_PROP_SET
- **Return Type**: BOOL
- **Parameters**: Hash hash

### _CREATE_PROP_SET
- **Return Type**: PropSet
- **Parameters**: Hash propsetType, float x, float y, float z, int placementType, float heading, float zProbe, BOOL p7, BOOL useVegMod
- **Description**: propsetType: https://github.com/femga/rdr3_discoveries/blob/master/objects/propsets_list.lua placementType: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/PlacementType

### _CREATE_PROP_SET
- **Return Type**: PropSet
- **Parameters**: Hash propsetType, Vector3 vec, int placementType, float heading, float zProbe, BOOL p7, BOOL useVegMod

### _CREATE_PROP_SET_2
- **Return Type**: PropSet
- **Parameters**: Hash propsetType, float x, float y, float z, int placementType, float heading, float zProbe, BOOL p7, BOOL useVegMod
- **Description**: Same as _CREATE_PROP_SET

### _CREATE_PROP_SET_2
- **Return Type**: PropSet
- **Parameters**: Hash propsetType, Vector3 vec, int placementType, float heading, float zProbe, BOOL p7, BOOL useVegMod

### CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY
- **Return Type**: PropSet
- **Parameters**: Hash hash, float x, float y, float z, Entity entity, float p5, BOOL p6, int p7, BOOL p8

### CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY
- **Return Type**: PropSet
- **Parameters**: Hash hash, Vector3 vec, Entity entity, float p5, BOOL p6, int p7, BOOL p8

### _CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY_2
- **Return Type**: PropSet
- **Parameters**: Hash hash, float x, float y, float z, Entity entity, float p5, BOOL p6, int p7, BOOL p8
- **Description**: Same as CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY

### _CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY_2
- **Return Type**: PropSet
- **Parameters**: Hash hash, Vector3 vec, Entity entity, float p5, BOOL p6, int p7, BOOL p8

### DOES_PROP_SET_EXIST
- **Return Type**: BOOL
- **Parameters**: PropSet propSet

### _DOES_PROP_SET_OF_TYPE_EXIST_NEAR_COORDS
- **Return Type**: BOOL
- **Parameters**: Hash propsetHash, float x, float y, float z

### _DOES_PROP_SET_OF_TYPE_EXIST_NEAR_COORDS
- **Return Type**: BOOL
- **Parameters**: Hash propsetHash, Vector3 vec

### IS_PROP_SET_FULLY_LOADED
- **Return Type**: BOOL
- **Parameters**: PropSet propSet

### _SET_PROP_SET_VISIBLE
- **Return Type**: void
- **Parameters**: PropSet propSet, BOOL toggle

### _IS_PROP_SET_VISIBLE
- **Return Type**: BOOL
- **Parameters**: PropSet propSet

### _GET_PROP_SET_MODEL
- **Return Type**: Hash
- **Parameters**: PropSet propSet

### _GET_VEHICLE_PROP_SET_HASH
- **Return Type**: Hash
- **Parameters**: Vehicle vehicle

### _GET_ENTITIES_FROM_PROP_SET
- **Return Type**: int
- **Parameters**: PropSet propSet, ItemSet itemSet, Hash model, BOOL p3, BOOL p4

### _0xC4B67EF3FD65622D
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### _0x58E0B01D45CA7357
- **Return Type**: void
- **Parameters**: Any p0

### _SET_PROP_SET_FLAG
- **Return Type**: void
- **Parameters**: PropSet propSet, int flag

### _GET_VEHICLE_PROP_SET
- **Return Type**: PropSet
- **Parameters**: Vehicle vehicle

### _DOES_VEHICLE_HAVE_ANY_PROP_SET
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle

### _ADD_PROP_SET_FOR_VEHICLE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, Hash propset
- **Description**: List of vehicle propsets (wagons & trains): https://pastebin.com/1CsnvGLu / https://pastebin.com/v7TtqTgE

### _REMOVE_VEHICLE_PROP_SETS
- **Return Type**: void
- **Parameters**: Vehicle vehicle

### _IS_VEHICLE_PROP_SET_LOADED
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle

### _ADD_ADDITIONAL_PROP_SET_FOR_VEHICLE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, Hash propset
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/vehicles/vehicle_modding/vehicle_propsets.lua

### _IS_VEHICLE_PROP_SET_LOADED_ADDITIONAL
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle

### _GET_VEHICLE_LIGHT_PROP_SET
- **Return Type**: PropSet
- **Parameters**: Vehicle vehicle
- **Description**: Returns PropSet handle to be used with _GET_PROP_SET_MODEL

### _DOES_VEHICLE_HAVE_ANY_LIGHT_PROP_SET
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle

### _ADD_LIGHT_PROP_SET_TO_VEHICLE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, Hash lightPropset
- **Description**: To remove propsets either parse a zero as hash or call 0xE31C0CB1C3186D40 0xA6A9712955F53D9C returns lightPropset Hashes https://github.com/femga/rdr3_discoveries/blob/master/vehicles/vehicle_modding/vehicle_lantern_propsets.lua

### _REMOVE_VEHICLE_LIGHT_PROP_SETS
- **Return Type**: void
- **Parameters**: Vehicle vehicle

### _IS_VEHICLE_LIGHT_PROP_SET_LOADED
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle

### _GET_TRAIN_CARRIAGE_PROP_SET
- **Return Type**: PropSet
- **Parameters**: Entity trainCarriage
- **Description**: Example before/after deleting a train carriage's propset: https://imgur.com/a/qRNrIrK

### _HAS_VEHICLE_TRAILER_PROP_SET_LOADED
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, int wagonIndex

### _GET_PROP_SET_AT_COORDS
- **Return Type**: PropSet
- **Parameters**: Hash propsetHash, float x, float y, float z

### _GET_PROP_SET_AT_COORDS
- **Return Type**: PropSet
- **Parameters**: Hash propsetHash, Vector3 vec


## QUEUE
### _EVENT_QUEUE_IS_EMPTY
- **Return Type**: BOOL
- **Parameters**: Hash hash

### _EVENT_QUEUE_POP
- **Return Type**: void
- **Parameters**: Hash hash


## RECORDING
### REPLAY_PREVENT_RECORDING_THIS_FRAME
- **Return Type**: void
- **Parameters**: 
- **Description**: nullsub, doesn't do anything  Old name: _STOP_RECORDING_THIS_FRAME


## REPLAY
### REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Hardcoded to return false.  Old name: _IS_INTERIOR_RENDERING_DISABLED

### SET_SCRIPTS_HAVE_CLEANED_UP_FOR_REPLAY_SYSTEM
- **Return Type**: void
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### OPEN_VIDEO_EDITOR
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Hardcoded to return true.

### CLOSE_VIDEO_EDITOR
- **Return Type**: BOOL
- **Parameters**: Any p0
- **Description**: Hardcoded to return true.

### IS_VIDEO_EDITOR_RUNNING
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Hardcoded to return false.


## SCRIPTS
### _SET_PLAYER_BIT_AT_INDEX
- **Return Type**: void
- **Parameters**: Any* value, int bitIndex

### _CLEAR_PLAYER_BIT_AT_INDEX
- **Return Type**: void
- **Parameters**: Any* value, int bitIndex

### _0xE4ABE20DCE7C7CFE
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0xFFDDF802279BE128
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x64F765D9A1F8F02C
- **Return Type**: void
- **Parameters**: Any* p0, Any* p1, Any* p2

### _SET_ALL_PLAYER_BITS
- **Return Type**: void
- **Parameters**: Any* value

### _CLEAR_ALL_PLAYER_BITS
- **Return Type**: void
- **Parameters**: Any* value

### _IS_PLAYER_BIT_SET_AT_INDEX
- **Return Type**: BOOL
- **Parameters**: Any* value, int bitIndex

### _IS_ANY_PLAYER_BIT_SET
- **Return Type**: BOOL
- **Parameters**: int* playerBits

### GET_BLOCK_OF_PLAYER_BITS
- **Return Type**: int
- **Parameters**: Any* value, int p1

### SET_BLOCK_OF_PLAYER_BITS
- **Return Type**: void
- **Parameters**: Any* value, int p1, int p2

### COUNT_PLAYER_BITS
- **Return Type**: int
- **Parameters**: Any* value

### _0x1BDB5A07307F6929
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x1C5EB3C27F7508CB
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x42A429CDFED6D99D
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x5827BE85A87B073D
- **Return Type**: void
- **Parameters**: Any p0

### _0x0A79C81C418F5D38
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xA88E1D7FA1E20080
- **Return Type**: Any
- **Parameters**: Any p0

### COUNT_PARTICIPANT_BITS
- **Return Type**: int
- **Parameters**: Any* value

### REQUEST_SCRIPT
- **Return Type**: void
- **Parameters**: const char* scriptName

### SET_SCRIPT_AS_NO_LONGER_NEEDED
- **Return Type**: void
- **Parameters**: const char* scriptName

### HAS_SCRIPT_LOADED
- **Return Type**: BOOL
- **Parameters**: const char* scriptName
- **Description**: Returns if a script has been loaded into the game. Used to see if a script was loaded after requesting.

### DOES_SCRIPT_EXIST
- **Return Type**: BOOL
- **Parameters**: const char* scriptName

### REQUEST_SCRIPT_WITH_NAME_HASH
- **Return Type**: void
- **Parameters**: Hash scriptHash

### SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED
- **Return Type**: void
- **Parameters**: Hash scriptHash

### HAS_SCRIPT_WITH_NAME_HASH_LOADED
- **Return Type**: BOOL
- **Parameters**: Hash scriptHash

### DOES_SCRIPT_WITH_NAME_HASH_EXIST
- **Return Type**: BOOL
- **Parameters**: Hash scriptHash

### TERMINATE_THREAD
- **Return Type**: void
- **Parameters**: int threadId

### IS_THREAD_ACTIVE
- **Return Type**: BOOL
- **Parameters**: int threadId, BOOL ignoreKilledState

### DOES_THREAD_EXIST
- **Return Type**: BOOL
- **Parameters**: int threadId

### GET_THREAD_EXISTENCE_DETAILS
- **Return Type**: void
- **Parameters**: int threadId, BOOL* threadExists, BOOL* hasScriptHandler

### _GET_HASH_OF_THREAD
- **Return Type**: Hash
- **Parameters**: int threadId

### SCRIPT_THREAD_ITERATOR_RESET
- **Return Type**: void
- **Parameters**: 
- **Description**: Starts a new iteration of the current threads. Call this first, then SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID (0x30B4FA1C82DD4B9F)

### SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID
- **Return Type**: int
- **Parameters**: 
- **Description**: If the function returns 0, the end of the iteration has been reached.

### _IS_BACKGROUND_SCRIPT
- **Return Type**: BOOL
- **Parameters**: int threadId

### GET_ID_OF_THIS_THREAD
- **Return Type**: int
- **Parameters**: 

### TERMINATE_THIS_THREAD
- **Return Type**: void
- **Parameters**: 

### GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH
- **Return Type**: int
- **Parameters**: Hash scriptHash
- **Description**: Gets the number of instances of the specified script is currently running.  Actually returns numRefs - 1. if (program) v3 = rage::scrProgram::GetNumRefs(program) - 1; return v3;  Old name: _GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH

### _REQUEST_THREAD_EXIT
- **Return Type**: void
- **Parameters**: int threadId

### _REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME
- **Return Type**: void
- **Parameters**: Hash nameHash

### IS_THREAD_EXIT_REQUESTED
- **Return Type**: BOOL
- **Parameters**: 

### _IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID
- **Return Type**: BOOL
- **Parameters**: int threadId

### _GET_THREAD_EXIT_REASON
- **Return Type**: int
- **Parameters**: 
- **Description**: enum eThreadExitReason { THREAD_EXIT_REASON_NONE, THREAD_EXIT_REASON_BACKGROUND_THREAD_STOPPED, THREAD_EXIT_REASON_SESSION_MERGE, THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE, THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT };

### GET_HASH_OF_THIS_SCRIPT_NAME
- **Return Type**: Hash
- **Parameters**: 

### GET_NUMBER_OF_EVENTS
- **Return Type**: int
- **Parameters**: int eventGroup
- **Description**: eventGroup: 0 = SCRIPT_EVENT_QUEUE_AI (CEventGroupScriptAI), 1 = SCRIPT_EVENT_QUEUE_NETWORK (CEventGroupScriptNetwork), 2 = unk, 3 = unk, 4 = SCRIPT_EVENT_QUEUE_ERRORS (CEventGroupScriptErrors)

### GET_EVENT_EXISTS
- **Return Type**: BOOL
- **Parameters**: int eventGroup, Hash eventType
- **Description**: eventGroup: 0 = SCRIPT_EVENT_QUEUE_AI (CEventGroupScriptAI), 1 = SCRIPT_EVENT_QUEUE_NETWORK (CEventGroupScriptNetwork), 2 = unk, 3 = unk, 4 = SCRIPT_EVENT_QUEUE_SCRIPT_ERRORS (CEventGroupScriptErrors)

### GET_EVENT_AT_INDEX
- **Return Type**: Hash
- **Parameters**: int eventGroup, int eventIndex
- **Description**: eventGroup: 0 = SCRIPT_EVENT_QUEUE_AI (CEventGroupScriptAI), 1 = SCRIPT_EVENT_QUEUE_NETWORK (CEventGroupScriptNetwork), 2 = unk, 3 = unk, 4 = SCRIPT_EVENT_QUEUE_SCRIPT_ERRORS (CEventGroupScriptErrors)  Returns event name hash: https://alloc8or.re/rdr3/doc/enums/eEventType.txt

### GET_EVENT_DATA
- **Return Type**: BOOL
- **Parameters**: int eventGroup, int eventIndex, Any* eventData, int eventDataSize
- **Description**: eventGroup: 0 = SCRIPT_EVENT_QUEUE_AI (CEventGroupScriptAI), 1 = SCRIPT_EVENT_QUEUE_NETWORK (CEventGroupScriptNetwork), 2 = unk, 3 = unk, 4 = SCRIPT_EVENT_QUEUE_SCRIPT_ERRORS (CEventGroupScriptErrors)  Note: eventDataSize is NOT the size in bytes, it is the size determined by the SIZE_OF operator (RAGE Script operator, not C/C++ sizeof). That is, the size in bytes divided by 8 (script variables are always 8-byte aligned!).  https://github.com/femga/rdr3_discoveries/tree/master/AI/EVENTS

### SET_EVENT_FLAG_FOR_DELETION
- **Return Type**: void
- **Parameters**: int eventGroup, int eventIndex, BOOL p2

### TRIGGER_SCRIPT_EVENT
- **Return Type**: void
- **Parameters**: int eventGroup, Any* eventData, int eventDataSize, int scriptMetadataIndex, int* playerBits
- **Description**: eventGroup: 0 = SCRIPT_EVENT_QUEUE_AI (CEventGroupScriptAI), 1 = SCRIPT_EVENT_QUEUE_NETWORK (CEventGroupScriptNetwork), 2 = unk, 3 = unk, 4 = SCRIPT_EVENT_QUEUE_SCRIPT_ERRORS (CEventGroupScriptErrors)  Note: eventDataSize is NOT the size in bytes, it is the size determined by the SIZE_OF operator (RAGE Script operator, not C/C++ sizeof). That is, the size in bytes divided by 8 (script variables are always 8-byte aligned!).  playerBits (also known as playersToBroadcastTo) is a bitset that indicates which players this event should be sent to. In order to send the event to specific players only, use (1 << playerIndex). Set all bits if it should be broadcast to all players.

### _TRIGGER_SCRIPT_EVENT_2
- **Return Type**: void
- **Parameters**: Any* eventData, int eventDataSize, int scriptMetadataIndex, int threadId

### _0xE7282390542F570D
- **Return Type**: Any
- **Parameters**: Any p0

### _0x11B0A0B282FA9B10
- **Return Type**: void
- **Parameters**: BOOL p0
- **Description**: Used in Script Function DISABLE_REGISTERED_WORLD_BRAINS

### _0x6F700A4BF7C3331B
- **Return Type**: void
- **Parameters**: BOOL p0

### _0xF9E951A1E5517C06
- **Return Type**: void
- **Parameters**: 

### _0x76CBCD9EADC00955
- **Return Type**: void
- **Parameters**: 

### SHUTDOWN_LOADING_SCREEN
- **Return Type**: void
- **Parameters**: 

### SET_NO_LOADING_SCREEN
- **Return Type**: void
- **Parameters**: BOOL toggle

### GET_NO_LOADING_SCREEN
- **Return Type**: BOOL
- **Parameters**: 

### _DISPLAY_LOADING_SCREENS
- **Return Type**: void
- **Parameters**: Hash p0, Hash p1, Hash p2, const char* gamemodeName, const char* title, const char* subtitle

### _0x29FB4CE89472C3CB
- **Return Type**: void
- **Parameters**: Any p0, Any p1, float p2, float p3, const char* p4, const char* p5, const char* p6, int p7

### STOP_DISPLAYING_MP_TRANSITION_LOADING_SCREENS
- **Return Type**: void
- **Parameters**: Any p0

### IS_LOADING_SCREEN_VISIBLE
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Same as GET_IS_LOADING_SCREEN_ACTIVE

### BAIL_TO_LANDING_PAGE
- **Return Type**: void
- **Parameters**: int bailCode

### BAIL_WITH_PASS_THROUGH_PARAMS
- **Return Type**: void
- **Parameters**: const char* params

### BG_IS_EXITFLAG_SET
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Returns true if GtaThread+0x77C is equal to 1.  Old name: _BG_EXITED_BECAUSE_BACKGROUND_THREAD_STOPPED

### BG_SET_EXITFLAG_RESPONSE
- **Return Type**: void
- **Parameters**: 
- **Description**: Sets bit 0 in GtaThread+0x784

### BG_START_CONTEXT_HASH
- **Return Type**: void
- **Parameters**: Hash contextHash
- **Description**: Hashed version of BG_START_CONTEXT

### BG_END_CONTEXT_HASH
- **Return Type**: void
- **Parameters**: Hash contextHash
- **Description**: Hashed version of BG_END_CONTEXT

### BG_START_CONTEXT
- **Return Type**: void
- **Parameters**: const char* contextName
- **Description**: Inserts the given context into the background scripts context map.

### BG_END_CONTEXT
- **Return Type**: void
- **Parameters**: const char* contextName
- **Description**: Deletes the given context from the background scripts context map.

### BG_DOES_LAUNCH_PARAM_EXIST
- **Return Type**: BOOL
- **Parameters**: int scriptIndex, const char* p1

### BG_GET_LAUNCH_PARAM_VALUE
- **Return Type**: int
- **Parameters**: int scriptIndex, const char* p1

### BG_GET_SCRIPT_ID_FROM_NAME_HASH
- **Return Type**: int
- **Parameters**: Hash p0

### _BG_RELOAD_ALL_BACKGROUND_SCRIPTS
- **Return Type**: void
- **Parameters**: 

### _ACTIVATE_GOAL_CONTEXT
- **Return Type**: void
- **Parameters**: Hash goalContext
- **Description**: goalContext: see <availableContexts> in common/data/stats_and_challenges/goals_*.meta

### _DEACTIVATE_GOAL_CONTEXT
- **Return Type**: void
- **Parameters**: Hash goalContext
- **Description**: goalContext: see _ACTIVATE_GOAL_CONTEXT

### _IS_GOAL_CONTEXT_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Hash goalContext
- **Description**: goalContext: see _ACTIVATE_GOAL_CONTEXT

### AWARDS_GET_RESULT_ITEM
- **Return Type**: BOOL
- **Parameters**: Any* rpcGuid, Hash awardHash, int itemIndex, Any* outResultItem

### _AWARDS_GET_UNLOCK_CLAIM_DATA
- **Return Type**: BOOL
- **Parameters**: Any* rpcGuid, Hash awardHash, int dataIndex, Any* outUnlockData

### _LOOT_GET_RESULT_ITEM
- **Return Type**: BOOL
- **Parameters**: Any* rpcGuid, int itemIndex, Any* outResultItem

### _LOOT_GET_LOOT_CLAIM_DATA
- **Return Type**: BOOL
- **Parameters**: Any* rpcGuid, int dataIndex, Any* outLootData

### _STORE_GLOBAL_BLOCK
- **Return Type**: BOOL
- **Parameters**: int index

### _RESTORE_GLOBAL_BLOCK
- **Return Type**: BOOL
- **Parameters**: int index

### _DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST
- **Return Type**: BOOL
- **Parameters**: int index

### _SET_GLOBAL_BLOCK_CAN_BE_ACCESSED
- **Return Type**: void
- **Parameters**: int index, BOOL toggle

### _GET_GLOBAL_BLOCK_CAN_BE_ACCESSED
- **Return Type**: BOOL
- **Parameters**: int index

### _SET_ALL_GLOBAL_BLOCKS_HAVE_BEEN_LOADED
- **Return Type**: void
- **Parameters**: BOOL toggle

### HAVE_ALL_CHILD_SCRIPTS_TERMINATED
- **Return Type**: BOOL
- **Parameters**: int p0
- **Description**: Waiting for child scripts to terminate / waiting for collapse of child scripts

### START_NEW_SCRIPT
- **Return Type**: int
- **Parameters**: const char* scriptName, int stackSize

### START_NEW_SCRIPT_WITH_ARGS
- **Return Type**: int
- **Parameters**: const char* scriptName, Any* args, int argCount, int stackSize
- **Description**: return : script thread id, 0 if failed Pass pointer to struct of args in p1, size of struct goes into p2

### START_NEW_SCRIPT_WITH_NAME_HASH
- **Return Type**: int
- **Parameters**: Hash scriptHash, int stackSize

### START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS
- **Return Type**: int
- **Parameters**: Hash scriptHash, Any* args, int argCount, int stackSize


## SAVE
### _0x4FB5869E2B37FC00
- **Return Type**: void
- **Parameters**: 

### SAVEGAME_SAVE_SP
- **Return Type**: BOOL
- **Parameters**: Hash savegameType
- **Description**: enum eSavegameType : Hash { SAVEGAMETYPE_AMBIENT = 0x3CA4E1F8, SAVEGAMETYPE_DEFAULT = 0xCB6ED080, SAVEGAMETYPE_DELETE_CHAR = 0xCD35F947, SAVEGAMETYPE_END_CREATE_NEWCHAR = 0x4C50A3CE, SAVEGAMETYPE_END_MATCH = 0xE470ED50, SAVEGAMETYPE_END_MISSION = 0x9A444E54, SAVEGAMETYPE_END_SESSION = 0x6D23956C, SAVEGAMETYPE_END_SHOPPING = 0xA311A6C4, SAVEGAMETYPE_RANKUP = 0xE25F8017, SAVEGAMETYPE_SCRIPT_MP_GLOBALS = 0xAFF30AD4, SAVEGAMETYPE_SP_AUTOSAVE = 0xF4AE69EC, SAVEGAMETYPE_SP_DEBUG = 0x6A8122FD, SAVEGAMETYPE_SP_PROPERTY = 0xAE0AB38E };

### SAVEGAME_SAVE_MP
- **Return Type**: BOOL
- **Parameters**: Hash savegameType
- **Description**: See SAVEGAME_SAVE_SP

### SAVEGAME_IS_SAVE_PENDING
- **Return Type**: BOOL
- **Parameters**: 

### _0x1431540BCA1A1BD2
- **Return Type**: Any
- **Parameters**: 

### _0xA7ECEBAFBAF997A5
- **Return Type**: Any
- **Parameters**: Hash savegameType

### _0xED4B0C1057892B2E
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x9BB83C4DD7BE0802
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0xE8346E62FD7FB962
- **Return Type**: void
- **Parameters**: 

### _0xC0ABF784590798A9
- **Return Type**: void
- **Parameters**: Any p0

### _0xB00CE33465B5406D
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _SAVEGAME_GET_INT_2
- **Return Type**: void
- **Parameters**: Any* p0, const char* variableName
- **Description**: Does the exact same as 0x529B9CCD0972AF4E Commonly used with time/timestamps

### _SAVEGAME_GET_INT
- **Return Type**: void
- **Parameters**: Any* p0, const char* variableName

### _SAVEGAME_GET_INT_3
- **Return Type**: void
- **Parameters**: Any* p0, const char* variableName
- **Description**: Does the exact same as 0x529B9CCD0972AF4E Commonly used with enums and flags

### _SAVEGAME_GET_FLOAT
- **Return Type**: void
- **Parameters**: Any* p0, const char* variableName

### _SAVEGAME_GET_BOOL
- **Return Type**: void
- **Parameters**: Any* p0, const char* variableName
- **Description**: Does the exact same as 0x529B9CCD0972AF4E

### _SAVEGAME_GET_TEXT_LABEL_23
- **Return Type**: void
- **Parameters**: Any* p0, const char* variableName

### _SAVEGAME_GET_TEXT_LABEL_31
- **Return Type**: void
- **Parameters**: Any* p0, const char* variableName

### _SAVEGAME_GET_TEXT_LABEL_63
- **Return Type**: void
- **Parameters**: Any* p0, const char* variableName

### _0x443174C20B8B9E7F
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x8E8FFB9E4AD051D2
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0xE0B45E983BFC0768
- **Return Type**: void
- **Parameters**: 

### _0x81F4E92BE3958364
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0xA844FEB5C22C2C74
- **Return Type**: void
- **Parameters**: 


## SHAPETEST
### START_SHAPE_TEST_LOS_PROBE
- **Return Type**: ScrHandle
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8
- **Description**: Asynchronously starts a line-of-sight (raycast) world probe shape test.  Use the handle with 0x3D87450E15D98694 or 0x65287525D951F6BE until it returns 0 or 2.  p8 is a bit mask with bits 1, 2 and/or 4, relating to collider types; 4 should usually be used.

### START_SHAPE_TEST_LOS_PROBE
- **Return Type**: ScrHandle
- **Parameters**: Vector3 vec1, Vector3 vec2, int flags, Entity entity, int p8

### _0x04AA59CA40571C2E
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE
- **Return Type**: ScrHandle
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entityToIgnore, int p8
- **Description**: Does the same as 0x7EE9F5D83DD4F90E, except blocking until the shape test completes.

### START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE
- **Return Type**: ScrHandle
- **Parameters**: Vector3 vec1, Vector3 vec2, int flags, Entity entityToIgnore, int p8

### START_SHAPE_TEST_BOX
- **Return Type**: ScrHandle
- **Parameters**: float posX, float posY, float posZ, float dimensionsX, float dimensionsY, float dimensionsZ, float rotX, float rotY, float rotZ, int rotationOrder, int flags, Entity entityToIgnore, int options

### START_SHAPE_TEST_BOX
- **Return Type**: ScrHandle
- **Parameters**: Vector3 pos, Vector3 dimensions, Vector3 rot, int rotationOrder, int flags, Entity entityToIgnore, int options

### START_SHAPE_TEST_CAPSULE
- **Return Type**: ScrHandle
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entityToIgnore, int p9

### START_SHAPE_TEST_CAPSULE
- **Return Type**: ScrHandle
- **Parameters**: Vector3 vec1, Vector3 vec2, float radius, int flags, Entity entityToIgnore, int p9

### START_SHAPE_TEST_SWEPT_SPHERE
- **Return Type**: ScrHandle
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, Any p9

### START_SHAPE_TEST_SWEPT_SPHERE
- **Return Type**: ScrHandle
- **Parameters**: Vector3 vec1, Vector3 vec2, float radius, int flags, Entity entity, Any p9

### START_SHAPE_TEST_MOUSE_CURSOR_LOS_PROBE
- **Return Type**: ScrHandle
- **Parameters**: Vector3* pVec1, Vector3* pVec2, int flag, Entity entity, int flag2
- **Description**: Old name: _START_SHAPE_TEST_SURROUNDING_COORDS

### GET_SHAPE_TEST_RESULT
- **Return Type**: int
- **Parameters**: ScrHandle shapeTestHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Entity* entityHit
- **Description**: Returns the result of a shape test: 0 if the handle is invalid, 1 if the shape test is still pending, or 2 if the shape test has completed, and the handle should be invalidated.  When used with an asynchronous shape test, this native should be looped until returning 0 or 2, after which the handle is invalidated.  enum eShapeTestStatus { SHAPETEST_STATUS_NONEXISTENT, SHAPETEST_STATUS_RESULTS_NOTREADY, SHAPETEST_STATUS_RESULTS_READY };


## SOCIALCLUB
### SC_INBOX_GET_TOTAL_NUM_MESSAGES
- **Return Type**: int
- **Parameters**: 

### SC_INBOX_GET_MESSAGE_TYPE_AT_INDEX
- **Return Type**: Hash
- **Parameters**: int msgIndex

### SC_INBOX_GET_MESSAGE_IS_READ_AT_INDEX
- **Return Type**: BOOL
- **Parameters**: int msgIndex

### SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX
- **Return Type**: BOOL
- **Parameters**: int msgIndex

### SC_INBOX_MESSAGE_GET_DATA_INT
- **Return Type**: BOOL
- **Parameters**: int p0, const char* context, int* out

### SC_INBOX_MESSAGE_GET_DATA_STRING
- **Return Type**: BOOL
- **Parameters**: int p0, const char* context, char* out

### SC_PRESENCE_ATTR_SET_FLOAT
- **Return Type**: BOOL
- **Parameters**: Hash attrHash, float value

### SC_PRESENCE_ATTR_SET_INT_EX
- **Return Type**: BOOL
- **Parameters**: const char* attrName, int value, BOOL p2

### SC_PRESENCE_ATTR_SET_FLOAT_EX
- **Return Type**: BOOL
- **Parameters**: const char* attrName, float value, BOOL p2

### SC_PRESENCE_ATTR_SET_STRING_EX
- **Return Type**: BOOL
- **Parameters**: const char* attrName, const char* value, BOOL p2

### SC_PROFANITY_CHECK_STRING
- **Return Type**: BOOL
- **Parameters**: const char* string, int* token
- **Description**: Starts a task to check an entered string for profanity on the ROS/Social Club services.

### SC_PROFANITY_GET_CHECK_IS_VALID
- **Return Type**: BOOL
- **Parameters**: int token

### SC_PROFANITY_GET_CHECK_IS_PENDING
- **Return Type**: BOOL
- **Parameters**: int token

### SC_PROFANITY_GET_STRING_PASSED
- **Return Type**: BOOL
- **Parameters**: int token

### SC_PROFANITY_GET_STRING_STATUS
- **Return Type**: int
- **Parameters**: int token

### SC_COMMUNITY_EVENT_IS_ACTIVE
- **Return Type**: BOOL
- **Parameters**: 

### SC_COMMUNITY_EVENT_GET_EVENT_ID
- **Return Type**: int
- **Parameters**: 

### SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT
- **Return Type**: BOOL
- **Parameters**: const char* p0, int* p1

### SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT
- **Return Type**: BOOL
- **Parameters**: const char* p0, float* p1

### SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING
- **Return Type**: BOOL
- **Parameters**: const char* p0, char* p1

### SC_COMMUNITY_EVENT_GET_DISPLAY_NAME
- **Return Type**: BOOL
- **Parameters**: char* p0

### SC_COMMUNITY_EVENT_IS_ACTIVE_FOR_TYPE
- **Return Type**: BOOL
- **Parameters**: const char* p0

### SC_COMMUNITY_EVENT_GET_EVENT_ID_FOR_TYPE
- **Return Type**: int
- **Parameters**: const char* p0

### SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_FOR_TYPE
- **Return Type**: BOOL
- **Parameters**: const char* p0, int* p1, const char* p2

### SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_FOR_TYPE
- **Return Type**: BOOL
- **Parameters**: const char* p0, float* p1, const char* p2

### SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_FOR_TYPE
- **Return Type**: BOOL
- **Parameters**: const char* p0, char* p1, const char* p2

### SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_FOR_TYPE
- **Return Type**: BOOL
- **Parameters**: char* p0, const char* p1

### SC_COMMUNITY_EVENT_IS_ACTIVE_BY_ID
- **Return Type**: BOOL
- **Parameters**: int p0

### SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_BY_ID
- **Return Type**: BOOL
- **Parameters**: int p0, const char* p1, int* p2

### SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_BY_ID
- **Return Type**: BOOL
- **Parameters**: int p0, const char* p1, float* p2

### SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_BY_ID
- **Return Type**: BOOL
- **Parameters**: int p0, const char* p1, char* p2

### SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_BY_ID
- **Return Type**: BOOL
- **Parameters**: int p0, char* p1


## SOCIALCLUBFEED
### _SC_FEED_SUBMIT_PRESET_MESSAGE
- **Return Type**: int
- **Parameters**: int type, int subType

### SC_FEED_HUB_HAS_NEW_DATA
- **Return Type**: BOOL
- **Parameters**: 


## SPACTIONPROXY
### _SPACTIONPROXY_START_MANAGER
- **Return Type**: BOOL
- **Parameters**: 

### _SPACTIONPROXY_MANAGER_IS_READY
- **Return Type**: BOOL
- **Parameters**: 

### _SPACTIONPROXY_MANAGER_IS_FAILED
- **Return Type**: BOOL
- **Parameters**: 

### _SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION
- **Return Type**: BOOL
- **Parameters**: Any* data

### _SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION
- **Return Type**: BOOL
- **Parameters**: Any* data

### _SPACTIONPROXY_PROCESS_ACTION
- **Return Type**: BOOL
- **Parameters**: Any p0, BOOL p1


## STATS
### STAT_ID_IS_VALID
- **Return Type**: BOOL
- **Parameters**: Any* statId
- **Description**: struct StatId { alignas(8) Hash BaseId; alignas(8) Hash PermutationId; }

### STAT_ID_SET_INT
- **Return Type**: BOOL
- **Parameters**: Any* statId, int value, BOOL p2
- **Description**: statId: see STAT_ID_IS_VALID

### STAT_ID_SET_FLOAT
- **Return Type**: BOOL
- **Parameters**: Any* statId, float value, BOOL p2
- **Description**: statId: see STAT_ID_IS_VALID

### STAT_ID_SET_BOOL
- **Return Type**: BOOL
- **Parameters**: Any* statId, BOOL value, BOOL p2
- **Description**: statId: see STAT_ID_IS_VALID

### STAT_ID_SET_GXT_LABEL
- **Return Type**: BOOL
- **Parameters**: Any* statId, const char* label, BOOL p2
- **Description**: statId: see STAT_ID_IS_VALID

### STAT_ID_SET_DATE
- **Return Type**: BOOL
- **Parameters**: Any* statId, Any* date, BOOL p2
- **Description**: statId: see STAT_ID_IS_VALID

### STAT_ID_GET_INT
- **Return Type**: BOOL
- **Parameters**: Any* statId, int* p1
- **Description**: statId: see STAT_ID_IS_VALID

### STAT_ID_GET_FLOAT
- **Return Type**: BOOL
- **Parameters**: Any* statId, float* value
- **Description**: statId: see STAT_ID_IS_VALID

### STAT_ID_GET_BOOL
- **Return Type**: BOOL
- **Parameters**: Any* statId, BOOL* value
- **Description**: statId: see STAT_ID_IS_VALID

### STAT_ID_GET_DATE
- **Return Type**: BOOL
- **Parameters**: Any* statId, Any* date
- **Description**: statId: see STAT_ID_IS_VALID

### _0x0FEE2561120F3333
- **Return Type**: void
- **Parameters**: Any* statId
- **Description**: statId: see STAT_ID_IS_VALID

### _STAT_ID_INCREMENT_INT
- **Return Type**: void
- **Parameters**: Any* statId, int value
- **Description**: statId: see STAT_ID_IS_VALID

### _STAT_ID_INCREMENT_FLOAT
- **Return Type**: void
- **Parameters**: Any* statId, float value
- **Description**: statId: see STAT_ID_IS_VALID

### _STAT_ID_DECREMENT_INT
- **Return Type**: void
- **Parameters**: Any* statId, int value
- **Description**: statId: see STAT_ID_IS_VALID

### _0x91A4F58E01ED5E4C
- **Return Type**: void
- **Parameters**: Any* statId, int value
- **Description**: statId: see STAT_ID_IS_VALID

### _0xE141F6B40B1E3683
- **Return Type**: void
- **Parameters**: Any* statId, float value
- **Description**: statId: see STAT_ID_IS_VALID Only used in R* SP Scripts _STAT_ID_SET_*

### STAT_ID_SET_TO_POSSE_ID
- **Return Type**: void
- **Parameters**: Any* statId
- **Description**: statId: see STAT_ID_IS_VALID

### _STAT_CALCULATE_COOLDOWN
- **Return Type**: int
- **Parameters**: int value
- **Description**: Calculation: (value / 1000) / 60 % 60

### _STAT_PHEROMONE_COOLDOWN_LEGENDARY_ANIMAL
- **Return Type**: BOOL
- **Parameters**: Entity entity, Any* statId
- **Description**: statId: see STAT_ID_IS_VALID

### _STAT_ITEM_FISH_CAUGHT
- **Return Type**: void
- **Parameters**: Ped fish, float weight, Hash category, Hash subcategory

### _STAT_CARRIED_SATCHEL_ITEM_FROM_PED
- **Return Type**: void
- **Parameters**: Ped ped

### _STAT_DONATE_INCREMENT_ITEM
- **Return Type**: void
- **Parameters**: int item, int slot, Any p2, Any p3

### _0x8312F09C56149A8A
- **Return Type**: void
- **Parameters**: Hash animalType
- **Description**: Only used in R* SP Scripts

### _0x378D3B1B11D9385B
- **Return Type**: void
- **Parameters**: int p0

### _0xDA26263C07CCE9C2
- **Return Type**: void
- **Parameters**: int p0

### _0xD64DBC8B0424135F
- **Return Type**: void
- **Parameters**: Ped ped, Hash animalType

### _0xA59590050F80FF2E
- **Return Type**: void
- **Parameters**: Any p0, BOOL p1, BOOL p2, BOOL p3
- **Description**: Only used in R* SP Scripts

### _STAT_ADD_ANIMAL_SAMPLE_TARGET
- **Return Type**: void
- **Parameters**: Hash animalType
- **Description**: Related to animal tagging

### _0xF8181B5EF156862C
- **Return Type**: void
- **Parameters**: Ped ped

### STAT_ADD_BOUNTY_TARGET
- **Return Type**: void
- **Parameters**: Hash unlockHash, Ped ped

### _0x8C889E4CBB4B2356
- **Return Type**: void
- **Parameters**: Any p0, Ped ped

### STAT_BOUNTY_CAPTURED
- **Return Type**: void
- **Parameters**: Entity entity

### _0xA596890CF55B5095
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1

### STAT_BOUNTY_ESCAPED
- **Return Type**: void
- **Parameters**: Ped ped

### _0xF21A5D66874FCEDD
- **Return Type**: void
- **Parameters**: Any p0, Hash p1, Hash p2

### _0x3EB2791A1FBC8A42
- **Return Type**: void
- **Parameters**: Hash statItem, int p1

### _0xDF95DF488A645CE7
- **Return Type**: void
- **Parameters**: 

### STAT_PHOTOGRAPH_TAKEN
- **Return Type**: void
- **Parameters**: ItemSet itemset

### _0xBE66B26B6529E943
- **Return Type**: void
- **Parameters**: Hash unlockHash, Ped ped, Hash animalType

### _0xF2B5ABDE09958689
- **Return Type**: void
- **Parameters**: Hash unlockHash, Ped ped1, Ped ped2

### STAT_REGISTER_LEGENDARY_ANIMAL_DEED
- **Return Type**: void
- **Parameters**: Hash deedHash

### _0x302E71C1D9EE75B9
- **Return Type**: BOOL
- **Parameters**: Any* statId, Hash p1, int* p2
- **Description**: statId: see STAT_ID_IS_VALID

### STATSTRACKER_IS_INITIALIZED
- **Return Type**: BOOL
- **Parameters**: Hash p0

### _0x6123E2832C34243D
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0xCA41E86545413B5B
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### STATSTRACKER_DEED_STARTED
- **Return Type**: void
- **Parameters**: Hash p0, Any p1

### _STATSTRACKER_DEED_STATUS
- **Return Type**: void
- **Parameters**: int deedType, Hash deedHash, int missionStatus, Any* data

### _0x99230691875FC218
- **Return Type**: void
- **Parameters**: Any p0, Hash p1, float x, float y, float z

### _0x99230691875FC218
- **Return Type**: void
- **Parameters**: Any p0, Hash p1, Vector3 vec

### _0x025E98E317652CDD
- **Return Type**: void
- **Parameters**: int p0

### _0xE5A680A5D8B1F687
- **Return Type**: void
- **Parameters**: int p0

### _0x4DAC398297981B87
- **Return Type**: BOOL
- **Parameters**: int p0
- **Description**: Only used in R* SP Scripts

### CHAL_IS_GOAL_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Hash chalHash, Hash goalHash
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/AI/EVENTS/challenge_goals.lua

### CHAL_SET_GOAL_DISABLED
- **Return Type**: void
- **Parameters**: Hash chalHash, Hash goalHash, BOOL disabled

### CHAL_GET_NUM_RANKS_COMPLETED
- **Return Type**: int
- **Parameters**: Hash chalHash

### CHAL_GET_MAX_RANKS
- **Return Type**: int
- **Parameters**: Hash chalHash

### CHAL_ADD_GOAL_PROGRESS_INT
- **Return Type**: void
- **Parameters**: Hash chalHash, Hash goalHash, int value

### CHAL_ADD_GOAL_PROGRESS_FLOAT
- **Return Type**: void
- **Parameters**: Hash chalHash, Hash goalHash, float value

### CHAL_SET_GOAL_PROGRESS_INT
- **Return Type**: void
- **Parameters**: Hash chalHash, Hash goalHash, int value

### CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID
- **Return Type**: void
- **Parameters**: Hash p0, int value

### CHAL_ADD_GOAL_PROGRESS_FLOAT_BY_SCORE_ID
- **Return Type**: void
- **Parameters**: Hash p0, float value

### CHAL_ACHIEVEMENT_IS_COMPLETE
- **Return Type**: BOOL
- **Parameters**: Hash p0, Hash p1

### CHAL_ACHIEVEMENT_GET_PROGRESS_INT
- **Return Type**: int
- **Parameters**: Hash p0, Hash p1

### CHAL_NET_START_CHAL
- **Return Type**: void
- **Parameters**: Hash chalHash

### CHAL_NET_STOP_CHAL
- **Return Type**: void
- **Parameters**: Hash chalHash

### CHAL_NET_START_GOAL
- **Return Type**: void
- **Parameters**: Hash chalHash, Hash goalHash

### CHAL_NET_STOP_GOAL
- **Return Type**: void
- **Parameters**: Hash chalHash, Hash goalHash

### _0xDDBD560745B1EE98
- **Return Type**: int
- **Parameters**: Hash chalHash, Hash goalHash, Player player

### _0x4FCBCC0584CD08E9
- **Return Type**: void
- **Parameters**: Hash p0

### _0xCA1F0B5103936891
- **Return Type**: BOOL
- **Parameters**: Hash p0

### _0x8BA3D7B1E83EF803
- **Return Type**: Hash
- **Parameters**: Hash p0

### CHAL_MISSION_GET_NUM_GOALS
- **Return Type**: int
- **Parameters**: Hash missionHash

### CHAL_MISSION_GET_NUM_GOALS_COMPLETE
- **Return Type**: int
- **Parameters**: Hash missionHash

### CHAL_MISSION_IS_GOAL_COMPLETE
- **Return Type**: BOOL
- **Parameters**: Hash missionHash, Hash goalHash

### CHAL_MISSION_ADD_GOAL_PROGRESS_INT
- **Return Type**: void
- **Parameters**: Hash missionHash, Hash goalHash, int value

### _0x9D0F5D2E1951CD84
- **Return Type**: float
- **Parameters**: 

### _0x218F7710A139D012
- **Return Type**: void
- **Parameters**: 

### _0x3AEABAE3F3C7600C
- **Return Type**: BOOL
- **Parameters**: 

### _0xA2E2BEA4E83F6270
- **Return Type**: Any
- **Parameters**: Hash p0

### _0xB5E2EDA2135E0FA1
- **Return Type**: BOOL
- **Parameters**: Hash p0, int p1, Hash* scheduleLocation

### WEEKLY_COLLECTIBLE_GET_NUM_SETS
- **Return Type**: int
- **Parameters**: Hash chalHash

### WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD
- **Return Type**: Hash
- **Parameters**: Hash chalHash, int index

### WEEKLY_COLLECTIBLE_GET_ITEM_SET_LABEL
- **Return Type**: Hash
- **Parameters**: Hash chalHash, int index

### WEEKLY_COLLECTIBLE_GET_NUM_ITEMS_IN_SET
- **Return Type**: int
- **Parameters**: Hash chalHash, int index

### WEEKLY_COLLECTIBLE_GET_ITEM_IN_SET
- **Return Type**: BOOL
- **Parameters**: Hash chalHash, int setIndex, int itemIndex, Hash* p3, int* p4

### _0x4F2D5FA23DB992DE
- **Return Type**: void
- **Parameters**: 
- **Description**: Only used in R* Script net_char_creator

### _0x4E463A3CDEFFFE96
- **Return Type**: void
- **Parameters**: 
- **Description**: Only used in R* Script net_char_creator


## STREAMING
### REQUEST_MODEL
- **Return Type**: void
- **Parameters**: Hash model, BOOL p1
- **Description**: Request a model to be loaded into memory.

### HAS_MODEL_LOADED
- **Return Type**: BOOL
- **Parameters**: Hash model
- **Description**: Checks if the specified model has loaded into memory.

### SET_MODEL_AS_NO_LONGER_NEEDED
- **Return Type**: void
- **Parameters**: Hash model
- **Description**: Marks the model as no longer needed.

### IS_MODEL_IN_CDIMAGE
- **Return Type**: BOOL
- **Parameters**: Hash model
- **Description**: Returns whether the specified model exists in the game.

### IS_MODEL_VALID
- **Return Type**: BOOL
- **Parameters**: Hash model
- **Description**: Returns whether the specified model is valid

### IS_MODEL_A_PED
- **Return Type**: BOOL
- **Parameters**: Hash model

### IS_MODEL_A_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Hash model
- **Description**: Returns whether the specified model represents a vehicle.

### _IS_MODEL_AN_OBJECT
- **Return Type**: BOOL
- **Parameters**: Hash model

### _HAS_COLLISION_LOADED_AT_COORD
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z

### _HAS_COLLISION_LOADED_AT_COORD
- **Return Type**: BOOL
- **Parameters**: Vector3 vec

### _0x80B3E0597366ADF1
- **Return Type**: void
- **Parameters**: 

### REQUEST_COLLISION_AT_COORD
- **Return Type**: void
- **Parameters**: float x, float y, float z

### REQUEST_COLLISION_AT_COORD
- **Return Type**: void
- **Parameters**: Vector3 vec

### _REQUEST_METADATA_AT_COORD
- **Return Type**: void
- **Parameters**: float x, float y, float z

### _REQUEST_METADATA_AT_COORD
- **Return Type**: void
- **Parameters**: Vector3 vec

### REQUEST_COLLISION_FOR_MODEL
- **Return Type**: void
- **Parameters**: Hash model

### HAS_COLLISION_FOR_MODEL_LOADED
- **Return Type**: BOOL
- **Parameters**: Hash model

### REQUEST_ADDITIONAL_COLLISION_AT_COORD
- **Return Type**: void
- **Parameters**: float x, float y, float z

### REQUEST_ADDITIONAL_COLLISION_AT_COORD
- **Return Type**: void
- **Parameters**: Vector3 vec

### DOES_ANIM_DICT_EXIST
- **Return Type**: BOOL
- **Parameters**: const char* animDict

### REQUEST_ANIM_DICT
- **Return Type**: void
- **Parameters**: const char* animDict

### HAS_ANIM_DICT_LOADED
- **Return Type**: BOOL
- **Parameters**: const char* animDict

### REMOVE_ANIM_DICT
- **Return Type**: void
- **Parameters**: const char* animDict

### REQUEST_MOVE_NETWORK_DEF
- **Return Type**: void
- **Parameters**: const char* name

### HAS_MOVE_NETWORK_DEF_LOADED
- **Return Type**: BOOL
- **Parameters**: const char* name

### REMOVE_MOVE_NETWORK_DEF
- **Return Type**: void
- **Parameters**: const char* name

### REQUEST_CLIP_SET
- **Return Type**: void
- **Parameters**: const char* clipSet

### HAS_CLIP_SET_LOADED
- **Return Type**: BOOL
- **Parameters**: const char* clipSet
- **Description**: Alias for HAS_ANIM_SET_LOADED.

### REMOVE_CLIP_SET
- **Return Type**: void
- **Parameters**: const char* clipSet
- **Description**: Alias for REMOVE_ANIM_SET.

### _REQUEST_CLIP_SET_BY_HASH
- **Return Type**: void
- **Parameters**: Hash clipSetHash

### _0x03DDBF2D73799F9E
- **Return Type**: void
- **Parameters**: Any p0

### _0x85B8F04555AB49B8
- **Return Type**: Any
- **Parameters**: Any p0

### _0x9F348DE670423460
- **Return Type**: void
- **Parameters**: Any p0

### _0x5288B7F0690F7C1F
- **Return Type**: Any
- **Parameters**: Any p0

### _REQUEST_SCENARIO_TYPE
- **Return Type**: int
- **Parameters**: Hash scenarioType, int p1, Any p2, Any p3

### _HAS_SCENARIO_TYPE_LOADED
- **Return Type**: BOOL
- **Parameters**: Hash scenarioType, BOOL p1

### _REMOVE_SCENARIO_ASSET
- **Return Type**: Any
- **Parameters**: Hash scenarioType

### _0xB223249B7798EEED
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0xA0AE7653E8181725
- **Return Type**: Any
- **Parameters**: Any p0

### _0x66BC28E50E85270E
- **Return Type**: Any
- **Parameters**: Any p0

### _GET_IPL_BOUNDING_SPHERE
- **Return Type**: BOOL
- **Parameters**: Hash iplHash, Vector3* position, float* radius
- **Description**: Outputs IPL position and radius (previously wrongly named heading) https://github.com/femga/rdr3_discoveries/blob/master/imaps/imaps_with_coords_and_heading.lua

### REQUEST_IPL_HASH
- **Return Type**: void
- **Parameters**: Hash iplHash
- **Description**: Old name: _REQUEST_IMAP

### REQUEST_IPL_BY_HASH
- **Return Type**: void
- **Parameters**: Hash iplHash
- **Description**: Old name: _REQUEST_IMAP_2

### REMOVE_IPL_HASH
- **Return Type**: void
- **Parameters**: Hash iplHash
- **Description**: Old name: _REMOVE_IMAP

### REMOVE_IPL_BY_HASH
- **Return Type**: void
- **Parameters**: Hash iplHash
- **Description**: Old name: _REMOVE_IMAP_2

### IS_IPL_ACTIVE_HASH
- **Return Type**: BOOL
- **Parameters**: Hash iplHash
- **Description**: Old name: _IS_IMAP_ACTIVE

### IS_IPL_ACTIVE_BY_HASH
- **Return Type**: BOOL
- **Parameters**: Hash iplHash
- **Description**: Old name: _IS_IMAP_ACTIVE_2

### _IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS
- **Return Type**: BOOL
- **Parameters**: Hash iplHash, float x, float y, float z
- **Description**: Returns true if IPL is streamed in (?)

### _IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS
- **Return Type**: BOOL
- **Parameters**: Hash iplHash, Vector3 vec

### _0xDEEE1F265B7ECEF5
- **Return Type**: void
- **Parameters**: 

### SET_GAME_PAUSES_FOR_STREAMING
- **Return Type**: void
- **Parameters**: BOOL toggle

### GET_NUMBER_OF_STREAMING_REQUESTS
- **Return Type**: int
- **Parameters**: 

### REQUEST_PTFX_ASSET
- **Return Type**: void
- **Parameters**: 

### HAS_PTFX_ASSET_LOADED
- **Return Type**: BOOL
- **Parameters**: 

### REMOVE_PTFX_ASSET
- **Return Type**: void
- **Parameters**: 

### REQUEST_NAMED_PTFX_ASSET
- **Return Type**: void
- **Parameters**: Hash fxNameHash

### HAS_NAMED_PTFX_ASSET_LOADED
- **Return Type**: BOOL
- **Parameters**: Hash fxNameHash

### REMOVE_NAMED_PTFX_ASSET
- **Return Type**: void
- **Parameters**: Hash fxNameHash

### SET_POPULATION_BUDGET_MULTIPLIER
- **Return Type**: void
- **Parameters**: float fBudgetMultiplier

### GET_POPULATION_BUDGET_MULTIPLIER
- **Return Type**: float
- **Parameters**: 

### _0x071769BCB24379E5
- **Return Type**: Any
- **Parameters**: 

### CLEAR_FOCUS
- **Return Type**: void
- **Parameters**: 

### SET_FOCUS_POS_AND_VEL
- **Return Type**: void
- **Parameters**: float x, float y, float z, float offsetX, float offsetY, float offsetZ

### SET_FOCUS_POS_AND_VEL
- **Return Type**: void
- **Parameters**: Vector3 vec, Vector3 offset

### SET_FOCUS_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity
- **Description**: It seems to make the entity's coords mark the point from which LOD-distances are measured. In my testing, setting a vehicle as the focus entity and moving that vehicle more than 300 distance units away from the player will make the level of detail around the player go down drastically (shadows disappear, textures go extremely low res, etc). The player seems to be the default focus entity.

### IS_ENTITY_FOCUS
- **Return Type**: BOOL
- **Parameters**: Entity entity

### SET_MAPDATACULLBOX_ENABLED
- **Return Type**: void
- **Parameters**: const char* name, BOOL toggle

### SET_ALL_MAPDATA_CULLED
- **Return Type**: void
- **Parameters**: Any p0
- **Description**: nullsub, doesn't do anything

### _0xF01D21DF39554115
- **Return Type**: void
- **Parameters**: Any p0

### LOAD_SCENE_START
- **Return Type**: BOOL
- **Parameters**: float posX, float posY, float posZ, float offsetX, float offsetY, float offsetZ, float radius, int p7

### LOAD_SCENE_START
- **Return Type**: BOOL
- **Parameters**: Vector3 pos, Vector3 offset, float radius, int p7

### LOAD_SCENE_START_SPHERE
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, float radius, Any p4

### LOAD_SCENE_START_SPHERE
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, float radius, Any p4

### LOAD_SCENE_STOP
- **Return Type**: void
- **Parameters**: 

### IS_LOAD_SCENE_ACTIVE
- **Return Type**: BOOL
- **Parameters**: 

### IS_LOAD_SCENE_LOADED
- **Return Type**: BOOL
- **Parameters**: 

### IS_RENDERED_SCENE_LOADED
- **Return Type**: BOOL
- **Parameters**: 

### IS_PLAYER_SWITCH_IN_PROGRESS
- **Return Type**: BOOL
- **Parameters**: 

### SET_SCENE_STREAMING_TRACKS_CAM_POS_THIS_FRAME
- **Return Type**: void
- **Parameters**: 

### IPL_GROUP_SWAP_START
- **Return Type**: void
- **Parameters**: const char* iplName1, const char* iplName2

### IPL_GROUP_SWAP_CANCEL
- **Return Type**: void
- **Parameters**: 

### IPL_GROUP_SWAP_IS_READY
- **Return Type**: BOOL
- **Parameters**: 

### IPL_GROUP_SWAP_FINISH
- **Return Type**: void
- **Parameters**: 

### IPL_GROUP_SWAP_IS_ACTIVE
- **Return Type**: BOOL
- **Parameters**: 

### PREFETCH_SRL
- **Return Type**: void
- **Parameters**: const char* srl

### _0xAE00387E53B1E9FC
- **Return Type**: void
- **Parameters**: 

### _0xEF1A8A484118735E
- **Return Type**: void
- **Parameters**: 

### _0xD9F2FF4AF394D926
- **Return Type**: void
- **Parameters**: 

### IS_SRL_LOADED
- **Return Type**: BOOL
- **Parameters**: 

### BEGIN_SRL
- **Return Type**: void
- **Parameters**: 

### END_SRL
- **Return Type**: void
- **Parameters**: 

### SET_SRL_TIME
- **Return Type**: void
- **Parameters**: float p0

### SET_SRL_READAHEAD_TIMES
- **Return Type**: void
- **Parameters**: int p0, int p1, int p2, int p3

### SET_SRL_LONG_JUMP_MODE
- **Return Type**: void
- **Parameters**: BOOL p0

### SET_HD_AREA
- **Return Type**: void
- **Parameters**: float x, float y, float z, float radius

### SET_HD_AREA
- **Return Type**: void
- **Parameters**: Vector3 vec, float radius

### CLEAR_HD_AREA
- **Return Type**: void
- **Parameters**: 

### _0x09FBF15D73EFC900
- **Return Type**: void
- **Parameters**: 

### _0xF11D7CB962FCD747
- **Return Type**: void
- **Parameters**: Any p0

### _0xB9B9E47EDB9D63DB
- **Return Type**: void
- **Parameters**: 
- **Description**: Sorts some unknown data.  Likely SORT_*

### _0xBE8DAA9D8D01DA6A
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x53764309C4618087
- **Return Type**: Any
- **Parameters**: Any p0

### _0x032A14D082A9B269
- **Return Type**: void
- **Parameters**: Hash p0
- **Description**: _SET_E* or _SET_F*

### _0xAFA87A7D41EE346A
- **Return Type**: void
- **Parameters**: Any p0

### _0x6A6E79FBE8678C98
- **Return Type**: void
- **Parameters**: 

### _0xCC61D8D6C19D9F14
- **Return Type**: void
- **Parameters**: Any p0

### _0xDA7FDEFF4DE86839
- **Return Type**: Any
- **Parameters**: 

### _0x5D5E2102B174B8D2
- **Return Type**: Any
- **Parameters**: 

### _0x7B8C2B846C05E5AD
- **Return Type**: Any
- **Parameters**: 

### _0x62D5F0588915B277
- **Return Type**: void
- **Parameters**: 

### _0x2F4D53023F826FF0
- **Return Type**: Any
- **Parameters**: 

### _0xDABFE48BA0D457AA
- **Return Type**: Any
- **Parameters**: 

### _0xE5B76E5B56CD77DD
- **Return Type**: Any
- **Parameters**: 

### _0x27AF48C62B281341
- **Return Type**: Any
- **Parameters**: 

### _0x99F92061EFE908BA
- **Return Type**: Any
- **Parameters**: 

### _0x05DD384F39DE1C8C
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x198B85CC3C7A4593
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x2A6D1DAAB9EBB262
- **Return Type**: Any
- **Parameters**: Any p0

### _0x07559B29950301FF
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xD6E39DC5D46DF4AB
- **Return Type**: Any
- **Parameters**: Any p0

### _0x8D56BDA343D9519F
- **Return Type**: Any
- **Parameters**: Any p0

### _0xD840C130D7AACFA5
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x2E24C27B112B5B12
- **Return Type**: void
- **Parameters**: Any p0

### _SET_GUARMA_WORLDHORIZON_ACTIVE
- **Return Type**: void
- **Parameters**: BOOL toggle


## TASK
### TASK_PAUSE
- **Return Type**: void
- **Parameters**: Ped ped, int ms
- **Description**: This tasks the ped to do nothing for the specified amount of milliseconds. This is useful if you want to add a delay between tasks when using a sequence task.

### TASK_STAND_STILL
- **Return Type**: void
- **Parameters**: Ped ped, int time
- **Description**: Makes the specified ped stand still for (time) milliseconds.

### TASK_JUMP
- **Return Type**: void
- **Parameters**: Ped ped, BOOL unused

### _TASK_JUMP_2
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, Entity entity

### _TASK_JUMP_2
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, Entity entity

### TASK_COWER
- **Return Type**: void
- **Parameters**: Ped ped, int duration, Ped pedToCowerFrom, const char* p3

### TASK_HANDS_UP
- **Return Type**: void
- **Parameters**: Ped ped, int duration, Ped facingPed, int timeToFacePed, int flags
- **Description**: flags: 0 = HANDS_UP_NOTHING; 1 = HANDS_UP_STRAIGHT_TO_LOOP

### TASK_KNOCKED_OUT
- **Return Type**: void
- **Parameters**: Ped ped, float p1, BOOL permanently

### TASK_KNOCKED_OUT_AND_HOGTIED
- **Return Type**: void
- **Parameters**: Ped ped, float p1, int p2

### _0xFFB520A3E16F7B7B
- **Return Type**: void
- **Parameters**: Ped ped, float p1

### _0x8B1FDF63C3193EDA
- **Return Type**: void
- **Parameters**: Ped ped, float p1

### UPDATE_TASK_HANDS_UP_DURATION
- **Return Type**: void
- **Parameters**: Ped ped, int duration

### _0x28EF780BDEA8A639
- **Return Type**: void
- **Parameters**: Ped ped, int p1

### TASK_DUCK
- **Return Type**: void
- **Parameters**: Ped ped, int p1

### _TASK_BOARD_VEHICLE
- **Return Type**: void
- **Parameters**: Ped ped, Vehicle vehicle, Any p2, Any p3, Any p4, Any p5

### _TASK_DISEMBARK_VEHICLE
- **Return Type**: void
- **Parameters**: Any p0, Vehicle vehicle, int p2, Any p3, float p4, Any p5

### _TASK_BOARD_VEHICLE_2
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, float p3, int flags

### TASK_DISEMBARK_NEAREST_TRAIN_CARRIAGE
- **Return Type**: void
- **Parameters**: Ped ped, float p1, int flags
- **Description**: flags: See TASK_ENTER_VEHICLE

### TASK_ENTER_VEHICLE
- **Return Type**: void
- **Parameters**: Ped ped, Vehicle vehicle, int timeout, int seat, float speed, int flag, Any p6
- **Description**: flags: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/eEnterExitVehicleFlags

### TASK_LEAVE_VEHICLE
- **Return Type**: void
- **Parameters**: Ped ped, Vehicle vehicle, int flags, Ped unkPed
- **Description**: flags: See TASK_ENTER_VEHICLE

### TASK_MOUNT_ANIMAL
- **Return Type**: void
- **Parameters**: Ped ped, Ped mount, int timer, int seatIndex, float pedSpeed, int mountStyle, Any p6, Any p7
- **Description**: timer: in ms, if it reaches 0 it will auto warp the ped on the horse mountStyle: See TASK_ENTER_VEHICLE Flags will still apply to mountStyle

### TASK_DISMOUNT_ANIMAL
- **Return Type**: void
- **Parameters**: Ped rider, int taskFlag, Any p2, Any p3, Any p4, Ped targetPed
- **Description**: Dismounts the ped from the animal it's mounted on. taskFlag affects what side the rider gets off. p2-p5 are almost always 0. flags: See TASK_ENTER_VEHICLE

### TASK_HITCH_ANIMAL
- **Return Type**: void
- **Parameters**: Ped ped, int scenarioPoint, int flag

### _0xE05A5D39BE6E93AF
- **Return Type**: void
- **Parameters**: Any p0

### TASK_VEHICLE_DRIVE_TO_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Vehicle vehicle, float x, float y, float z, float speed, Any style, Hash vehicleModel, int drivingMode, float stopRange, float straightLineDist
- **Description**: stopRange: how close vehicle will get to destination before stopping, default 4.0 straightLineDist: distance at which AI switches to heading for target directly instead of following nodes, default -1

### TASK_VEHICLE_DRIVE_TO_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Vehicle vehicle, Vector3 vec, float speed, Any style, Hash vehicleModel, int drivingMode, float stopRange, float straightLineDist

### _TASK_VEHICLE_DRIVE_TO_COORD_2
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8

### TASK_VEHICLE_DRIVE_WANDER
- **Return Type**: void
- **Parameters**: Ped ped, Vehicle vehicle, float speed, int drivingStyle

### TASK_FOLLOW_TO_OFFSET_OF_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, Entity entity, float offsetX, float offsetY, float offsetZ, float movementSpeed, int timeout, float stoppingRange, BOOL persistFollowing, BOOL p9, BOOL walkOnly, BOOL p11, BOOL p12, BOOL p13

### TASK_FOLLOW_TO_OFFSET_OF_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, Entity entity, Vector3 offset, float movementSpeed, int timeout, float stoppingRange, BOOL persistFollowing, BOOL p9, BOOL walkOnly, BOOL p11, BOOL p12, BOOL p13

### TASK_FOLLOW_TO_OFFSET_OF_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14

### _0x3FFCD7BBA074CC80
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8

### TASK_GO_STRAIGHT_TO_COORD
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float moveBlendSpeedY, int p5, float p6, float p7, int p8

### TASK_GO_STRAIGHT_TO_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float moveBlendSpeedY, int p5, float p6, float p7, int p8

### TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7

### TASK_MOVE_IN_TRAFFIC
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3

### TASK_MOVE_IN_TRAFFIC_TO_DESTINATION
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7

### TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4

### _0xBAAB791AA72C2821
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH
- **Return Type**: void
- **Parameters**: Ped ped, float moveBlendRatio, float x, float y, float z, Any p5
- **Description**: Params: moveBlendRatio commonly 1.25f, p5 is always 0 in R* Scripts

### TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH
- **Return Type**: void
- **Parameters**: Ped ped, float moveBlendRatio, Vector3 vec, Any p5

### TASK_ACHIEVE_HEADING
- **Return Type**: void
- **Parameters**: Ped ped, float heading, int timeout
- **Description**: Makes the specified ped achieve the specified heading.  pedHandle: The handle of the ped to assign the task to. heading: The desired heading. timeout: The time, in milliseconds, to allow the task to complete. If the task times out, it is canceled, and the ped will stay at the heading it managed to reach in the time.

### TASK_FLUSH_ROUTE
- **Return Type**: void
- **Parameters**: 
- **Description**: Clears the current point route. Call this before TASK_EXTEND_ROUTE and TASK_FOLLOW_POINT_ROUTE.

### TASK_EXTEND_ROUTE
- **Return Type**: void
- **Parameters**: float x, float y, float z
- **Description**: Adds a new point to the current point route. Call TASK_FLUSH_ROUTE before the first call to this. Call TASK_FOLLOW_POINT_ROUTE to make the Ped go the route.  A maximum of 8 points can be added.

### TASK_EXTEND_ROUTE
- **Return Type**: void
- **Parameters**: Vector3 vec

### TASK_FOLLOW_POINT_ROUTE
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5

### TASK_ENTER_ANIM_SCENE
- **Return Type**: void
- **Parameters**: Ped ped, AnimScene animScene, const char* entityName, const char* playbackListName, float enterSpeed, BOOL bAutoStart, int flag, int p7, float p8
- **Description**: flags: MOVE_WHILST_WAITING_FOR_PATH = (1 << 0), DO_NOT_STAND_STILL_AT_END_OF_PATH = (1 << 1), SKIP_NAVIGATION = (1 << 2), TEASF_AUTO_START_ANIM_SCENE = (1 << 3), FORCE_STAND_STILL_AT_END_OF_PATH = (1 << 6), ENTER_ANIM_SCENE_DONT_FOLLOW_NAVMESH = (1 << 7)

### TASK_MOVE_BE_IN_FORMATION
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### TASK_GO_TO_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, Entity target, int duration, float distance, float speed, float p5, int p6

### TASK_FOLLOW_AND_CONVERSE_WITH_PED
- **Return Type**: void
- **Parameters**: Ped ped, Ped targetPed, Any p2, Any p3, float p4, float p5, int p6, Any p7, Any p8, float p9, float p10

### _0xA052608A12559BBB
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### TASK_WANDER_AND_CONVERSE_WITH_PED
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3

### TASK_LEAD_AND_CONVERSE
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8

### _0xDE0C8B145EA466FF
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### TASK_SEEK_CLEAR_LOS_TO_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, Entity entity, float p2, float p3, float p4

### TASK_GO_TO_WHISTLE
- **Return Type**: void
- **Parameters**: Ped ped, Ped p1, int whistleType
- **Description**: enum eWhistleType { WHISTLE_MAIN, WHISTLE_SECONDARY, WHISTLE_DOUBLE, WHISTLE_URGENT, WHISTLE_LONG };

### _0xEB67D4E056C85A81
- **Return Type**: Any
- **Parameters**: Any p0

### _0x78D8C1D4EB80C588
- **Return Type**: Any
- **Parameters**: Any p0

### TASK_LEAD_HORSE
- **Return Type**: void
- **Parameters**: Ped ped, Ped horse

### TASK_STOP_LEADING_HORSE
- **Return Type**: void
- **Parameters**: Ped ped

### _TASK_FLEE_FROM_COORD
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11
- **Description**: fleeType: see TASK_FLEE_COORD

### _TASK_FLEE_FROM_PED
- **Return Type**: void
- **Parameters**: Ped ped, Ped fleeFromTarget, float x, float y, float z, float distance, int p6, int p7, float p8, Ped targetPed
- **Description**: fleeType: see TASK_FLEE_COORD

### _TASK_FLEE_FROM_PED
- **Return Type**: void
- **Parameters**: Ped ped, Ped fleeFromTarget, Vector3 vec, float distance, int p6, int p7, float p8, Ped targetPed

### TASK_SMART_FLEE_COORD
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float distance, int time, int fleeType, float fleeSpeed
- **Description**: Makes the specified ped flee the specified distance from the specified position. fleeType: see TASK_FLEE_COORD

### TASK_SMART_FLEE_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float distance, int time, int fleeType, float fleeSpeed

### TASK_SMART_FLEE_PED
- **Return Type**: void
- **Parameters**: Ped ped, Ped fleeFromTarget, float fleeDistance, int fleeTime, int fleeType, float fleeSpeed, Ped targetPed
- **Description**: Makes a ped run away from another ped (fleeFromTarget)  fleeDistance = ped will flee this distance fleeTime = ped will flee for this amount of time, set to "-1" to flee forever fleeType = see TASK_FLEE_COORD, can be 0, R* Scripts: fm_mission/race_controller: 66048; fme_escaped_convicts: 2260992, 2523136, 2359296; la_alligator/fox: 2097152; net_fetch: 17301536; net_stable_mount: 540928 fleeSpeed = mostly 3f, rarely 1f in R* Scripts

### _0x673A8779D229BA5A
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### _0x2E1D6D87346BB7D2
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### TASK_FLEE_COORD
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, int fleeStyle, int p5, float p6, int duration, int p8
- **Description**: Params: p5 = some flag?, p6 = -1.0f, p8 = 0 in R* Scripts fleeStyle: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/eFleeStyle

### TASK_FLEE_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, int fleeStyle, int p5, float p6, int duration, int p8

### TASK_FLEE_PED
- **Return Type**: void
- **Parameters**: Ped ped, Ped fleeFromTarget, int fleeStyle, int flag, float p4, int p5, int p6
- **Description**: Params: p4 = -1.0f, p5 = -1, p6 = 0 in R* Scripts fleeStyle: see TASK_FLEE_COORD

### TASK_FLEE_COORD_VIA
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11

### TASK_FLEE_PED_VIA
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9

### _ADD_FLEE_TARGET_COORDS
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float p4

### _ADD_FLEE_TARGET_COORDS
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float p4

### ADD_FLEE_TARGET_PED
- **Return Type**: void
- **Parameters**: Ped ped, Ped targetPed, float p2
- **Description**: Params: p2 is always -1.f in R* Scripts

### _0xA42DC7919159CCCF
- **Return Type**: void
- **Parameters**: Any p0

### TASK_FLY_AWAY
- **Return Type**: void
- **Parameters**: Ped ped, Ped fleeFromTarget

### TASK_FLY_TO_COORD
- **Return Type**: void
- **Parameters**: Ped ped, float travelMbr, float x, float y, float z, BOOL p5, BOOL p6

### TASK_FLY_TO_COORD
- **Return Type**: void
- **Parameters**: Ped ped, float travelMbr, Vector3 vec, BOOL p5, BOOL p6

### TASK_FLYING_CIRCLE
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### TASK_WALK_AWAY
- **Return Type**: void
- **Parameters**: Ped ped, Entity entity

### TASK_SHOCKING_EVENT_REACT
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2

### TASK_REACT
- **Return Type**: void
- **Parameters**: Ped ped, Entity reactingTo, float x, float y, float z, const char* reactionName, float p6, float p7, int p8
- **Description**: Makes a ped react to an entity. Params: reactingTo Entity can be 0, p8 is always 4

### TASK_REACT
- **Return Type**: void
- **Parameters**: Ped ped, Entity reactingTo, Vector3 vec, const char* reactionName, float p6, float p7, int p8

### TASK_WANDER_IN_AREA
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float radius, float p5, float p6, int p7

### TASK_WANDER_IN_AREA
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float radius, float p5, float p6, int p7

### TASK_WANDER_IN_VOLUME
- **Return Type**: void
- **Parameters**: Ped ped, Volume volume, float p2, float p3, int p4

### TASK_WANDER_STANDARD
- **Return Type**: void
- **Parameters**: Ped ped, float p1, int p2
- **Description**: Makes ped walk around the area.  set p1 to 10.0f and p2 to 10 if you want the ped to walk anywhere without a duration.

### TASK_WANDER_SWIM
- **Return Type**: void
- **Parameters**: Ped ped, Any p1

### TASK_PLANT_BOMB
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float heading

### TASK_PLANT_BOMB
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float heading

### TASK_HORSE_ACTION
- **Return Type**: void
- **Parameters**: Ped ped, int action, Ped targetPed, Any p3
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/tasks/TASK_HORSE_ACTION Params: p2, p3 are set to 0 in R* Scripts

### TASK_ANIMAL_INTERACTION
- **Return Type**: void
- **Parameters**: Ped ped, Ped targetPed, Hash interactionType, Hash interactionModel, BOOL skipIdleAnimationClip
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/tasks/TASK_ANIMAL_INTERACTION

### TASK_COMBAT_ANIMAL_WARN
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2

### TASK_COMBAT_ANIMAL_CHARGE_PED
- **Return Type**: void
- **Parameters**: Ped ped, Ped targetPed, BOOL p2, Any p3, Any p4, Any p5, Any p6

### _0x76610D12A838EBDE
- **Return Type**: Any
- **Parameters**: Any p0

### TASK_AMBIENT_ANIMAL_STALK
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2

### TASK_AMBIENT_ANIMAL_HUNT
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2

### TASK_ANIMAL_UNALERTED
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4

### TASK_ANIMAL_ALERTED
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2

### TASK_ANIMAL_FLEE
- **Return Type**: void
- **Parameters**: Ped ped, Ped targetPed, Any p2

### _0x244430C13BA5258E
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### TASK_EAT
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2

### TASK_BARK
- **Return Type**: void
- **Parameters**: Ped ped, Ped barkAtTarget, Hash mood

### TASK_FOLLOW_PAVEMENT_TO_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Any* args

### TASK_FOLLOW_NAV_MESH_TO_COORD
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float speedMultiplier, int timeout, float stoppingRange, int flags, float heading
- **Description**: If no timeout, set timeout to -1.

### TASK_FOLLOW_NAV_MESH_TO_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float speedMultiplier, int timeout, float stoppingRange, int flags, float heading

### TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float speedMultiplier, int timeout, float stoppingRange, int flags, float p8, float p9, float p10, Entity entity, float unk

### TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float speedMultiplier, int timeout, float stoppingRange, int flags, float p8, float p9, float p10, Entity entity, float unk

### SET_PED_PATH_CAN_USE_CLIMBOVERS
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### SET_PED_PATH_CAN_USE_LADDERS
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### SET_PED_PATH_CAN_DROP_FROM_HEIGHT
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _0xE6A151364C600B24
- **Return Type**: Any
- **Parameters**: Any p0

### _0x1632EB9386CDBE64
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_PED_PATH_CLIMB_COST_MODIFIER
- **Return Type**: void
- **Parameters**: Ped ped, float modifier

### SET_PED_PATH_DEEP_SNOW_COST_MODIFIER
- **Return Type**: void
- **Parameters**: Ped ped, float modifier

### SET_PED_PATH_FOLIAGE_COST_MODIFIER
- **Return Type**: void
- **Parameters**: Ped ped, float modifier

### _0x8798CF6815B8FE0F
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x5B68D0007D9C92EB
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x82ED59F095056550
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xE01C8DC8EDD28D31
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x098CAA6DBE7D8D82
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _GET_PED_IS_IGNORING_DEAD_BODIES
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _SET_PED_IGNORE_DEAD_BODIES
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _SET_PED_PATH_LADDER_COST_MODIFIER
- **Return Type**: void
- **Parameters**: Ped ped, float modifier
- **Description**: _SET_PED_PATH_P*

### SET_PED_PATH_MAY_ENTER_WATER
- **Return Type**: void
- **Parameters**: Ped ped, BOOL mayEnterWater

### _SET_PED_PATH_MAY_ENTER_DEEP_WATER
- **Return Type**: void
- **Parameters**: Ped ped, BOOL mayEnterDeepWater

### _0xC6170856E54557B2
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0xF948F4356F010F11
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### SET_PED_PATH_PREFER_TO_AVOID_WATER
- **Return Type**: void
- **Parameters**: Ped ped, BOOL avoidWater, float p2

### _0x8BB283A7888AD1AD
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x12990818C1D35886
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x7C015D8BCEC72CF4
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_PED_PATH_AVOID_FIRE
- **Return Type**: void
- **Parameters**: Ped ped, BOOL avoidFire

### _0x42CFD8FD8CC8DC69
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x216343750545A486
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x06ECF3925BC2ABAE
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xFA30E2254461ADEB
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### TASK_GO_TO_COORD_ANY_MEANS
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float speed, Entity entity, BOOL p6, int walkingStyle, float p8

### TASK_GO_TO_COORD_ANY_MEANS
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float speed, Entity entity, BOOL p6, int walkingStyle, float p8

### TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float speed, Any p5, BOOL p6, int walkingStyle, float p8, Any p9, Any p10, Any p11, Any p12

### TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float speed, Any p5, BOOL p6, int walkingStyle, float p8, Any p9, Any p10, Any p11, Any p12

### TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14

### TASK_PLAY_ANIM
- **Return Type**: void
- **Parameters**: Ped ped, const char* animDict, const char* animName, float speed, float speedMultiplier, int duration, int flags, float playbackRate, BOOL p8, int ikFlags, BOOL p10, const char* taskFilter, BOOL p12
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/animations flags: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/eScriptedAnimFlags ikFlags: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/eIkControlFlags

### TASK_PLAY_ANIM_ADVANCED
- **Return Type**: void
- **Parameters**: Ped ped, const char* animDict, const char* animName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float speed, float speedMultiplier, int duration, int flags, float p13, int p14, int p15, int p16
- **Description**: flags: see TASK_PLAY_ANIM ikFlags: see TASK_PLAY_ANIM

### TASK_PLAY_ANIM_ADVANCED
- **Return Type**: void
- **Parameters**: Ped ped, const char* animDict, const char* animName, Vector3 pos, Vector3 rot, float speed, float speedMultiplier, int duration, int flags, float p13, int p14, int p15, int p16

### TASK_PLAY_UPPER_ANIM_FACING_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, const char* animDict, const char* animName, Entity entity, int p4, float p5, float p6, int p7, float p8, BOOL p9, BOOL p10, float p11, const char* p12, int p13, float p14

### STOP_ANIM_TASK
- **Return Type**: void
- **Parameters**: Ped ped, const char* animDictionary, const char* animationName, float p3

### TASK_SCRIPTED_ANIMATION
- **Return Type**: void
- **Parameters**: Ped ped, Any* args

### PLAY_ENTITY_SCRIPTED_ANIM
- **Return Type**: void
- **Parameters**: Entity entity, Any* args

### STOP_ANIM_PLAYBACK
- **Return Type**: void
- **Parameters**: Ped ped, int p1, BOOL p2

### SET_ANIM_FILTER
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### SET_ANIM_RATE
- **Return Type**: void
- **Parameters**: Any p0, float p1, Any p2, BOOL p3

### CAN_START_ITEM_INTERACTION
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash itemHash, Hash interactionAnimHash, int p3

### START_TASK_ITEM_INTERACTION
- **Return Type**: void
- **Parameters**: Ped ped, Hash itemHash, Hash interactionAnimHash, int p3, int flag, float p5
- **Description**: Params: p3 = 0, 1; p5 = 0.0f, -1.0f https://github.com/femga/rdr3_discoveries/tree/master/tasks/TASK_ITEM_INTERACTION

### _TASK_ITEM_INTERACTION_2
- **Return Type**: void
- **Parameters**: Ped ped, Hash propNameGxt, Object prop, Hash propId, Hash itemInteractionState, int p5, Any p6, float p7

### _TASK_ITEM_INTERACTION_3
- **Return Type**: void
- **Parameters**: Ped ped, Hash item, Any* guid, Any p3, Any p4, Any p5, float p6
- **Description**: Params: p3, p4, p5, p6: 0, 0, 0, -1.0f in R* Scripts

### _0xB35370D5353995CB
- **Return Type**: void
- **Parameters**: Ped ped, Hash item, float p2

### GET_ITEM_INTERACTION_STATE
- **Return Type**: Hash
- **Parameters**: Ped ped

### GET_ITEM_INTERACTION_ITEM_ID
- **Return Type**: Hash
- **Parameters**: Ped ped

### IS_PED_RUNNING_INSPECTION_TASK
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_RUNNING_TASK_ITEM_INTERACTION
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _GET_ITEM_INTERACTION_ENTITY_FROM_PED
- **Return Type**: Entity
- **Parameters**: Ped ped, Hash item
- **Description**: item hashes: PRIMARYITEM, P_MUGCOFFEE01X_PH_R_HAND, P_BOTTLEBEER01X_PH_R_HAND http://prntscr.com/1qtp3bz https://github.com/femga/rdr3_discoveries/tree/master/tasks/TASK_ITEM_INTERACTION

### GET_ITEM_INTERACTION_PROMPT_PROGRESS
- **Return Type**: float
- **Parameters**: Ped ped, Hash inputContext

### _0x678D3226CF70B9C8
- **Return Type**: Object
- **Parameters**: Ped ped, BOOL p1
- **Description**: Only used in R* SP Script beat_washed_ashore Returns Object prop for TASK::_TASK_ITEM_INTERACTION_2

### TASK_EVASIVE_ANIM
- **Return Type**: void
- **Parameters**: Ped ped1, Ped ped2, int p2
- **Description**: Params: p2 is returned by BUILTIN::SHIFT_LEFT

### TASK_LOOK_AT_COORD
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, int duration, int flags, int p6, BOOL p7

### TASK_LOOK_AT_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, int duration, int flags, int p6, BOOL p7

### TASK_LOOK_AT_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, Entity lookAtTarget, int duration, int p3, int p4, int p5
- **Description**: param3: duration in ms, use -1 to look forever param4: using 2048 is fine param5: using 3 is fine

### TASK_CLEAR_LOOK_AT
- **Return Type**: void
- **Parameters**: Ped ped

### _0x508F5053E3F6F0C4
- **Return Type**: BOOL
- **Parameters**: Ped ped, float x, float y, float z, float p4
- **Description**: Only used in R* SP Scripts Params: p4 = 1.0f - 30.0f

### _0x508F5053E3F6F0C4
- **Return Type**: BOOL
- **Parameters**: Ped ped, Vector3 vec, float p4

### _0x23767D80C7EED7C6
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### OPEN_SEQUENCE_TASK
- **Return Type**: void
- **Parameters**: int* taskSequenceId

### CLOSE_SEQUENCE_TASK
- **Return Type**: void
- **Parameters**: int taskSequenceId

### TASK_PERFORM_SEQUENCE
- **Return Type**: void
- **Parameters**: Ped ped, int taskSequenceId

### _TASK_PERFORM_SEQUENCE_2
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### CLEAR_SEQUENCE_TASK
- **Return Type**: void
- **Parameters**: int* taskSequenceId

### SET_SEQUENCE_TO_REPEAT
- **Return Type**: void
- **Parameters**: int taskSequenceId, int repeatMode
- **Description**: repeatMode: 0 = REPEAT_NOT; 1 = REPEAT_FOREVER

### GET_SEQUENCE_PROGRESS
- **Return Type**: int
- **Parameters**: Ped ped
- **Description**: returned values: 0 to 7 = task that's currently in progress, 0 meaning the first one. -1 no task sequence in progress.

### GET_IS_TASK_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Ped ped, int taskIndex

### GET_SCRIPT_TASK_STATUS
- **Return Type**: int
- **Parameters**: Ped ped, Hash taskHash, BOOL p2
- **Description**: Gets the status of a script-assigned task, and returns an int between 0-8 taskHash: https://alloc8or.re/rdr3/doc/enums/eScriptTaskHash.txt  WAITING_TO_START_TASK = 0, PERFORMING_TASK DORMANT_TASK VACANT_STAGE GROUP_TASK_STAGE ATTRACTOR_SCRIPT_TASK_STAGE SECONDARY_TASK_STAGE TASK_NOT_FOUND FINISHED_TASK

### _0x9FF5F9B24E870748
- **Return Type**: Any
- **Parameters**: Any p0

### _GET_SCRIPT_TASK_ACTION_TIME
- **Return Type**: float
- **Parameters**: Ped ped, Hash task

### REACT_LOOK_AT
- **Return Type**: void
- **Parameters**: Ped ped, Ped targetPed, int lookIntensity, int exitAnimation, float duration, int p5, Ped targetPed2, Any p7, Any p8
- **Description**: lookIntensity: see SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT  exitAnimation: LOOK_RETURN_GENERIC = 1, LOOK_RETURN_DISMISSIVE = 2, LOOK_RETURN_RELIEVED = 3

### REACT_LOOK_AT_END
- **Return Type**: void
- **Parameters**: Ped ped, int exitAnimation, BOOL p2

### IS_PED_SCENARIO_REACT_LOOKING
- **Return Type**: BOOL
- **Parameters**: Ped ped, BOOL p1

### GET_ACTIVE_VEHICLE_MISSION_TYPE
- **Return Type**: int
- **Parameters**: Vehicle vehicle

### TASK_LEAVE_ANY_VEHICLE
- **Return Type**: void
- **Parameters**: Ped ped, int p1, int taskFlag
- **Description**: flags: See TASK_ENTER_VEHICLE

### _0xBD70108D01875299
- **Return Type**: Any
- **Parameters**: Any p0

### TASK_USE_RANDOM_SCENARIO_IN_GROUP
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4

### TASK_AIM_GUN_AT_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, Entity targetEntity, int duration, BOOL p3, int p4
- **Description**: duration: the amount of time in milliseconds to do the task.  -1 will keep the task going until either another task is applied, or CLEAR_ALL_TASKS() is called with the ped

### TASK_TURN_PED_TO_FACE_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, Entity targetEntity, int duration, float p3, float p4, float p5
- **Description**: duration: the amount of time in milliseconds to do the task. -1 will keep the task going until either another task is applied, or CLEAR_ALL_TASKS() is called with the ped

### TASK_AIM_GUN_AT_COORD
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, int time, BOOL p5, BOOL p6

### TASK_AIM_GUN_AT_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, int time, BOOL p5, BOOL p6

### TASK_AIM_AT_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### TASK_AIM_AT_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4

### TASK_SHOOT_AT_COORD
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, int duration, Hash firingPattern, Any p6

### TASK_SHOOT_AT_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, int duration, Hash firingPattern, Any p6

### TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT
- **Return Type**: void
- **Parameters**: Ped ped, Vehicle vehicle
- **Description**: Makes the specified ped shuffle to the next vehicle seat. The ped MUST be in a vehicle and the vehicle parameter MUST be the ped's current vehicle.

### CLEAR_PED_TASKS
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1, BOOL p2

### _0x1A7D63CB1B0BB223
- **Return Type**: void
- **Parameters**: Any p0

### _0xB2D15D3551FE4FAE
- **Return Type**: void
- **Parameters**: Any p0

### _0xDF94844D474F31E5
- **Return Type**: void
- **Parameters**: Ped ped

### _0xEBA2081E0A5F4D17
- **Return Type**: void
- **Parameters**: Any p0

### _0x141BC64C8D7C5529
- **Return Type**: void
- **Parameters**: Vehicle vehicle

### CLEAR_PED_SECONDARY_TASK
- **Return Type**: void
- **Parameters**: Ped ped

### TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1

### TASK_INVESTIGATE
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5

### TASK_GOTO_ENTITY_OFFSET
- **Return Type**: void
- **Parameters**: Ped ped, Entity entity, Any p2, float x, float y, float z, int duration

### TASK_GOTO_ENTITY_OFFSET
- **Return Type**: void
- **Parameters**: Ped ped, Entity entity, Any p2, Vector3 vec, int duration

### TASK_GOTO_ENTITY_OFFSET_XY
- **Return Type**: void
- **Parameters**: Ped ped, Entity entity, int duration, float targetRadius, float xOffset, float yOffset, float moveBlendRatio, int offsetFlags

### TASK_GOTO_ENTITY_OFFSET_XYZ
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8

### TASK_GOTO_ENTITY_OFFSET_XY_AIMING
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8

### TASK_GOTO_ENTITY_OFFSET_XYZ_AIMING
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9

### TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7

### TASK_TURN_PED_TO_FACE_COORD
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, int duration
- **Description**: duration in milliseconds

### TASK_TURN_PED_TO_FACE_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, int duration

### TASK_VEHICLE_TEMP_ACTION
- **Return Type**: void
- **Parameters**: Ped driver, Vehicle vehicle, int action, int time
- **Description**: Documentation from GTA V, might be the same in RDR:  '1 - brake '3 - brake + reverse '4 - turn left 90 + braking '5 - turn right 90 + braking '6 - brake strong (handbrake?) until time ends '7 - turn left + accelerate '7 - turn right + accelerate '9 - weak acceleration '10 - turn left + restore wheel pos to center in the end '11 - turn right + restore wheel pos to center in the end '13 - turn left + go reverse '14 - turn left + go reverse '16 - crash the game after like 2 seconds :) '17 - keep actual state, game crashed after few tries '18 - game crash '19 - strong brake + turn left/right '20 - weak brake + turn left then turn right '21 - weak brake + turn right then turn left '22 - brake + reverse '23 - accelerate fast '24 - brake '25 - brake turning left then when almost stopping it turns left more '26 - brake turning right then when almost stopping it turns right more '27 - brake until car stop or until time ends '28 - brake + strong reverse acceleration '30 - performs a burnout (brake until stop + brake and accelerate) '31 - accelerate + handbrake '32 - accelerate very strong  Seems to be this: Works on NPCs, but overrides their current task. If inside a task sequence (and not being the last task), "time" will work, otherwise the task will be performed forever until tasked with something else

### TASK_VEHICLE_MISSION
- **Return Type**: void
- **Parameters**: Ped driver, Vehicle vehicle, Vehicle vehicleTarget, int missionType, float p4, Any p5, float p6, float p7, BOOL DriveAgainstTraffic

### TASK_VEHICLE_DRIVE_TO_DESTINATION
- **Return Type**: void
- **Parameters**: Ped driver, Vehicle vehicle, float x, float y, float z, float speed, int drivingFlags, int p7, float stoppingRange1, float stoppingRange2, BOOL p10
- **Description**: flags: 67108864, 2097152, 524564, 524675 (eDrivingFlags) p7 = 6 or 3 p8 = x coordinate p9 - 8.f p10 = false

### TASK_VEHICLE_DRIVE_TO_DESTINATION
- **Return Type**: void
- **Parameters**: Ped driver, Vehicle vehicle, Vector3 vec, float speed, int drivingFlags, int p7, float stoppingRange1, float stoppingRange2, BOOL p10

### _TASK_VEHICLE_DRIVE_TO_DESTINATION_2
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float x, float y, float z, float speed, int p5, int p6, float p7, float p8
- **Description**: Tasks vehicle towards owner

### _TASK_VEHICLE_DRIVE_TO_DESTINATION_2
- **Return Type**: void
- **Parameters**: Vehicle vehicle, Vector3 vec, float speed, int p5, int p6, float p7, float p8

### _TASK_VEHICLE_FLEE_ON_CLEANUP
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float p1, float p2, float p3, float speed, Hash type
- **Description**: Vehicle Auto Drive (?) p1/p2/p3: usually 1f, 1f, 0f or 0f, 0f, 0f Speed: usually 8f Types: 1148979456 (task with flee), 1148979587 (dismissing the vehicle)

### TASK_VEHICLE_DRIVE_STRAIGHT_TO_POINT
- **Return Type**: void
- **Parameters**: Ped driver, Vehicle vehicle, float x, float y, float z, float p5, float p6, int flag
- **Description**: Old name: _TASK_VEHICLE_DRIVE_TO_POINT flag: 524419 and 0 in shop_horse_shop R* Script

### TASK_VEHICLE_DRIVE_STRAIGHT_TO_POINT
- **Return Type**: void
- **Parameters**: Ped driver, Vehicle vehicle, Vector3 vec, float p5, float p6, int flag

### _TASK_VEHICLE_DRIVE_TO_POINT_2
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float x, float y, float z, float p4, float p5, Any p6
- **Description**: Params: p4 = 3.f or 8.f, p5 = 0.25f, p6 = 0 in R* Scripts

### _TASK_VEHICLE_DRIVE_TO_POINT_2
- **Return Type**: void
- **Parameters**: Vehicle vehicle, Vector3 vec, float p4, float p5, Any p6

### _0x1D125814EBC517EB
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x583AE9AF9CEE0958
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, float x, float y, float z

### _0x583AE9AF9CEE0958
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, Vector3 vec

### TASK_VEHICLE_MISSION_PED_TARGET
- **Return Type**: void
- **Parameters**: Ped ped, Vehicle vehicle, Ped pedTarget, int mode, float maxSpeed, int drivingStyle, float minDistance, float p7, BOOL DriveAgainstTraffic
- **Description**: See TASK_VEHICLE_MISSION

### _0xA263ADBBC8056214
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### TASK_VEHICLE_ESCORT
- **Return Type**: void
- **Parameters**: Ped ped, Vehicle vehicle, Vehicle targetVehicle, int mode, float speed, int drivingStyle, float minDistance, int p7, float noRoadsDistance

### TASK_BOAT_MISSION
- **Return Type**: void
- **Parameters**: Ped pedDriver, Vehicle boat, Any p2, Any p3, float x, float y, float z, Any p7, float maxSpeed, int drivingStyle, float p10, Any p11

### TASK_BOAT_MISSION
- **Return Type**: void
- **Parameters**: Ped pedDriver, Vehicle boat, Any p2, Any p3, Vector3 vec, Any p7, float maxSpeed, int drivingStyle, float p10, Any p11

### TASK_WEAPON
- **Return Type**: void
- **Parameters**: Ped ped

### TASK_DRIVE_BY
- **Return Type**: void
- **Parameters**: Ped driverPed, Ped targetPed, Vehicle targetVehicle, float targetX, float targetY, float targetZ, float distanceToShoot, int pedAccuracy, BOOL p8, Hash firingPattern

### TASK_DRIVE_BY
- **Return Type**: void
- **Parameters**: Ped driverPed, Ped targetPed, Vehicle targetVehicle, Vector3 target, float distanceToShoot, int pedAccuracy, BOOL p8, Hash firingPattern

### SET_DRIVEBY_TASK_TARGET
- **Return Type**: void
- **Parameters**: Ped shootingPed, Ped targetPed, Vehicle targetVehicle, float x, float y, float z

### SET_DRIVEBY_TASK_TARGET
- **Return Type**: void
- **Parameters**: Ped shootingPed, Ped targetPed, Vehicle targetVehicle, Vector3 vec

### CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK
- **Return Type**: void
- **Parameters**: Ped ped

### IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK
- **Return Type**: BOOL
- **Parameters**: Ped ped

### GET_IS_PED_AIMING_IN_THE_AIR
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _SET_PED_CLEAR_AIMING_IN_THE_AIR
- **Return Type**: void
- **Parameters**: Ped ped, Any p1

### IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK
- **Return Type**: BOOL
- **Parameters**: Ped ped

### TASK_WARP_PED_INTO_VEHICLE
- **Return Type**: void
- **Parameters**: Ped ped, Vehicle vehicle, int seat

### TASK_SHOOT_AT_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity, Entity targetEntity, int duration, Hash firingPattern, BOOL affectCockedState

### TASK_SHOOT_WITH_WEAPON
- **Return Type**: void
- **Parameters**: Ped ped, Any* args

### _0x2416EC2F31F75266
- **Return Type**: void
- **Parameters**: Entity entity, Entity targetEntity, int duration, Any p3, Any p4

### _0x41323F4E0C4AE94B
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### _0x5EA655F01D93667A
- **Return Type**: Any
- **Parameters**: Any p0

### TASK_CLIMB
- **Return Type**: void
- **Parameters**: Ped ped, BOOL unused
- **Description**: Climbs or vaults the nearest thing.

### _TASK_CLIMB_2
- **Return Type**: void
- **Parameters**: Ped ped, float heading

### TASK_CLIMB_LADDER
- **Return Type**: void
- **Parameters**: Ped ped, float p1, BOOL p2, BOOL p3

### CLEAR_PED_TASKS_IMMEDIATELY
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1, BOOL resetCrouch
- **Description**: Immediately stops the pedestrian from whatever it's doing. They stop fighting, animations, etc. they forget what they were doing.  resetCrouch TRUE = ped will stand up if crouching, FALSE = ped will remain crouching if crouched

### TASK_PERFORM_SEQUENCE_FROM_PROGRESS
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3

### SET_PED_DESIRED_MOVE_BLEND_RATIO
- **Return Type**: void
- **Parameters**: Ped ped, float p1

### GET_PED_DESIRED_MOVE_BLEND_RATIO
- **Return Type**: float
- **Parameters**: Ped ped

### TASK_GOTO_ENTITY_AIMING
- **Return Type**: void
- **Parameters**: Ped ped, Entity target, float distanceToStopAt, float StartAimingDist
- **Description**: ped = Ped you want to perform this task. target = the Entity they should aim at. distanceToStopAt = distance from the target, where the ped should stop to aim. StartAimingDist = distance where the ped should start to aim.

### TASK_SET_SPHERE_DEFENSIVE_AREA
- **Return Type**: void
- **Parameters**: Ped ped, float p1, float p2, float p3, float p4

### TASK_CLEAR_DEFENSIVE_AREA
- **Return Type**: void
- **Parameters**: Ped ped

### TASK_PED_SLIDE_TO_COORD
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float heading, float p5

### TASK_PED_SLIDE_TO_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float heading, float p5

### _0x9420FB11B8D77948
- **Return Type**: Any
- **Parameters**: Any p0

### _0x6BA606AB3A83BC4D
- **Return Type**: Any
- **Parameters**: Any p0

### ADD_COVER_POINT
- **Return Type**: ScrHandle
- **Parameters**: float p0, float p1, float p2, float p3, Any p4, Any p5, Any p6, BOOL p7

### _0x59872EA4CBD11C56
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8

### REMOVE_COVER_POINT
- **Return Type**: void
- **Parameters**: ScrHandle coverpoint

### DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS
- **Return Type**: BOOL
- **Parameters**: Any p0, Any p1, Any p2, Any p3
- **Description**: Checks if there is a cover point at position

### GET_SCRIPTED_COVER_POINT_COORDS
- **Return Type**: Vector3
- **Parameters**: ScrHandle coverpoint

### _0xE116F6F2DA2D777E
- **Return Type**: Vector3
- **Parameters**: Any p0

### _0x50AA09A0DA64E73C
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### _0xE5831AA1E2FD147C
- **Return Type**: void
- **Parameters**: Any p0

### TASK_COMBAT_PED
- **Return Type**: void
- **Parameters**: Ped ped, Ped targetPed, int p2, int p3

### TASK_COMBAT_PED_TIMED
- **Return Type**: void
- **Parameters**: Ped ped, Ped targetPed, int p2, Any p3

### _TASK_COMBAT_PED_3
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### TASK_SEEK_COVER_FROM_POS
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, int duration, Any p5, Any p6, Any p7

### TASK_SEEK_COVER_FROM_POS
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, int duration, Any p5, Any p6, Any p7

### TASK_SEEK_COVER_FROM_PED
- **Return Type**: void
- **Parameters**: Ped ped, Ped fromPed, int duration, Any p3, Any p4, Any p5

### TASK_SEEK_COVER_TO_COVER_POINT
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8

### TASK_SEEK_COVER_TO_COORDS
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10

### TASK_PUT_PED_DIRECTLY_INTO_COVER
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, int timeout, BOOL p5, float p6, Any p7, Any p8, ScrHandle coverpoint, BOOL p10, BOOL p11, Any p12

### TASK_PUT_PED_DIRECTLY_INTO_COVER
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, int timeout, BOOL p5, float p6, Any p7, Any p8, ScrHandle coverpoint, BOOL p10, BOOL p11, Any p12

### _TASK_PUT_PED_DIRECTLY_INTO_COVER_FROM_COORDS
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float fromX, float fromY, float fromZ, int timeout, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17

### _TASK_PUT_PED_DIRECTLY_INTO_COVER_FROM_COORDS
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, Vector3 from, int timeout, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17

### TASK_PUT_PED_DIRECTLY_INTO_MELEE
- **Return Type**: void
- **Parameters**: Ped ped, Ped meleeTarget, Hash meleeStyle, float p3, float animBlendRatio, BOOL p5, int p6
- **Description**: meleeStyles: AR_GRAPPLE_BACK_FROM_BACK, AR_GRAPPLE_MOUNT_FACEDOWN_FROM_FRONT, AR_ALLIGATOR_LEAPKILL, AR_ALLIGATOR_WAIST_AUTOKILL_FRONT

### TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE
- **Return Type**: void
- **Parameters**: Ped ped, Ped grappleTarget, Hash grappleStyle, float p3, float p4, BOOL p5, int p6
- **Description**: grappleStyle: AR_GRAPPLE_STRUGGLE, AR_ALLIGATOR_LEG_GRAB_CHALLENGE_FAIL, AR_GRAPPLE_BACK_FROM_BACK, AR_GRAPPLE_BACK_DEFEND, AR_GRAPPLE_FRONT_FROM_FRONT

### TASK_COMPANION_AMBIENT
- **Return Type**: void
- **Parameters**: Ped ped, Any p1

### _0x098036CAB8373D36
- **Return Type**: void
- **Parameters**: Any p0

### _0x10C44F633E2D6D9E
- **Return Type**: void
- **Parameters**: Any p0

### _0x7FB78B2199C10E92
- **Return Type**: void
- **Parameters**: Any p0

### TASK_GUARD
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2

### TASK_GUARD_CURRENT_POSITION
- **Return Type**: void
- **Parameters**: Ped ped, float p1, float p2, BOOL p3

### _TASK_GUARD_ASSIGNED_DEFENSIVE_AREA_2
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7

### TASK_GUARD_ASSIGNED_DEFENSIVE_AREA
- **Return Type**: void
- **Parameters**: Ped ped, float p1, float p2, float p3, float p4, float p5, Any p6

### TASK_STAND_GUARD
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float heading, const char* scenarioName

### TASK_STAND_GUARD
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float heading, const char* scenarioName

### SET_DRIVE_TASK_CRUISE_SPEED
- **Return Type**: void
- **Parameters**: Ped driver, float cruiseSpeed

### SET_DRIVE_TASK_MAX_CRUISE_SPEED
- **Return Type**: void
- **Parameters**: Ped ped, float maxCruiseSpeed
- **Description**: Not implemented.

### ADD_COVER_BLOCKING_AREA
- **Return Type**: void
- **Parameters**: float playerX, float playerY, float playerZ, float radiusX, float radiusY, float radiusZ, BOOL p6, BOOL p7, BOOL p8, BOOL p9

### ADD_COVER_BLOCKING_AREA
- **Return Type**: void
- **Parameters**: Vector3 player, Vector3 radius, BOOL p6, BOOL p7, BOOL p8, BOOL p9

### _ADD_COVER_BLOCKING_VOLUME
- **Return Type**: void
- **Parameters**: Volume volume, BOOL p1, BOOL p2, BOOL p3, BOOL p4

### REMOVE_ALL_COVER_BLOCKING_AREAS
- **Return Type**: void
- **Parameters**: 

### _0x2A10538D0A005E81
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x4F57397388E1DFF8
- **Return Type**: void
- **Parameters**: 

### TASK_ROB_PED
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4

### _0xBEDBE39B5FD98FD6
- **Return Type**: BOOL
- **Parameters**: Ped ped

### CREATE_SCENARIO_POINT_HASH
- **Return Type**: int
- **Parameters**: Hash scenarioHash, float x, float y, float z, float heading, Any p5, Any p6, BOOL p7
- **Description**: Returns scenario

### CREATE_SCENARIO_POINT_HASH
- **Return Type**: int
- **Parameters**: Hash scenarioHash, Vector3 vec, float heading, Any p5, Any p6, BOOL p7

### CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY
- **Return Type**: int
- **Parameters**: Entity entity, Hash scenarioHash, float x, float y, float z, float heading, Any p6, Any p7, BOOL p8
- **Description**: Returns scenario

### CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY
- **Return Type**: int
- **Parameters**: Entity entity, Hash scenarioHash, Vector3 vec, float heading, Any p6, Any p7, BOOL p8

### _DOES_SCENARIO_POINT_HAVE_PROPS
- **Return Type**: BOOL
- **Parameters**: int scenario

### GET_PROP_FOR_SCENARIO_POINT
- **Return Type**: Entity
- **Parameters**: int scenarioPoint, const char* name
- **Description**: Old name: _GET_SCENARIO_POINT_ENTITY

### _ASSOCIATE_PROP_WITH_SCENARIO
- **Return Type**: BOOL
- **Parameters**: int scenario, Entity entity, const char* propName, BOOL p3

### _SET_SCENARIO_POINT_FLAG
- **Return Type**: void
- **Parameters**: int scenario, int flag, BOOL value
- **Description**: flag: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/CScenarioPointFlags__Flags

### _IS_SCENARIO_POINT_FLAG_SET
- **Return Type**: BOOL
- **Parameters**: int scenario, int flag

### _0xADC45010BC17AF0E
- **Return Type**: void
- **Parameters**: Any p0, Any p1
- **Description**: _SET_SCENARIO_POINT_*

### _0x974DA3408DEC4E79
- **Return Type**: Any
- **Parameters**: Any p0

### _DISASSOCIATE_PROP_FROM_SCENARIO
- **Return Type**: BOOL
- **Parameters**: int scenario, const char* propName

### DOES_SCENARIO_POINT_EXIST
- **Return Type**: BOOL
- **Parameters**: int scenario

### _0x22CD2C33ED4467A1
- **Return Type**: Any
- **Parameters**: Any p0

### _GET_SCENARIO_POINT_ENTITY
- **Return Type**: Entity
- **Parameters**: int scenario
- **Description**: Note: The current name for this native is the old name of 0x295514F198EFD0CA Old name for this native: _GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO

### _GET_PED_USING_SCENARIO_POINT
- **Return Type**: Ped
- **Parameters**: int scenario

### _GET_SCENARIO_POINT_COORDS
- **Return Type**: Vector3
- **Parameters**: int scenario, BOOL p1
- **Description**: Params: p1 is always true in R* Scripts

### _0x91CB5E431F579BA1
- **Return Type**: Vector3
- **Parameters**: Any p0

### _0x370F57C47F68EBCA
- **Return Type**: Any
- **Parameters**: Any p0

### _GET_SCENARIO_POINT_HEADING
- **Return Type**: float
- **Parameters**: int scenario, BOOL p1
- **Description**: Params: p1 is always true in R* Scripts

### _GET_SCENARIO_POINT_RADIUS
- **Return Type**: float
- **Parameters**: int scenario

### _SET_SCENARIO_POINT_COORDS
- **Return Type**: void
- **Parameters**: int scenario, float xPos, float yPos, float zPos, BOOL p4

### _SET_SCENARIO_POINT_COORDS
- **Return Type**: void
- **Parameters**: int scenario, Vector3 pos, BOOL p4

### _SET_SCENARIO_POINT_HEADING
- **Return Type**: void
- **Parameters**: int scenario, float heading, BOOL p2

### _SET_SCENARIO_POINT_RADIUS
- **Return Type**: void
- **Parameters**: int scenario, float radius

### _0xA7479FB665361EDB
- **Return Type**: void
- **Parameters**: Any p0, Any p1
- **Description**: _SET_SCENARIO_*

### _0xE69FDA40AAC3EFC0
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### GET_SCENARIO_POINTS_IN_AREA
- **Return Type**: int
- **Parameters**: float posX, float posY, float posZ, float radius, Any* scenariosInRadius, int size
- **Description**: Note: scenariosInRadius is an array, and its size and values should be aligned to 8 bytes.

### GET_SCENARIO_POINTS_IN_AREA
- **Return Type**: int
- **Parameters**: Vector3 pos, float radius, Any* scenariosInRadius, int size

### _0xEFD875C2791EBEFD
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x152664AA3188B193
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### _0xE7BBC4E56B989449
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _GET_SCENARIO_POINT_PED_IS_USING
- **Return Type**: int
- **Parameters**: Ped ped, BOOL p1

### GET_RANSACK_SCENARIO_POINT_PED_IS_USING
- **Return Type**: Any
- **Parameters**: Ped ped

### _SET_SCENARIO_CONTAINER_OPENING_STATE
- **Return Type**: void
- **Parameters**: Entity entity, BOOL open
- **Description**: Opens/closes containers: ChestDugUp

### _0xA9E7672F8C6C6F74
- **Return Type**: Any
- **Parameters**: Any p0

### _0x0A98A362C5A19A43
- **Return Type**: Any
- **Parameters**: Any p0

### _0x849791EBBDBA0362
- **Return Type**: Any
- **Parameters**: Any p0

### _0x640A602946A8C972
- **Return Type**: Any
- **Parameters**: Any p0

### _0x01AF8A3729231A43
- **Return Type**: Any
- **Parameters**: Any p0

### _GET_SCENARIO_CONTAINER_OPENING_STATE
- **Return Type**: BOOL
- **Parameters**: Entity entity
- **Description**: Returns m_eContainerState

### _RESET_SCENARIO_FOR_ENTITY
- **Return Type**: void
- **Parameters**: int scenario, Entity entity

### _0x4161648394262FDF
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x9C8F42A5D1859DC1
- **Return Type**: void
- **Parameters**: Any p0

### _DELETE_SCENARIO_POINT
- **Return Type**: void
- **Parameters**: int scenario

### TASK_USE_SCENARIO_POINT
- **Return Type**: void
- **Parameters**: Ped ped, int scenario, const char* conditionalAnim, int p3, BOOL p4, BOOL p5, Hash p6, BOOL p7, float p8, BOOL p9

### _TASK_USE_SCENARIO_POINT_2
- **Return Type**: void
- **Parameters**: Ped ped, Ped ped2, Any p2, const char* p3, int p4, Hash p5, float p6, BOOL p7

### TASK_START_SCENARIO_IN_PLACE_HASH
- **Return Type**: void
- **Parameters**: Ped ped, Hash scenarioHash, int duration, BOOL playEnterAnim, Hash conditionalHash, float heading, BOOL p6
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/animations/scenarios Params: duration in milliseconds  conditionalHash (optionally): 0 = play random conditional anim. Every conditional anim has requirements to play it. If requirements are not met, ped plays random allowed conditional anim or can be stuck. For example, this scenario type has possible conditional anim WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_MALE_D, but it can not be played by player, because condition is set to NOT be CAIConditionIsPlayer (check file amb_rest.meta and amb_rest_CA.meta with OPENIV to clarify requirements).

### _TASK_START_SCENARIO_IN_PLACE_2
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, const char* p2, int p3, BOOL p4, float p5, BOOL p6
- **Description**: Takes scenario point handle instead of hash

### TASK_START_SCENARIO_AT_POSITION
- **Return Type**: void
- **Parameters**: Ped ped, Hash scenarioHash, float x, float y, float z, float heading, int duration, BOOL sittingScenario, BOOL teleport, const char* p9, float p10, BOOL p11

### TASK_START_SCENARIO_AT_POSITION
- **Return Type**: void
- **Parameters**: Ped ped, Hash scenarioHash, Vector3 vec, float heading, int duration, BOOL sittingScenario, BOOL teleport, const char* p9, float p10, BOOL p11

### _0xF97F462779B31786
- **Return Type**: Any
- **Parameters**: Any p0

### _0x6C269F673C47031E
- **Return Type**: Any
- **Parameters**: Any p0

### _0x9667CCE29BFA0780
- **Return Type**: void
- **Parameters**: Any p0

### _0x00FFE0F85253C572
- **Return Type**: Any
- **Parameters**: Any p0

### _TASK_USE_NEAREST_SCENARIO_TO_COORD
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float distance, int duration, BOOL p6, BOOL p7, BOOL p8, BOOL p9

### _TASK_USE_NEAREST_SCENARIO_TO_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float distance, int duration, BOOL p6, BOOL p7, BOOL p8, BOOL p9

### TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float distance, int duration, BOOL p6, BOOL p7, BOOL p8, BOOL p9

### TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float distance, int duration, BOOL p6, BOOL p7, BOOL p8, BOOL p9

### TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float distance

### TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float distance

### TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float distance, BOOL p5, BOOL p6, BOOL p7, BOOL p8

### TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float distance, BOOL p5, BOOL p6, BOOL p7, BOOL p8

### TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float distance, BOOL p5, BOOL p6, BOOL p7, BOOL p8

### TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float distance, BOOL p5, BOOL p6, BOOL p7, BOOL p8

### _0xFDECCA06E8B81346
- **Return Type**: Any
- **Parameters**: Ped ped

### _0x2D657B10F211C572
- **Return Type**: Any
- **Parameters**: Ped ped, float p1

### TASK_RIDE_TRAIN
- **Return Type**: void
- **Parameters**: Ped ped, Vehicle train, int scenarioPoint, Hash scenarioHash

### _0x79197F7D2BB5E73A
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### DOES_SCENARIO_EXIST_IN_AREA
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, float radius, BOOL p4, Any p5, BOOL p6

### DOES_SCENARIO_EXIST_IN_AREA
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, float radius, BOOL p4, Any p5, BOOL p6

### DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA_HASH
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, Hash typeHash, float radius, BOOL p5

### DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA_HASH
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, Hash typeHash, float radius, BOOL p5

### FIND_SCENARIO_OF_TYPE_HASH
- **Return Type**: int
- **Parameters**: float xPos, float yPos, float zPos, Hash scenarioType, float distance, Any p5, BOOL p6

### FIND_SCENARIO_OF_TYPE_HASH
- **Return Type**: int
- **Parameters**: Vector3 pos, Hash scenarioType, float distance, Any p5, BOOL p6

### _0x0D322AEF8878B8FE
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xD508FA229F1C4900
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### _0xB8E213D02F37947D
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### IS_SCENARIO_OCCUPIED
- **Return Type**: BOOL
- **Parameters**: float p0, float p1, float p2, float p3, BOOL p4

### _0x1ACBC313966C21F3
- **Return Type**: Any
- **Parameters**: int scenario

### PED_HAS_USE_SCENARIO_TASK
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _PED_IS_IN_SCENARIO_BASE
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0x90703A8F75EE4ABD
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xD999E379265A4501
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### PLAY_ANIM_ON_RUNNING_SCENARIO
- **Return Type**: void
- **Parameters**: Ped ped, const char* animDict, const char* animName

### _0x74F0209674864CBD
- **Return Type**: Any
- **Parameters**: 

### _0xE1C105E6BBA48270
- **Return Type**: Any
- **Parameters**: 

### _0x1AC5A8AB50CFAA33
- **Return Type**: Any
- **Parameters**: Any p0

### _0xBEEFBB608D2AA68A
- **Return Type**: void
- **Parameters**: Any p0

### _0x19BC99C678FBA139
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x5D9B0BAAF04CF65B
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x9B6A58FDB0024F12
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xBC3F847AE2C3DC65
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x450080DDEDB91258
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x954451EA2D2120FB
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x0F4F6C4CE471259D
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xB8E3486D107F4194
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x827A58CED9D4D5B4
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x4A7D73989F52EB37
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xB79817DB31FF72B9
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x65D281985F2BDFC2
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x885D19AC2B6FBFF4
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x2064B33F6E6B92D4
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0xCE4E669400E5F8AA
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x2EB977293923C723
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xE9225354FB7437A7
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x764DB5A48390FBAD
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x8F8C84363810691A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xFF8AFCA532B500D4
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xFE5D28B9B7837CC1
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x2B8AF29A78024BD3
- **Return Type**: void
- **Parameters**: Any p0

### _0x0365000D8BF86531
- **Return Type**: Any
- **Parameters**: Any p0

### _0x865732725536EE39
- **Return Type**: Vector3
- **Parameters**: Any p0

### _0x0E184495B27BB57D
- **Return Type**: void
- **Parameters**: 

### DOES_SCENARIO_GROUP_EXIST
- **Return Type**: BOOL
- **Parameters**: const char* scenarioGroup

### _DOES_SCENARIO_GROUP_EXIST_HASH
- **Return Type**: BOOL
- **Parameters**: Hash scenarioGroup

### IS_SCENARIO_GROUP_ENABLED
- **Return Type**: BOOL
- **Parameters**: const char* scenarioGroup

### _IS_SCENARIO_GROUP_ENABLED_HASH
- **Return Type**: BOOL
- **Parameters**: Hash scenarioGroup

### SET_SCENARIO_GROUP_ENABLED
- **Return Type**: void
- **Parameters**: const char* scenarioGroup, BOOL toggle

### _SET_SCENARIO_GROUP_ENABLED_HASH
- **Return Type**: void
- **Parameters**: Hash scenarioGroup, BOOL toggle

### RESET_SCENARIO_GROUPS_ENABLED
- **Return Type**: void
- **Parameters**: 

### _0x358A1A751B335A11
- **Return Type**: void
- **Parameters**: Any p0

### FORCE_SCENARIO_GROUP_PRIORITY
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xE55478C5EDF70AC2
- **Return Type**: Any
- **Parameters**: Any p0

### _IS_SCENARIO_POINT_ACTIVE
- **Return Type**: BOOL
- **Parameters**: int scenario

### _SET_SCENARIO_POINT_ACTIVE
- **Return Type**: void
- **Parameters**: int scenario, BOOL active

### _RESET_SCENARIO_SCRIPT
- **Return Type**: void
- **Parameters**: int scenario

### IS_SCENARIO_TYPE_ENABLED
- **Return Type**: BOOL
- **Parameters**: const char* scenarioType

### SET_SCENARIO_TYPE_ENABLED
- **Return Type**: void
- **Parameters**: const char* scenarioType, BOOL toggle

### _SET_SCENARIO_TYPE_ENABLED_HASH
- **Return Type**: void
- **Parameters**: Hash scenarioType, BOOL toggle

### RESET_SCENARIO_TYPES_ENABLED
- **Return Type**: void
- **Parameters**: 

### _GET_SCENARIO_POINT_TYPE_PED_IS_USING
- **Return Type**: int
- **Parameters**: Ped ped

### _GET_SCENARIO_POINT_TYPE
- **Return Type**: Hash
- **Parameters**: int scenario

### IS_PED_ACTIVE_IN_SCENARIO
- **Return Type**: BOOL
- **Parameters**: Ped ped, int scenario

### IS_PED_EXITING_SCENARIO
- **Return Type**: BOOL
- **Parameters**: Ped ped, BOOL p1

### _0x2C497BDEF897C6DF
- **Return Type**: Any
- **Parameters**: Any p0

### TASK_COMBAT_HATED_TARGETS_IN_AREA
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float radius, int flags, Any p6
- **Description**: Despite its name, it only attacks ONE hated target. The one closest to the specified position.

### TASK_COMBAT_HATED_TARGETS_IN_AREA
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float radius, int flags, Any p6

### TASK_COMBAT_HATED_TARGETS_NO_LOS_TEST
- **Return Type**: void
- **Parameters**: Ped ped, float radius

### TASK_COMBAT_HATED_TARGETS_AROUND_PED
- **Return Type**: void
- **Parameters**: Ped ped, float radius, int flags, Any p3
- **Description**: Despite its name, it only attacks ONE hated target. The one closest hated target.

### TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED
- **Return Type**: void
- **Parameters**: Ped ped, float radius, int time, int flags

### TASK_COMBAT_HATED_TARGETS
- **Return Type**: void
- **Parameters**: Ped ped, float radius

### _0x30B391915538EBE2
- **Return Type**: void
- **Parameters**: Any p0

### TASK_THROW_PROJECTILE
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3

### _TASK_THROW_PROJECTILE_2
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### TASK_WHISTLE_ANIM
- **Return Type**: void
- **Parameters**: Ped ped, Hash audPedWhistleType, Hash p2
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/AI/EVENTS/aud_ped_whistle_types.lua p2: UNSPECIFIED

### TASK_SWAP_WEAPON
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4

### _0x0000A8ACDC2E1B6A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### TASK_RELOAD_WEAPON
- **Return Type**: void
- **Parameters**: Ped ped, BOOL unused

### TASK_PICK_UP_WEAPON
- **Return Type**: void
- **Parameters**: Ped ped, Any p1

### IS_PED_GETTING_UP
- **Return Type**: BOOL
- **Parameters**: Ped ped

### TASK_ANIMAL_WRITHE
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2

### _TASK_ANIMAL_BLEED_OUT
- **Return Type**: void
- **Parameters**: Ped ped, Ped killer, BOOL p2, Hash weaponHash, int p4, int p5

### IS_PED_IN_WRITHE
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: This native checks if a ped is on the ground, in pain from a (gunshot) wound.

### _0x3F8387DB1B9F31B7
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x756C7B4C43DF0422
- **Return Type**: Any
- **Parameters**: Any p0

### _0x351F74ED6177EBE7
- **Return Type**: Any
- **Parameters**: 

### _0x6C50B9DCCCA70023
- **Return Type**: Any
- **Parameters**: Any p0

### TASK_REVIVE_TARGET
- **Return Type**: void
- **Parameters**: Ped ped, Ped reviver, Hash tool

### OPEN_PATROL_ROUTE
- **Return Type**: void
- **Parameters**: const char* patrolRoute
- **Description**: Note: patrolRoute must be prefixed with 'miss_' for it to be valid

### CLOSE_PATROL_ROUTE
- **Return Type**: void
- **Parameters**: 

### ADD_PATROL_ROUTE_NODE
- **Return Type**: void
- **Parameters**: int nodeId, const char* scenarioName, float x, float y, float z, float lookPosX, float lookPosY, float lookPosZ, int duration, BOOL p9

### ADD_PATROL_ROUTE_NODE
- **Return Type**: void
- **Parameters**: int nodeId, const char* scenarioName, Vector3 vec, Vector3 lookpos, int duration, BOOL p9

### ADD_PATROL_ROUTE_LINK
- **Return Type**: void
- **Parameters**: int node1, int node2

### CREATE_PATROL_ROUTE
- **Return Type**: void
- **Parameters**: 

### DELETE_PATROL_ROUTE
- **Return Type**: void
- **Parameters**: const char* patrolRoute

### _0x643FD1556F621772
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### TASK_PATROL
- **Return Type**: void
- **Parameters**: Ped ped, const char* patrolRoute, Any p2, BOOL p3, BOOL p4

### _TASK_PATROL_2
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7

### TASK_STAY_IN_COVER
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: Makes the ped run to take cover

### TASK_VEHICLE_SHOOT_AT_PED
- **Return Type**: void
- **Parameters**: Ped ped, Ped target, float p2

### TASK_VEHICLE_AIM_AT_PED
- **Return Type**: void
- **Parameters**: Ped ped, Ped target

### TASK_VEHICLE_SHOOT_AT_COORD
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, float p4

### TASK_VEHICLE_SHOOT_AT_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, float p4

### _0xAF2EF28CE3084505
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### TASK_VEHICLE_AIM_AT_COORD
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z

### TASK_VEHICLE_AIM_AT_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec

### TASK_VEHICLE_GOTO_NAVMESH
- **Return Type**: void
- **Parameters**: Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int behaviorFlag, float stoppingRange

### TASK_VEHICLE_GOTO_NAVMESH
- **Return Type**: void
- **Parameters**: Ped ped, Vehicle vehicle, Vector3 vec, float speed, int behaviorFlag, float stoppingRange

### TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15

### TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD_USING_COMBAT_STYLE
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15

### TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped1, float x, float y, float z, Ped ped2, float p5, Any p6, float p7, float p8, Any p9, Any p10, Any p11, Hash firingPattern, int p13, Any p14

### TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped1, Vector3 vec, Ped ped2, float p5, Any p6, float p7, float p8, Any p9, Any p10, Any p11, Hash firingPattern, int p13, Any p14

### TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14

### TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10
- **Description**: shootatEntity: If true, peds will shoot at Entity till it is dead. If false, peds will just walk till they reach the entity and will cease shooting.

### TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10

### TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD
- **Return Type**: void
- **Parameters**: Ped ped, float goToLocationX, float goToLocationY, float goToLocationZ, float focusLocationX, float focusLocationY, float focusLocationZ, float speed, BOOL shootAtEnemies, float distanceToStopAt, float noRoadsDistance, BOOL unkTrue, int unkFlag, int aimingFlag, Hash firingPattern

### TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 gotolocation, Vector3 focuslocation, float speed, BOOL shootAtEnemies, float distanceToStopAt, float noRoadsDistance, BOOL unkTrue, int unkFlag, int aimingFlag, Hash firingPattern

### TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD_USING_COMBAT_STYLE
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14

### SET_HIGH_FALL_TASK
- **Return Type**: void
- **Parameters**: Ped ped, int p1, int p2, int p3
- **Description**: Makes the ped ragdoll like when falling from a great height

### _0x5217B7B6DB78E1F3
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### REQUEST_WAYPOINT_RECORDING
- **Return Type**: void
- **Parameters**: const char* waypointRecording

### GET_IS_WAYPOINT_RECORDING_LOADED
- **Return Type**: BOOL
- **Parameters**: const char* waypointRecording

### REMOVE_WAYPOINT_RECORDING
- **Return Type**: void
- **Parameters**: const char* waypointRecording

### _0xF718931A82EEB898
- **Return Type**: void
- **Parameters**: 

### WAYPOINT_RECORDING_GET_NUM_POINTS
- **Return Type**: BOOL
- **Parameters**: const char* waypointRecording, int* points

### WAYPOINT_RECORDING_GET_COORD
- **Return Type**: BOOL
- **Parameters**: const char* waypointRecording, int point, Vector3* coord

### WAYPOINT_RECORDING_GET_SPEED_AT_POINT
- **Return Type**: float
- **Parameters**: const char* waypointRecording, int point

### WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT
- **Return Type**: BOOL
- **Parameters**: const char* waypointRecording, float x, float y, float z, int* point

### WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT
- **Return Type**: BOOL
- **Parameters**: const char* waypointRecording, Vector3 vec, int* point

### TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED
- **Return Type**: void
- **Parameters**: Ped ped, Any p1

### TASK_FOLLOW_WAYPOINT_RECORDING
- **Return Type**: void
- **Parameters**: Ped ped, const char* waypointRecording, int p2, int flag, int p4, BOOL p5, Any p6, int p7

### TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET
- **Return Type**: void
- **Parameters**: Ped ped, const char* waypointRecording, float p2, int p3, int p4, int p5, BOOL p6

### TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET
- **Return Type**: void
- **Parameters**: Ped ped0, Ped ped1, const char* waypointRecording, float p3, float p4, int p5, int p6, int p7, BOOL p8

### IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED
- **Return Type**: BOOL
- **Parameters**: Ped ped, const char* waypointRecording

### GET_PED_WAYPOINT_PROGRESS
- **Return Type**: int
- **Parameters**: Ped ped

### GET_PED_WAYPOINT_DISTANCE
- **Return Type**: float
- **Parameters**: Ped ped

### SET_PED_WAYPOINT_ROUTE_OFFSET
- **Return Type**: Any
- **Parameters**: Ped ped, float p1, float p2, float p3

### GET_WAYPOINT_DISTANCE_ALONG_ROUTE
- **Return Type**: float
- **Parameters**: const char* waypointRecording, int p1

### _0x3ACC128510142B9D
- **Return Type**: float
- **Parameters**: const char* waypointRecording, float x, float y, float z

### _0x3ACC128510142B9D
- **Return Type**: float
- **Parameters**: const char* waypointRecording, Vector3 vec

### WAYPOINT_PLAYBACK_GET_IS_PAUSED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### WAYPOINT_PLAYBACK_GET_IS_AIMING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### WAYPOINT_PLAYBACK_GET_IS_SHOOTING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### WAYPOINT_PLAYBACK_PAUSE
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3

### WAYPOINT_PLAYBACK_RESUME
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1, int p2, int p3

### WAYPOINT_PLAYBACK_OVERRIDE_SPEED
- **Return Type**: void
- **Parameters**: Ped ped, float speed, Any p2, Any p3, Any p4

### WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED
- **Return Type**: void
- **Parameters**: Ped ped

### GET_PED_WAYPOINT_OVERRIDE_SPEED
- **Return Type**: float
- **Parameters**: Ped ped

### USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE
- **Return Type**: void
- **Parameters**: const char* waypointRecording, BOOL p1, float p2, float p3, BOOL p4

### WAYPOINT_PLAYBACK_START_AIMING_AT_PED
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### WAYPOINT_PLAYBACK_START_AIMING_AT_ENTITY
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### WAYPOINT_PLAYBACK_START_AIMING_AT_COORD
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING
- **Return Type**: void
- **Parameters**: Any p0

### ASSISTED_MOVEMENT_REMOVE_ROUTE
- **Return Type**: void
- **Parameters**: const char* route

### _CREATE_WAYPOINT_PATH
- **Return Type**: BOOL
- **Parameters**: const char* pathName, Any* p1, int nodes, int p3

### ASSISTED_MOVEMENT_IS_ROUTE_LOADED
- **Return Type**: BOOL
- **Parameters**: const char* route

### ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES
- **Return Type**: void
- **Parameters**: const char* route, int props

### SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8

### TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING
- **Return Type**: void
- **Parameters**: Ped ped, Vehicle vehicle, const char* waypointRecording, int drivingMode, Any p4, int eWaypoint, int flag, float p7, BOOL p8, float stoppingDist, Any p10

### _TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING_2
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9

### IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Any p0, Any p1

### GET_VEHICLE_WAYPOINT_PROGRESS
- **Return Type**: int
- **Parameters**: Vehicle vehicle

### GET_VEHICLE_WAYPOINT_TARGET_POINT
- **Return Type**: int
- **Parameters**: Vehicle vehicle

### VEHICLE_WAYPOINT_PLAYBACK_PAUSE
- **Return Type**: void
- **Parameters**: Vehicle vehicle

### VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED
- **Return Type**: Any
- **Parameters**: Any p0

### VEHICLE_WAYPOINT_PLAYBACK_RESUME
- **Return Type**: void
- **Parameters**: Vehicle vehicle

### VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED
- **Return Type**: void
- **Parameters**: Vehicle vehicle

### VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float speed

### GET_VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED
- **Return Type**: Any
- **Parameters**: Any p0

### TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### TASK_SET_STEALTH_MOVEMENT
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1, Any p2, BOOL p3

### TASK_SET_CROUCH_MOVEMENT
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1, Any p2, BOOL p3

### TASK_FORCE_MOTION_STATE
- **Return Type**: void
- **Parameters**: Ped ped, Hash motionStateHash, BOOL p2
- **Description**: motionStateHash: see FORCE_PED_MOTION_STATE

### TASK_MOVE_NETWORK_BY_NAME
- **Return Type**: void
- **Parameters**: Ped ped, const char* task, float multiplier, BOOL p3, const char* animDict, int flags

### TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS
- **Return Type**: void
- **Parameters**: Ped ped, const char* moveNetworkDefName, Any* taskData, float p3, BOOL p4, const char* animDict, int flags

### TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS
- **Return Type**: void
- **Parameters**: Ped ped, const char* moveNetworkDefName, Any* taskData, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, int p9, float p10, int p11, int p12, int flag, int p14

### TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS
- **Return Type**: void
- **Parameters**: Ped ped, const char* moveNetworkDefName, Any* taskData, Vector3 pos, Vector3 rot, int p9, float p10, int p11, int p12, int flag, int p14

### TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS_ATTACHED
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17

### IS_TASK_MOVE_NETWORK_ACTIVE
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _GET_TASK_MOVE_NETWORK_ID
- **Return Type**: Hash
- **Parameters**: Ped ped
- **Description**: Returns hash of the underlying move network def, see move_networks.xml https://alloc8or.re/rdr3/doc/misc/move_networks.txt

### IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION
- **Return Type**: BOOL
- **Parameters**: Ped ped

### REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION
- **Return Type**: void
- **Parameters**: Ped ped, const char* name

### _0xE9A6400D1A0E7A55
- **Return Type**: Any
- **Parameters**: Any p0

### _0x615DC4A82E90BB48
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT
- **Return Type**: void
- **Parameters**: Ped ped, const char* signalName, float value

### _SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT_2
- **Return Type**: void
- **Parameters**: Ped ped, const char* signalName, float value

### SET_TASK_MOVE_NETWORK_SIGNAL_BOOL
- **Return Type**: void
- **Parameters**: Ped ped, const char* signalName, BOOL value

### _SET_TASK_MOVE_NETWORK_SIGNAL_VECTOR
- **Return Type**: void
- **Parameters**: Ped ped, const char* signalName, float x, float y, float z

### _SET_TASK_MOVE_NETWORK_SIGNAL_VECTOR
- **Return Type**: void
- **Parameters**: Ped ped, const char* signalName, Vector3 vec

### _GET_TASK_MOVE_NETWORK_PHASE_FLOAT
- **Return Type**: float
- **Parameters**: Ped ped, const char* phaseName

### GET_TASK_MOVE_NETWORK_EVENT
- **Return Type**: BOOL
- **Parameters**: Ped ped, const char* eventName

### _0x9585FF23C4B8EDE0
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xEAF87DA2BE78A15B
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x3BBEECC5B8F35318
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### IS_MOVE_BLEND_RATIO_STILL
- **Return Type**: BOOL
- **Parameters**: float moveBlendRatio

### IS_MOVE_BLEND_RATIO_WALKING
- **Return Type**: BOOL
- **Parameters**: float moveBlendRatio

### IS_MOVE_BLEND_RATIO_RUNNING
- **Return Type**: BOOL
- **Parameters**: float moveBlendRatio

### IS_MOVE_BLEND_RATIO_SPRINTING
- **Return Type**: BOOL
- **Parameters**: float moveBlendRatio

### IS_PED_STILL
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_WALKING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_RUNNING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_SPRINTING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### IS_PED_IN_HIT_REACT
- **Return Type**: BOOL
- **Parameters**: Ped ped

### TASK_ARREST_PED
- **Return Type**: void
- **Parameters**: Ped ped, Ped target

### IS_PED_BEING_ARRESTED
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: This function is hard-coded to always return false.

### _IS_PED_ARRESTING_ANY_PED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _CUFF_PED
- **Return Type**: void
- **Parameters**: Ped ped

### UNCUFF_PED
- **Return Type**: void
- **Parameters**: Ped ped

### IS_PED_CUFFED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _IS_PED_DUELLING
- **Return Type**: BOOL
- **Parameters**: Ped ped

### TASK_DUEL
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, float p2, Entity entity, float p4, int p5, float vPosOpponentX, float vPosOpponentY, float vPosOpponentZ, float fOpponentHead, int p10
- **Description**: Params: p4 either 0.2f, 0.25f, 0.31f, 0.4f

### TASK_DUEL
- **Return Type**: void
- **Parameters**: Ped ped, Any p1, float p2, Entity entity, float p4, int p5, Vector3 vposopponent, float fOpponentHead, int p10

### _0x908BB14BCE85C80E
- **Return Type**: Any
- **Parameters**: Any p0

### _0x1F7A9A9C38C13A56
- **Return Type**: Any
- **Parameters**: Any p0

### _0x3FEB770D8ED9047A
- **Return Type**: Any
- **Parameters**: Any p0

### _0x30146C25686B7836
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x59AE5CA4FFB4E378
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x748D5E0D2A1A4C61
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### END_DUEL
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1, float p2

### _0x651F0530083C0E5A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### TASK_CARRIABLE
- **Return Type**: void
- **Parameters**: Entity entity, Hash carryConfig, Ped carrier, int carriableSlot, int flags
- **Description**: carriableSlot: 7 > Back of a horse 6 > Right side of a horse 5 > Left side of a horse flags: 512: enables the prompt being the name of the item when using a generic item

### _0x9EBD34958AB6F824
- **Return Type**: void
- **Parameters**: Any p0

### GET_IS_CARRIABLE_ENTITY
- **Return Type**: BOOL
- **Parameters**: Entity entity

### _0x10ADFDF07B7DFFBA
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### TASK_PLACE_CARRIED_ENTITY_AT_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Entity entity, float x, float y, float z, float p5, int flags

### TASK_PLACE_CARRIED_ENTITY_AT_COORD
- **Return Type**: void
- **Parameters**: Ped ped, Entity entity, Vector3 vec, float p5, int flags

### TASK_PLACE_CARRIED_ENTITY_ON_MOUNT
- **Return Type**: void
- **Parameters**: Ped ped, Entity entity, Ped mount, float p3

### TASK_DUMP_CARRIABLE_FROM_PARENT
- **Return Type**: void
- **Parameters**: Ped ped, Ped ped2, Entity entity

### _DETACH_CARRIABLE_PED
- **Return Type**: void
- **Parameters**: Ped ped

### _0xE2CF104ADD49D4BF
- **Return Type**: void
- **Parameters**: Any p0

### TASK_PICKUP_CARRIABLE_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, Entity entity

### TASK_HOGTIE_TARGET_PED
- **Return Type**: void
- **Parameters**: Ped ped, Ped targetPed

### _TASK_CUT_FREE_HOGTIED_TARGET_PED
- **Return Type**: void
- **Parameters**: Ped ped, Ped targetPed

### _TASK_CUT_FREE_HOGTIED_TARGET_PED_2
- **Return Type**: void
- **Parameters**: Ped ped, Ped targetPed, float p2

### _SET_HOGTIE_ESCAPE_TIMER
- **Return Type**: void
- **Parameters**: Ped ped, float time
- **Description**: Sets the time it takes for a hogtied ped to escape -1.0f for ped to never escape

### _GET_HOGTIE_ESCAPE_TIMER
- **Return Type**: float
- **Parameters**: Ped ped

### _0x03D741CB4052E26C
- **Return Type**: Any
- **Parameters**: Any p0

### _REQUEST_HERB_COMPOSITE_ASSET
- **Return Type**: BOOL
- **Parameters**: Hash asset
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/objects/composites

### ARE_COMPOSITE_LOOTABLE_ENTITY_DEF_ASSETS_LOADED
- **Return Type**: BOOL
- **Parameters**: Hash asset
- **Description**: Returns true when requested asset is loaded

### _CREATE_HERB_COMPOSITES
- **Return Type**: int
- **Parameters**: Hash asset, float x, float y, float z, float heading, int groundSetting, Any* p6, int p7
- **Description**: groundSetting: 0: spawn on ground, 2 (1?): do not spawn on ground p7: -1 in R* Scripts Returns compositeId

### _CREATE_HERB_COMPOSITES
- **Return Type**: int
- **Parameters**: Hash asset, Vector3 vec, float heading, int groundSetting, Any* p6, int p7

### _DELETE_PATCH_OBJECTS_FROM_HERB_COMPOSITES
- **Return Type**: void
- **Parameters**: int compositeId, BOOL p1
- **Description**: Params: p1 is always false except in script nb_egg_protector

### _GET_HERB_COMPOSITE_NUM_ENTITIES
- **Return Type**: int
- **Parameters**: int compositeId, Any* outEntities
- **Description**: Flowers, Stalks or whatever the composite has

### _0xDF56A2B50C04DEA4
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### TASK_LOOT_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, Entity entity

### TASK_BREAK_VEHICLE_DOOR_LOCK
- **Return Type**: void
- **Parameters**: Ped ped, Vehicle vehicle

### TASK_LOOT_NEAREST_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, float x, float y, float z, int p4, float p5

### TASK_LOOT_NEAREST_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, Vector3 vec, int p4, float p5

### TASK_LASSO_PED
- **Return Type**: void
- **Parameters**: Ped ped, Ped targetPed

### TASK_HOGTIEABLE
- **Return Type**: void
- **Parameters**: Ped ped

### UNHOGTIE_PED
- **Return Type**: void
- **Parameters**: Ped ped, int flags, Hash getupSetHash, const char* p3, const char* p4, float p5
- **Description**: getupSetHash: see nm_blend_out_sets.meta

### _0x722D6A49200174FE
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _MAKE_OBJECT_CARRIABLE
- **Return Type**: void
- **Parameters**: Object object

### MAKE_OBJECT_NOT_CARRIABLE
- **Return Type**: void
- **Parameters**: Object object

### _0x8E1DDE26D270CC5E
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xA6A76D666A281F2D
- **Return Type**: void
- **Parameters**: Any p0, Hash item

### _0xA21AA2F0C2180125
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _FIND_MODEL_FOR_ITEM
- **Return Type**: Hash
- **Parameters**: Hash item

### _0xFF745B0346E19E2C
- **Return Type**: void
- **Parameters**: Any p0

### _0xB8F52A3F84A7CC59
- **Return Type**: Any
- **Parameters**: Any p0

### _0x6AFDA2264925BD11
- **Return Type**: void
- **Parameters**: Any p0

### _0x816A3ACD265E2297
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x4E806A395D43A458
- **Return Type**: void
- **Parameters**: Any p0

### SET_TEAM_CARRIABLE_ENTITY
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### IS_TEAM_CARRIABLE_ENTITY
- **Return Type**: BOOL
- **Parameters**: Any p0, Any p1

### _IS_HAT_BEING_PICKED_UP
- **Return Type**: BOOL
- **Parameters**: Object hatObject
- **Description**: Returns true while a hat is being picked up _IS_A* - _IS_D*

### _0x9ADDBB9242179D56
- **Return Type**: void
- **Parameters**: Object object, Ped ped

### _IS_HAT_BEING_PICKED_UP_2
- **Return Type**: BOOL
- **Parameters**: Object hatObject
- **Description**: Returns true while a hat is being picked up. Similar to 0x11CD066F54DA0133 _IS_A* - _IS_D*

### _TASK_EQUIP_HAT
- **Return Type**: void
- **Parameters**: Object hatObject, Ped ped
- **Description**: _A*

### _0x7CB99FADDE73CD1B
- **Return Type**: Any
- **Parameters**: Any p0

### _0xF3C3503276F4A034
- **Return Type**: void
- **Parameters**: Entity entity, Any p1

### _0x6DAC799857EF3F11
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x920684BE432875B1
- **Return Type**: Any
- **Parameters**: Any p0

### SET_ENHANCED_BREAK_FREE
- **Return Type**: BOOL
- **Parameters**: Ped ped, BOOL p1, const char* clipset
- **Description**: clipset: CLIPSET@MECH_HOGTIE@HUMAN@BREAKOUT_MG@GROUND, CLIPSET@MECH_HOGTIE@HUMAN@BREAKOUT_MG@SHOULDER, CLIPSET@MECH_HOGTIE@HUMAN@BREAKOUT_MG@MOUNT clipset can also be 0

### _0x6AFD84AEAA3EA538
- **Return Type**: Any
- **Parameters**: Any p0

### _0xBD1C3C0F271C39D3
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x1ECF56C040FD839C
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xF40A109B4B79A848
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _IS_PED_LEADING_HORSE
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0xAC5045AB7F1A34FD
- **Return Type**: Any
- **Parameters**: Any p0

### _GET_LED_HORSE_FROM_PED
- **Return Type**: Ped
- **Parameters**: Ped ped

### TASK_TURN_TO_FACE_CLOSEST_PED
- **Return Type**: void
- **Parameters**: Ped ped, float p1, float p2, int p3

### TASK_CONFRONT
- **Return Type**: BOOL
- **Parameters**: Ped ped, Ped targetPed, int p2

### TASK_POLICE
- **Return Type**: BOOL
- **Parameters**: Ped ped, BOOL p1

### TASK_MELEE
- **Return Type**: BOOL
- **Parameters**: Ped ped, Ped targetPed, Hash p2, Any p3, Any p4, float p5, Any p6, float p7
- **Description**: Params: p2: AR_TAKEDOWN_FRONT, AR_EXECUTION_FRONT, 0 in R* Scripts

### TASK_GRAPPLE
- **Return Type**: BOOL
- **Parameters**: Ped ped, Ped targetPed, Hash grappleStyle, int p3, float p4, int p5, int p6
- **Description**: grappleStyle: AR_GRAPPLE_MOUNT_STANDING_FROM_FRONT, AR_GRAPPLE_MOUNT_STANDING_FROM_RIGHT, AR_GRAPPLE_MOUNT_STANDING_FROM_BACK, AR_GRAPPLE_MOUNT_STANDING_FROM_LEFT, AR_GRAPPLE_MOUNT_FROM_FRONT, AR_WOLF_EXECUTION_ENTER_FROM_BACK, AR_GRAPPLE_DRAG_FRONT_ON_ASS, AR_GRAPPLE_FRONT_FROM_LEFT_FAR, AR_BEAR_CHALLENGE_FRONT, AR_GRAPPLE_FRONT_FROM_FRONT, AR_GRAPPLE_MOUNT_FACEUP_FROM_FRONT

### _TASK_INTIMIDATED
- **Return Type**: BOOL
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _TASK_INTIMIDATED_2
- **Return Type**: BOOL
- **Parameters**: Ped victim, Ped attacker, int p2, BOOL p3, BOOL p4, BOOL everyFrame, BOOL p6, BOOL p7, int flag

### _0x2948235DB2058E99
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xB2F47A1AFDFCC595
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x41D1331AFAD5A091
- **Return Type**: void
- **Parameters**: Ped ped, int p1, Any p2
- **Description**: _SET_PED_*

### _0x801BD27403F3CBA0
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x0FE797DD9F70DFA6
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### TASK_PERSISTENT_CHARACTER
- **Return Type**: void
- **Parameters**: Ped ped

### _0xFC7F71CF49F70B6B
- **Return Type**: void
- **Parameters**: Any p0

### _0xE01F55B2896F6B37
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xE62754D09354F6CF
- **Return Type**: Any
- **Parameters**: Any p0

### _0x4BA972D0E5AD8122
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _GET_TASK_FISHING
- **Return Type**: BOOL
- **Parameters**: Ped ped, Any* p1
- **Description**: Fishing Research: https://pastebin.com/NmK5ZLVs Only used in R* Scripts fishing_core and av_fishing_river

### _SET_TASK_FISHING
- **Return Type**: BOOL
- **Parameters**: Ped ped, Any* p1
- **Description**: Only used in R* Scripts fishing_core and av_fishing_river

### TASK_SWAP_FISHING_BAIT
- **Return Type**: void
- **Parameters**: Ped ped, const char* bait, BOOL withoutBuoy
- **Description**: Baits: see 0x9B0C7FA063E67629

### _SET_FISHING_BAIT
- **Return Type**: void
- **Parameters**: Ped ped, const char* bait, BOOL withoutBuoy, BOOL instantly
- **Description**: Baits: p_fishHook02x, p_baitBread01x, p_baitCorn01x, p_baitCheese01x, p_baitWorm01x, p_baitCricket01x, p_crawdad01x, p_finisheDragonfly01x, p_finisdFishlure01x, p_finishdCrawd01x, p_finisheDragonflyLegendary01x, p_finisdFishlureLegendary01x, p_finishdCrawdLegendary01x, p_lgoc_spinner_v4

### _0x1F298C7BD30D1240
- **Return Type**: void
- **Parameters**: Ped ped

### _PED_FISHINGROD_HOOK_ENTITY
- **Return Type**: void
- **Parameters**: Ped ped, Entity entity

### _PED_FISHINGROD_HOOK_OBJECT
- **Return Type**: void
- **Parameters**: Ped ped, Object object
- **Description**: Used with 'P_BODYPARTARMFLOAT02X' model in fishing_core.c

### _0xB520DBDA7FCF573F
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0x31BB338F64D5C861
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1

### _0x517D01BF27B682D1
- **Return Type**: void
- **Parameters**: Ped ped, Entity entity, float p2, float p3, float p4, float p5, int p6

### _0x88FD60D846D9CD63
- **Return Type**: void
- **Parameters**: Ped ped

### _0x9050DF2C53801208
- **Return Type**: void
- **Parameters**: Ped ped, float p1

### _0x22CDBF317C40A122
- **Return Type**: void
- **Parameters**: Ped ped

### _0x5952DFA38FA529FE
- **Return Type**: Any
- **Parameters**: 

### TASK_PLAY_EMOTE_WITH_HASH
- **Return Type**: void
- **Parameters**: Ped ped, int emoteType, int playbackMode, Hash emote, BOOL isSecondaryTask, BOOL canBreakOut, BOOL disableEarlyOutAnimTag, BOOL ignoreInvalidMainTask, BOOL destroyProps
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/animations/kit_emotes_list.lua emote: https://alloc8or.re/rdr3/doc/enums/eEmote.txt  enum eEmoteType { EMOTE_TYPE_INVALID = -1, EMOTE_TYPE_REACT, EMOTE_TYPE_ACTION, EMOTE_TYPE_TAUNT, EMOTE_TYPE_GREET, EMOTE_TYPE_TWIRL_GUN, EMOTE_TYPE_DANCE_FLOOR };  enum eEmotePlaybackMode { EMOTE_PM_INVALID = -1, EMOTE_PM_UPPERBODY, EMOTE_PM_UPPERBODY_LOOP, EMOTE_PM_FULLBODY, };

### _TASK_PLAY_EMOTE
- **Return Type**: void
- **Parameters**: Ped ped, int emoteType, int playbackMode, Hash emote, BOOL isSecondaryTask, BOOL canBreakOut, BOOL disableEarlyOutAnimTag, BOOL ignoreInvalidMainTask, BOOL destroyProps
- **Description**: Similar to 0xB31A277C1AC7B7FF but checks if the ped's inventory contains the specified emote kit.

### _0x6A1AF481407BF6E9
- **Return Type**: void
- **Parameters**: Any p0

### _TASK_EMOTE_OUTRO
- **Return Type**: void
- **Parameters**: Ped ped

### _0xEC516FE805D2CB2D
- **Return Type**: void
- **Parameters**: Any p0

### _0x59AEA4DC640814B9
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x11C7CE1AE38911B5
- **Return Type**: Any
- **Parameters**: Any p0

### _0xD0ABC4EA3B5E21A0
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### IS_EMOTE_TASK_RUNNING
- **Return Type**: BOOL
- **Parameters**: Ped ped, Any p1


## TELEMETRY
### _TELEMETRY_SET_IS_FLOW
- **Return Type**: void
- **Parameters**: BOOL toggle

### _0xEC0BD8736DCAF841
- **Return Type**: void
- **Parameters**: BOOL toggle

### _TELEMETRY_MISSION_STARTED
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _TELEMETRY_MISSION_OVER
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _TELEMETRY_MISSION_CHECKPOINT
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _TELEMETRY_PLAYER_SPAWNED
- **Return Type**: void
- **Parameters**: Ped ped

### _TELEMETRY_CREATE_UUID
- **Return Type**: BOOL
- **Parameters**: Any* uuid
- **Description**: Works in MP only.

### _TELEMETRY_MATCH_QUEUE
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### _TELEMETRY_MATCH_STARTED
- **Return Type**: void
- **Parameters**: Any* p0, Any* p1

### _TELEMETRY_MATCH_OVER
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _TELEMETRY_MATCH_VOTE
- **Return Type**: void
- **Parameters**: Any* p0, Any* p1

### _TELEMETRY_LOBBY_PROGRESSION
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _TELEMETRY_GAME_PROGRESS
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _TELEMETRY_HERB_PICKED
- **Return Type**: void
- **Parameters**: Hash herbType

### _TELEMETRY_ANIMAL_SKINNED
- **Return Type**: void
- **Parameters**: Hash type, Any* items

### _TELEMETRY_CAMP_CREATED
- **Return Type**: void
- **Parameters**: Any p0

### _TELEMETRY_CAMP_SUPPLIES
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _TELEMETRY_REGION
- **Return Type**: void
- **Parameters**: Hash regionHash

### _TELEMETRY_SHOP_ENTRY
- **Return Type**: void
- **Parameters**: Any shopType, Any shopRegion, Any region, Any p3, Any p4, Any p5

### _TELEMETRY_SHOP_EXIT
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _TELEMETRY_SET_SHOP_FOR_TRANSACTION
- **Return Type**: void
- **Parameters**: int transactionId, Hash p1, Hash p2

### _TELEMETRY_SHOP_PURCHASE
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _TELEMETRY_SHOP_SELL
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, int centSalePrice

### _TELEMETRY_GOLD_STORE
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _CLEAR_TELEMETRY_SHOP_UI
- **Return Type**: void
- **Parameters**: 

### _TELEMETRY_SHOP_CUTSCENE
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _TELEMETRY_AMBIENT_VIGNETTE
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### _TELEMETRY_DISCOVERABLE
- **Return Type**: void
- **Parameters**: Any p0

### _TELEMETRY_HONOR
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _TELEMETRY_CRAFT_ITEM
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any quantity

### TELEMETRY_CAMP_DONATE
- **Return Type**: void
- **Parameters**: Any transactionId, Any p1, Any p2, Any p3, Any p4, Hash slotId, Hash p6, Any p7, BOOL p8

### _TELEMETRY_MOONSHINE_BREW
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10

### _TELEMETRY_COLLECT
- **Return Type**: void
- **Parameters**: Any transactionId, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### _TELEMETRY_MISSION_ILO_OPTION
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _TELEMETRY_MISSION_FAILED_TO_LAUNCH
- **Return Type**: void
- **Parameters**: Any p0, Any p1, float x, float y, float z, int reason
- **Description**: _TELEMETRY_C* - _TELEMETRY_G*

### _TELEMETRY_MISSION_FAILED_TO_LAUNCH
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Vector3 vec, int reason

### _TELEMETRY_GANG_SHARES
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _TELEMETRY_FAST_TRAVEL
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _TELEMETRY_NET_CAMP
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### _TELEMETRY_RPG_GLOBAL_CALCULATE_ATTRIBUTE_CORE_DELTA
- **Return Type**: void
- **Parameters**: 
- **Description**: Creation of the metric is related to attribute filling, i. e. at camp fires, when the ped is resting. _TELEMETRY_C* - _TELEMETRY_P*

### _TELEMETRY_SLEEP
- **Return Type**: void
- **Parameters**: Any p0

### _TELEMETRY_PARLEY_FEUD
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### TELEMETRY_PLAYER_MENU_PIN
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _TELEMETRY_NOTORIETY
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _TELEMETRY_DEFENSIVE
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _TELEMETRY_LOOT
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _TELEMETRY_EMOTE_ADD_CATEGORY_TO_SAVE
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Hash emote

### _TELEMETRY_FAVOR_EMOTE
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _TELEMETRY_POKER_OVER
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9

### _TELEMETRY_TRIGGER_TRANSACTION_REQUEST
- **Return Type**: BOOL
- **Parameters**: Any* requestId, Any* transactionId
- **Description**: Returns false when transaction request is failing

### _TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID
- **Return Type**: BOOL
- **Parameters**: Any* transactionId, Any* requestId

### _TELEMETRY_ROLE_BOUNTY
- **Return Type**: void
- **Parameters**: Any p0

### _TELEMETRY_BOUNTY_TARGET
- **Return Type**: void
- **Parameters**: Any* data

### _TELEMETRY_PRISON
- **Return Type**: void
- **Parameters**: Any transactionId, Any bountyAmount, Ped ped, Any completionType, Any jailTimeServed, Any jailTimeLeft, Any posseRole

### _TELEMETRY_ROLE_TRADER
- **Return Type**: void
- **Parameters**: Any p0, Any transactionId

### _TELEMETRY_ROLE_MOONSHINER
- **Return Type**: void
- **Parameters**: Any p0, Any transactionId

### _TELEMETRY_ROLE_COLLECTOR
- **Return Type**: void
- **Parameters**: Any transactionId, Any collectible, Any category, Any p3, Any p4, Any p5, Any p6

### _TELEMETRY_PHOTO
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _TELEMETRY_START_GUN_LOCKER_INTERACTION
- **Return Type**: void
- **Parameters**: 

### _TELEMETRY_GUN_LOCKER
- **Return Type**: void
- **Parameters**: 

### _TELEMETRY_GUN_LOCKER_WEAPON_STORED
- **Return Type**: void
- **Parameters**: Hash p0

### _TELEMETRY_GUN_LOCKER_WEAPON_REMOVED
- **Return Type**: void
- **Parameters**: Hash p0

### _TELEMETRY_ROLE_TOKEN_TRANSACTION
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### _TELEMETRY_COUPON
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### TELEMETRY_PERSONAL_VEHICLE_MOUNT
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _TELEMETRY_PERSONAL_VEHICLE_WAGON
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _TELEMETRY_MENU_NAVIGATION
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _TELEMETRY_HUB_NAVIGATION
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _TELEMETRY_HUB_OFFERS
- **Return Type**: void
- **Parameters**: Any couponItem, Any p1

### _TELEMETRY_SAMPLE
- **Return Type**: void
- **Parameters**: Any transactionId, Any animal, Any p2, Any bSampled, BOOL bTranq

### _TELEMETRY_ROLE_NATURALIST
- **Return Type**: void
- **Parameters**: Any transactionId, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9

### _TELEMETRY_PHOTO_CAM
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8

### _TELEMETRY_INTRO_SKIP
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### ANALYTICS_PLAYTIME_FREEMODE_START
- **Return Type**: void
- **Parameters**: 

### ANALYTICS_PLAYTIME_FREEMODE_END
- **Return Type**: void
- **Parameters**: 

### _TELEMETRY_CUSTOM
- **Return Type**: void
- **Parameters**: Any* args

### _TELEMETRY_MATCH_NOMINATION
- **Return Type**: void
- **Parameters**: Any* args

### _TELEMETRY_CHAR_CREATOR
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### _0x6F5BC5C4EAB42B15
- **Return Type**: void
- **Parameters**: int linkID, int type, const char* contentId
- **Description**: Note: this native was added in build 1491.50


## TXD
### DOES_STREAMED_TXD_EXIST
- **Return Type**: BOOL
- **Parameters**: Hash txdHash

### REQUEST_STREAMED_TXD
- **Return Type**: void
- **Parameters**: Hash txdHash, BOOL p1

### HAS_STREAMED_TXD_LOADED
- **Return Type**: BOOL
- **Parameters**: Hash txdHash

### SET_STREAMED_TXD_AS_NO_LONGER_NEEDED
- **Return Type**: void
- **Parameters**: Hash txdHash

### DOES_STREAMED_TEXTURE_DICT_EXIST
- **Return Type**: BOOL
- **Parameters**: const char* textureDict

### REQUEST_STREAMED_TEXTURE_DICT
- **Return Type**: void
- **Parameters**: const char* textureDict, BOOL p1

### HAS_STREAMED_TEXTURE_DICT_LOADED
- **Return Type**: BOOL
- **Parameters**: const char* textureDict

### SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED
- **Return Type**: void
- **Parameters**: const char* textureDict


## UIAPPS
### IS_UIAPP_ACTIVE_BY_HASH
- **Return Type**: BOOL
- **Parameters**: Hash appNameHash

### IS_ANY_UIAPP_ACTIVE
- **Return Type**: BOOL
- **Parameters**: 

### IS_UIAPP_RUNNING_BY_HASH
- **Return Type**: BOOL
- **Parameters**: Hash appNameHash

### IS_UIAPP_RUNNING
- **Return Type**: BOOL
- **Parameters**: const char* appName

### IS_ANY_UIAPP_RUNNING
- **Return Type**: BOOL
- **Parameters**: 

### _GET_UIAPP_CURRENT_ACTIVITY_BY_HASH
- **Return Type**: Hash
- **Parameters**: Hash appNameHash

### _CLOSE_UIAPP_BY_HASH
- **Return Type**: void
- **Parameters**: Hash appNameHash

### _CLOSE_UIAPP_BY_HASH_IMMEDIATE
- **Return Type**: void
- **Parameters**: Hash appNameHash

### _CLOSE_UIAPP
- **Return Type**: void
- **Parameters**: const char* appName

### _CLOSE_UIAPP_IMMEDIATE
- **Return Type**: void
- **Parameters**: const char* appName

### _CLOSE_ALL_UIAPPS
- **Return Type**: void
- **Parameters**: 

### _CLOSE_ALL_UIAPPS_IMMEDIATE
- **Return Type**: void
- **Parameters**: 

### LAUNCH_UIAPP_BY_HASH_WITH_ENTRY
- **Return Type**: int
- **Parameters**: Hash appNameHash, Hash entryHash

### LAUNCH_UIAPP_BY_HASH
- **Return Type**: int
- **Parameters**: Hash appNameHash

### LAUNCH_UIAPP_WITH_ENTRY
- **Return Type**: int
- **Parameters**: const char* appName, const char* entry

### CAN_LAUNCH_UIAPP_BY_HASH_WITH_ENTRY
- **Return Type**: BOOL
- **Parameters**: Hash appNameHash, Hash entryHash

### CAN_LAUNCH_UIAPP_BY_HASH
- **Return Type**: BOOL
- **Parameters**: Hash appNameHash

### REQUEST_UIAPP_TRANSITION_BY_HASH
- **Return Type**: BOOL
- **Parameters**: Hash appNameHash, Hash transitionHash

### IS_UIAPP_TRANSITIONING_BY_HASH
- **Return Type**: BOOL
- **Parameters**: Hash appNameHash


## UIDEBUG
### _BG_DISPLAY_TEXT
- **Return Type**: void
- **Parameters**: const char* text, float x, float y
- **Description**: Note: you must use VAR_STRING

### _BG_SET_TEXT_SCALE
- **Return Type**: void
- **Parameters**: float scaleX, float scaleY

### _BG_SET_TEXT_COLOR
- **Return Type**: void
- **Parameters**: int red, int green, int blue, int alpha
- **Description**: https://github.com/femga/rdr3_discoveries/tree/master/useful_info_from_rpfs/colours


## UIEVENTS
### EVENTS_UI_IS_PENDING
- **Return Type**: BOOL
- **Parameters**: Hash hash
- **Description**: Old name: _EVENT_MANAGER_IS_EVENT_PENDING

### EVENTS_UI_GET_MESSAGE
- **Return Type**: BOOL
- **Parameters**: Hash hash, Any* eventData
- **Description**: eventData: struct UI_SCRIPT_EVENT { alignas(8) eUIScriptEventType eventType; // https://alloc8or.re/rdr3/doc/enums/eUIScriptEventType.txt alignas(8) int intParam; alignas(8) Hash hashParam; alignas(8) Hash datastoreParam; };  Old name: _EVENT_MANAGER_GET_EVENT

### EVENTS_UI_PEEK_MESSAGE
- **Return Type**: BOOL
- **Parameters**: Hash hash, Any* eventData
- **Description**: eventData: see EVENTS_UI_GET_MESSAGE  Old name: _EVENT_MANAGER_PEEK_EVENT

### EVENTS_UI_POP_MESSAGE
- **Return Type**: void
- **Parameters**: Hash hash
- **Description**: Old name: _EVENT_MANAGER_POP_EVENT


## UIFEED
### _UI_FEED_POST_HELP_TEXT
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, BOOL p2
- **Description**: Example : https://pastebin.com/GvdBp8Dh

### _UI_FEED_POST_LOCATION_SHARD
- **Return Type**: int
- **Parameters**: Any* duration, Any* data, BOOL p2, BOOL p3
- **Description**: Example : https://pastebin.com/h1YzycuR

### _UI_FEED_POST_OBJECTIVE
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, BOOL p2
- **Description**: Example : https://pastebin.com/13tuRa63

### _UI_FEED_POST_FEED_TICKER
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, BOOL p2
- **Description**: Display text on right of the screen, Example : https://pastebin.com/n1YmNe25

### _UI_FEED_POST_SAMPLE_TOAST
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, BOOL p2, BOOL p3
- **Description**: Example : https://pastebin.com/YZMBkAmW

### _0xAFF5BE9BA496CE40
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, BOOL p2, BOOL p3, Hash collectableCategory

### _UI_FEED_POST_SAMPLE_TOAST_WITH_APP_LINK
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, BOOL p2, BOOL p3, BOOL p4

### _UI_FEED_POST_SAMPLE_NOTIFICATION
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, int p2, int p3
- **Description**: Example : https://pastebin.com/kAtEMQTD

### _UI_FEED_POST_RANKUP_TOAST
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, int p2, int p3

### _0x18D6869FBFFEC0F8
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, BOOL p2, BOOL p3
- **Description**: Only used in R* SP Scripts

### _UI_FEED_POST_SAMPLE_TOAST_RIGHT
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, BOOL p2

### _UI_FEED_POST_MISSION_NAME
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, BOOL p2

### _UI_FEED_POST_RETICLE_MESSAGE
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, BOOL p2

### _UI_FEED_POST_ONE_TEXT_SHARD
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, BOOL p2

### _UI_FEED_POST_TWO_TEXT_SHARD
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, BOOL p2, BOOL p3

### _UI_FEED_POST_THREE_TEXT_SHARD
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, BOOL p2, BOOL p3, BOOL p4

### _UI_FEED_POST_GAME_UPDATE_SHARD
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, BOOL p2

### _UI_FEED_POST_VOICE_CHAT_FEED
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, BOOL p2

### UI_FEED_CLEAR_CHANNEL
- **Return Type**: void
- **Parameters**: int feedChannel, BOOL p1, BOOL p2
- **Description**: feedChannel: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/eUIFeedChannel

### _UI_FEED_CLEAR_ALL_CHANNELS
- **Return Type**: void
- **Parameters**: 
- **Description**: Hides Toast Notifications

### _UI_FEED_CLEAR_HELP_TEXT_FEED
- **Return Type**: void
- **Parameters**: int feedMessage, BOOL p1
- **Description**: Clears help text

### _0x6D85126F6CCF02C9
- **Return Type**: void
- **Parameters**: int feedChannel, int p1, BOOL p2

### _0x4E88A65968A55C78
- **Return Type**: int
- **Parameters**: Any* p0, BOOL p1
- **Description**: Returns feedMessage

### _0x0FD07141AD048AAE
- **Return Type**: int
- **Parameters**: Any* p0, BOOL p1
- **Description**: Only used in R* SP Script beat_animal_attack Returns feedMessage

### _UI_FEED_GET_MESSAGE_STATE
- **Return Type**: int
- **Parameters**: int feedMessage
- **Description**: Returns messageState, see https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/eUIMessageState

### UI_FEED_GET_CURRENT_MESSAGE
- **Return Type**: int
- **Parameters**: int feedChannel
- **Description**: feedChannel: see UI_FEED_CLEAR_CHANNEL Returns feedMessage

### _0xB7223B91CD6B7E07
- **Return Type**: BOOL
- **Parameters**: int feedChannel


## UILOG
### _UILOG_IS_ENTRY_REGISTERED
- **Return Type**: BOOL
- **Parameters**: int p0, Hash p1

### _UILOG_ADD_ENTRY_HASH
- **Return Type**: void
- **Parameters**: int p0, int p1, float x, float y, float z, Hash p5, Hash p6, Any p7

### _UILOG_ADD_ENTRY_HASH
- **Return Type**: void
- **Parameters**: int p0, int p1, Vector3 vec, Hash p5, Hash p6, Any p7

### _UILOG_ADD_ITEM_TO_TASK_LIST
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7

### _UILOG_SET_ENTRY_ICON_TEXTURE
- **Return Type**: void
- **Parameters**: int p0, Hash p1, Hash icon, Hash iconDictionary

### _UILOG_SET_ENTRY_BRIEF_TEXTURE
- **Return Type**: void
- **Parameters**: int p0, Hash p1, Hash texture, Hash textureDictionary

### _UILOG_UPDATE_ENTRY_SUBHEADER
- **Return Type**: void
- **Parameters**: int p0, Hash p1, const char* p2

### _UILOG_SET_ENTRY_PINNED
- **Return Type**: void
- **Parameters**: int p0, Hash p1, BOOL p2

### _UILOG_MARK_MISSION_COMPLETED
- **Return Type**: void
- **Parameters**: Hash p0

### _UILOG_MARK_ENTRY_AVAILABILITY
- **Return Type**: void
- **Parameters**: int p0, Hash p1, int p2, const char* p3

### _UILOG_MARK_ALL_ENTRIES_AVAILABILITY
- **Return Type**: void
- **Parameters**: int p0, const char* p1

### _UILOG_REMOVE_ENTRY
- **Return Type**: void
- **Parameters**: int p0, Hash p1

### _UILOG_SET_DISPLAY_COMPLETION_RATING
- **Return Type**: void
- **Parameters**: int logEntryType, Hash p1, BOOL p2

### _0xA49D6D503E3EA847
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0x763637F9B838B0A7
- **Return Type**: void
- **Parameters**: int p0, Hash p1, const char* p2

### _UILOG_CLEAR_ALL_ENTRIES
- **Return Type**: void
- **Parameters**: 

### _UILOG_ADD_OR_UPDATE_OBJECTIVE
- **Return Type**: void
- **Parameters**: int p0, Hash p1, Hash p2, const char* p3, BOOL p4, BOOL p5, BOOL p6

### _0xA20398536B7F1134
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### _UILOG_SET_CACHED_OBJECTIVE
- **Return Type**: void
- **Parameters**: const char* p0

### _UILOG_CLEAR_CACHED_OBJECTIVE
- **Return Type**: void
- **Parameters**: 

### _UILOG_HAS_DISPLAYED_CACHED_OBJECTIVE
- **Return Type**: BOOL
- **Parameters**: 

### _UILOG_CLEAR_HAS_DISPLAYED_CACHED_OBJECTIVE
- **Return Type**: void
- **Parameters**: 

### _UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE
- **Return Type**: void
- **Parameters**: 

### _UILOG_PRINT_CACHED_OBJECTIVE
- **Return Type**: void
- **Parameters**: 

### _UILOG_SET_PENDING_DETAILS_ID
- **Return Type**: Any
- **Parameters**: int p0, Hash p1

### _0x2A4765812202E671
- **Return Type**: Any
- **Parameters**: 

### _UILOG_ADD_TOTAL_TAKE_ENTRY
- **Return Type**: void
- **Parameters**: Hash p0, Hash p1, const char* p2, const char* p3, Hash p4

### _UILOG_SET_TOTAL_TAKE_SUMMARY
- **Return Type**: void
- **Parameters**: const char* p0, const char* p1

### _UILOG_POST_NOTIFICATION
- **Return Type**: int
- **Parameters**: Any* data

### _0xDA0A30153FCC0FFD
- **Return Type**: void
- **Parameters**: 


## UITUTORIAL
### _UITUTORIAL_GET_IS_THREAT_INDICATOR_CAPABLE_RADAR_SHOWN
- **Return Type**: BOOL
- **Parameters**: 

### _UITUTORIAL_GET_IS_THREAT_INDICATOR_ON
- **Return Type**: BOOL
- **Parameters**: 

### _UITUTORIAL_SET_RPG_ICON_VISIBILITY
- **Return Type**: void
- **Parameters**: int rpgIcon, int visibility
- **Description**: enum eRpgIcons { ICON_STAMINA, ICON_STAMINA_CORE, ICON_DEADEYE, ICON_DEADEYE_CORE, ICON_HEALTH, ICON_HEALTH_CORE, ICON_HORSE_HEALTH, ICON_HORSE_HEALTH_CORE, ICON_HORSE_STAMINA, ICON_HORSE_STAMINA_CORE, ICON_HORSE_COURAGE, ICON_HORSE_COURAGE_CORE };  enum eRpgIconVisibility { ICON_VISIBILITY_WAIT_TO_HIDE, ICON_VISIBILITY_ALWAYS_SHOW, ICON_VISIBILITY_ALWAYS_HIDE, ICON_VISIBILITY_ALWAYS_BLINK };


## UISTATEMACHINE
### _UIFLOWBLOCK_REQUEST
- **Return Type**: Any
- **Parameters**: Any p0

### _UIFLOWBLOCK_RELEASE
- **Return Type**: void
- **Parameters**: Any p0

### _UIFLOWBLOCK_IS_LOADED
- **Return Type**: Any
- **Parameters**: Any p0

### _UIFLOWBLOCK_ENTER
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### UI_STATE_MACHINE_EXISTS
- **Return Type**: Any
- **Parameters**: Any p0

### UI_STATE_MACHINE_CREATE
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### UI_STATE_MACHINE_CAN_REQUEST_TRANSITION
- **Return Type**: Any
- **Parameters**: Any p0

### UI_STATE_MACHINE_REQUEST_TRANSITION
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### UI_STATE_MACHINE_REQUEST_EXIT
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _UI_STATE_MACHINE_IS_EXITED
- **Return Type**: BOOL
- **Parameters**: Hash p0

### UI_STATE_MACHINE_DESTROY
- **Return Type**: void
- **Parameters**: Any p0

### UI_STATE_MACHINE_DESTROY_AND_CLEAR
- **Return Type**: void
- **Parameters**: Any* p0


## UISTICKYFEED
### _UI_STICKY_FEED_CREATE_ERROR_MESSAGE
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, BOOL p2
- **Description**: Example: https://pastebin.com/EJD7ytnz

### _UI_STICKY_FEED_CREATE_DEATH_FAIL_MESSAGE
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, BOOL p2
- **Description**: Example: https://pastebin.com/JygJShNU

### _UI_STICKY_FEED_CREATE_WARNING_MESSAGE
- **Return Type**: int
- **Parameters**: Any* p0, Any* p1, BOOL p2
- **Description**: Example: https://pastebin.com/6mLtee2S

### _UI_STICKY_FEED_UPDATE_MESSAGE
- **Return Type**: void
- **Parameters**: int msgId, Any* p1, BOOL p2
- **Description**: Seems to only update _UI_STICKY_FEED_CREATE_ERROR_MESSAGE(0x9F2CC2439A04E7BA) and _UI_STICKY_FEED_CREATE_DEATH_FAIL_MESSAGE(0x815C4065AE6E6071) message. Example: https://pastebin.com/nDrJyWq2

### _UI_STICKY_FEED_CLEAR_MESSAGE
- **Return Type**: void
- **Parameters**: int msgId

### _UI_STICKY_FEED_IS_CHANNEL_ACTIVE
- **Return Type**: BOOL
- **Parameters**: int stickyFeedChannel
- **Description**: stickyFeedChannel: https://github.com/Halen84/RDR3-Native-Flags-And-Enums/tree/main/eUIStickyFeedChannel

### _UI_STICKY_FEED_IS_ALERT_SCREEN_ACTIVE
- **Return Type**: BOOL
- **Parameters**: 

### _UI_STICKY_FEED_GET_MESSAGE_STATE
- **Return Type**: int
- **Parameters**: int msgId
- **Description**: Returns state of sticky feed message, see 0x59FA676177DBE4C9


## UNLOCK
### _UNLOCK_IS_UNLOCK_FLAG_SET
- **Return Type**: BOOL
- **Parameters**: Hash unlockHash, int flag

### UNLOCK_IS_UNLOCKED
- **Return Type**: BOOL
- **Parameters**: Hash unlockHash

### UNLOCK_SET_UNLOCKED
- **Return Type**: void
- **Parameters**: Hash unlockHash, BOOL toggle

### UNLOCK_IS_VISIBLE
- **Return Type**: BOOL
- **Parameters**: Hash unlockHash

### UNLOCK_SET_VISIBLE
- **Return Type**: void
- **Parameters**: Hash unlockHash, BOOL toggle

### _UNLOCK_IS_NEW
- **Return Type**: BOOL
- **Parameters**: Hash unlockHash

### _UNLOCK_SET_NEW
- **Return Type**: void
- **Parameters**: Hash unlockHash, BOOL toggle

### _UNLOCK_IS_LOOTABLE
- **Return Type**: BOOL
- **Parameters**: Hash unlockHash

### _UNLOCK_GET_ITEM_ROLE_UNLOCK_INFO
- **Return Type**: void
- **Parameters**: Hash unlockHash, Any* outData


## VEHICLE
### _0x6355602C02EDC6DF
- **Return Type**: void
- **Parameters**: Entity entity, Any p1
- **Description**: Only used in R* Script beat_train_holdup: p1 = 1

### _SET_VEHICLE_IS_IN_HURRY
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL enabled

### CREATE_VEHICLE
- **Return Type**: Vehicle
- **Parameters**: Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostVeh, BOOL bDontAutoCreateDraftAnimals, BOOL p8

### CREATE_VEHICLE
- **Return Type**: Vehicle
- **Parameters**: Hash modelHash, Vector3 vec, float heading, BOOL isNetwork, BOOL bScriptHostVeh, BOOL bDontAutoCreateDraftAnimals, BOOL p8

### _CREATE_DRAFT_VEHICLE
- **Return Type**: Vehicle
- **Parameters**: Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostVeh, BOOL bDontAutoCreateDraftAnimals, Hash draftAnimalPopGroup, BOOL p9
- **Description**: Identical to CREATE_VEHICLE but allows to set draftAnimalPopGroup (see popgroups.#mt for DRAFT_HORSES_*)

### _CREATE_DRAFT_VEHICLE
- **Return Type**: Vehicle
- **Parameters**: Hash modelHash, Vector3 vec, float heading, BOOL isNetwork, BOOL bScriptHostVeh, BOOL bDontAutoCreateDraftAnimals, Hash draftAnimalPopGroup, BOOL p9

### DELETE_VEHICLE
- **Return Type**: void
- **Parameters**: Vehicle* vehicle
- **Description**: Deletes a vehicle. The vehicle must be a mission entity to delete, so call this before deleting: SET_ENTITY_AS_MISSION_ENTITY(vehicle, true, true);  eg how to use: SET_ENTITY_AS_MISSION_ENTITY(vehicle, true, true); DELETE_VEHICLE(&vehicle);  Deletes the specified vehicle, then sets the handle pointed to by the pointer to NULL.

### _FADE_AND_DESTROY_VEHICLE
- **Return Type**: void
- **Parameters**: Vehicle* vehicle

### _IS_VEHICLE_FADING_OUT
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle

### SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle
- **Description**: Makes the vehicle accept no passengers.

### IS_VEHICLE_MODEL
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, Hash model

### _SET_ALL_VEHICLE_GENERATORS_DISABLED_FOR_VOLUME
- **Return Type**: void
- **Parameters**: Volume volume, BOOL toggle

### SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA
- **Return Type**: void
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7

### SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA
- **Return Type**: void
- **Parameters**: Vector3 vec1, Vector3 vec2, BOOL p6, BOOL p7

### SET_ALL_VEHICLE_GENERATORS_ACTIVE
- **Return Type**: void
- **Parameters**: 

### SET_VEHICLE_ON_GROUND_PROPERLY
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, BOOL p1

### IS_VEHICLE_STOPPED
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle
- **Description**: Returns true if the vehicle's current speed is less than, or equal to 0.0025f.  For some vehicles it returns true if the current speed is <= 0.00039999999.

### GET_VEHICLE_NUMBER_OF_PASSENGERS
- **Return Type**: int
- **Parameters**: Vehicle vehicle
- **Description**: Gets the number of passengers, NOT including the driver. Use IS_VEHICLE_SEAT_FREE(Vehicle, -1) to also check for the driver

### GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS
- **Return Type**: int
- **Parameters**: Vehicle vehicle

### GET_VEHICLE_MODEL_NUMBER_OF_SEATS
- **Return Type**: int
- **Parameters**: Hash modelHash

### IS_SEAT_WARP_ONLY
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, int seatIndex
- **Description**: seatIndex: see CREATE_PED_INSIDE_VEHICLE

### _GET_VEHICLE_TURRET_SEAT
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, int* seatIndex

### _0xA9E185D498B9AC67
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME
- **Return Type**: void
- **Parameters**: float multiplier

### SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME
- **Return Type**: void
- **Parameters**: float multiplier

### SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME
- **Return Type**: void
- **Parameters**: float multiplier

### SET_DISABLE_RANDOM_TRAINS_THIS_FRAME
- **Return Type**: void
- **Parameters**: BOOL toggle
- **Description**: nullsub, doesn't do anything

### SET_VEHICLE_DOORS_LOCKED
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int doorLockStatus

### SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int doorId, int doorLockStatus
- **Description**: doorId: see SET_VEHICLE_DOOR_SHUT

### SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER
- **Return Type**: void
- **Parameters**: Vehicle vehicle, Player player, BOOL toggle

### GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, Player player

### SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### SET_VEHICLE_DOORS_LOCKED_FOR_TEAM
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int team, BOOL toggle

### _GET_VEHICLE_DOORS_LOCKED_FOR_TEAM
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, int team

### EXPLODE_VEHICLE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL isAudible, BOOL isInvisible, Any p3, Any p4
- **Description**: Explodes a selected vehicle.  Vehicle vehicle = Vehicle you want to explode. BOOL isAudible = If explosion makes a sound. BOOL isInvisible = If the explosion is invisible or not.  First BOOL does not give any visual explosion, the vehicle just falls apart completely but slowly and starts to burn.

### _0x750D42C013F64AE7
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xE78993FF9022C064
- **Return Type**: void
- **Parameters**: Any p0

### _0x9868C0D0134855F7
- **Return Type**: void
- **Parameters**: Any p0
- **Description**: nullsub, doesn't do anything

### _HIDE_HORSE_REINS
- **Return Type**: void
- **Parameters**: Vehicle vehicle

### _SHOW_HORSE_REINS
- **Return Type**: void
- **Parameters**: Vehicle vehicle

### _0xD21A3D421E7F09F7
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xA13028E22564A1BD
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x485B05EF05B9AEE9
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_BOAT_ANCHOR
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### _0x6B53F4B811E583D2
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### CAN_ANCHOR_BOAT_HERE
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle

### SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1, BOOL p2
- **Description**: Old name: _SET_BOAT_FROZEN_WHEN_ANCHORED

### SET_FORCE_LOW_LOD_ANCHOR_MODE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1
- **Description**: Sets boat to be anchored on spawn, called together with SET_BOAT_ANCHOR and _SET_BOAT_ANCHOR_BUOYANCY_COEFFICIENT

### SET_BOAT_LOW_LOD_ANCHOR_DISTANCE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float value
- **Description**: Value: mostly 99999.9f  Old name: _SET_BOAT_MOVEMENT_RESISTANCE

### SET_BOAT_SINKS_WHEN_WRECKED
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### _SET_FORCE_HIGH_LOD_VEHICLE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1

### _0x98A7598C579EE871
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x9E8711C81AA17876
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1
- **Description**: Forcing high LOD buoyancy for vehicle: p1 = false _SET_A*

### SET_VEHICLE_STRONG
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle
- **Description**: If set to true, vehicle will not take crash damage, but is still susceptible to damage from bullets and explosives

### IS_VEHICLE_SEAT_FREE
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, int seatIndex
- **Description**: seatIndex: see CREATE_PED_INSIDE_VEHICLE Use GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(vehicle) - 1 for last seat index.

### GET_PED_IN_VEHICLE_SEAT
- **Return Type**: Ped
- **Parameters**: Vehicle vehicle, int seatIndex
- **Description**: seatIndex: see CREATE_PED_INSIDE_VEHICLE

### GET_LAST_PED_IN_VEHICLE_SEAT
- **Return Type**: Ped
- **Parameters**: Vehicle vehicle, int seatIndex
- **Description**: seatIndex: see CREATE_PED_INSIDE_VEHICLE

### IS_DRAFT_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle

### _GET_PED_IN_DRAFT_HARNESS
- **Return Type**: Ped
- **Parameters**: Vehicle vehicle, int harnessId
- **Description**: enum eDraftHarness { DRAFT_HARNESS_LR, DRAFT_HARNESS_RR, DRAFT_HARNESS_LM, DRAFT_HARNESS_RM, DRAFT_HARNESS_LF, DRAFT_HARNESS_RF, DRAFT_HARNESS_COUNT };

### SET_VEHICLE_FORWARD_SPEED
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float speed

### BRING_VEHICLE_TO_HALT
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float distance, int duration, BOOL unknown
- **Description**: This native makes the vehicle stop immediately  distance defines how far it will travel until stopping.

### _IS_VEHICLE_BROUGHT_TO_HALT
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle
- **Description**: Only returns true if BRING_VEHICLE_TO_HALT is called on vehicle beforehand

### STOP_BRINGING_VEHICLE_TO_HALT
- **Return Type**: void
- **Parameters**: Vehicle vehicle
- **Description**: Old name: _STOP_BRING_VEHICLE_TO_HALT

### _0xE12F5ED49F44D40D
- **Return Type**: void
- **Parameters**: Any p0

### _0xF6E3D38869D0F7AD
- **Return Type**: void
- **Parameters**: Any p0

### SET_VEHICLE_DOORS_SHUT
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL closeInstantly
- **Description**: Closes all doors of a vehicle:

### SET_VEHICLE_TYRES_CAN_BURST
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle
- **Description**: Allows you to toggle bulletproof tires.

### SET_VEHICLE_WHEELS_CAN_BREAK
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL enabled

### SET_VEHICLE_DOORS_TO_OPEN_AT_ANY_DISTANCE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### SET_VEHICLE_DOOR_OPEN
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int doorId, BOOL loose, BOOL openInstantly
- **Description**: doorId: see SET_VEHICLE_DOOR_SHUT Can also be used on trains and its wagons

### REMOVE_VEHICLE_WINDOW
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int windowIndex
- **Description**: windowIndex: 0 = Front Right Window 1 = Front Left Window 2 = Back Right Window 3 = Back Left Window

### _0x8878FF3EEE2868A9
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_VEHICLE_DIRT_LEVEL_2
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float dirtLevel
- **Description**: dirtLevel: 0.0 - 1.0

### _SET_VEHICLE_MUD_LEVEL
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float mudLevel
- **Description**: mudLevel: 0.0 - 1.0

### SET_VEHICLE_LIGHTS
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int state
- **Description**: Sets the vehicle's lights state.

### SET_RANDOM_TRAINS
- **Return Type**: void
- **Parameters**: BOOL toggle

### _0x331CBD247FC5DAA8
- **Return Type**: int
- **Parameters**: Hash configHash, float x, float y, float z, BOOL direction, BOOL p5
- **Description**: Returns trackIndex

### _0x331CBD247FC5DAA8
- **Return Type**: int
- **Parameters**: Hash configHash, Vector3 vec, BOOL direction, BOOL p5

### _0x0516FAE561276EFC
- **Return Type**: BOOL
- **Parameters**: int trackIndex
- **Description**: Takes value returned from 0x45853F4E17D847D5

### _GET_TRAIN_TRACK_FROM_TRAIN_VEHICLE
- **Return Type**: int
- **Parameters**: Vehicle train
- **Description**: Returns trackIndex

### _GET_TRAIN_VEHICLE_FROM_TRACK_INDEX
- **Return Type**: Vehicle
- **Parameters**: int trackIndex
- **Description**: Returns train

### _0x15206E88FF7617DF
- **Return Type**: void
- **Parameters**: int trackIndex, float p1

### _0xA7966807953A18EE
- **Return Type**: void
- **Parameters**: int trackIndex, float p1

### _0x6B34BE961F639E21
- **Return Type**: void
- **Parameters**: int trackIndex, int p1

### _0xE6BD7DD3FD474415
- **Return Type**: void
- **Parameters**: Vehicle train, BOOL p1

### _0x615B3B8E73634509
- **Return Type**: void
- **Parameters**: int trackIndex, float p1

### _0x38E7DD70A242D5CB
- **Return Type**: void
- **Parameters**: int trackIndex, int p1

### _0x63509DDF102E08E8
- **Return Type**: void
- **Parameters**: int trackIndex, int p1

### _0x7408B5C66BA31ADB
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10

### _0x41365DB586CD9E8E
- **Return Type**: void
- **Parameters**: int trackIndex, float p1

### _0xD0AABE5B9F8FA589
- **Return Type**: void
- **Parameters**: int trackIndex, float p1

### _0x427C919E9809E370
- **Return Type**: void
- **Parameters**: int trackIndex, int p1

### _DOES_TRAIN_EXIST_ON_TRACK
- **Return Type**: BOOL
- **Parameters**: int trackIndex

### _GET_TRAIN_POSITION_ON_TRACK
- **Return Type**: Vector3
- **Parameters**: int trackIndex

### _0xB4241AD8F5AEE9ED
- **Return Type**: BOOL
- **Parameters**: int trackIndex

### _0xA230A5DDE12ED374
- **Return Type**: void
- **Parameters**: Any p0

### _0x0D5FDF0D36FA10CD
- **Return Type**: void
- **Parameters**: int trackIndex

### _0xE682002DB1F30669
- **Return Type**: void
- **Parameters**: Any p0

### _0x718EB706B6E998A0
- **Return Type**: void
- **Parameters**: int trackIndex

### _0xF05DFAF1ADFEF2CD
- **Return Type**: BOOL
- **Parameters**: Hash trainConfig, float x, float y, float z, BOOL direction, BOOL p5
- **Description**: _IS_* (related to CREATE_MISSION_TRAIN)

### _0xF05DFAF1ADFEF2CD
- **Return Type**: BOOL
- **Parameters**: Hash trainConfig, Vector3 vec, BOOL direction, BOOL p5

### _0xD1DF5E54F4ACBE1A
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### _0x0FDDEE66E3465726
- **Return Type**: Any
- **Parameters**: Any p0

### _0x4C05B42A8D937796
- **Return Type**: void
- **Parameters**: 

### _0xB961DD799A837BD7
- **Return Type**: void
- **Parameters**: 

### _0x16B86A49E072AA85
- **Return Type**: void
- **Parameters**: 

### _0x2A7413168F6CD5A8
- **Return Type**: void
- **Parameters**: 

### _0xFFFE15B433300B8C
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x6EA1273D525427F4
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x7BE0746539DEF0C8
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x3137EDC899E6DAE4
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x6C87F49BFA181DB5
- **Return Type**: int
- **Parameters**: float x, float y, float z
- **Description**: Returns trackIndex

### _0x6C87F49BFA181DB5
- **Return Type**: int
- **Parameters**: Vector3 vec

### _GET_TRACK_INDEX_FROM_COORDS
- **Return Type**: int
- **Parameters**: float x, float y, float z
- **Description**: Returns trackIndex _E* - _F*

### _GET_TRACK_INDEX_FROM_COORDS
- **Return Type**: int
- **Parameters**: Vector3 vec

### _GET_NEAREST_TRAIN_TRACK_POSITION
- **Return Type**: Vector3
- **Parameters**: float x, float y, float z

### _GET_NEAREST_TRAIN_TRACK_POSITION
- **Return Type**: Vector3
- **Parameters**: Vector3 vec

### DELETE_ALL_TRAINS
- **Return Type**: void
- **Parameters**: 

### _0x0E558D3A49D759D6
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xD4907EF4334C7602
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x68830738A6BFB370
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_TRAIN_SPEED
- **Return Type**: void
- **Parameters**: Vehicle train, float speed

### _SET_TRAIN_MAX_SPEED
- **Return Type**: void
- **Parameters**: Vehicle train, float speed
- **Description**: Maximum possible speed is 30.0 (108 km/h)

### SET_TRAIN_CRUISE_SPEED
- **Return Type**: void
- **Parameters**: Vehicle train, float speed

### _GET_TRAIN_CARRIAGE_TRAILER_NUMBER
- **Return Type**: int
- **Parameters**: Vehicle train
- **Description**: Returns iNumCars - to be used with GET_TRAIN_CARRIAGE (trailerNumber) _C* (O, P, Q, R)

### _GET_TRAIN_MODEL_FROM_TRAIN_CONFIG_BY_CAR_INDEX
- **Return Type**: Hash
- **Parameters**: Hash trainConfig, int trainCarIndex
- **Description**: Returns modelHash

### _GET_NUM_CARS_FROM_TRAIN_CONFIG
- **Return Type**: int
- **Parameters**: Hash trainConfig
- **Description**: Returns amount for CAN_REGISTER_MISSION_VEHICLES

### _GET_TRAIN_CAR
- **Return Type**: Entity
- **Parameters**: Vehicle train
- **Description**: Returns train car, use GET_TRAIN_CARRIAGE when trailerNumber is bigger than 0

### _SET_TRAIN_STOPS_FOR_STATIONS
- **Return Type**: void
- **Parameters**: Vehicle train, BOOL toggle

### _0xDD100CE1EBBF37E3
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x160C1B5AB48AB87C
- **Return Type**: void
- **Parameters**: Vehicle train, float p1

### IS_TRAIN_WAITING_AT_STATION
- **Return Type**: BOOL
- **Parameters**: Vehicle train

### _SET_TRAIN_HALT
- **Return Type**: void
- **Parameters**: Vehicle train

### _SET_TRAIN_LEAVE_STATION
- **Return Type**: void
- **Parameters**: Vehicle train
- **Description**: Restarts the train

### SET_RANDOM_BOATS
- **Return Type**: void
- **Parameters**: BOOL toggle

### REQUEST_VEHICLE_RECORDING
- **Return Type**: void
- **Parameters**: int recording, const char* script
- **Description**: Request the vehicle recording defined by the lowercase format string "%s%03d.yvr". For example, REQUEST_VEHICLE_RECORDING(1, "FBIs1UBER") corresponds to fbis1uber001.yvr. For all vehicle recording/playback natives, "script" is a common prefix that usually corresponds to the script/mission the recording is used in, "recording" is its int suffix, and "id" corresponds to a unique identifier within the recording streaming module. (GTA) Note that only 24 recordings (hardcoded in multiple places) can ever active at a given time before clobbering begins.

### HAS_VEHICLE_RECORDING_BEEN_LOADED
- **Return Type**: BOOL
- **Parameters**: int recording, const char* script
- **Description**: See REQUEST_VEHICLE_RECORDING

### REMOVE_VEHICLE_RECORDING
- **Return Type**: void
- **Parameters**: Any p0, Any* p1
- **Description**: See REQUEST_VEHICLE_RECORDING

### GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME
- **Return Type**: Vector3
- **Parameters**: int recording, float time, const char* script
- **Description**: This native does no interpolation between pathpoints. The same position will be returned for all times up to the next pathpoint in the recording.  See REQUEST_VEHICLE_RECORDING

### GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME
- **Return Type**: Vector3
- **Parameters**: int recording, float time, const char* script
- **Description**: This native does no interpolation between pathpoints. The same rotation will be returned for all times up to the next pathpoint in the recording.  See REQUEST_VEHICLE_RECORDING

### GET_TIME_POSITION_IN_RECORDING
- **Return Type**: float
- **Parameters**: Vehicle vehicle

### START_PLAYBACK_RECORDED_VEHICLE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int recording, const char* script, BOOL p3
- **Description**: p3 is some flag related to 'trailers' (invokes CVehicle::GetTrailer).  See REQUEST_VEHICLE_RECORDING

### FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1
- **Description**: Often called after START_PLAYBACK_RECORDED_VEHICLE and SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE; similar in use to FORCE_ENTITY_AI_AND_ANIMATION_UPDATE.

### STOP_PLAYBACK_RECORDED_VEHICLE
- **Return Type**: void
- **Parameters**: Vehicle vehicle

### IS_PLAYBACK_GOING_ON_FOR_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle

### IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle

### SET_PLAYBACK_SPEED
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float speed

### SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float time
- **Description**: SET_TIME_POSITION_IN_RECORDING can be emulated by: desired_time - GET_TIME_POSITION_IN_RECORDING(vehicle)

### GET_CLOSEST_VEHICLE
- **Return Type**: Vehicle
- **Parameters**: float x, float y, float z, float radius, Hash modelHash, int flags

### GET_CLOSEST_VEHICLE
- **Return Type**: Vehicle
- **Parameters**: Vector3 vec, float radius, Hash modelHash, int flags

### GET_TRAIN_CARRIAGE
- **Return Type**: Entity
- **Parameters**: Vehicle train, int trailerNumber

### DELETE_MISSION_TRAIN
- **Return Type**: void
- **Parameters**: Vehicle* train

### SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED
- **Return Type**: void
- **Parameters**: Vehicle* train, int flags
- **Description**: flags = 0: DEFAULT; 1: KEEP_OLD_SPEED

### SET_MISSION_TRAIN_COORDS
- **Return Type**: void
- **Parameters**: Vehicle train, float x, float y, float z

### SET_MISSION_TRAIN_COORDS
- **Return Type**: void
- **Parameters**: Vehicle train, Vector3 vec

### _SET_MISSION_TRAIN_WARP_TO_COORDS
- **Return Type**: void
- **Parameters**: Vehicle train, float x, float y, float z, BOOL direction
- **Description**: Notice: BOOL p4 was wrongly named takePassengers (?) Can be used to rotate the train by setting the BOOL direction

### _SET_MISSION_TRAIN_WARP_TO_COORDS
- **Return Type**: void
- **Parameters**: Vehicle train, Vector3 vec, BOOL direction

### _0xA72B1BF3857B94D7
- **Return Type**: void
- **Parameters**: Vehicle train, BOOL p1

### _IS_THIS_MODEL_A_DRAFT_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Hash model

### IS_THIS_MODEL_A_BOAT
- **Return Type**: BOOL
- **Parameters**: Hash model

### IS_THIS_MODEL_A_TRAIN
- **Return Type**: BOOL
- **Parameters**: Hash model

### SET_VEHICLE_CAN_BE_TARGETTED
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL state

### SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1

### SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL state

### SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1

### SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1

### SET_VEHICLE_CAN_EJECT_PASSENGERS_IF_LOCKED
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1

### SET_VEHICLE_DIRT_LEVEL
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float dirtLevel

### IS_VEHICLE_DOOR_FULLY_OPEN
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, int doorId
- **Description**: doorId: see SET_VEHICLE_DOOR_SHUT

### SET_VEHICLE_ENGINE_ON
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL value, BOOL instantly
- **Description**: Starts or stops the engine on the specified vehicle.  vehicle: The vehicle to start or stop the engine on. value: true to turn the vehicle on; false to turn it off. instantly: if true, the vehicle will be set to the state immediately; otherwise, the current driver will physically turn on or off the engine.

### SET_VEHICLE_UNDRIVEABLE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### SET_VEHICLE_PROVIDES_COVER
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### _0x3053064F909B5F42
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_VEHICLE_DOOR_CONTROL
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int doorId, int speed, float angle
- **Description**: doorId: see SET_VEHICLE_DOOR_SHUT

### SET_VEHICLE_DOOR_LATCHED
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int doorId, BOOL p2, BOOL p3, BOOL p4
- **Description**: doorId: see SET_VEHICLE_DOOR_SHUT

### SET_VEHICLE_DOOR_SHUT
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int doorId, BOOL closeInstantly
- **Description**: doorId: enum eDoorId { VEH_EXT_DOOR_INVALID_ID = -1, VEH_EXT_DOOR_DSIDE_F, VEH_EXT_DOOR_DSIDE_M, VEH_EXT_DOOR_DSIDE_M1, VEH_EXT_DOOR_DSIDE_M2, VEH_EXT_DOOR_DSIDE_R, VEH_EXT_DOOR_PSIDE_F, VEH_EXT_DOOR_PSIDE_M, VEH_EXT_DOOR_PSIDE_M1, VEH_EXT_DOOR_PSIDE_M2, VEH_EXT_DOOR_PSIDE_R, VEH_EXT_BONNET, VEH_EXT_BOOT };

### SET_VEHICLE_DOOR_BROKEN
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int doorId, BOOL deleteDoor
- **Description**: doorId: see SET_VEHICLE_DOOR_SHUT

### SET_VEHICLE_CAN_BREAK
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### SET_VEHICLE_IS_CONSIDERED_BY_PLAYER
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle
- **Description**: Setting this to false, makes the specified vehicle to where if you press Y your character doesn't even attempt the animation to enter the vehicle. Hence it's not considered aka ignored.

### SET_VEHICLE_MAY_BE_USED_BY_GOTO_POINT_ANY_MEANS
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1

### GET_VEHICLE_DOOR_LOCK_STATUS
- **Return Type**: int
- **Parameters**: Vehicle vehicle

### SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int doorId, BOOL isBreakable
- **Description**: doorId: see SET_VEHICLE_DOOR_SHUT  Old name: _SET_VEHICLE_DOOR_CAN_BREAK

### IS_VEHICLE_ON_ALL_WHEELS
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle

### _GET_TRAIN_DIRECTION
- **Return Type**: BOOL
- **Parameters**: Vehicle train

### _GET_TRAIN_DIRECTION_FROM_INDEX
- **Return Type**: BOOL
- **Parameters**: int trackIndex
- **Description**: https://i.imgur.com/1rHibjW.jpg

### _0x09034479E6E3E269
- **Return Type**: Any
- **Parameters**: Vehicle train, Hash* trainTrack, int* junctionIndex
- **Description**: _RESET_VEHICLE_*

### _GET_TRAIN_TRACK_JUNCTION_AT_COORDS
- **Return Type**: BOOL
- **Parameters**: Hash trainTrack, float x, float y, float z, int* junctionIndex
- **Description**: Outputs junctionIndex, to be used with 0xE6C5E2125EB210C1

### _GET_TRAIN_TRACK_JUNCTION_AT_COORDS
- **Return Type**: BOOL
- **Parameters**: Hash trainTrack, Vector3 vec, int* junctionIndex

### _0xD9BF3ED8EFB67EA3
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0x785639D89F8451AB
- **Return Type**: Vector3
- **Parameters**: Any p0, Any p1

### _SET_TRAIN_TRACK_JUNCTION_SWITCH
- **Return Type**: void
- **Parameters**: Hash trainTrack, int junctionIndex, BOOL enabled
- **Description**: trainTrack: FREIGHT_GROUP, TRAINS3, BRAITHWAITES2_TRACK_CONFIG, TRAINS_OLD_WEST01, TRAINS_OLD_WEST03, TRAINS_NB1, TRAINS_INTERSECTION1_ANN

### _0x3ABFA128F5BF5A70
- **Return Type**: void
- **Parameters**: Hash trainTrack, int junctionIndex, BOOL enabled
- **Description**: Called together with 0xE6C5E2125EB210C1 in R* Script medium_update

### _0x2C46D2A591D8C322
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0xCAFF2C9747103C02
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _SET_ALL_JUNCTIONS_CLEARED
- **Return Type**: void
- **Parameters**: 

### _0x34BCF6209B9668A7
- **Return Type**: void
- **Parameters**: int trackIndex, Any p1

### _0xD0BA1853D76683C8
- **Return Type**: void
- **Parameters**: int trackIndex, float x, float y, float z, Any p4

### _0xD0BA1853D76683C8
- **Return Type**: void
- **Parameters**: int trackIndex, Vector3 vec, Any p4

### SET_TRAIN_OFFSET_FROM_STATION
- **Return Type**: void
- **Parameters**: Vehicle train, float offset

### _0xDC69F6913CCA0B99
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x7840576C50A13DBA
- **Return Type**: void
- **Parameters**: Vehicle train, BOOL p1

### _0xD0116DF21E6C7B36
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _DETACH_WAGON_ENTITY_FROM_TRAIN
- **Return Type**: void
- **Parameters**: Entity entity
- **Description**: Only used in train_robbery4 R* Script _C* - _DEL*

### _0x1180A2974D251B7B
- **Return Type**: int
- **Parameters**: Vehicle train
- **Description**: Returns p1 for 0xBA958F68031DDBFC (stationIndex) _GET_N* (NEAREST_STATION_FOR_TRAIN?)

### GET_CURRENT_STATION_FOR_TRAIN
- **Return Type**: int
- **Parameters**: Vehicle train
- **Description**: Returns p1 for 0xBA958F68031DDBFC (stationIndex)

### _0x9CC94A948EAF5372
- **Return Type**: Hash
- **Parameters**: int trackIndex, int stationIndex
- **Description**: _GET_P - _GET_T*

### _0xDE8C5B9F65017FA1
- **Return Type**: Any
- **Parameters**: Vehicle train

### _GET_CURRENT_TRACK_FOR_TRAIN
- **Return Type**: int
- **Parameters**: Vehicle train
- **Description**: Returns p0 for 0xBA958F68031DDBFC (trackIndex)

### _GET_STATION_COORDS_FROM_TRAIN_STATION_DATA
- **Return Type**: Vector3
- **Parameters**: int trackIndex, int stationIndex
- **Description**: Returns Coords of vStation p0 - NET_TRAIN_MANAGER_GET_TRAIN_STATION_DATA _GET_P* - _GET_T*

### GET_TRACK_INDEX_OF_TRAIN
- **Return Type**: int
- **Parameters**: Vehicle train

### _0x1A861F899EBBE17C
- **Return Type**: void
- **Parameters**: Vehicle train, BOOL p1

### _0xF8F7DA13CFBD4532
- **Return Type**: void
- **Parameters**: int trackIndex, BOOL p1

### _TRIGGER_TRAIN_WHISTLE
- **Return Type**: void
- **Parameters**: Vehicle train, const char* whistleSequence, BOOL p2, BOOL p3
- **Description**: whistleSequence: ACKNOWLEDGE, BACKING_UP, CROSSING, DANGER, MOVING, NEXT_STATION, PASSING, STOPPED p2 = true seems to mute the sound

### _0x2BB2B5BCF0DF8008
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x6703872EC09BC158
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x1BFBAFCC6760FF02
- **Return Type**: void
- **Parameters**: Vehicle train, BOOL p1

### _0xF5EA41C1408695FB
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### SET_VEHICLE_FIXED
- **Return Type**: void
- **Parameters**: Vehicle vehicle
- **Description**: This fixes a vehicle. If the vehicle's engine's broken then you cannot fix it with this native.

### SET_DISABLE_VEHICLE_PETROL_TANK_FIRES
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### SET_DISABLE_VEHICLE_ENGINE_FIRES
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1

### SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1
- **Description**: _SET_VEHICLE_LI*

### SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1

### REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### SET_VEHICLE_STEER_BIAS
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float value
- **Description**: Locks the vehicle's steering to the desired angle, explained below.  Requires to be called onTick. Steering is unlocked the moment the function stops being called on the vehicle.  Steer bias: -1.0 = full right 0.0 = centered steering 1.0 = full left

### IS_VEHICLE_EXTRA_TURNED_ON
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, int extraId

### SET_VEHICLE_EXTRA
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int extraId, BOOL disable
- **Description**: Note: only some vehicle have extras https://github.com/femga/rdr3_discoveries/blob/master/vehicles/vehicle_modding/vehicle_extras.lua

### DOES_EXTRA_EXIST
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, int extraId

### SET_VEHICLE_DAMAGE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float xOffset, float yOffset, float zOffset, float damage, float radius, BOOL p6
- **Description**: Apply damage to vehicle at a location. Location is relative to vehicle model (not world).  Radius of effect damage applied in a sphere at impact location

### SET_VEHICLE_DAMAGE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, Vector3 offset, float damage, float radius, BOOL p6

### GET_VEHICLE_ENGINE_HEALTH
- **Return Type**: float
- **Parameters**: Vehicle vehicle
- **Description**: Returns 1000.0 if the function is unable to get the address of the specified vehicle or if it's not a vehicle.  Minimum: -4000 Maximum: 1000  -4000: Engine is destroyed 0 and below: Engine catches fire and health rapidly declines 300: Engine is smoking and losing functionality 1000: Engine is perfect

### SET_VEHICLE_ENGINE_HEALTH
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float health
- **Description**: 1000 is max health Begins leaking gas at around 650 health -999.90002441406 appears to be minimum health, although nothing special occurs <- false statement  ------------------------- Minimum: -4000 Maximum: 1000  -4000: Engine is destroyed 0 and below: Engine catches fire and health rapidly declines 300: Engine is smoking and losing functionality 1000: Engine is perfect

### GET_VEHICLE_PETROL_TANK_HEALTH
- **Return Type**: float
- **Parameters**: Vehicle vehicle
- **Description**: 1000 is max health

### SET_VEHICLE_PETROL_TANK_HEALTH
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float health
- **Description**: 1000 is max health

### IS_VEHICLE_STUCK_TIMER_UP
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, int stuckType, int ms
- **Description**: VEH_STUCK_ON_ROOF = 0, VEH_STUCK_ON_SIDE, VEH_STUCK_HUNG_UP, VEH_STUCK_JAMMED

### RESET_VEHICLE_STUCK_TIMER
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int nullAttributes

### IS_VEHICLE_DRIVEABLE
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, BOOL p1, BOOL p2

### IS_VEHICLE_WRECKED
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle

### _IS_VEHICLE_ON_FIRE
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle

### SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL owned

### START_VEHICLE_HORN
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int duration, Hash mode, BOOL forever
- **Description**: Sounds the horn for the specified vehicle.  vehicle: The vehicle to activate the horn for. mode: The hash of "NORMAL" or "HELDDOWN". Can be 0. duration: The duration to sound the horn, in milliseconds.  Note: If a player is in the vehicle, it will only sound briefly.

### SET_VEHICLE_HAS_STRONG_AXLES
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle
- **Description**: if true, axles won't bend.

### _SET_VEHICLE_SNOW_LEVEL
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float snowLevel
- **Description**: snowLevel: 0.0 - 1.0

### _SET_VEHICLE_WET_LEVEL
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float wetLevel
- **Description**: wetLevel: 0.0 - 1.0

### _SET_VEHICLE_TINT
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int tintId
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/vehicles/vehicle_modding/vehicle_tints.lua

### _SET_VEHICLE_LIVERY
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int liveryIndex
- **Description**: https://github.com/femga/rdr3_discoveries/blob/master/vehicles/vehicle_modding/vehicle_liveries.lua

### _GET_VEHICLE_TINT
- **Return Type**: int
- **Parameters**: Vehicle vehicle

### _GET_VEHICLE_LIVERY
- **Return Type**: int
- **Parameters**: Vehicle vehicle

### IS_VEHICLE_WINDOW_INTACT
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, int windowIndex

### ARE_ANY_VEHICLE_SEATS_FREE
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle
- **Description**: Returns false if every seat is occupied.

### SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle
- **Description**: Sets a vehicle to be strongly resistant to explosions. p0 is the vehicle; set p1 to false to toggle the effect on/off.

### SET_ALLOW_VEHICLE_EXPLODES_ON_CONTACT
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1

### IS_ANY_VEHICLE_NEAR_POINT
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, float radius

### IS_ANY_VEHICLE_NEAR_POINT
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, float radius

### REQUEST_VEHICLE_HIGH_DETAIL_MODEL
- **Return Type**: void
- **Parameters**: Vehicle vehicle

### REQUEST_VEHICLE_ASSET
- **Return Type**: void
- **Parameters**: Hash vehicleHash, int vehicleAsset

### _0xCF9DA72002FC16BF
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### HAS_VEHICLE_ASSET_LOADED
- **Return Type**: BOOL
- **Parameters**: Hash vehicleAsset

### REMOVE_VEHICLE_ASSET
- **Return Type**: void
- **Parameters**: Hash vehicleAsset

### SET_VEHICLE_AUTOMATICALLY_ATTACHES
- **Return Type**: Any
- **Parameters**: Vehicle vehicle, BOOL p1, Any p2

### _0x104D9A7B1C0D0783
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float p1

### IS_VEHICLE_IN_BURNOUT
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle

### SET_VEHICLE_HANDBRAKE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### INSTANTLY_FILL_VEHICLE_POPULATION
- **Return Type**: void
- **Parameters**: 

### HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED
- **Return Type**: BOOL
- **Parameters**: 

### GET_VEHICLE_TRAILER_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, Vehicle* trailer
- **Description**: Gets the trailer of a vehicle and puts it into the trailer parameter.

### GET_VEHICLE_ESTIMATED_MAX_SPEED
- **Return Type**: float
- **Parameters**: Vehicle vehicle

### ADD_ROAD_NODE_SPEED_ZONE
- **Return Type**: int
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10

### REMOVE_ROAD_NODE_SPEED_ZONE
- **Return Type**: BOOL
- **Parameters**: int speedzone

### IS_ENTRY_POINT_FOR_SEAT_CLEAR
- **Return Type**: BOOL
- **Parameters**: Ped ped, Vehicle vehicle, int seatIndex, BOOL side, BOOL onEnter

### CAN_SHUFFLE_SEAT
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, int seatIndex
- **Description**: seatIndex: see CREATE_PED_INSIDE_VEHICLE

### MODIFY_VEHICLE_TOP_SPEED
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float value

### SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### SET_VEHICLE_INFLUENCES_WANTED_LEVEL
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### _IS_BOAT_GROUNDED
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle

### SET_VEHICLE_NOT_STEALABLE_AMBIENTLY
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1

### LOCK_DOORS_WHEN_NO_LONGER_NEEDED
- **Return Type**: void
- **Parameters**: Vehicle vehicle

### GET_LAST_DRIVEN_VEHICLE
- **Return Type**: Vehicle
- **Parameters**: 

### CLEAR_LAST_DRIVEN_VEHICLE
- **Return Type**: void
- **Parameters**: 

### SET_PED_OWNS_VEHICLE
- **Return Type**: void
- **Parameters**: Ped ped, Vehicle vehicle

### _GET_VEHICLE_OWNER
- **Return Type**: Entity
- **Parameters**: Vehicle vehicle

### SET_VEHICLE_LOD_MULTIPLIER
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float multiplier

### _SET_VEHICLE_LOD_LEVEL
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int lodLevel
- **Description**: Ranges from -1 to 2? (internal type is int8) https://imgur.com/a/bPzHcft

### SET_FORCE_VEHICLE_ENGINE_DAMAGE_BY_BULLET
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### COPY_VEHICLE_DAMAGES
- **Return Type**: void
- **Parameters**: Vehicle sourceVehicle, Vehicle targetVehicle
- **Description**: Copies sourceVehicle's damage (broken bumpers, broken lights, etc.) to targetVehicle.

### SET_VEHICLE_SHOOT_AT_TARGET
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### SET_FORCE_HD_VEHICLE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### TRACK_VEHICLE_VISIBILITY
- **Return Type**: void
- **Parameters**: Vehicle vehicle

### IS_VEHICLE_VISIBLE
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle
- **Description**: Requires a visibility tracker on the vehicle (TRACK_VEHICLE_VISIBILITY)

### _0x13C190302369308B
- **Return Type**: Any
- **Parameters**: Any p0

### SET_ENABLE_VEHICLE_SLIPSTREAMING
- **Return Type**: void
- **Parameters**: BOOL p0

### SET_VEHICLE_INACTIVE_DURING_PLAYBACK
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### SET_VEHICLE_ENGINE_CAN_DEGRADE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### SET_VEHICLE_IS_STOLEN
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL isStolen

### _0xCBF88256E44D5D39
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1
- **Description**: Used in Script Function MC_LOCAL_SETUP_VEH - enabling transitions

### _0xC325A6BAA62CF8A2
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1
- **Description**: Used in Script Function MC_LOCAL_SETUP_VEH - enabling transitions

### _0x0CD7914D17A970AB
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x23F66C36F8E5EAAB
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x697DF68F3A761A50
- **Return Type**: void
- **Parameters**: Any p0

### _0x27E3F2B57209FA54
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### DISABLE_VEHICLE_WEAPON
- **Return Type**: void
- **Parameters**: BOOL disabled, Hash weaponHash, Vehicle vehicle, Ped owner

### SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### SET_VEHICLE_KEEP_ENGINE_ON_WHEN_ABANDONED
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### _0x15CC8C33D7FFCC4A
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int p1

### SET_VEHICLE_AI_CAN_USE_EXCLUSIVE_SEATS
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle
- **Description**: Used to be incorrectly named SET_VEHICLE_EXCLUSIVE_DRIVER

### SET_VEHICLE_EXCLUSIVE_DRIVER
- **Return Type**: void
- **Parameters**: Vehicle vehicle, Ped ped, int index
- **Description**: index: 0 - 1  Used to be incorrectly named _SET_VEHICLE_EXCLUSIVE_DRIVER_2

### _IS_PED_EXCLUSIVE_DRIVER_OF_VEHICLE
- **Return Type**: BOOL
- **Parameters**: Ped ped, Vehicle vehicle, int* outIndex

### _0xDC0556D0F484ECAA
- **Return Type**: void
- **Parameters**: Any p0

### SET_DISABLE_SUPERDUMMY
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL disable
- **Description**: Old name: _SET_DISABLE_SUPERDUMMY_MODE

### GET_VEHICLE_BODY_HEALTH
- **Return Type**: float
- **Parameters**: Vehicle vehicle
- **Description**: Seems related to vehicle health, like the one in IV. Max 1000, min 0. Vehicle does not necessarily explode or become undrivable at 0.

### SET_VEHICLE_BODY_HEALTH
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float value

### _0xE777DDF3E78397E8
- **Return Type**: Any
- **Parameters**: Any p0

### SET_VEHICLE_BROKEN_PARTS_DONT_AFFECT_AI_HANDLING
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1

### _0x012701ED938B85DE
- **Return Type**: void
- **Parameters**: float p0, float p1
- **Description**: Only used in SP Scripts. Related to Vehicle Speed.

### _0x8379E05871AD24E0
- **Return Type**: void
- **Parameters**: 

### _SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _ATTACH_DRAFT_VEHICLE_HARNESS_PED
- **Return Type**: BOOL
- **Parameters**: Ped mount, Vehicle draft, int harnessId

### _DETACH_DRAFT_VEHICLE_HARNESS_FROM_INDEX
- **Return Type**: BOOL
- **Parameters**: Vehicle draft, int harnessId

### _DETACH_DRAFT_VEHICLE_HARNESS_PED
- **Return Type**: BOOL
- **Parameters**: Vehicle draft, Ped ped

### _0x0F7F603BDE08C4D3
- **Return Type**: void
- **Parameters**: Any p0

### _GET_NUM_DRAFT_VEHICLE_HARNESS_PED
- **Return Type**: int
- **Parameters**: Hash modelHash
- **Description**: Returns number of horses a wagon can have

### _GET_CHECKPOINT_TRAIN_SPAWN_LOCATION
- **Return Type**: Vector3
- **Parameters**: int trackIndex, float x, float y, float z, float distance, BOOL direction

### _GET_CHECKPOINT_TRAIN_SPAWN_LOCATION
- **Return Type**: Vector3
- **Parameters**: int trackIndex, Vector3 vec, float distance, BOOL direction

### _0xC399CC89FBA05DA0
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1

### _GET_ROWING_OARS
- **Return Type**: void
- **Parameters**: Vehicle vehicle, Entity* left, Entity* right
- **Description**: Returns handles of boat paddles entities.

### GET_DRIVER_OF_VEHICLE
- **Return Type**: Ped
- **Parameters**: Vehicle vehicle

### _SET_FORCE_COACH_ROBBERY_LOOT
- **Return Type**: void
- **Parameters**: Vehicle vehicle, Hash coachrobberyLoot
- **Description**: Hashes: COACH2_BOOT_LOOT_ITEMS_COACHROB_RSC, COACH2_BOOT_LOOT_ITEMS_COACHROB, COACH2_MARY3

### _0x0BA4250D20007C2E
- **Return Type**: Any
- **Parameters**: Any p0

### _0x2200AB13CBD10F4E
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float x, float y, float z, BOOL p4, float p5

### _0x2200AB13CBD10F4E
- **Return Type**: void
- **Parameters**: Vehicle vehicle, Vector3 vec, BOOL p4, float p5

### _0xB42C87521D1BDD2F
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float x, float y, float z

### _0xB42C87521D1BDD2F
- **Return Type**: void
- **Parameters**: Vehicle vehicle, Vector3 vec

### _0xC351394B932A6A50
- **Return Type**: void
- **Parameters**: Any p0

### _0x172E9DD35858DCD7
- **Return Type**: void
- **Parameters**: Any p0

### _GET_BREAKABLE_VEHICLE_LOCKS_STATE
- **Return Type**: int
- **Parameters**: Vehicle vehicle

### _0x877EA24EB1614495
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _GET_BREAKABLE_VEHICLE_LOCK_OBJECT
- **Return Type**: Object
- **Parameters**: Vehicle vehicle, int index

### _GET_NUM_BREAKABLE_VEHICLE_LOCK_OBJECTS
- **Return Type**: int
- **Parameters**: Vehicle vehicle

### SET_BREAKABLE_VEHICLE_LOCKS_UNBREAKABLE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL toggle

### _0x9D12796EF4BF9EA9
- **Return Type**: void
- **Parameters**: Any p0

### _0x850CE59DEC2028F3
- **Return Type**: void
- **Parameters**: Vehicle vehicle, Any p1

### _0x0355FE37240E2C77
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x3D86997A86FEEF0D
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xD826690B5CF3BEFF
- **Return Type**: void
- **Parameters**: Vehicle vehicle, Any p1

### _BREAK_OFF_DRAFT_WHEEL
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int wheelIndex, float destroyingForce
- **Description**: Params: destroyingForce is usually 100f in R* Scripts Similar to 0xD4F5EFB55769D272, _A*

### GET_DRAFT_ANIMAL_COUNT
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, int* expected, int* actual

### _0x165BE2001E5E4B75
- **Return Type**: void
- **Parameters**: Any p0

### _SET_DRAFT_VEHICLE_ANIMALS_CAN_DETACH
- **Return Type**: void
- **Parameters**: Vehicle draft, BOOL canDetach

### _SET_DRAFT_VEHICLE_YOKE_CAN_BREAK
- **Return Type**: void
- **Parameters**: Vehicle draft, BOOL canBreak

### _ADD_TRAIN_TEMPORARY_STOP
- **Return Type**: void
- **Parameters**: Vehicle train, int trackIndex, float x, float y, float z

### _ADD_TRAIN_TEMPORARY_STOP
- **Return Type**: void
- **Parameters**: Vehicle train, int trackIndex, Vector3 vec

### _0x0794199B25E499E1
- **Return Type**: void
- **Parameters**: Vehicle wagon, BOOL p1
- **Description**: _SET_VEHICLE_S*

### _0x73118A3EE9C9B6DB
- **Return Type**: void
- **Parameters**: Vehicle wagon, int p1, BOOL p2
- **Description**: _SET_VEHICLE_WHEELS_*

### _0xE1C0F8781BF130C2
- **Return Type**: BOOL
- **Parameters**: Vehicle wagon, int p1
- **Description**: Only used in R* SP Script rcm_abigail31: p1 = 5 _GET_VEHICLE_T* - _GET_VO*

### _IS_VEHICLE_WHEEL_DESTROYED
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, int wheel

### _0x18714953CCED17D3
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle
- **Description**: _ARE_ANY_VEHICLE_(WHEELS_DESTROYED?)*

### _0x41F0B254DDF71473
- **Return Type**: void
- **Parameters**: Vehicle wagon
- **Description**: _H*

### _SET_VEHICLE_DETERIORATION
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float amount, int p2, BOOL p3

### _IS_VEHICLE_DOOR_BROKEN
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle, int doorId
- **Description**: doorId: see SET_VEHICLE_DOOR_SHUT

### _BREAK_OFF_VEHICLE_WHEEL
- **Return Type**: Entity
- **Parameters**: Vehicle vehicle, int wheelIndex
- **Description**: wheelIndex 0: left, wheelIndex 1: right, 4 & 5: unknown

### _DELETE_VEHICLE_LANTERNS
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle
- **Description**: Spawn without lanterns set

### _0x6DE072AC8A95FFC1
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1
- **Description**: _SET_INSTANTLY_* - _SET_MISSION_TRAIN*

### _SET_DRAFT_VEHICLE_DESIRED_SPEED
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float speed

### _GET_DRAFT_VEHICLE_DESIRED_SPEED
- **Return Type**: float
- **Parameters**: Vehicle vehicle
- **Description**: Returns rage::NumericLimits<float>::kMax (3.402823466e+38) if vehicle is not a valid vehicle of type VEHICLE_TYPE_DRAFT.

### _0xC4A2C11FC0D41916
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1
- **Description**: _SET_DRAFT_VEHICLE_(STOP?)*

### _0xFC4F15A7DDDC47B1
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1
- **Description**: _SET_DRAFT_VEHICLE_*

### _0x4C60C333F9CCA2B6
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1
- **Description**: Params: p1 usually true in R* Scripts _SET_DRAFT_VEHICLE_*

### _0xCF342503CA4C8DF1
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float p1

### _0x06A09A6E0C6D2A84
- **Return Type**: void
- **Parameters**: Vehicle train, BOOL p1
- **Description**: _SET_TRAIN_*

### _0xAE7E66A61E7C17A5
- **Return Type**: void
- **Parameters**: Vehicle train, BOOL p1
- **Description**: _SET_TRAIN_*

### _0xEF28A614B4B264B8
- **Return Type**: void
- **Parameters**: Vehicle train, BOOL p1
- **Description**: _SET_TRAIN_*

### _0x04F0579DBDD32F34
- **Return Type**: void
- **Parameters**: Vehicle vehicle
- **Description**: _SET_VEHICLE_*

### _0x12F6C6ED3EFF42DE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float x, float y, float z
- **Description**: Params: coords = GET_ENTITY_VELOCITY _SET_VELOCITY*

### _0x12F6C6ED3EFF42DE
- **Return Type**: void
- **Parameters**: Vehicle vehicle, Vector3 vec

### _0x87B974E54C71BA7B
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1

### _HAS_TRAIN_LOADED
- **Return Type**: BOOL
- **Parameters**: Vehicle train

### _CREATE_MISSION_TRAIN
- **Return Type**: Vehicle
- **Parameters**: Hash configHash, float x, float y, float z, BOOL direction, BOOL passengers, BOOL p6, BOOL conductor
- **Description**: configHash: https://alloc8or.re/rdr3/doc/enums/eTrainConfig.txt For more information, see trainconfigs.ymt To make the train AI controlled, set conductor to true and set the speed once.

### _CREATE_MISSION_TRAIN
- **Return Type**: Vehicle
- **Parameters**: Hash configHash, Vector3 vec, BOOL direction, BOOL passengers, BOOL p6, BOOL conductor

### _0xD1EFA8D68BF5D63D
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x1121B07088ED3013
- **Return Type**: Any
- **Parameters**: Any p0

### _0x42404D57D621601A
- **Return Type**: Any
- **Parameters**: Any p0

### _0x288CBB414C3C2FBB
- **Return Type**: Any
- **Parameters**: Any p0

### _0x6FD7BDF10304363A
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xCEB1F1EED484A5B4
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xF57DB8E83DCD8349
- **Return Type**: Any
- **Parameters**: Any p0

### _SET_BALLOON_HOVER_STATE
- **Return Type**: void
- **Parameters**: Vehicle balloon, float p1
- **Description**: Params: 1.0f will make balloon hover

### _SET_DRAFT_VEHICLE_ALLOW_DRAFT_ANIMAL_AUTO_CREATION
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL allow

### _0x6835AFEA10E186F4
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_DRAFT_ANIMAL_RANDOM_SEED
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int seed

### _0x14DA8C4BC2CCD90A
- **Return Type**: Any
- **Parameters**: Any p0

### _0xCACAB2B123BBDBD6
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0xFF2B1F59FB892F14
- **Return Type**: void
- **Parameters**: Any p0

### _0x5AADC7BBBB1BCEEB
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _GET_VEHICLE_IS_PROP_SET_APPLIED
- **Return Type**: BOOL
- **Parameters**: Vehicle vehicle

### _SET_BATCH_TARP_HEIGHT
- **Return Type**: void
- **Parameters**: Vehicle vehicle, float height, BOOL immediately
- **Description**: Total height is calculated using: cargo ratio + pelt ratio (by pelt count) Screenshot: https://imgur.com/a/nsomtiv

### _0x07E2E21E799080A0
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xC2E62678D602853C
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### _0x873AAF600CC36DAC
- **Return Type**: void
- **Parameters**: Any p0

### _0x51C7694E140FAE43
- **Return Type**: Any
- **Parameters**: Any p0

### _0x8DECD262602548B9
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xCBC7B6F9A56B79F6
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x37D238BE69F7378A
- **Return Type**: BOOL
- **Parameters**: int trackIndex

### _0x703D4FB366DA4452
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x762FDC4C19E5A981
- **Return Type**: void
- **Parameters**: Entity trainCarriage, BOOL p1
- **Description**: Seems to be related while setting a (door) state of specific trains (midlandboxcar05x, privateboxcar01x, privateboxcar02x, midlandrefrigeratorCar, privateArmoured, armoredCar01x)

### _0x2045429505158D1A
- **Return Type**: Any
- **Parameters**: Any p0

### _0x13EB275BF81636D1
- **Return Type**: void
- **Parameters**: Any p0, Any p1


## VOICE
### _0xCCF71FCFA0070B1A
- **Return Type**: BOOL
- **Parameters**: 

### _0x79F478FF5F9F4F05
- **Return Type**: void
- **Parameters**: BOOL enabled

### _0xAA35FD9ABAB490A3
- **Return Type**: BOOL
- **Parameters**: Player player

### _0x356135B9B10A2A82
- **Return Type**: BOOL
- **Parameters**: Any* gamerHandle

### _0xEF6F2A35FAAF2ED7
- **Return Type**: BOOL
- **Parameters**: Player player

### _0x49623BCFC3A3D829
- **Return Type**: BOOL
- **Parameters**: Player player, BOOL muted

### _0x919AF2D93E9AA89D
- **Return Type**: BOOL
- **Parameters**: Player player

### _0x0DED260A1958A82E
- **Return Type**: BOOL
- **Parameters**: Player player

### _0x8E462DB1EAA9C47C
- **Return Type**: BOOL
- **Parameters**: Player player

### _0x5CA7FB7D6DE49DCC
- **Return Type**: float
- **Parameters**: Player player

### _0x58125B691F6827D5
- **Return Type**: void
- **Parameters**: float proximity

### _0x2F82CAB262C8AE26
- **Return Type**: float
- **Parameters**: Player player

### _0x08797A8C03868CB8
- **Return Type**: void
- **Parameters**: float threshold

### _0xB779F4FA19269AEC
- **Return Type**: void
- **Parameters**: BOOL flag

### _0x1FBF7F5BA7E4BE3A
- **Return Type**: void
- **Parameters**: int p0

### _0xDC9B361CB7776673
- **Return Type**: void
- **Parameters**: Player player

### _0xEC8703E4536A9952
- **Return Type**: void
- **Parameters**: 

### _0xDB622ECD3DCBE078
- **Return Type**: Any
- **Parameters**: Player player

### _0xB6E79850B759A30E
- **Return Type**: void
- **Parameters**: int teamId, BOOL allow

### _0x4791899615D70FA2
- **Return Type**: void
- **Parameters**: Player player, int p1, int p2
- **Description**: Params: p1 = 2; p2 = 3 in R* Script net_main_offline

### _0xF8938CF3984092A5
- **Return Type**: void
- **Parameters**: Player player

### _0x767931C727DF2ED7
- **Return Type**: int
- **Parameters**: Player player, int p1
- **Description**: Returns p2 value of 0x4791899615D70FA2

### _0x1C38C3577901AF1F
- **Return Type**: void
- **Parameters**: 

### _0xB3E8841F6BDAF83E
- **Return Type**: void
- **Parameters**: 


## VOLUME
### _CREATE_VOLUME_BY_HASH
- **Return Type**: Volume
- **Parameters**: Hash volumeType, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ

### _CREATE_VOLUME_BY_HASH
- **Return Type**: Volume
- **Parameters**: Hash volumeType, Vector3 vec, Vector3 rot, Vector3 scale

### CREATE_VOLUME_BOX
- **Return Type**: Volume
- **Parameters**: float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ

### CREATE_VOLUME_BOX
- **Return Type**: Volume
- **Parameters**: Vector3 vec, Vector3 rot, Vector3 scale

### CREATE_VOLUME_CYLINDER
- **Return Type**: Volume
- **Parameters**: float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ

### CREATE_VOLUME_CYLINDER
- **Return Type**: Volume
- **Parameters**: Vector3 vec, Vector3 rot, Vector3 scale

### CREATE_VOLUME_SPHERE
- **Return Type**: Volume
- **Parameters**: float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ

### CREATE_VOLUME_SPHERE
- **Return Type**: Volume
- **Parameters**: Vector3 vec, Vector3 rot, Vector3 scale

### CREATE_VOLUME_AGGREGATE
- **Return Type**: Volume
- **Parameters**: 

### _CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME
- **Return Type**: Volume
- **Parameters**: Hash volumeType, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, const char* name

### _CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME
- **Return Type**: Volume
- **Parameters**: Hash volumeType, Vector3 vec, Vector3 rot, Vector3 scale, const char* name

### _CREATE_ANTI_GRIEF_VOLUME
- **Return Type**: Volume
- **Parameters**: Hash volumeType, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ

### _CREATE_ANTI_GRIEF_VOLUME
- **Return Type**: Volume
- **Parameters**: Hash volumeType, Vector3 vec, Vector3 rot, Vector3 scale

### _SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE
- **Return Type**: void
- **Parameters**: Volume volume, BOOL toggle

### _SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER
- **Return Type**: void
- **Parameters**: Volume volume, BOOL toggle

### _CREATE_WALK_AND_TALK_VOLUME
- **Return Type**: Volume
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12

### _CREATE_SPEED_VOLUME
- **Return Type**: Volume
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14

### _CREATE_VOLUME_BOX_WITH_CUSTOM_NAME
- **Return Type**: Volume
- **Parameters**: float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, const char* name

### _CREATE_VOLUME_BOX_WITH_CUSTOM_NAME
- **Return Type**: Volume
- **Parameters**: Vector3 vec, Vector3 rot, Vector3 scale, const char* name

### _CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME
- **Return Type**: Volume
- **Parameters**: float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, const char* name

### _CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME
- **Return Type**: Volume
- **Parameters**: Vector3 vec, Vector3 rot, Vector3 scale, const char* name

### _CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME
- **Return Type**: Volume
- **Parameters**: float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, const char* name

### _CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME
- **Return Type**: Volume
- **Parameters**: Vector3 vec, Vector3 rot, Vector3 scale, const char* name

### _CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME
- **Return Type**: Volume
- **Parameters**: const char* name

### _ADD_BOUNDS_TO_AGGREGATE_VOLUME
- **Return Type**: void
- **Parameters**: Volume volume, Volume aggregate
- **Description**: _ADD_R* - _ADD_V(OLUME?)*

### _REMOVE_BOUNDS_FROM_AGGREGATE_VOLUME
- **Return Type**: void
- **Parameters**: Volume volume, Volume aggregate
- **Description**: _REMOVE_E* - _REMOVE_R*

### _ADD_VOLUME_TO_VOLUME_AGGREGATE
- **Return Type**: void
- **Parameters**: Volume aggregate, Hash typeHash, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ

### _ADD_VOLUME_TO_VOLUME_AGGREGATE
- **Return Type**: void
- **Parameters**: Volume aggregate, Hash typeHash, Vector3 vec, Vector3 rot, Vector3 scale

### _ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE
- **Return Type**: void
- **Parameters**: Volume aggregate, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9

### _ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE
- **Return Type**: void
- **Parameters**: Volume aggregate, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9

### _ADD_SPHERE_VOLUME_TO_VOLUME_AGGREGATE
- **Return Type**: void
- **Parameters**: Volume aggregate, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9

### DELETE_VOLUME
- **Return Type**: void
- **Parameters**: Volume volume

### DOES_VOLUME_EXIST
- **Return Type**: BOOL
- **Parameters**: Volume volume

### IS_POINT_IN_VOLUME
- **Return Type**: BOOL
- **Parameters**: Volume volume, float x, float y, float z
- **Description**: Old name: _IS_POSITION_INSIDE_VOLUME

### IS_POINT_IN_VOLUME
- **Return Type**: BOOL
- **Parameters**: Volume volume, Vector3 vec

### GET_VOLUME_COORDS
- **Return Type**: Vector3
- **Parameters**: Volume volume

### SET_VOLUME_COORDS
- **Return Type**: BOOL
- **Parameters**: Volume volume, float posX, float posY, float posZ

### SET_VOLUME_COORDS
- **Return Type**: BOOL
- **Parameters**: Volume volume, Vector3 pos

### GET_VOLUME_ROTATION
- **Return Type**: Vector3
- **Parameters**: Volume volume

### SET_VOLUME_ROTATION
- **Return Type**: BOOL
- **Parameters**: Volume volume, float rotX, float rotY, float rotZ

### SET_VOLUME_ROTATION
- **Return Type**: BOOL
- **Parameters**: Volume volume, Vector3 rot

### GET_VOLUME_SCALE
- **Return Type**: Vector3
- **Parameters**: Volume volume

### SET_VOLUME_SCALE
- **Return Type**: BOOL
- **Parameters**: Volume volume, float scaleX, float scaleY, float scaleZ

### SET_VOLUME_SCALE
- **Return Type**: BOOL
- **Parameters**: Volume volume, Vector3 scale

### _GET_VOLUME_BOUNDS
- **Return Type**: void
- **Parameters**: Volume volume, Vector3* min, Vector3* max

### _0x748C5F51A18CB8F0
- **Return Type**: void
- **Parameters**: BOOL p0
- **Description**: nullsub, doesn't do anything

### _0x2B32B11520626229
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0x40F769D31A00D5A0
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xD882C5B3991575B7
- **Return Type**: Vector3
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4

### _0xB469CFD9E065EB99
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x7FD78DFD0C5D7B9B
- **Return Type**: Any
- **Parameters**: Any p0

### _0xEE1D6FF54CAF7714
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xD52DF30355EA7C8E
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### SET_VOLUME_OWNER_PERSISTENT_CHARACTER
- **Return Type**: void
- **Parameters**: Volume volume, PersChar persChar, BOOL p2

### _0x6D5F9E69BA1BE783
- **Return Type**: void
- **Parameters**: Any p0

### _0x998202B206872672
- **Return Type**: void
- **Parameters**: Any p0

### _0x4A8FEFC43FD8AC9B
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0xF3A2FBA5985C8CD5
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0x53D05D60E5F5B40C
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2, Any p3

### _0xCA5C90D40665D5CE
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x3EFABB21E14A6BD1
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _IS_AGGREGATE_VOLUME
- **Return Type**: BOOL
- **Parameters**: Volume volume

### _CREATE_VOLUME_LOCK
- **Return Type**: Volume
- **Parameters**: float x, float y, float z, float radius, int flag, Any p5
- **Description**: Params: p5 is always 0

### _CREATE_VOLUME_LOCK
- **Return Type**: Volume
- **Parameters**: Vector3 vec, float radius, int flag, Any p5

### _CREATE_VOLUME_LOCK_ATTACHED_TO_ENTITY
- **Return Type**: Volume
- **Parameters**: Entity entity, float radius, int flag, Any p3
- **Description**: Params: p3 is always 0

### _IS_VOLUME_LOCK_REQUEST_VALID_2
- **Return Type**: BOOL
- **Parameters**: int volLockRequestId

### _0xC4019CF9AE8E931A
- **Return Type**: Vector3
- **Parameters**: int volLockRequestId

### _0xF6CE6F9C3897804E
- **Return Type**: Any
- **Parameters**: Any p0

### _0xF6F5447D418DAA82
- **Return Type**: Any
- **Parameters**: Any p0

### _0xD4FA73FE628FEC63
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xB440F4E35393FC39
- **Return Type**: void
- **Parameters**: Volume volume, Any p1

### _0xD460135C98940274
- **Return Type**: void
- **Parameters**: Volume volume, Any p1

### _0xEBA87B9273835CF3
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xAA9EE2AAFC717623
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### _0x870E9981ED27C815
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5

### DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, float radius, BOOL p4, int p5, int p6

### DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, float radius, BOOL p4, int p5, int p6

### _IS_POINT_NEAR_VOLUME_LOCK_CENTER
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, float radius, int p4, int p5, int flags

### _IS_POINT_NEAR_VOLUME_LOCK_CENTER
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, float radius, int p4, int p5, int flags

### _0x51E52C9687FCDEEC
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6

### _FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS
- **Return Type**: int
- **Parameters**: Any* args

### _MODIFY_VOLUME_LOCK_LOCATION
- **Return Type**: void
- **Parameters**: int volLock, float x, float y, float z

### _MODIFY_VOLUME_LOCK_LOCATION
- **Return Type**: void
- **Parameters**: int volLock, Vector3 vec

### _0x695DAC2DB928F308
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _RELEASE_LOCK_VOLUME
- **Return Type**: void
- **Parameters**: int volLockRequestId

### _0xAC355980681A7F89
- **Return Type**: void
- **Parameters**: Any p0

### _ADD_ENTRY_VOLUME_LOCK
- **Return Type**: BOOL
- **Parameters**: Any* args

### _0xC61E2FD926DBB406
- **Return Type**: void
- **Parameters**: 

### REQUEST_VOLUME_LOCK
- **Return Type**: int
- **Parameters**: float x, float y, float z, float radius, int p4, int p5

### REQUEST_VOLUME_LOCK
- **Return Type**: int
- **Parameters**: Vector3 vec, float radius, int p4, int p5

### REQUEST_VOLUME_LOCK_WITH_ARGS
- **Return Type**: int
- **Parameters**: Any* args

### IS_VOLUME_LOCK_REQUEST_VALID
- **Return Type**: BOOL
- **Parameters**: int volLockRequestId

### GET_VOLUME_LOCK_REQUEST_STATUS
- **Return Type**: int
- **Parameters**: int volLockRequestId
- **Description**: enum eVolumeLockRequestStatus { VOLUME_LOCK_REQUEST_STATUS_INVALID, VOLUME_LOCK_REQUEST_STATUS_READY, VOLUME_LOCK_REQUEST_STATUS_IN_PROGRESS, VOLUME_LOCK_REQUEST_STATUS_SUCCEEDED, VOLUME_LOCK_REQUEST_STATUS_FAILED };

### _0x351D71B8B72B858B
- **Return Type**: Any
- **Parameters**: Any p0

### _0xFA15C9A320E707B0
- **Return Type**: void
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

### _0x52572B331E693AED
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x128FC3A893BF853A
- **Return Type**: void
- **Parameters**: Any p0
- **Description**: nullsub, doesn't do anything

### _SET_VOLUME_RELATIONSHIP
- **Return Type**: void
- **Parameters**: Volume volume, Hash relationshipGroup

### _GET_VOLUME_RELATIONSHIP
- **Return Type**: Hash
- **Parameters**: Volume volume
- **Description**: Returns relationshipGroup Hash


## WATER
### DISABLE_WATER_LOOKUP
- **Return Type**: void
- **Parameters**: 
- **Description**: Must be called every frame to take full effect.

### ENABLE_WATER_LOOKUP
- **Return Type**: void
- **Parameters**: 

### GET_WATER_HEIGHT
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, float* height
- **Description**: Checks against a global variable that is set by _SET_WORLD_WATER_TYPE. If that is set to one it will fail. Likely not the only issue but part of it.

### GET_WATER_HEIGHT
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, float* height

### GET_WATER_HEIGHT_NO_WAVES
- **Return Type**: BOOL
- **Parameters**: float x, float y, float z, float* height

### GET_WATER_HEIGHT_NO_WAVES
- **Return Type**: BOOL
- **Parameters**: Vector3 vec, float* height

### TEST_PROBE_AGAINST_ALL_WATER
- **Return Type**: int
- **Parameters**: float x1, float y1, float z1, float x2, float y2, float z2, int flags, Vector3* intersectionPos
- **Description**: enum eScriptWaterTestResult { SCRIPT_WATER_TEST_RESULT_NONE, SCRIPT_WATER_TEST_RESULT_WATER, SCRIPT_WATER_TEST_RESULT_BLOCKED, };

### TEST_PROBE_AGAINST_ALL_WATER
- **Return Type**: int
- **Parameters**: Vector3 vec1, Vector3 vec2, int flags, Vector3* intersectionPos

### TEST_VERTICAL_PROBE_AGAINST_ALL_WATER
- **Return Type**: int
- **Parameters**: float x, float y, float z, int flags, float* waterHeight
- **Description**: Checks against a global variable that is set by _SET_WORLD_WATER_TYPE. If it's set to 1 (Guarma) it will fail.  See TEST_PROBE_AGAINST_ALL_WATER.

### TEST_VERTICAL_PROBE_AGAINST_ALL_WATER
- **Return Type**: int
- **Parameters**: Vector3 vec, int flags, float* waterHeight

### REMOVE_EXTRA_CALMING_QUAD
- **Return Type**: void
- **Parameters**: int index
- **Description**: Only used in rcm_crackpot1 R* Script: p0 = 0

### _0x09A1C7DFDCE54FBC
- **Return Type**: void
- **Parameters**: int p0
- **Description**: Called together with REMOVE_EXTRA_CALMING_QUAD in rcm_crackpot1 R* Script: p0 = 0 _REMOVE_*

### _0xF0FBF193F1F5C0EA
- **Return Type**: void
- **Parameters**: Ped ped
- **Description**: Only used in fishing_core R* Script

### _0xA33F5069B0CB89B8
- **Return Type**: void
- **Parameters**: 
- **Description**: Only used in fishing_core R* Script

### _0xB34A6009A0DB80B8
- **Return Type**: void
- **Parameters**: Entity entity
- **Description**: Used in bounty1, fanale3, sean1 R* Scripts

### _SET_OCEAN_GUARMA_WATER_QUADRANT
- **Return Type**: void
- **Parameters**: float wavesHeight, float p1, int p2, float p3, float p4, float p5, float p6, float wavesStrength, int p8
- **Description**: Only used in R* Script guama1

### _RESET_GUARMA_WATER_STATE
- **Return Type**: void
- **Parameters**: 
- **Description**: Only used in guama1 / guama3 R* Script _REQUEST_* or _RESET_*

### _SET_WORLD_WATER_TYPE
- **Return Type**: void
- **Parameters**: int waterType
- **Description**: 0 = World 1 = Guarma

### _GET_WORLD_WATER_TYPE
- **Return Type**: int
- **Parameters**: 

### _0x0DCEC6A92E497E17
- **Return Type**: void
- **Parameters**: Entity entity, int p1
- **Description**: Only used in native_son1 R* Script: p1 = 1

### _0xE8126623008372AA
- **Return Type**: void
- **Parameters**: 
- **Description**: Only used in fussar1 / train_robbery2 R* Script


## WEAPON
### _GET_WEAPON_UNLOCK
- **Return Type**: Hash
- **Parameters**: Hash weaponHash

### _ADD_AMMO_TO_PED
- **Return Type**: void
- **Parameters**: Ped ped, Hash weaponHash, int amount, Hash addReason
- **Description**: addReason: enum eAddItemReason : Hash { ADD_REASON_AWARDS = 0xB784AD1E, ADD_REASON_CREATE_CHARACTER = 0xE2C4FF71, ADD_REASON_DEBUG = 0x5C05C64D, ADD_REASON_DEFAULT = 0x2CD419DC, ADD_REASON_GET_INVENTORY = 0xD8188685, ADD_REASON_INCENTIVE = 0x8ADC2E95, ADD_REASON_LOADOUT = 0xCA3454E6, ADD_REASON_LOAD_SAVEGAME = 0x56212906, ADD_REASON_LOOTED = 0xCA806A55, ADD_REASON_MELEE = 0x7B9BDCE7, ADD_REASON_MP_MISSION = 0xEC0E0194, ADD_REASON_NOTIFICATION = 0xC56292D2, ADD_REASON_PICKUP = 0x1A770E22, ADD_REASON_PURCHASED = 0x4A6726C9, ADD_REASON_SET_AMOUNT = 0x4504731E, ADD_REASON_SYNCING = 0x8D4B4FF4, ADD_REASON_USE_FAILED = 0xD385B670 };

### _ADD_AMMO_TO_PED_BY_TYPE
- **Return Type**: void
- **Parameters**: Ped ped, Hash ammoType, int amount, Hash addReason
- **Description**: addReason: see _ADD_AMMO_TO_PED

### _REMOVE_AMMO_FROM_PED
- **Return Type**: void
- **Parameters**: Ped ped, Hash weaponHash, int amount, Hash removeReason
- **Description**: removeReason must be REMOVE_REASON_USED, REMOVE_REASON_GIVEN, REMOVE_REASON_DROPPED or REMOVE_REASON_DEBUG, unless amount is -1  removeReason: see REMOVE_WEAPON_FROM_PED

### _REMOVE_AMMO_FROM_PED_BY_TYPE
- **Return Type**: void
- **Parameters**: Ped ped, Hash ammoHash, int amount, Hash removeReason
- **Description**: removeReason must be REMOVE_REASON_USED, REMOVE_REASON_GIVEN, REMOVE_REASON_DROPPED or REMOVE_REASON_DEBUG, unless amount is -1  removeReason: see REMOVE_WEAPON_FROM_PED

### _REMOVE_ALL_PED_AMMO
- **Return Type**: void
- **Parameters**: Ped ped

### SET_PED_AMMO
- **Return Type**: void
- **Parameters**: Ped ped, Hash weaponHash, int ammo

### _0x8A779706DA5CA3DD
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1, int p2
- **Description**: Only used in R* SP Scripts native_son2, native_son3 and smuggler2 Params: p2 = -1

### _0x9409C62504A8F9E9
- **Return Type**: void
- **Parameters**: Vehicle vehicle, BOOL p1
- **Description**: Only used in R* SP Script guama3

### _SET_VEHICLE_WEAPON_HEADING_LIMITS
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int p1, float minHeading, float maxHeading

### _SET_VEHICLE_WEAPON_HEADING_LIMITS_2
- **Return Type**: Any
- **Parameters**: Vehicle vehicle, int p1, float minHeading, float maxHeading

### SET_VEHICLE_WEAPON_HEADING
- **Return Type**: void
- **Parameters**: Vehicle vehicle, int seatIndex, float heading, BOOL p3

### SET_PED_INFINITE_AMMO
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle, Hash weaponHash

### _SET_PED_INFINITE_AMMO_CLIP
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### GET_AMMO_IN_PED_WEAPON
- **Return Type**: int
- **Parameters**: Ped ped, Hash weaponHash

### GET_MAX_AMMO_IN_CLIP
- **Return Type**: int
- **Parameters**: Ped ped, Hash weaponHash, BOOL p2

### GET_AMMO_IN_CLIP
- **Return Type**: BOOL
- **Parameters**: Ped ped, int* ammo, Hash weaponHash

### _GET_AMMO_IN_CLIP_BY_INVENTORY_UID
- **Return Type**: BOOL
- **Parameters**: Ped ped, int* ammo, Any* inventoryUid

### SET_AMMO_IN_CLIP
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash weaponHash, int ammo

### _REFILL_AMMO_IN_CLIP
- **Return Type**: Any
- **Parameters**: Ped ped, Any* clipInventoryUid, int p2

### GET_MAX_AMMO
- **Return Type**: BOOL
- **Parameters**: Ped ped, int* ammo, Hash weaponHash

### SET_PED_AMMO_BY_TYPE
- **Return Type**: void
- **Parameters**: Ped ped, Hash ammoType, int ammo

### GET_PED_AMMO_BY_TYPE
- **Return Type**: int
- **Parameters**: Ped ped, Hash ammoType

### SET_PED_AMMO_TO_DROP
- **Return Type**: void
- **Parameters**: Ped ped, int p1, int p2

### _GET_AMMO_TYPE_FOR_WEAPON
- **Return Type**: Hash
- **Parameters**: Hash weaponHash

### GET_PED_AMMO_TYPE_FROM_WEAPON
- **Return Type**: Hash
- **Parameters**: Ped ped, Hash weaponHash
- **Description**: Returns the current ammo type of the specified ped's specified weapon.

### _GET_WEAPON_TYPE_FROM_AMMO_TYPE
- **Return Type**: Hash
- **Parameters**: Hash ammoType

### _GET_WEAPON_COMPONENT_TYPE_MODEL
- **Return Type**: Hash
- **Parameters**: Hash componentHash

### _GET_WEAPONTYPE_MODEL
- **Return Type**: Hash
- **Parameters**: Hash weaponHash
- **Description**: Gets the model hash from the weapon hash.

### _GET_WEAPONTYPE_SLOT
- **Return Type**: Hash
- **Parameters**: Hash weaponHash
- **Description**: Returns hash where WEAPON_ is replaced with SLOT_

### GET_WEAPONTYPE_GROUP
- **Return Type**: Hash
- **Parameters**: Hash weaponHash

### _0xF8204EF17410BF43
- **Return Type**: Hash
- **Parameters**: Hash weaponGroupHash, float p1, float p2, Any p3
- **Description**: Returns weaponHash

### _IS_WEAPON_KIT
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash
- **Description**: Returns true when the weapon passed is either a lasso, the camera or the binoculars _IS_WEAPON_M* - _IS_WEAPON_P*

### _IS_WEAPON_KIT_2
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash
- **Description**: Returns true when the weapon passed is either the fishingrod, a lasso, the camera or the binoculars _IS_WEAPON_M* - _IS_WEAPON_P*

### IS_WEAPON_BOW
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### _IS_WEAPON_LANTERN
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### _IS_WEAPON_TORCH
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### GIVE_WEAPON_TO_PED_WITH_OPTIONS
- **Return Type**: BOOL
- **Parameters**: Ped ped, Any* data, Any* outData

### GIVE_WEAPON_TO_PED
- **Return Type**: Hash
- **Parameters**: Ped ped, Hash weaponHash, int ammoCount, BOOL bForceInHand, BOOL bForceInHolster, int attachPoint, BOOL bAllowMultipleCopies, float p7, float p8, Hash addReason, BOOL bIgnoreUnlocks, float permanentDegradation, BOOL p12
- **Description**: Gives the ped the weapon. List: https://github.com/femga/rdr3_discoveries/blob/master/weapons/weapons.lua  Params: p7 is 0.5f, and p8 is 1.0f. p11 and p12 are both 0 in R* Scripts attachPoint: see SET_CURRENT_PED_WEAPON addReason: see _ADD_AMMO_TO_PED permanentDegradation: default 0.5, any higher than 0 it will automatically make the weapon worn, you can also adjust the value to change the weapons maximum cleanliness

### _SET_FORCE_CURRENT_WEAPON_INTO_COCKED_STATE
- **Return Type**: void
- **Parameters**: Ped ped, int attachPoint

### _0x9F0E1892C7F228A8
- **Return Type**: Any
- **Parameters**: BOOL p0

### _HOLSTER_PED_WEAPONS
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL immediately

### _HIDE_PED_WEAPONS
- **Return Type**: void
- **Parameters**: Ped ped, int p0, BOOL immediately
- **Description**: Unequip current weapon and set current weapon to WEAPON_UNARMED. p0 usually 2 in R* scripts. Doesn't seem to have any effect if changed.... immediately: if true it will instantly switch to unarmed

### _0x4820A6939D7CEF28
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_CURRENT_PED_WEAPON
- **Return Type**: void
- **Parameters**: Ped ped, Hash weaponHash, BOOL equipNow, int attachPoint, BOOL p4, BOOL p5
- **Description**: attachPoint: enum eWeaponAttachPoint { WEAPON_ATTACH_POINT_INVALID = -1, WEAPON_ATTACH_POINT_HAND_PRIMARY = 0, WEAPON_ATTACH_POINT_HAND_SECONDARY = 1, WEAPON_ATTACH_POINT_PISTOL_R = 2, MAX_HAND_WEAPON_ATTACH_POINTS = 2, WEAPON_ATTACH_POINT_PISTOL_L = 3, WEAPON_ATTACH_POINT_KNIFE = 4, WEAPON_ATTACH_POINT_LASSO = 5, WEAPON_ATTACH_POINT_THROWER = 6, WEAPON_ATTACH_POINT_BOW = 7, WEAPON_ATTACH_POINT_BOW_ALTERNATE = 8, WEAPON_ATTACH_POINT_RIFLE = 9, WEAPON_ATTACH_POINT_RIFLE_ALTERNATE = 10, WEAPON_ATTACH_POINT_LANTERN = 11, WEAPON_ATTACH_POINT_TEMP_LANTERN = 12, WEAPON_ATTACH_POINT_MELEE = 13, MAX_SYNCED_WEAPON_ATTACH_POINTS = 13, WEAPON_ATTACH_POINT_HIP = 14, WEAPON_ATTACH_POINT_BOOT = 15, WEAPON_ATTACH_POINT_BACK = 16, WEAPON_ATTACH_POINT_FRONT = 17, WEAPON_ATTACH_POINT_SHOULDERSLING = 18, WEAPON_ATTACH_POINT_LEFTBREAST = 19, WEAPON_ATTACH_POINT_RIGHTBREAST = 20, WEAPON_ATTACH_POINT_LEFTARMPIT = 21, WEAPON_ATTACH_POINT_RIGHTARMPIT = 22, WEAPON_ATTACH_POINT_LEFTARMPIT_RIFLE = 23, WEAPON_ATTACH_POINT_SATCHEL = 24, WEAPON_ATTACH_POINT_LEFTARMPIT_BOW = 25, WEAPON_ATTACH_POINT_RIGHT_HAND_EXTRA = 26, WEAPON_ATTACH_POINT_LEFT_HAND_EXTRA = 27, WEAPON_ATTACH_POINT_RIGHT_HAND_AUX = 28, MAX_WEAPON_ATTACH_POINTS = 29 };

### GET_CURRENT_PED_WEAPON
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash* weaponHash, BOOL p2, int attachPoint, BOOL p4
- **Description**: attachPoint: see SET_CURRENT_PED_WEAPON

### GET_CURRENT_PED_WEAPON_ENTITY_INDEX
- **Return Type**: Entity
- **Parameters**: Ped ped, int attachPoint
- **Description**: Returns weaponObject, attachPoint: see SET_CURRENT_PED_WEAPON

### _ENABLE_WEAPON_RESTORE
- **Return Type**: BOOL
- **Parameters**: Ped ped

### GET_PED_BACKUP_WEAPON
- **Return Type**: Hash
- **Parameters**: Ped ped, BOOL p1

### _0x486C96A0DCD2BC92
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _GET_PED_WORST_WEAPON
- **Return Type**: Hash
- **Parameters**: Ped ped, BOOL p1, BOOL p2, BOOL p3

### GET_BEST_PED_WEAPON
- **Return Type**: Hash
- **Parameters**: Ped ped, BOOL p1, BOOL p2

### _GET_BEST_PED_WEAPON_IN_INVENTORY
- **Return Type**: Any
- **Parameters**: Ped ped, Any p1, Any* guidPrimary

### GET_BEST_PED_SHORTARM_GUID
- **Return Type**: void
- **Parameters**: Ped ped, Any* outGUID, BOOL p2, BOOL p3

### GET_PED_WEAPON_GUID_AT_ATTACH_POINT
- **Return Type**: BOOL
- **Parameters**: Ped ped, int attachPoint, Any* weaponGuid

### _GET_BEST_PED_WEAPON_IN_GROUP
- **Return Type**: Hash
- **Parameters**: Ped ped, Hash weaponGroup, BOOL p2, BOOL p3
- **Description**: If near your horse when called, weapons stored on your horse will be considered Returns weaponHash

### _GET_DEFAULT_UNARMED_WEAPON_HASH
- **Return Type**: Hash
- **Parameters**: Ped ped
- **Description**: Returns the ped's default unarmed weapon hash as defined in CPedModelInfo (DefaultUnarmedWeapon). Falls back to WEAPON_UNARMED if the ped doesn't have a valid model info pointer, or 0 if the ped doesn't exist.

### _SET_AMMO_IN_TURRET
- **Return Type**: void
- **Parameters**: Vehicle vehicle, Hash turretHash, int ammo
- **Description**: turretHash: WEAPON_TURRET_MAXIUM, WEAPON_TURRET_GATLING, WEAPON_TURRET_CANNON, WEAPON_TURRET_REVOLVING_CANNON

### SET_CURRENT_PED_VEHICLE_WEAPON
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash weaponHash

### GET_CURRENT_PED_VEHICLE_WEAPON
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash* weaponHash

### IS_PED_ARMED
- **Return Type**: BOOL
- **Parameters**: Ped ped, int flags

### _0xA2091482ED42EF85
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _IS_WEAPON_HOLSTER_STATE_CHANGING
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: Returns true if the ped is currently holstering or unholstering a weapon

### IS_WEAPON_VALID
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### _IS_AMMO_VALID
- **Return Type**: BOOL
- **Parameters**: Hash ammoHash

### _0x23BF601A42F329A0
- **Return Type**: Any
- **Parameters**: Any p0

### IS_PED_CARRYING_WEAPON
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash weaponHash

### HAS_PED_GOT_WEAPON
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash weaponHash, int p2, BOOL p3

### _0x07E1C35F0078C3F9
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash weapon
- **Description**: Seems to return true if the passed weapon is some sort of non-lethal melee weapon. Weapon must currently be held/equipped by the ped.

### IS_PED_WEAPON_READY_TO_SHOOT
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _GET_PED_WEAPON_IN_SLOT
- **Return Type**: Hash
- **Parameters**: Ped ped, Hash slotHash
- **Description**: slotHash is usually just the weaponHash name, but WEAPON_* is replaced with SLOT_*

### GIVE_DELAYED_WEAPON_TO_PED
- **Return Type**: void
- **Parameters**: Ped ped, Hash weaponHash, int ammoCount, BOOL p3, Hash addReason
- **Description**: addReason: see _ADD_AMMO_TO_PED

### REMOVE_ALL_PED_WEAPONS
- **Return Type**: void
- **Parameters**: Ped ped, BOOL p1, BOOL p2

### REMOVE_WEAPON_FROM_PED
- **Return Type**: void
- **Parameters**: Ped ped, Hash weaponHash, BOOL p2, Hash removeReason
- **Description**: removeReason: enum eRemoveItemReason : Hash { REMOVE_REASON_CLIENT_PURGED = 0x4A4E94DC, REMOVE_REASON_COALESCE = 0x2ABE393E, REMOVE_REASON_DEBUG = 0xA07362E6, REMOVE_REASON_DEFAULT = 0xF77DE93D, REMOVE_REASON_DELETE_CHARACTER = 0x20AFBDE9, REMOVE_REASON_DROPPED = 0xEC7FB5D5, REMOVE_REASON_DUPLICATE = 0x19047132, REMOVE_REASON_GIFTED_INCORRECTLY = 0x9C4E3829, REMOVE_REASON_GIVEN = 0xAD5377D4, REMOVE_REASON_INSUFFICIENT_INVENTORY = 0x518D1AAE, REMOVE_REASON_ITEM_DOES_NOT_EXIST = 0xEAD5D889, REMOVE_REASON_LOADOUT = 0x1B94E3BA, REMOVE_REASON_SET_AMOUNT = 0x19D5CFA5, REMOVE_REASON_SOLD = 0x76C4B482, REMOVE_REASON_USED = 0x2188E0A3, REMOVE_REASON_USE_FAILED = 0x671F9EAD };

### _REMOVE_WEAPON_FROM_PED_BY_GUID
- **Return Type**: void
- **Parameters**: Ped ped, Any* weaponGuid, Hash removeReason

### HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle
- **Description**: Hides the ped's weapon during a cutscene.

### SET_PED_CURRENT_WEAPON_VISIBLE
- **Return Type**: void
- **Parameters**: Ped ped, BOOL visible, BOOL deselectWeapon, BOOL p3, BOOL p4

### _SET_PED_WEAPON_ATTACH_POINT_VISIBILITY
- **Return Type**: void
- **Parameters**: Ped ped, int attachPoint, BOOL visible
- **Description**: attachPoint: see SET_CURRENT_PED_WEAPON

### _SET_PED_ALL_WEAPONS_VISIBILITY
- **Return Type**: void
- **Parameters**: Ped ped, BOOL visible

### SET_PED_DROPS_WEAPONS_WHEN_DEAD
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _0x431240A58484D5D0
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _0x45E57FDD531C9477
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _0xF08D8FEB455F2C8C
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _0x16D9841A85FA627E
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### GET_PED_LAST_WEAPON_IMPACT_COORD
- **Return Type**: BOOL
- **Parameters**: Ped ped, Vector3* coords

### _CLEAR_PED_LAST_WEAPON_DAMAGE
- **Return Type**: void
- **Parameters**: Ped ped

### _HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON
- **Return Type**: BOOL
- **Parameters**: Entity entity, Hash weaponName, int weaponType

### SET_PED_DROPS_INVENTORY_WEAPON
- **Return Type**: void
- **Parameters**: Ped ped, Hash weaponHash, float xOffset, float yOffset, float zOffset, int ammoCount

### SET_PED_DROPS_INVENTORY_WEAPON
- **Return Type**: void
- **Parameters**: Ped ped, Hash weaponHash, Vector3 offset, int ammoCount

### _0xB0FB9B196A3D13F0
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x2EBF70E1D8C06683
- **Return Type**: void
- **Parameters**: Ped ped, Hash p1
- **Description**: _SET_A* - _SET_B*

### _0x63B83A526329AFBC
- **Return Type**: void
- **Parameters**: Any p0
- **Description**: Only used in R* Script fme_escaped_convicts, p0 = 0

### _MAKE_PED_RELOAD
- **Return Type**: Any
- **Parameters**: Ped ped

### _REFILL_AMMO_IN_CURRENT_PED_WEAPON
- **Return Type**: Any
- **Parameters**: Ped ped

### MAKE_PED_DROP_WEAPON
- **Return Type**: Entity
- **Parameters**: Ped ped, BOOL p1, int attachPoint, BOOL p3, BOOL p4
- **Description**: Old name: _DROP_CURRENT_PED_WEAPON

### _GET_PED_CURRENT_HELD_WEAPON
- **Return Type**: Hash
- **Parameters**: Ped ped
- **Description**: Returns eCurrentHeldWeapon _GET_R* - _GET_T*

### SET_ALLOW_ANY_WEAPON_DROP
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _0xA3716A77DCF17424
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x457B16951AD77C1B
- **Return Type**: void
- **Parameters**: Any p0

### _0x3799EFCC3C8CD5E1
- **Return Type**: Any
- **Parameters**: Any p0

### _GET_MAX_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON
- **Return Type**: float
- **Parameters**: Ped ped

### _REMOVE_WEAPON_COMPONENT_FROM_PED
- **Return Type**: void
- **Parameters**: Ped ped, Hash componentHash, Hash weaponHash

### _HAS_PED_GOT_WEAPON_COMPONENT
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash componentHash, Hash weaponHash

### _IS_PED_CURRENT_WEAPON_HOLSTERED
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _0xD2209866B0CB72EA
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _REQUEST_WEAPON_ASSET
- **Return Type**: void
- **Parameters**: Hash weaponHash, int p1, BOOL p2

### _HAS_WEAPON_ASSET_LOADED
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### _REMOVE_WEAPON_ASSET
- **Return Type**: void
- **Parameters**: Hash weaponHash

### _0xE9B3FEC825668291
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x9CCA3131E6B53C68
- **Return Type**: Any
- **Parameters**: Any p0, Any p1, Any p2

### _0xB832F1A686B9B810
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x5A695BD328586B44
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x641351E9AD103890
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### SET_INSTANTLY_EQUIP_WEAPON_PICKUPS
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _SET_FORCE_AUTO_EQUIP
- **Return Type**: void
- **Parameters**: Ped ped, BOOL toggle

### _SEND_WEAPON_TO_INVENTORY
- **Return Type**: void
- **Parameters**: Ped ped, Hash weaponHash
- **Description**: Appears to just send specified weapon to your horse holster without having to be close However, the weapon is not visible on the horse holster, but you can reach the weapon on the weapon wheel

### _0x14FF0C2545527F9B
- **Return Type**: void
- **Parameters**: Ped horse, Hash weaponHash, Ped ped
- **Description**: Puts the gun visibly in your horse's holster without having to be close to the horse. Use 0xE9BD19F8121ADE3E before using this native _A* or _B*

### _0xD4C6E24D955FF061
- **Return Type**: void
- **Parameters**: Any p0

### _0xAFFD0CCF31F469B8
- **Return Type**: Any
- **Parameters**: Any p0

### _GET_WEAPON_STAT_ID
- **Return Type**: Hash
- **Parameters**: Hash weaponHash

### _HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY
- **Return Type**: BOOL
- **Parameters**: Entity entity, Hash weaponHash, int ms

### _GET_PED_HOGTIE_WEAPON
- **Return Type**: Hash
- **Parameters**: Ped ped

### _CREATE_WEAPON_OBJECT
- **Return Type**: Object
- **Parameters**: Hash weaponHash, int ammoCount, float x, float y, float z, BOOL showWorldModel, float scale

### _CREATE_WEAPON_OBJECT
- **Return Type**: Object
- **Parameters**: Hash weaponHash, int ammoCount, Vector3 vec, BOOL showWorldModel, float scale

### REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT
- **Return Type**: void
- **Parameters**: Object weaponObject, Hash component

### HAS_WEAPON_GOT_WEAPON_COMPONENT
- **Return Type**: BOOL
- **Parameters**: Object weapon, Hash addonHash

### _GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT
- **Return Type**: void
- **Parameters**: Object* weaponObject, Ped ped, Hash componentHash, BOOL p3

### _GET_WEAPON_OBJECT_FROM_PED
- **Return Type**: Object
- **Parameters**: Ped ped, BOOL p1
- **Description**: Detaches the weapon from the ped and actually removes the ped's weapon

### _GET_PED_WEAPON_OBJECT
- **Return Type**: Object
- **Parameters**: Ped ped, BOOL p1
- **Description**: _GET_M* - _GET_PED_A*

### _GIVE_WEAPON_COMPONENT_TO_ENTITY
- **Return Type**: void
- **Parameters**: Entity entity, Hash componentHash, Hash weaponHash, BOOL p3
- **Description**: entity can be a ped or weapon object.

### _0x74C9080FDD1BB48E
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x74C9080FDD1BB48F
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x74C2365FDD1BB48F
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0x74C90AAACC1DD48F
- **Return Type**: void
- **Parameters**: Any p0

### _0x74C8000FDD1BB111
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x74C8000FDD1BB222
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _GET_WEAPON_GUN_SPINNING_WEAPON_EMOTE_TRICK_TYPE_HASH
- **Return Type**: Hash
- **Parameters**: Hash emote, int weaponEmoteTrickType
- **Description**: Returns iSpinHash

### _SET_ACTIVE_GUN_SPINNING_EQUIP_KIT_EMOTE_TWIRL
- **Return Type**: void
- **Parameters**: Ped ped, Hash emote
- **Description**: emote hashes: KIT_EMOTE_TWIRL_GUN, KIT_EMOTE_TWIRL_GUN_LEFT_HOLSTER, KIT_EMOTE_TWIRL_GUN_DUAL, 0 (to unequip)

### _GET_PED_GUN_SPINNING_EQUIPPED_KIT_EMOTE_TWIRL
- **Return Type**: Hash
- **Parameters**: Ped ped
- **Description**: Returns emote Hash

### _SET_ACTIVE_GUN_SPINNING_KIT_EMOTE_TWIRL
- **Return Type**: void
- **Parameters**: Ped ped, int weaponEmoteTrickType, Hash spin
- **Description**: spinHash can be -1, 0 to disable

### _GET_PED_GUN_SPINNING_HASH_FROM_WEAPON_EMOTE_VARIATION
- **Return Type**: Hash
- **Parameters**: Ped ped, int weaponEmoteVariation
- **Description**: Returns iSpinHash / iVariationSpin

### _GET_WEAPON_EMOTE_VARIATION
- **Return Type**: int
- **Parameters**: Ped ped, int variation
- **Description**: Returns weaponEmoteVariation  WEAPON_EMOTE_VARIATION_INVALID = -2, WEAPON_EMOTE_VARIATION_BASE, WEAPON_EMOTE_VARIATION_A, WEAPON_EMOTE_VARIATION_B, WEAPON_EMOTE_VARIATION_C, WEAPON_EMOTE_VARIATION_D, WEAPON_EMOTE_VARIATION_PREVIEW, WEAPON_EMOTE_NUM_VARIATIONS

### _SET_GUN_SPINNING_INVENTORY_SLOT_ID_ACTIVATE
- **Return Type**: void
- **Parameters**: Ped ped, int emoteType
- **Description**: _STOP_* - _TEST_*

### _GET_CAN_TWIRL_WEAPON
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### _GET_CORRECT_KIT_EMOTE_TWIRL_GUN
- **Return Type**: BOOL
- **Parameters**: Ped ped, Any* weaponGuid
- **Description**: _GET_BEST_* - _GET_CLOSEST_*

### _0xBC9444F2FF94A9C0
- **Return Type**: Any
- **Parameters**: Any p0

### _GET_DEFAULT_PED_WEAPON_COLLECTION
- **Return Type**: Hash
- **Parameters**: Hash pedModel
- **Description**: Returns weaponCollection Hash Example: RE_POLICECHASE_MALES_01: Carbine Repeater + Knife, LO_AGRO_PED

### _GIVE_WEAPON_COLLECTION_TO_PED
- **Return Type**: void
- **Parameters**: Ped ped, Hash weaponCollection

### _0xF252A85B8F3F8C58
- **Return Type**: BOOL
- **Parameters**: Hash weaponCollection, Hash dualwieldVariant

### _0x9EEFD670F10656D7
- **Return Type**: Hash
- **Parameters**: Hash weaponCollection, Hash weaponGroup
- **Description**: Returns weaponHash

### _0xF2F585411E748B9C
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### GET_WEAPON_CLIP_SIZE
- **Return Type**: int
- **Parameters**: Hash weaponHash

### _0xA769D753922B031B
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0xC5899C4CD2E2495D
- **Return Type**: void
- **Parameters**: Any p0

### GET_ALLOW_DUAL_WIELD
- **Return Type**: BOOL
- **Parameters**: Ped ped

### _SET_ALLOW_DUAL_WIELD
- **Return Type**: void
- **Parameters**: Ped ped, BOOL allow

### _0x44C8F4908F1B2622
- **Return Type**: BOOL
- **Parameters**: Ped ped, Hash ammoHash

### _IS_WEAPON_KNIFE
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### IS_WEAPON_REVOLVER
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### IS_WEAPON_PISTOL
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### IS_WEAPON_REPEATER
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### IS_WEAPON_RIFLE
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### IS_WEAPON_SHOTGUN
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### _IS_WEAPON_SNIPER
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### IS_WEAPON_MELEE_WEAPON
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### _IS_WEAPON_THROWABLE
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### _IS_WEAPON_LASSO
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### _IS_WEAPON_BINOCULARS
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### IS_WEAPON_A_GUN
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash
- **Description**: Returns true if CWeaponInfoFlags::Flags::Gun is set.

### _IS_WEAPON_TWO_HANDED
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### _IS_WEAPON_ONE_HANDED
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### _IS_WEAPON_SILENT
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### _0xEA522F991E120D45
- **Return Type**: Any
- **Parameters**: Any p0

### _IS_AMMO_SILENT
- **Return Type**: BOOL
- **Parameters**: Hash ammoHash

### _IS_AMMO_SILENT_2
- **Return Type**: BOOL
- **Parameters**: Hash ammoHash

### SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash

### _0x5B235F24472F2C3B
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xBFCA7AFABF9D7967
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x495A04CAEC263AF8
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x95CA12E2C68043E5
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0xABC18A28BAD4B46F
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _0x80BB243789008A82
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### _GET_WEAPON_DAMAGE
- **Return Type**: float
- **Parameters**: Object weaponObject
- **Description**: Related to weapon visual damage, not actual damage.

### _SET_WEAPON_DAMAGE
- **Return Type**: void
- **Parameters**: Object weaponObject, float level, BOOL p2
- **Description**: Related to weapon visual damage, not actual damage.

### _GET_WEAPON_DIRT
- **Return Type**: float
- **Parameters**: Object weaponObject

### _SET_WEAPON_DIRT
- **Return Type**: void
- **Parameters**: Object weaponObject, float level, BOOL p2

### _GET_WEAPON_SOOT
- **Return Type**: float
- **Parameters**: Object weaponObject

### _SET_WEAPON_SOOT
- **Return Type**: void
- **Parameters**: Object weaponObject, float level, BOOL p2

### _SET_WEAPON_LEVEL_THRESHOLD
- **Return Type**: void
- **Parameters**: Object weaponObject, float threshold
- **Description**: every other level will have the max value of (brokeLevel - threshold)

### GET_WEAPON_DEGRADATION
- **Return Type**: float
- **Parameters**: Object weaponObject
- **Description**: 0.0: good condition, 1.0: poor condition

### GET_WEAPON_PERMANENT_DEGRADATION
- **Return Type**: float
- **Parameters**: Object weaponObject
- **Description**: Related to rust of weapons

### _SET_WEAPON_DEGRADATION
- **Return Type**: void
- **Parameters**: Object weaponObject, float level

### _LISTEN_PROJECTILE_HIT_EVENTS
- **Return Type**: void
- **Parameters**: BOOL listen

### _GET_WEAPON_SCALE
- **Return Type**: float
- **Parameters**: Object weaponObject

### _SET_WEAPON_SCALE
- **Return Type**: void
- **Parameters**: Object weaponObject, float scale

### _0x58425FCA3D3A2D15
- **Return Type**: Any
- **Parameters**: Any p0

### _0xEC97101A8F311282
- **Return Type**: Any
- **Parameters**: Any p0

### _GET_CURRENT_PED_WEAPON_AMMO_TYPE
- **Return Type**: Hash
- **Parameters**: Ped ped, Object weaponObject
- **Description**: Returns ammoHash from weaponObject (Returned by 0x6CA484C9A7377E4F)

### _GET_CURRENT_AMMO_TYPE_FROM_GUID
- **Return Type**: Hash
- **Parameters**: Ped ped, Any* weaponGuid
- **Description**: Returns ammoHash

### _IS_AMMO_TYPE_VALID_FOR_WEAPON
- **Return Type**: BOOL
- **Parameters**: Hash weaponHash, Hash ammoHash

### _SET_AMMO_TYPE_FOR_PED_WEAPON
- **Return Type**: void
- **Parameters**: Ped ped, Hash weaponHash, Hash ammoHash

### _0x183CE355115B6E75
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _SET_AMMO_TYPE_FOR_PED_WEAPON_INVENTORY
- **Return Type**: void
- **Parameters**: Ped ped, Any* weaponInventoryUid, Hash ammoHash

### _DISABLE_AMMO_TYPE_FOR_PED_WEAPON
- **Return Type**: void
- **Parameters**: Ped ped, Hash weaponHash, Hash ammoHash

### _DISABLE_AMMO_TYPE_FOR_PED
- **Return Type**: void
- **Parameters**: Ped ped, Hash ammoHash

### _0xD63B4BA3A02A99E0
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _ENABLE_AMMO_TYPE_FOR_PED_WEAPON
- **Return Type**: void
- **Parameters**: Ped ped, Hash weaponHash, Hash ammoHash

### _ENABLE_AMMO_TYPE_FOR_PED
- **Return Type**: void
- **Parameters**: Ped ped, Hash weaponHash

### _0x404514D231DB27A0
- **Return Type**: void
- **Parameters**: Any p0, Any p1

### _0xD53846B9C931C181
- **Return Type**: void
- **Parameters**: Any p0, Any p1, Any p2

### _0x000FA7A4A8443AF7
- **Return Type**: void
- **Parameters**: Any p0

### _0xECBB26529A737EF6
- **Return Type**: void
- **Parameters**: Any p0

### _GET_WEAPON_ATTACH_POINT
- **Return Type**: int
- **Parameters**: Ped ped, int attachPoint
- **Description**: Returns WeaponAttachPoint

### _0x4823F13A21F51964
- **Return Type**: Any
- **Parameters**: Any p0, Any p1

### SET_CURRENT_PED_WEAPON_BY_GUID
- **Return Type**: void
- **Parameters**: Ped ped, Any* weaponUid, BOOL p2, BOOL p3, BOOL p4, BOOL p5
- **Description**: Equips a weapon from a weaponItem, similar to GIVE_WEAPON_TO_PED

### SET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID
- **Return Type**: void
- **Parameters**: Ped ped, Any* guidPrimary, Any* guidSecondary

### _GET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID
- **Return Type**: void
- **Parameters**: Ped ped, Any* guidPrimary, Any* guidSecondary
- **Description**: Outputs cached guids

### _0x0DE0944ECCB3DF5D
- **Return Type**: BOOL
- **Parameters**: Ped ped
- **Description**: _GET_D* - _GET_L*

### _0x46D42883E873C1D7
- **Return Type**: Any
- **Parameters**: Ped ped
- **Description**: _GET_NUM_*

### _IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS
- **Return Type**: BOOL
- **Parameters**: Ped ped, Ped targetPed

### _0x65DC4AC5B96614CB
- **Return Type**: int
- **Parameters**: Hash weaponHash
- **Description**: Returns attachPoint


## ZONE
### _GET_MAP_ZONE_AT_COORDS
- **Return Type**: Hash
- **Parameters**: float x, float y, float z, int type
- **Description**: Returns name hash, see common:/data/levels/rdr3/mapzones.meta  type (-1 matches any type): class CMapZone { public: enum class Type { STATE, TOWN, LAKE, RIVER, OIL_SPILL, SWAMP, OCEAN, CREEK, POND, GLACIER, DISTRICT, TEXT_PRINTED, TEXT_WRITTEN }; };  https://github.com/femga/rdr3_discoveries/tree/master/zones & https://alloc8or.re/rdr3/doc/enums/CMapZone__Type.txt

### _GET_MAP_ZONE_AT_COORDS
- **Return Type**: Hash
- **Parameters**: Vector3 vec, int type

### _GET_WATER_MAP_ZONE_AT_COORDS
- **Return Type**: Hash
- **Parameters**: float x, float y, float z
- **Description**: Returns the zone's name hash if its type matches one of the following: - LAKE - RIVER - OIL_SPILL - SWAMP - OCEAN - CREEK - POND - GLACIER

### _GET_WATER_MAP_ZONE_AT_COORDS
- **Return Type**: Hash
- **Parameters**: Vector3 vec


## COMPAPP
### _0xB6FD96420C0126A1
- **Return Type**: void
- **Parameters**: Hash p0, BOOL p1
- **Description**: nullsub, doesn't do anything

### _0x74BCCEB233AD95B2
- **Return Type**: void
- **Parameters**: Hash p0, Hash p1
- **Description**: nullsub, doesn't do anything

### _0x29C733459A9011EB
- **Return Type**: void
- **Parameters**: Hash p0, const char* p1
- **Description**: nullsub, doesn't do anything

### _0x7AF1BB4504EA5ED9
- **Return Type**: BOOL
- **Parameters**: 
- **Description**: Hardcoded to return false.

### _0xCCB4635A071FB62D
- **Return Type**: void
- **Parameters**: 
- **Description**: nullsub, doesn't do anything

