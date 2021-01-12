#pragma once

enum Config {
	NUMPLAYERS = 1,

	NUMCDIMAGES = 6, // gta3.img duplicates (not used on PC)
	MAX_CDIMAGES = 8, // additional cdimages
	MAX_CDCHANNELS = 5,

	MODELINFOSIZE = 6500,	// only 4900
	TXDSTORESIZE = 1385,	// only 1200
	COLSTORESIZE = 31,	// only 15
	EXTRADIRSIZE = 256,
	CUTSCENEDIRSIZE = 512,

	SIMPLEMODELSIZE = 3885,
	TIMEMODELSIZE = 385,
	CLUMPMODELSIZE = 10,
	WEAPONMODELSIZE = 37,
	PEDMODELSIZE = 130,
	VEHICLEMODELSIZE = 110,
	TWODFXSIZE = 1210,

	MAXVEHICLESLOADED = 50, // 70 on mobile

	NUMOBJECTINFO = 210,

	// Pool sizes
	NUMPTRNODES = 50000,	// only 30100
	NUMENTRYINFOS = 4000,
	NUMPEDS = 140,		// only 70
	NUMVEHICLES = 110,	// only 70
	NUMBUILDINGS = 7000,	// only 6757
	NUMTREADABLES = 1300,
	NUMOBJECTS = 475,
	NUMDUMMIES = 3000,
	NUMAUDIOSCRIPTOBJECTS = 192,
	NUMCOLMODELS = 4400,
	NUMCUTSCENEOBJECTS = 50,	// not a pool in VC

	NUMANIMBLOCKS = 60,
	NUMANIMATIONS = 450,

	NUMTEMPOBJECTS = 40,

	// Path data
	NUM_PATHNODES = 9650,
	NUM_CARPATHLINKS = 3500,
	NUM_MAPOBJECTS = 1250,
	NUM_PATHCONNECTIONS = 20400,

	// Link list lengths
	NUMALPHALIST = 20,
	NUMBOATALPHALIST = 20,
	NUMALPHAENTITYLIST = 200,
	NUMALPHAUNTERWATERENTITYLIST = 30,
	NUMCOLCACHELINKS = 50,
	NUMREFERENCES = 800,

	// Zones
	NUMAUDIOZONES = 36,
	NUMINFOZONES = 169,
	NUMMAPZONES = 110,
	NUMNAVIGZONES = 70,

	// Cull zones
	NUMATTRIBZONES = 900,

	NUMOCCLUSIONVOLUMES = 350,
	NUMACTIVEOCCLUDERS = 48,

	PATHNODESIZE = 4500,

	NUMWEATHERS = 8,
	NUMHOURS = 24,

	NUMEXTRADIRECTIONALS = 4,
	NUMANTENNAS = 8,
	NUMCORONAS = 56,
	NUMPOINTLIGHTS = 32,
	NUM3DMARKERS = 32,
	NUMBRIGHTLIGHTS = 32,
	NUMSHINYTEXTS = 32,
	NUMMONEYMESSAGES = 16,
	NUMPICKUPMESSAGES = 16,
	NUMBULLETTRACES = 16,
	NUMMBLURSTREAKS = 4,
	NUMSKIDMARKS = 32,

	NUMONSCREENCLOCKS = 1,
	NUMONSCREENCOUNTERS = 3,
	NUMRADARBLIPS = 75,
	NUMGENERALPICKUPS = 320,
	NUMSCRIPTEDPICKUPS = 16,
	NUMPICKUPS = NUMGENERALPICKUPS + NUMSCRIPTEDPICKUPS,
	NUMCOLLECTEDPICKUPS = 20,
	NUMPACMANPICKUPS = 256,
	NUMEVENTS = 64,

	NUM_CARGENS = 500,

	NUM_PATH_NODES_IN_AUTOPILOT = 8,

	NUM_ACCIDENTS = 20,
	NUM_FIRES = 40,
	NUM_GARAGES = 32,
	NUM_PROJECTILES = 32,

	NUM_GLASSPANES = 45,
	NUM_GLASSENTITIES = 32,
	NUM_WATERCANNONS = 3,

