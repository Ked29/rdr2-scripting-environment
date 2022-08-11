; THIS ARCHIVE REDISTRIBUTION IS NOT ALLOWED, USE THE FOLLOWING LINK INSTEAD
; http://www.dev-c.com/rdr2/scripthookrdr2/


							SCRIPT HOOK RDR 2 SDK

v1.0.1207.73

1. General concept
The main concept is that your compiled script plugin depends only on ScriptHookRDR2.dll,
so when the game updates the only thing that user must do in order to make your
script working again is to update script hook runtime (i.e. ScriptHookRDR2.dll).

2. Changes
v1.0.1207.73
	- initial release
	
3. Features
	Runtime asi script reloading:
	In order to use this feature you must create empty file called "ScriptHookRDR2.dev"
	in you game's main dir. While being ingame press CTRL + R, beep sound will tell
	you that all loaded scripts are fully unloaded and you can replace your *.asi,
	press CTRL + R again to load the scripts, triple beep will indicate that
	everything is loaded. You must have the call to scriptUnregister() SDK func in
	your plugin's DllMain in order reloading feature to work correctly,	see
	NativeTrainer\main.cpp for more details.
	Script reloading can be applied only to the *.asi plugins which were loaded
	normally, i.e. using asi loader when the game was started. Script reloading is
	performed by script hook and not by asi loader.
	
	Keyboard hook:
	You must use keyboard hook instead of GetKeyState/GetAsyncKeyState WIN API funcs,
	because it guarantees that all key presses will be handled correctly. Keyboard
	handler must be registered/unregistered in DllMain of your plugin using SDK funcs
	keyboardHandlerRegister/keyboardHandlerUnregister, see NativeTrainer\main.cpp for
	more details. 
	Example of using keyboard hook can be found in NativeTrainer\keyboard.cpp, the
	trainer script is using keyboard.cpp provided functions, your projects should do
	the same.
	
	Entity pools:
	All entities that game currently uses are stored in pools, each type of entity
	has	a separate pool. Using SDK funcs worldGetAllVehicles/Peds/Objects you can
	access any entity you need.
	While accessing these pools you should remember that lots of entities are being
	created	not by scripts, so scripts have no full control over that entities and
	for ex. if you want to prevent entity from deletion by the engine or delete it
	by yourself you will need to gain script control over it via setting this entity
	as mission entity. Entities which are not set as mission ones can be deleted by
	the engine at any time, so you must not reuse handles of these entities between
	engine ticks (i.e. WAIT calls).
	Original scripts follow the same rules as written above while using the natives
	which access entities from the world, for ex. GET_PED_NEARBY_VEHICLES and
	GET_PED_NEARBY_PEDS. See these natives as well:	IS_ENTITY_A_MISSION_ENTITY,
	SET_ENTITY_AS_MISSION_ENTITY.
	Example of using entity pools can be found in Pools\script.cpp file.
							
4. Compilation
All samples here can be compiled using MSVC 2013 or higher.

5. Terms of use
-	You are allowed to use this SDK only for writing scripts intended to work offline.
-	You are not allowed to redistribute ScriptHookRDR2.dll with your script plugins, 
	provide the link to the latest runtime instead:
	http://www.dev-c.com/rdr2/scripthookrdr2/

6. Samples
There are few samples included - NativeTrainer and Pools, for more details
see NativeTrainer\script.cpp and Pools\script.cpp.

						(C) Alexander Blade 2019
								