	NUMPEDROUTES = 200,
	NUMPHONES = 60,
	NUMPEDGROUPS = 67,
	NUMMODELSPERPEDGROUP = 16,
	MAXZONEPEDSLOADED = 8,
	NUMSHOTINFOS = 100,

	NUMROADBLOCKS = 300,
	NUM_SCRIPT_ROADBLOCKS = 16,

	NUMVISIBLEENTITIES = 2000,
	NUMINVISIBLEENTITIES = 150,

	NUM_AUDIOENTITY_EVENTS = 4,
	NUM_PED_COMMENTS_BANKS = 2,
	NUM_PED_COMMENTS_SLOTS = 20,

	NUM_SOUNDS_SAMPLES_BANKS = 2,
	NUM_SOUNDS_SAMPLES_SLOTS = 27,
	NUM_AUDIOENTITIES = 250,

	NUM_AUDIO_REFLECTIONS = 8,
	NUM_SCRIPT_MAX_ENTITIES = 40,

	NUM_GARAGE_STORED_CARS = 4,

	NUM_CRANES = 11,
	NUM_ESCALATORS = 22,
	NUM_WATER_CREATURES = 8,

	NUM_EXPLOSIONS = 48,

	NUM_SETPIECES = 96,
	NUM_SHORTCUT_START_POINTS = 16
};

// We don't expect to compile for PS2 or Xbox
// but it might be interesting for documentation purposes
#define GTA_PC
//#define GTA_PS2
//#define GTA_XBOX

// This enables things from the PS2 version on PC
#define GTA_PS2_STUFF

// This is enabled for all released games.
// any debug stuff that isn't left in any game is not in FINAL
//#define FINAL

// This is enabled for all released games except mobile
// any debug stuff that is only left in mobile, is not in MASTER
//#define MASTER

// once and for all:
// pc: FINAL & MASTER
// mobile: FINAL

// MASTER builds must be FINAL
#ifdef MASTER
#define FINAL
#endif

// Version defines
#define GTAVC_PS2	400
#define GTAVC_PC_10	410
#define GTAVC_PC_11	411
#define GTAVC_PC_JAP	412
// TODO? maybe something for xbox or android?

#define GTA_VERSION	GTAVC_PC_11

// TODO(MIAMI): someone ought to find and check out uses of these defines:
//#define GTA3_STEAM_PATCH
//#define GTAVC_JP_PATCH

// quality of life fixes that should also be in FINAL
#define NASTY_GAME	// nasty game for all languages
#define NO_CDCHECK

// those infamous texts
#define DRAW_GAME_VERSION_TEXT

// Memory allocation and compression
// #define USE_CUSTOM_ALLOCATOR		// use CMemoryHeap for allocation. use with care, not finished yet
//#define COMPRESSED_COL_VECTORS	// use compressed vectors for collision vertices
//#define ANIM_COMPRESSION	// only keep most recently used anims uncompressed

#define GTA_TRAIN

#if defined GTA_PS2
#	define GTA_PS2_STUFF
#	define RANDOMSPLASH
//#	define USE_CUSTOM_ALLOCATOR
#	define VU_COLLISION
#elif defined GTA_PC
#	ifdef GTA_PS2_STUFF
#		define USE_PS2_RAND
#		define RANDOMSPLASH	// use random splash as on PS2
#		define PS2_MATFX
#	endif
#	define PC_PLAYER_CONTROLS	// mouse player/cam mode
#	define GTA_REPLAY
#	define GTA_SCENE_EDIT
#elif defined GTA_XBOX
#endif

#ifdef VU_COLLISION
#define COMPRESSED_COL_VECTORS	// currently need compressed vectors in this code
#endif

#ifdef MASTER
	// only in master builds
	#undef DRAW_GAME_VERSION_TEXT
#else
	// not in master builds
	#define VALIDATE_SAVE_SIZE

	#define NO_MOVIES	// disable intro videos
	#define DEBUGMENU
#endif

#ifdef FINAL
	// in all games
#	define USE_MY_DOCUMENTS	// use my documents directory for user files
#else
	// not in any game
#	define CHATTYSPLASH	// print what the game is loading
#	define TIMEBARS		// print debug timers
#endif

#define FIX_BUGS		// fixes bugs that we've came across during reversing, TODO: use this more
//#define MORE_LANGUAGES		// Add more translations to the game
#define COMPATIBLE_SAVES // this allows changing structs while keeping saves compatible
#define LOAD_INI_SETTINGS // as the name suggests. fundamental for CUSTOM_FRONTEND_OPTIONS
#define FIX_HIGH_FPS_BUGS_ON_FRONTEND

// Just debug menu entries
#ifdef DEBUGMENU
#define RELOADABLES			// some debug menu options to reload TXD files
#define MISSION_SWITCHER // from debug menu
#endif

// Rendering/display
#define ASPECT_RATIO_SCALE	// Not just makes everything scale with aspect ratio, also adds support for all aspect ratios
#define PROPER_SCALING		// use original DEFAULT_SCREEN_WIDTH/DEFAULT_SCREEN_HEIGHT from PS2 instead of PC(R* changed HEIGHT here to make radar look better, but broke other hud elements aspect ratio).
#define DEFAULT_NATIVE_RESOLUTION	// Set default video mode to your native resolution (fixes Windows 10 launch)
#define USE_TXD_CDIMAGE		// generate and load textures from txd.img
#define PS2_ALPHA_TEST		// emulate ps2 alpha test 
#define IMPROVED_VIDEOMODE	// save and load videomode parameters instead of a magic number
//#define DISABLE_LOADING_SCREEN // disable the loading screen which vastly improves the loading time
#define DISABLE_VSYNC_ON_TEXTURE_CONVERSION // make texture conversion work faster by disabling vsync
//#define USE_TEXTURE_POOL
#ifdef LIBRW
#define EXTENDED_COLOURFILTER		// more options for colour filter (replaces mblur)
#define EXTENDED_PIPELINES		// custom render pipelines (includes Neo)
#define SCREEN_DROPLETS			// neo water droplets
#define NEW_RENDERER		// leeds-like world rendering, needs librw
#endif

#define FIX_SPRITES	// fix sprites aspect ratio(moon, coronas, particle etc)

#ifndef EXTENDED_COLOURFILTER
#undef SCREEN_DROPLETS		// we need the backbuffer for this effect
#endif

// Water & Particle
// #define PC_WATER
#define WATER_CHEATS

//#define USE_CUTSCENE_SHADOW_FOR_PED
#define DISABLE_CUTSCENE_SHADOWS

// Pad
#if !defined(RW_GL3) && defined(_WIN32)
#define XINPUT
#endif
#if !defined(_WIN32) && !defined(__SWITCH__)
#define DONT_TRUST_RECOGNIZED_JOYSTICKS // Then we'll only rely on GLFW gamepad DB, and expect user to enter Controller->Detect joysticks if his joystick isn't on that list.
#endif
#define DETECT_PAD_INPUT_SWITCH // Adds automatic switch of pad related stuff between controller and kb/m
#define KANGAROO_CHEAT
#define RESTORE_ALLCARSHELI_CHEAT
#define BETTER_ALLCARSAREDODO_CHEAT
#define WALLCLIMB_CHEAT
#define REGISTER_START_BUTTON
//#define BIND_VEHICLE_FIREWEAPON // Adds ability to rebind fire key for 'in vehicle' controls
#define BUTTON_ICONS // use textures to show controller buttons

// Hud, frontend and radar
#define PC_MENU

#define FIX_RADAR			// use radar size from early version before R* broke it

#ifndef PC_MENU
#	define PS2_MENU
//#	define PS2_MENU_USEALLPAGEICONS
#else
#	define MAP_ENHANCEMENTS			// Adding waypoint and better mouse support
#	define TRIANGLE_BACK_BUTTON
//#	define CIRCLE_BACK_BUTTON
#define LEGACY_MENU_OPTIONS			// i.e. frame sync(vsync)
#define MUCH_SHORTER_OUTRO_SCREEN
// #define XBOX_MESSAGE_SCREEN			// Blue background, no "saved successfully press OK" screen etc.
#	define CUSTOM_FRONTEND_OPTIONS

#	ifdef CUSTOM_FRONTEND_OPTIONS
#		define GRAPHICS_MENU_OPTIONS // otherwise Display settings will be scrollable
//#		define NO_ISLAND_LOADING  // disable loadscreen between islands via loading all island data at once, consumes more memory and CPU
#		define CUTSCENE_BORDERS_SWITCH
#		define MULTISAMPLING		// adds MSAA option
#		define INVERT_LOOK_FOR_PAD // enable the hidden option
#	endif
#endif

// Script
#define USE_DEBUG_SCRIPT_LOADER	// Loads main.scm by default. Hold R for main_freeroam.scm and D for main_d.scm
#define USE_MEASUREMENTS_IN_METERS // makes game use meters instead of feet in script
#define USE_PRECISE_MEASUREMENT_CONVERTION // makes game convert feet to meeters more precisely
#define SUPPORT_JAPANESE_SCRIPT
//#define SUPPORT_XBOX_SCRIPT
//#define SUPPORT_MOBILE_SCRIPT
#if (defined SUPPORT_XBOX_SCRIPT && defined SUPPORT_MOBILE_SCRIPT)
static_assert(false, "SUPPORT_XBOX_SCRIPT and SUPPORT_MOBILE_SCRIPT are mutually exclusive");
#endif
#ifdef PC_MENU
//#define MISSION_REPLAY // mobile feature
#endif
//#define SIMPLIER_MISSIONS // apply simplifications from mobile
#define USE_ADVANCED_SCRIPT_DEBUG_OUTPUT
#define SCRIPT_LOG_FILE_LEVEL 0 // 0 == no log, 1 == overwrite every frame, 2 == full log

#ifndef USE_ADVANCED_SCRIPT_DEBUG_OUTPUT
#define USE_BASIC_SCRIPT_DEBUG_OUTPUT
#endif

#ifdef MASTER
#undef USE_ADVANCED_SCRIPT_DEBUG_OUTPUT
#undef USE_BASIC_SCRIPT_DEBUG_OUTPUT
#endif

// Replay
//#define DONT_FIX_REPLAY_BUGS // keeps various bugs in CReplay, some of which are fairly cool!
//#define USE_BETA_REPLAY_MODE // adds another replay mode, a few seconds slomo (caution: buggy!)

// Vehicles
#define EXPLODING_AIRTRAIN	// can blow up jumbo jet with rocket launcher
#define CPLANE_ROTORS		// make the rotors of the NPC police heli rotate

// Pickups
//#define MONEY_MESSAGES
#define CAMERA_PICKUP

// Peds
#define CANCELLABLE_CAR_ENTER

// Camera
#define IMPROVED_CAMERA		// Better Debug cam, and maybe more in the future
#define FREE_CAM		// Rotating cam

// Audio
#define AUDIO_CACHE // cache sound lengths to speed up the cold boot
//#define PS2_AUDIO_PATHS // changes audio paths for cutscenes and radio to PS2 paths (needs vbdec on MSS builds)
//#define AUDIO_OAL_USE_SNDFILE // use libsndfile to decode WAVs instead of our internal decoder
#define AUDIO_OAL_USE_MPG123 // use mpg123 to support mp3 files

#ifdef AUDIO_OPUS
#define AUDIO_OAL_USE_OPUS // enable support of opus files
//#define OPUS_AUDIO_PATHS // (not supported on VC yet) changes audio paths to opus paths (doesn't work if AUDIO_OAL_USE_OPUS isn't enabled)
//#define OPUS_SFX  // enable if your sfx.raw is encoded with opus (doesn't work if AUDIO_OAL_USE_OPUS isn't enabled)

#ifndef AUDIO_OAL_USE_OPUS
#undef OPUS_AUDIO_PATHS
#undef OPUS_SFX
#endif

#endif

#ifdef LIBRW
// these are not supported with librw yet
#endif
// IMG
#define BIG_IMG // allows to read larger img files

//#define SQUEEZE_PERFORMANCE
#ifdef SQUEEZE_PERFORMANCE
	#undef PS2_ALPHA_TEST
	#undef NO_ISLAND_LOADING
#endif
