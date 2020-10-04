///////////////////////////////////////////////////////////////////////////////
//
// String_Table_Entry
// -------------------
// English keys with corresponding translations
//

// DONT CHANGE THE NEXT 5 LINES
struct String_Table_Entry
{
	char key_string[500];				// The names of the build list
	char translation_string[500];		// How important to build form this list
};
// GOOD, YOU DIDN'T CHANGE THEM!


// How many strings do we allow?
#define MAX_STRINGS 2500

// Set this to 0 to have all untranslated strings displayed as "UNTRANSLATED"
// Set it to 1 to have it use the English when it can't find a translation
#define ENGLISH 1

//
// dynamic_strings
// 
// A list of all strings that need to be translated on the fly
//
String_Table_Entry translations[MAX_STRINGS] =
{
	// Chat bar send codes
	"GUI_COMM_MESSAGE_TEAM",	"t",
	"GUI_COMM_MESSAGE_ENEMY",	"e",
	"GUI_COMM_MESSAGE_ALL",		"a",

	"GUI_COMM_RENAME_COMMAND",	"rename",

// Officers can differ between races so they get special treatment.
	"GUI_SD_TEXT_OFF_REQ",		"This vessel currently has",
	"GUI_SD_TEXT_OFF_OP",		"assigned onboard.",

	"GUI_CP_OFFICERS_RES",		"Starfleet Officer(s)",
	"GUI_CP_KLI_OFF_RES",		"KDF Officer(s)",
	"GUI_CP_ROM_OFF_RES",		"RSN Officer(s)",
	"GUI_CP_GOR_OFF_RES",		"GRN Officer(s)",
	"GUI_CP_BORG_OFF_RES",		"ISPF Officer(s)",
	"GUI_CP_8472_OFF_RES",		"Commander(s)",
	"GUI_CP_HYD_OFF_RES",		"HRN Officer(s)",
	"GUI_CP_LYR_OFF_RES",		"ILN Officer(s)",
	"GUI_CP_MIR_OFF_RES",		"MSF Officer(s)",
	"GUI_CP_ORI_OFF_RES",		"Press-Ganger(s)",
	"GUI_CP_SHA_OFF_RES",		"SDF Officer(s)",
	"GUI_CP_CIV_OFF_RES",		"Merchant(s)",
	"GUI_CP_TER_OFF_RES",		"Terran Officer(s)",
	"GUI_CP_BORG2_OFF_RES",		"Collective Node(s)",
	"GUI_CP_TIME_OFF_RES",		"The Doctor",

	"GUI_RD_OFFICERS_TOOLTIP",	"Starfleet Officers",
	"GUI_RD_OFFICERS_VTOOLTIP",	"Starfleet Officers: The number of Starfleet Officers on duty / the number of Starfleet Officers available.",
	"GUI_RD_KLI_OFF_TOOLTIP",	"Klingon Defence Force Officers",
	"GUI_RD_KLI_OFF_VTOOLTIP",	"Klingon Defence Force Officers: The number of KDF Officers on duty / the number of KDF Officers available.",
	"GUI_RD_ROM_OFF_TOOLTIP",	"Romulan Star Navy Officers",
	"GUI_RD_ROM_OFF_VTOOLTIP",	"Romulan Star Navy Officers: The number of RSN Officers on duty / the number of RSN Officers available.",
	"GUI_RD_GOR_OFF_TOOLTIP",	"Gorn Royal Navy Officers",
	"GUI_RD_GOR_OFF_VTOOLTIP",	"Gorn Royal Navy Officers: The number of GRN Officers on duty / the number of GRN Officers available.",
	"GUI_RD_BORG_OFF_TOOLTIP",	"Interstellar Pacification Force Officers",
	"GUI_RD_BORG_OFF_VTOOLTIP",	"Interstellar Pacification Force Officers: The number of ISPF Officers on duty / the number of ISPF Officers available.",
	"GUI_RD_8472_OFF_TOOLTIP",	"Commanders",
	"GUI_RD_8472_OFF_VTOOLTIP",	"Commanders: The number of Commanders on duty / the number of Commanders available.",
	"GUI_RD_HYD_OFF_TOOLTIP",	"Hydran Royal Navy Officers",
	"GUI_RD_HYD_OFF_VTOOLTIP",	"Hydran Royal Navy Officers: The number of HRN Officers on duty / the number of HRN Officers available.",
	"GUI_RD_LYR_OFF_TOOLTIP",	"Imperial Lyran Navy Officers",
	"GUI_RD_LYR_OFF_VTOOLTIP",	"Imperial Lyran Navy Officers: The number of ILN Officers on duty / the number of ILN Officers available.",
	"GUI_RD_MIR_OFF_TOOLTIP",	"Mirak Starfleet Officers",
	"GUI_RD_MIR_OFF_VTOOLTIP",	"Mirak Starfleet Officers: The number of MSF Officers on duty / the number of MSF Officers available.",
	"GUI_RD_ORI_OFF_TOOLTIP",	"Press-Gangers",
	"GUI_RD_ORI_OFF_VTOOLTIP",	"Press-Gangers: The number of Press-Gangers working / the number of Press-Gangers available.",
	"GUI_RD_SHA_OFF_TOOLTIP",	"Sha'Kurian Ducal Fleet Officers",
	"GUI_RD_SHA_OFF_VTOOLTIP",	"Sha'Kurian Ducal Fleet Officers: The number of SDF Officers on duty / the number of SDF Officers available.",
	"GUI_RD_CIV_OFF_TOOLTIP",	"Merchants",
	"GUI_RD_CIV_OFF_VTOOLTIP",	"Merchants: The number of Merchants occupied / the number of Merchants available.",
	"GUI_RD_TER_OFF_TOOLTIP",	"Terran Imperial Navy Officers",
	"GUI_RD_TER_OFF_VTOOLTIP",	"Terran Imperial Navy Officers: The number of TIN Officers on duty / the number of TIN Officers available.",
	"GUI_RD_BORG2_OFF_TOOLTIP",	"Collective Nodes",
	"GUI_RD_BORG2_OFF_VTOOLTIP",	"Collective Nodes: The number of Collective Nodes in use / the number of Collective Nodes available.",
	"GUI_RD_TIME_OFF_TOOLTIP",	"The Doctor",
	"GUI_RD_TIME_OFF_VTOOLTIP",	"The Doctor",


	"GUI_CP_MAXBUILD", "Unit limit ( %d / %d )",

// Cinematic View Tooltips.
	"GUI_CV_MIN_TOOLTIP",		"Double click to return to strategic mode.",
	"GUI_CV_MAIN_TOOLTIP",		"Options Menu: Opens the options menu to change options, abort the mission, save the current game, or load a previously saved game.",
	"GUI_CV_COMM_TOOLTIP",		"Comm Menu: Opens the multiplayer options menu to change alliances, modify chat settings, and give resources or units to other players.",

// Button Panel Tooltips
	"GUI_BP_IDLE_TOOLTIP",		"Idle Ship",
	"GUI_BP_IDLE_VTOOLTIP",		"Idle Ship: Sets the focus to the next ship that has no orders.",
	"GUI_BP_TOGGLE_TOOLTIP",	"Toggle View",
	"GUI_BP_TOGGLE_VTOOLTIP",	"Toggle View: Switches the view between strategic and tactical modes.",
	"GUI_BP_OBJECTIVES_TOOLTIP", "Show Objectives",
	"GUI_BP_OBJECTIVES_VTOOLTIP", "Show Objectives: Show the current mission objectives.",
	"GUI_BP_HELP_TOOLTIP",		"Toggle Help",
	"GUI_BP_HELP_VTOOLTIP",		"Toggle Help: Turn on or off tooltip help messages.",
	"GUI_BP_PALETTE_TOOLTIP",	"Toggle Palette",
	"GUI_BP_PALETTE_VTOOLTIP",	"Toggle Palette: Switches between having the control palette always on, or in popup mode.",
   "GUI_BP_MORE_TOOLTIP",     "Advanced Buttons",
   "GUI_BP_MORE_VTOOLTIP",    "Advanced Buttons: Show more buttons, such as Toggle Help, Toggle Palette, and Options Menu.",

// Control Panel Button Tooltip and Verbose Tooltip Parts
	"GUI_CP_TOOLTIP_SEPARATE",	"",
	"GUI_CP_CLASS_SEPARATE",	"-",
	"GUI_CP_AMOUNT_SEPARATE",	"/",
	"GUI_CP_START_EXTRA",		"",
	"GUI_CP_END_EXTRA",			"",
	"GUI_CP_SENTENCE_END",		".",
	"GUI_CP_PERCENT",			"%%",
	"GUI_CP_DILITHIUM_RES",		"Dilithium",
	"GUI_CP_LATINUM_RES",		"Precious Metals",
	"GUI_CP_METAL_RES",			"Tritanium",
	"GUI_CP_BIOMATTER_RES",		"Crystalene",
	"GUI_CP_CREW_RES",			"personnel",
	"GUI_CP_REQUIRE",			"requires:",
	"GUI_CP_REQRACE",			"Following Allied Power must be present: %s",

// Control Panel Button Tooltip and Verbose Tooltips.
	"GUI_CP_MOVE_TOOLTIP",		"Move",
	"GUI_CP_MOVE_VTOOLTIP",		"Move: Order this vessel to set a course for a new location.",
	"GUI_CP_ATTACK_TOOLTIP",	"Attack",
	"GUI_CP_ATTACK_VTOOLTIP",	"Attack: Order this unit to attack a target or, if possible, go to a location and attack any enemies there.",
	"GUI_CP_STOP_TOOLTIP",		"Stop",
	"GUI_CP_STOP_VTOOLTIP",		"Stop: Order this vessel to stop its current action.",
	"GUI_CP_TRANS_TOOLTIP",		"Transport",
	"GUI_CP_TRANS_VTOOLTIP",	"Transport: Send a boarding party over to another ship or station.  The boarding party will fight the crew and take the ship or station over once the crew is eliminated.",
	"GUI_CP_STRANS_TOOLTIP",	"Special Transport[OBSOLETE]",
	"GUI_CP_STRANS_VTOOLTIP",	"Special Transport: Transport a special flag abooard target. [OBSOLETE]",
	"GUI_CP_RECREW_TOOLTIP",	"Recrew",
	"GUI_CP_RECREW_VTOOLTIP",	"Recrew: Reinforce the crew of the station with personnel taken from the personnel pool.  You can't recrew while under attack.",
	"GUI_CP_ORDER_TOOLTIP",		"Orders",
	"GUI_CP_ORDER_VTOOLTIP",	"Orders: Go to the orders menu to issue more detailed commands.",
	"GUI_CP_SDOWN_TOOLTIP",		"Stand Down",
	"GUI_CP_SDOWN_VTOOLTIP",	"Stand Down: Order the vessel to stop its current action and perform no further actions until it is so ordered.",
	"GUI_CP_REPAIR_TOOLTIP",	"Repair and Recrew",
	"GUI_CP_REPAIR_VTOOLTIP",	"Repair and Recrew: Send the vessel to the nearest shipyard for faster repair and recrewing from the crew pool.",
	"GUI_CP_REPAIR_OTHER_TOOLTIP", "Repair Other",
	"GUI_CP_REPAIR_OTHER_VTOOLTIP", "Repair Other: Repairs a ship or station.",
	"GUI_CP_GUARD_TOOLTIP",		"Guard",
	"GUI_CP_GUARD_VTOOLTIP",	"Guard: Follow and protect another vessel.",
	"GUI_CP_PATROL_TOOLTIP",	"Patrol",
	"GUI_CP_PATROL_VTOOLTIP",	"Patrol: Patrol an area of space.  To make more complex patrol routes hold down the TAB key and right click waypoints.",
	"GUI_CP_SCOUT_TOOLTIP",		"Explore",
	"GUI_CP_SCOUT_VTOOLTIP",	"Explore: Search unexplored areas of the map.",
	"GUI_CP_SANDD_TOOLTIP",		"Search and Destroy",
	"GUI_CP_SANDD_VTOOLTIP",	"Search and Destroy: Search for enemy vessels and destroy them.  This is particularly useful for cleaning up remaining enemy forces.",
	"GUI_CP_DECOM_TOOLTIP",		"Decommission",
	"GUI_CP_DECOM_VTOOLTIP",	"Decommission: Disassemble and recover resources from a ship or station.  All ships must return to a repair bay to be decommissioned.",
	"GUI_CP_GALERT_TOOLTIP",	"Green Alert",
	"GUI_CP_GALERT_VTOOLTIP",	"Green Alert: Do not fire weapons without an explicit attack order.",
	"GUI_CP_YALERT_TOOLTIP",	"Yellow Alert",
	"GUI_CP_YALERT_VTOOLTIP",	"Yellow Alert: Proceed with orders unless the enemy engages first.  If engaged, destroy the enemy forces.",
	"GUI_CP_RALERT_TOOLTIP",	"Red Alert",
	"GUI_CP_RALERT_VTOOLTIP",	"Red Alert: Engage the enemy upon sight.",
	"GUI_CP_BUILD_TOOLTIP",		"Build",
	"GUI_CP_BUILD_VTOOLTIP",	"Build: Go to the construction menu to select ships, upgrades and stations to build.",
	"GUI_CP_HARVEST_TOOLTIP",	"Harvest Dilithium or other resource",
	"GUI_CP_HARVEST_VTOOLTIP",	"Harvest Dilithium or other resource: Find the nearest resource that can be harvested and begin mining operations.",
	"GUI_CP_RALLY_TOOLTIP",		"Set Rally Point",
	"GUI_CP_RALLY_VTOOLTIP",	"Set Rally Point: Choose a location where vessels will collect after exiting the station.",
	"GUI_CP_RESEARCH_TOOLTIP",	"Research",
	"GUI_CP_RESEARCH_VTOOLTIP",	"Research: Go to the research menu to select research projects to begin.",
	"GUI_CP_BACK_TOOLTIP",		"Back",
	"GUI_CP_BACK_VTOOLTIP",		"Back: Return to the main menu.",
	"GUI_CP_CANCEL_TOOLTIP",	"Cancel",
	"GUI_CP_CANCEL_VTOOLTIP",	"Cancel: Cancel construction and regain the resources.",
	"GUI_CP_CLOSE_TOOLTIP",		"Close",
	"GUI_CP_CLOSE_VTOOLTIP",	"Close: Close the Popup Menu",
	"GUI_CP_STRADE_TOOLTIP",	"Start Trade",
	"GUI_CP_STRADE_VTOOLTIP",	"Start Trade: Set the starting point for a trade route.",
	"GUI_CP_ETRADE_TOOLTIP",	"End Trade",
	"GUI_CP_ETRADE_VTOOLTIP",	"End Trade: Set the ending point for a trade route.",
	"GUI_CP_TRADE_DILITHIUM_TOOLTIP",	"Load Dilithium",
	"GUI_CP_TRADE_DILITHIUM_VTOOLTIP",	"Load Dilithium: Fill ship with 500 dilithium to send to ally.",
	"GUI_CP_TRADE_LATINUM_TOOLTIP",	"Load Precious Metals",
	"GUI_CP_TRADE_LATINUM_VTOOLTIP",	"Load Precious Metals: Fill ship with 500 precious metals to send to ally.",
	"GUI_CP_TRADE_METAL_TOOLTIP",	"Load Tritanium",
	"GUI_CP_TRADE_METAL_VTOOLTIP",	"Load Tritanium: Fill ship with 500 tritanium to send to ally.",
	"GUI_CP_TRADE_CREW_TOOLTIP",	"Load Personnel",
	"GUI_CP_TRADE_CREW_VTOOLTIP",	"Load Personnel: Fill ship with 500 personnel to send to ally.",
	"GUI_CP_TRADE_MENU_TOOLTIP",		"Trade Menu",
	"GUI_CP_TRADE_MENU_VTOOLTIP",	"Trade Menu: Go to the trade menu to conduct transactions and exchange resources.",
	"GUI_CP_SET_FORMATION",	"Formations Menu",
	"GUI_CP_SET_FORMATION_VTOOLTIP", "Formations Menu: Go to the formations menu to issue more detailed orders.",
	"GUI_CP_EVOLVE_TOOLTIP",	"Refit",
	"GUI_CP_EVOLVE_VTOOLTIP",	"Refit Menu: Go to the refit menu to commission this hull into a starship.",
	"GUI_CP_TRANSPORT_ATTACK_TOOLTIP", "Transport Attack",
	"GUI_CP_TRANSPORT_ATTACK_VTOOLTIP", "Transport Attack: Attack a target vessel.  Send boarding parties to capture the ship when shields go down.",
	"GUI_CP_COLONIZE_TOOLTIP", "Colonise",
	"GUI_CP_COLONIZE_VTOOLTIP", "Colonise: Colonise a planet.",
	"GUI_CP_MAXBUILD", "Limit Reached ( %d / %d )",


// Trade tooltips
	"GUI_CP_BUY_DILITHIUM_TOOLTIP",	"Buy Raw Dilithium",
	"GUI_CP_BUY_DILITHIUM_VTOOLTIP", "Buy Raw Dilithium: Buy 100 units of Raw Dilithium for 143 units of Precious Metals.",
	"GUI_CP_SELL_DILITHIUM_TOOLTIP", "Sell Raw Dilithium",
	"GUI_CP_SELL_DILITHIUM_VTOOLTIP", "Sell Raw Dilithium: Sell 100 units of Raw Dilithium for 70 units of Precious Metals.",
	"GUI_CP_BUY_METAL_TOOLTIP",	"Buy Tritanium Ore",
	"GUI_CP_BUY_METAL_VTOOLTIP", "Buy Tritanium Ore: Buy 100 units of Tritanium for 143 units of Precious Metals.",
	"GUI_CP_SELL_METAL_TOOLTIP",	"Sell Tritanium Ore",
	"GUI_CP_SELL_METAL_VTOOLTIP",	"Sell Tritanium Ore: Sell 100 units of Tritanium Ore for 70 units of Precious Metals.",

	"GUI_CP_SREPAIR_TOOLTIP",		"Priority Repair",
	"GUI_CP_SREPAIR_VTOOLTIP",		"Priority Repair: Ignore all further orders until ship is repaired.",

	// AI menu button tooltips
	"GUI_CP_AI_MENU_TOOLTIP",	"Rules of Engagement",
	"GUI_CP_AI_MENU_VTOOLTIP",	"Rules of Engagement: Go to the Rules of Engagement to set the autonomy level for the selected ship(s) or station.",

	"GUI_CP_SWNONE_TOOLTIP",	"No Advanced Weapon Autonomy",
	"GUI_CP_SWNONE_VTOOLTIP",	"No Advanced Weapon Autonomy: Ship(s) will not automatically fire advanced weapons.",
	"GUI_CP_SWMED_TOOLTIP",		"Medium Advanced Weapon Autonomy",
	"GUI_CP_SWMED_VTOOLTIP",	"Medium Advanced Weapon Autonomy: Ship(s) will automatically fire advanced weapons if its advanced weapon capacitor is more than half full.",
	"GUI_CP_SWHIGH_TOOLTIP",	"High Advanced Weapon Autonomy",
	"GUI_CP_SWHIGH_VTOOLTIP",	"High Advanced Weapon Autonomy: Ship(s) will fire advanced weapons automatically any time it can.",

	"GUI_CP_MOVELOW_TOOLTIP",	"Low Movement Autonomy",
	"GUI_CP_MOVELOW_VTOOLTIP",	"Low Movement Autonomy: Ship(s) will not move at all during combat.",
	"GUI_CP_MOVEMED_TOOLTIP",	"Medium Movement Autonomy",
	"GUI_CP_MOVEMED_VTOOLTIP",	"Medium Movement Autonomy: Ship(s) will maintain formation during combat, but the formation may move as a group.",
	"GUI_CP_MOVEHIGH_TOOLTIP",	"High Movement Autonomy",
	"GUI_CP_MOVEHIGH_VTOOLTIP",	"High Movement Autonomy: Ship(s) are free to move individually during combat, even if assigned to a formation for movement.",

	// Minimap tooltips
	"GUI_MM_SHIPS_TOOLTIP",		"Filter Ships",
	"GUI_MM_SHIPS_VTOOLTIP",	"Filter Ships: Show All, Friendly only, Enemy only, or Neutral only.",
	"GUI_MM_STATIONS_TOOLTIP",	"Filter Stations",
	"GUI_MM_STATIONS_VTOOLTIP",	"Filter Stations: Show All, Friendly only, Enemy only, or Neutral only.",

	// Minimap strings
	"GUI_MM_ALL_SHIPS_VISIBLE",       "Displaying all visible ships",
	"GUI_MM_ALLIED_SHIPS_VISIBLE",    "Displaying allied ships",
	"GUI_MM_ENEMY_SHIPS_VISIBLE",     "Displaying enemy ships",
	"GUI_MM_NEUTRAL_SHIPS_VISIBLE",   "Displaying neutral ships",
	"GUI_MM_ALL_STATIONS_VISIBLE",    "Displaying all visible stations",
	"GUI_MM_ALLIED_STATIONS_VISIBLE", "Displaying allied stations",
	"GUI_MM_ENEMY_STATIONS_VISIBLE",  "Displaying enemy stations",
	"GUI_MM_NEUTRAL_STATIONS_VISIBLE","Displaying neutral stations",


// Ship Display Tooltips and Verbose Tooltips, these have a good amount of
// dynamic information so they are broken in to little parts.
	"GUI_SD_PLANET",			"planet",
	"GUI_SD_PLANET_VERBOSE",	"",	//eventually should have one of these for each race
	"GUI_SD_RACE_VESSEL",		"vessel",
	"GUI_SD_RACE_REPAIR_BA",	"personnel can repair their ships subsystems",
	"GUI_SD_RACE_REPAIR_A",		"personnel can repair their ships subsystems",
	"GUI_SD_RACE_REPAIR_AA",	"personnel can repair their ships subsystems",
	"GUI_SD_RACE_BOARD_BA",		"personnel can try to board or be boarded by enemy ships",
	"GUI_SD_RACE_BOARD_A",		"personnel can try to board or be boarded by enemy ships",
	"GUI_SD_RACE_BOARD_AA",		"personnel can try to board or be boarded by enemy ships",
	"GUI_SD_RACE_CANT_BOARD",	"cannot board or be boarded by enemy ships.",
	"GUI_SD_REPAIR_SYS_ENG",	"Propulsion Systems",
	"GUI_SD_REPAIR_SYS_LS",		"Life Support Systems",
	"GUI_SD_REPAIR_SYS_WPN",	"Fire Control",
	"GUI_SD_REPAIR_SYS_SHLD",	"Shield Generator",
	"GUI_SD_REPAIR_SYS_SENS",	"Sensor Package",
	"GUI_SD_REPAIR_SYSX_ENG",	"Propulsion Systems are",
	"GUI_SD_REPAIR_SYSX_LS",	"Life Support Systems are",
	"GUI_SD_REPAIR_SYSX_WPN",	"Fire Control is",
	"GUI_SD_REPAIR_SYSX_SHLD",	"Shield Generator is",
	"GUI_SD_REPAIR_SYSX_SENS",	"Sensor Package is",
	"GUI_SD_REPAIR_FUNC_SYS",	"fully functional.",
	"GUI_SD_REPAIR_REP_SYS",	"under repair",
	"GUI_SD_REPAIR_LEFT_SYS",	"%% left",
	"GUI_SD_REPAIR_DIS_SYS",	"jammed/disabled.",
	"GUI_SD_REPAIR_NA_SYS",		"not available on this class.",
	"GUI_SD_BAR_HEALTH",		"Hull Integrity at",
	"GUI_SD_BAR_ENERGY",		"Advanced weapons capacitor at",
	"GUI_SD_BAR_FREIGHT_IS",	"Mining Freighter is",
	"GUI_SD_BAR_PERFULL",		"%% full.",
	"GUI_SD_BAR_CARGO_IS",		"Cargo Freighter is",
	"GUI_SD_BAR_DLTH_INF",		"Moon has limitless amounts of raw dilithium.",
	"GUI_SD_BAR_DLTH_MOON",		"Moon has",
	"GUI_SD_BAR_DLTH_LEFT",		"dilithium left.",
	"GUI_SD_BAR_LATINUM",		"Asteroid has",
	"GUI_SD_BAR_LAT_LEFT",		"precious metals left.",
	"GUI_SD_BAR_DLTHX_PERFULL",	"%% full with ",
	"GUI_SD_BAR_DLTHX_LEFT",	"raw dilithium left out of",
	"GUI_SD_BAR_LATX_LEFT",		"precious metals left out of",
	"GUI_SD_BAR_PLANET",		"Planet has",
	"GUI_SD_BAR_BIOMATTER_LEFT", "raw crystalene left.",
	"GUI_SD_BAR_BIOMATTERX_LEFT", "raw crystalene left out of",
	"GUI_SD_BAR_METAL_LEFT",	"tritanium ore left.",
	"GUI_SD_BAR_METALX_LEFT",	"tritanium ore left out of",
	"GUI_SD_BAR_RESEARCH",		"Research",
	"GUI_SD_BAR_CONST",			"Construction",
	"GUI_SD_BAR_PERCOMP",		"%% complete.",
	"GUI_SD_BAR_NO_RESEARCH",	"No research currently being undertaken.",
	"GUI_SD_BAR_NO_CONST",		"There is no current construction.",
	"GUI_SD_BAR_PERCOMPX",		"%% complete.  There are approximately",
	"GUI_SD_BAR_SECREMAIN",		"seconds remaining.",
	"GUI_SD_TEXT_VESSEL",		"Vessel Identification",
	"GUI_SD_TEXT_CREW_LABEL",	"PERSONNEL",
	"GUI_SD_TEXT_DERELICT",		"Derelict",
	"GUI_SD_TEXT_CREW",			"Crew",
	"GUI_SD_TEXT_SPECIAL_WEAPON_ENERGY", "Advanced Weapon Capacitor",
	"GUI_SD_TEXT_CREW_MIN",		"is at minimal operating level.",
	"GUI_SD_TEXT_CREW_RED",		"is at reduced operating level.",
	"GUI_SD_TEXT_CREW_NOR",		"is at normal operating level.",
	"GUI_SD_TEXT_DERELICT_ADV",	"Transport personnel on to this vessel to reactivate ship systems.",
	"GUI_SD_TEXT_CREW_FIRE_UP",	"All free personnel directed to fire control.",
	"GUI_SD_TEXT_CREW_FIRE_DN",	"Insufficent personnel at fire control.",
	"GUI_SD_TEXT_CREW_REP_UP",	"All free personnel directed to damage control.",
	"GUI_SD_TEXT_CREW_REP_DN",	"Insufficent personnel at damage control.",

// Ship Display Cargo types
	"GUI_SD_CARGO_DILITHIUM",	"Raw Dilithium",
	"GUI_SD_CARGO_LATINUM",		"Precious Metals",
	"GUI_SD_CARGO_METAL",		"Tritanium Ore",
	"GUI_SD_CARGO_CREW",		"Exchange Personnel",
	"GUI_SD_CARGO_BIOMATTER",	"Raw Crystalene",
	"GUI_SD_CARGO_EMPTY",		"Empty",
	"GUI_SD_CARGO_SAURIAN_BRANDY", "Manufactured Goods",
	"GUI_SD_CARGO_TRIBBLES",		"Rare Trade Goods",
	"GUI_SD_CARGO_WARP_CORES",		"Heavy Machinery",
	"GUI_SD_TRADE_GOODS",		"Passengers",
	"GUI_SD_ROMULAN_ALE",		"Hull Alloys",
	"GUI_SD_REPLICATORS",		"Beverages",
	"GUI_SD_GAGH",				"Industrial Chemicals",
	"GUI_SD_HOLOGENERATOR",		"Construction Materials",
	"GUI_SD_MEDICAL_SUPPLIES",	"Medical Supplies",
	"GUI_SD_ANTIGRAV",			"Power Generators",
	"GUI_SD_QUADROTRITICALE",	"Civilian Grade Deuterium",
	"GUI_SD_RAKTAJINO",			"Foodstuffs",
	
	"GUI_WI_ANALYSIS",			"Analysis of",
	"GUI_WI_GRAVMINE",			"Gravitic mines have been detected on the hull.",
	"GUI_WI_SPY",				"Unofficial transmission detected, indicating spy aboard.",

// Resource Panel Tooltips and Verbose Tooltips.
	"GUI_RD_CREW_TOOLTIP",		"Personnel: %d/%d",
	"GUI_RD_CREW_VTOOLTIP",		"Personnel: %d/%d Available personnel that is not in active service.  Personnel is used in the crewing and recrewing of ships and stations.  It is limited by the number of outposts and planets that you control.",

	"GUI_RD_DILITHIUM_TOOLTIP",	"Dilithium",
	"GUI_RD_DILITHIUM_VTOOLTIP","Dilithium: Current dilithium store. Dilithium is required for matter/antimatter reactors, used on board ships and stations. Dilithium is mostly obtained from volcanic moons, but can also be found in abundance in rarely-seen dilithium moons",

	"GUI_RD_LATINUM_TOOLTIP",	"Precious Metals",
	"GUI_RD_LATINUM_VTOOLTIP",	"Precious Metals: Current precious metal store. Precious Metals are obtained from naturally-occuring deposits and by trading.",

	"GUI_RD_METAL_TOOLTIP",		"Tritanium",
	"GUI_RD_METAL_VTOOLTIP",	"Tritanium: Current tritanium store. Tritanium is used in the construction of starships and military installations and is extracted from planets and rocky moons.",

	"GUI_RD_BIOMATTER_TOOLTIP",		"Crystalene",
	"GUI_RD_BIOMATTER_VTOOLTIP",	"crystalene: Current crystalene store. Crystalene is an enigmatic substance used solely by the Tholian Assembly.",

	"GUI_RD_OBSERVER_TOOLTIP",		"Observers have no resources.",
	"GUI_RD_OBSERVER_VTOOLTIP",		"Observers have no resources.",

// tooltips for the metal bar that appear on the planet.
	"GUI_PLANET_METAL_BAR",			"Tritanium Ore Reserves",
	"GUI_PLANET_METAL_BAR_VERBOSE",	"Tritanium Ore reserves of the planet. Tritanium Ore can be extracted from the planet by building an orbital mining facility or through orbital stripminers.",

// Objectives Pop Up.
	"GUI_POP_OBJ_BUTTON",		"OK",
	"GUI_POP_OBJ_TOOLTIP",		"Return to the game.",

// Comm Pop Up.
	"GUI_POP_COMM_TITLE",		"COMMS/ALLIANCES",
	"GUI_POP_COMM_PLAYER",		"PLAYER",
	"GUI_POP_COMM_CHAT",		"CHAT",
	"GUI_POP_COMM_TEAM",		"TEAM",
	"GUI_POP_COMM_ALLIANCE",	"ALLIANCE",
	"GUI_POP_COMM_MESSAGE",		"Chat to:",
	"GUI_POP_COMM_GIVE",		"GIVING",
	"GUI_POP_COMM_ALLIEDV",		"Allied Victory",
	"GUI_POP_COMM_LATENCY",		"High Latency",
	"GUI_POP_COMM_TEAM_PREFIX",	"Team",
	"GUI_POP_COMM_NAME_TT",		"Player name, click to select as current player.",
	"GUI_POP_COMM_CHAT_TT",		"Determines if you wish to send chat messages to this player.",
	"GUI_POP_COMM_ENEMY_TT",	"Enemy - Fire at will!",
	"GUI_POP_COMM_NEUTRAL_TT",	"Neutral - Do not fire on, but do not share line of sight.",
	"GUI_POP_COMM_ALLY_TT",		"Ally - Do not fire on, share line of sight.",
	"GUI_POP_COMM_SELECT_TT",	"Currently selected player.",
	"GUI_POP_COMM_CHAT_ALL",	"ALL",
	"GUI_POP_COMM_CHAT_ALL_TT",	"All players will receive your chat messages.",
	"GUI_POP_COMM_CHAT_ALY",	"ALLIES",
	"GUI_POP_COMM_CHAT_ALY_TT",	"Only your allies will receive your chat messages.",
	"GUI_POP_COMM_CHAT_EMY",	"ENEMIES",
	"GUI_POP_COMM_CHAT_EMY_TT",	"Only your enemies will receive your chat messages.",
	"GUI_POP_COMM_CHAT_PVT",	"PRIVATE",
	"GUI_POP_COMM_CHAT_PVT_TT",	"Only the currently selected player will receive your chat messages.",
	"GUI_POP_COMM_GIVE_UNT",	"Units",
	"GUI_POP_COMM_GIVE_UNT_TT",	"Give currently selected units to the currently selected player.",
	"GUI_POP_COMM_GIVE_DLT",	"Dilithium",
	"GUI_POP_COMM_GIVE_DLT_TT",	"Give dilithium to the currently selected player.",
	"GUI_POP_COMM_GIVE_CRW",	"Personnel",
	"GUI_POP_COMM_GIVE_CRW_TT",	"Give personnel to the currently selected player.",
	"GUI_POP_COMM_GIVE_MET",	"Tritanium",
	"GUI_POP_COMM_GIVE_MET_TT",	"Give tritanium to the currently selected player.",
	"GUI_POP_COMM_GIVE_LAT",	"Precious Metals",
	"GUI_POP_COMM_GIVE_LAT_TT",	"Give precious metals to the currently selected player.",
	"GUI_POP_COMM_GIVE_BIO",	"Crystalene",
	"GUI_POP_COMM_GIVE_BIO_TT",	"Give crystalene to the currently selected player.",
	"GUI_POP_COMM_DLTH_UP",		"Increase the amount of dilithium to transfer.",
	"GUI_POP_COMM_DLTH_DN",		"Decrease the amount of dilithium to transfer.",
	"GUI_POP_COMM_CREW_UP",		"Increase the amount of personnel to transfer.",
	"GUI_POP_COMM_CREW_DN",		"Decrease the amount of personnel to transfer.",
	"GUI_POP_COMM_METAL_UP",	"Increase the amount of tritanium to transfer.",
	"GUI_POP_COMM_METAL_DN",	"Decrease the amount of tritanium to transfer.",
	"GUI_POP_COMM_LATINUM_UP",	"Increase the amount of precious metals to transfer.",
	"GUI_POP_COMM_LATINUM_DN",	"Decrease the amount of precious metals to transfer.",
	"GUI_POP_COMM_BIOMATTER_UP","Increase the amount of crystalene to transfer.",
	"GUI_POP_COMM_BIOMATTER_DN","Decrease the amount of crystalene to transfer.",
	"GUI_POP_COMM_ALLIEDV_TT",	"When active an allied victory is sufficient to win the game.",
	"GUI_POP_COMM_LATENCY_TT",	"Click this box when playing over laggy Internet connections.",
	"GUI_POP_COMM_DONE",		"DONE",
	"GUI_POP_COMM_MSG_DLTH_TO",	"… to",
	"GUI_POP_COMM_MSG_CREW_TO",	"‰ to",
	"GUI_POP_COMM_MSG_METAL_TO",	"™ to",
	"GUI_POP_COMM_MSG_LATINUM_TO",	"† to",
	"GUI_POP_COMM_MSG_BIOMATTER_TO","‡ to",

	"GUI_POP_COMM_MSG_GAVE",	"You gave",
	"GUI_POP_COMM_MSG_GAVE_U",	"gave you",
	"GUI_POP_COMM_MSG_CONSDR",	"You now consider",
	"GUI_POP_COMM_MSG_CON_U",	"now considers you",
	"GUI_POP_COMM_MSG_ENEMY",	"an enemy.",
	"GUI_POP_COMM_MSG_NEUTRAL",	"neutral.",
	"GUI_POP_COMM_MSG_ALLY",	"an ally.",
	"GUI_POP_COMM_MSG_UNITS",	"You gave units to",
	"GUI_POP_COMM_MSG_UNITS_U",	"gave you units.",

// Drop Player Pop Up.
	"GUI_POP_DROP_WAIT",		"Waiting for ",
	"GUI_POP_DROP_SECONDS",		"seconds:",
	"GUI_POP_DROP_BUTTON",		"Eliminate",
	"GUI_POP_DROP_TOOLTIP",		"Cast your vote to eliminate all currently listed players from the game.",
	"GUI_POP_AITAKEOVER_BUTTON","AI Takeover",
	"GUI_POP_AITAKEOVER_TOOLTIP","Cast your vote to replace all currently listed players with a computer player.",
	"GUI_POP_DROP_YES_QUIT",			" has quit.",
	"GUI_POP_DROP_YES_DISCONNECTED",	" is disconnected.",
	"GUI_POP_DROP_YES_SHELL",			" is in the shell.",
	"GUI_POP_DROP_YES_UNRESPONSIVE",	" is unresponsive.",
	"GUI_POP_DROP_VOTE_ELIMINATE",	" voted for Eliminate.",
	"GUI_POP_DROP_VOTE_AITAKEOVER",	" voted for AI Takeover.",
	"GUI_POP_DROP_VOTE_WAITING",	" is waiting.",


// Player Load Percentage Pop Up
	"GUI_POP_LOAD_WAIT",		"Waiting for loading players for",
	"GUI_POP_LOAD_SECONDS",		"seconds:",

// Pause Game Pop Up
	"GUI_POP_PAUSE_TEXT",		"",
	"GUI_POP_PAUSE_CONTINUE",	"",
	"GUI_POP_PAUSE_TOOLTIP",	"Unpause the game.",

// Planet stuff
	"PLANET_UNPOPULATED",	"Unpopulated",
	"PLANET_SPARSE",		"Fledgling Colony",
	"PLANET_LIGHT",			"Mineral Extraction/Agriculture",
	"PLANET_MEDIUM",		"Industrial Development",
	"PLANET_HEAVY",			"Developed World",
	"PLANET_UNINHABITABLE",	"UNINHABITABLE",
	"PLANET_POPULATION",	"Population:",

// Versioning, the english has no funny suffix, we may version other parts of it later
	"VERSION_PREFIX",			"v",
	"VERSION_SEPARATOR",		".",
	"VERSION_SUFFIX",			"",

	"Computer Easy",			"AI Normal",
	"Computer Medium",			"AI Hard",
	"Computer Hard",			"AI Merciless",
	"Computer Neural",			"AI Neural",

// Messages to print when players quit / are kicked / are dropped
	"DEPARTURE_REASON_QUIT",		" quit the game.",
	"DEPARTURE_REASON_LOST",		" was disconnected.",
	"DEPARTURE_REASON_DROPPED",		" was dropped.",
	"DEPARTURE_REASON_VOTED",		" voted you out of their game.",
	"DEPARTURE_ACTION_AITAKEOVER",	" An AI has taken over the game for them.",
	"DEPARTURE_ACTION_ELIMINATED",	" The player was eliminated.",

// General Multiplayer Messages
	"MULTIPLAYER_ONLY_PLAYER",		"You are in a single player game now.",

// General Multiplayer Messages, which are preceeded by a players name
	"MP_VOICE_RECEIVED",			" speaks.",
	"MP_GAME_PAUSED",				" paused the game.",
	"MP_GAME_UNPAUSED",				" unpaused the game.",
	"MP_GAME_SPEED_CHANGED",		" changed the game speed.",
	"MP_GAME_LATENCY_CHANGED",		" changed the network latency.",

// Let's hope we never actually have to print this message for the user.  That means their multiplayer game is ruined :(
	"MULTIPLAYER_SYNC_ERROR",		"This network game is out of sync.  You are advised to exit the game.",

// Announce that a multiplayer save occurred (all players see message) or that the request was denied (only requestor sees it)
	"MULTIPLAYER_SAVE",			"Multiplayer Save",
	"MULTIPLAYER_SAVE_DENIED",	"You need to wait 10 minutes between each multiplayer save.",

// Multiplayer Game Type Progress / End text that isn't part of a game message (usually because it has a player name in it)
	"GT_Victorious",				"Victorious Players Are:",
	"GT_Also_Victorious",			"Other Victorious Players Are:",
	"GT_Victorious_Player_Begin",	"    ",
	"GT_Victorious_Player_End",		"",

	"GT_Other_Eliminated_Begin",	"Player ",
	"GT_Other_Eliminated_End",		" was eliminated!",

	"GT_Attacker_Time_To_Kill_Left",	"You have ",
	"GT_Attacker_Time_To_Kill_Right",	" to eliminate the defenders and win.",
	"GT_Defender_Time_Remaining_Left",	"You must hold out for ",
	"GT_Defender_Time_Remaining_Right",	" to win the game.",
	"GT_Observer_Time_Remaining_Left",	"There are ",
	"GT_Observer_Time_Remaining_Right",	" minutes left in the game.",

	"GT_Flag_Being_Towed",	"Your flag is being towed!",
	"GT_Towing_A_Flag",	"You have taken an enemy flag! Return it to your starbase!",

	"GT_Assault_Location",	"400 105 1100 125",
	"GT_Towing_Location",	"400 805 1100 825",
	"GT_Towed_Location",	"400 705 1100 725",

	"GT_Latinum_Collect_A",	" has collected ",
	"GT_Latinum_Collect_AP"," have collected ",
	"GT_Latinum_Collect_B",	" precious metals.",
	

	// launch failure codes, as reported on the machine that had the launch failure
	// the OK code should never be printed to the console - it is just for debugging / logging completeness
	"LFR_OK",												"Launch Request Accepted",
	"LFR_LOCAL_ASSETS_VERSION_BAD",							"You cannot play this host because you have a different version of KA2.",
	"LFR_LOCAL_ASSETS_MAP_BAD",								"You cannot launch while you don't have the host's map.",
	"LFR_LOCAL_CD_NEED_OWN",								"You need your own CD to play.",
	"LFR_LOCAL_LADDER_MATCH_GAMESPY_NEEDED",				"You need to be logged in with a GameSpy account to play a ladder match.",
	"LFR_LOCAL_ASSAULT_CHOSE_START_LOCATION",				"You need to choose a start location to play this Assault map.",
	"LFR_LOCAL_RACE_INVALID_FOR_COLONIZE",					"You need to choose a race that can colonise planets to play this Colonise Planets map.",
	"LFR_LOCAL_RACE_INVALID_FOR_DEFEND",					"You need to choose a race that can colonise planets, to play this Defend Planet map.",
	"LFR_LOCAL_RACE_INVALID_FOR_CTF",						"You need to choose a race that can capture flags, to play this Capture The Flag map.",
	"LFR_LOCAL_RACE_INVALID_FOR_LATINUM",					"You need to choose a race that can collect Precious Metals to play this Collect Precious Metals map.",
	"LFR_HOST_OVERLOADED",									"To launch, the host will need to choose a map with more start locations.  Alternately, some players could become observers, leave or be kicked out.",
	"LFR_HOST_TWO_TEAMS_NEEDED",							"The game cannot be launched until there are at least two teams.",
	"LFR_HOST_NEED_MORE_PLAYERS",							"The game cannot be launched with only one player.",
	"LFR_HOST_CD_NEED_MORE",								"More CD's are required to play with this many players.",
	"LFR_HOST_LADDER_MATCH_IS_2_PLAYERS",					"To play a ladder match, there must be exactly two players.",
	"LFR_HOST_LADDER_MATCH_GAMESPY_NEEDED",					"All ladder match players need to be logged in with a GameSpy account.",
	"LFR_HOST_ASSETS_BAD",									"This game cannot be launched while some players have a different version to the host.",
	"LFR_HOST_JOINERS_NOT_READY",							"The host wants to launch!  Press the Launch button when ready to start!",
	"LFR_HOST_ASSAULT_START_LOCATIONS_NEEDED",				"The host cannot launch this Assault map until all players have chosen a start location.",

	// special case message - host to self when joiners are not ready
	"LFR_HOST_JOINERS_NOT_READY_TO_SELF",					"The other players have been notified that you wish to launch.",


	// launch failure codes, as reported on the other machines (not the ones that had the launch failure)
	// the OK code should never be printed to the console - it is just for debugging / logging completeness
	// the players name (or "The Host") will be printed before this message)
	"LFR_OTHER_LOCAL_ASSETS_VERSION_BAD",					" has a different version of KA2, so the host cannot launch.",
	"LFR_OTHER_LOCAL_ASSETS_MAP_BAD",						" does not have the required map, so the host cannot launch.",
	"LFR_OTHER_LOCAL_CD_NEED_OWN",							" does not have a CD of their own, so the host cannot launch.",
	"LFR_OTHER_LOCAL_LADDER_MATCH_GAMESPY_NEEDED",			" is not logged in with a GameSpy account, so the host cannot launch.",
	"LFR_OTHER_LOCAL_ASSAULT_CHOSE_START_LOCATION",			" needs to choose a start location before this Assault map can launch.",
	"LFR_OTHER_LOCAL_RACE_INVALID_FOR_COLONIZE",			" needs to choose a race that can colonise planets, before this Colonise Planets map can launch.",
	"LFR_OTHER_LOCAL_RACE_INVALID_FOR_DEFEND",				" needs to choose a race that can colonise planets, before this Defend Planet map can launch.",
	"LFR_OTHER_LOCAL_RACE_INVALID_FOR_CTF",					" needs to choose a race that can capture flags, before this map can launch.",
	"LFR_OTHER_LOCAL_RACE_INVALID_FOR_LATINUM",				" needs to choose a race that can collect precious metals, before this Collect Precious Metals map can launch.",


	// for map objectives text for each play type
	"GT_TEAM_OBJECTIVES",									"Teams are locked.",
	"GT_ALLIANCE_OBJECTIVES",								"Alliances can be changed after launch.",
	"GT_CAPTURE_DERELICT_OBJECTIVES",						"Tow enemy flags to your starbase.",
	"GT_COLONIZE_PLANETS_OBJECTIVES",						"Colonise more than half the planets.",
	"GT_DEFEND_PLANET_OBJECTIVES",							"Defend your planet.",
	"GT_LADDER_2P_OBJECTIVES",								"Ladder Match.",
	"GT_ASSAULT_OBJECTIVES_LHS",							"Team 1 wins by lasting ",
	"GT_ASSAULT_OBJECTIVES_RHS",							" minutes.",
	"GT_COLLECT_LATINUM_LHS",								"Collect ",
	"GT_COLLECT_LATINUM_RHS",								" precious metals.",

	//
	// TRADE STATUS DISPLAY
	//
	"TRADE_SENT_TO_TEAM",		"Sent to Team %d:",
	"TRADE_DILITHIUM_AMOUNT",	"Dilithium: %d",
	"TRADE_LATINUM_AMOUNT",		"Precious Metals: %d",
	"TRADE_METAL_AMOUNT",		"Tritanium: %d",
	"TRADE_CREW_AMOUNT",		"Personnel: %d",
	"TRADE_BIOMATTER_AMOUNT",	"Crystalene: %d",

	//
	// Replay system.  (Note - shell stuff is in label.map)
	//

	"REPLAY_CHAPTER_CREATED",	"Replay Chapter Created.",
	
	// Map Objects
	"NEBULA_RADIOACTIVE",	"Radioactive Nebula",
	"NEBULA_RADIOACTIVE_V",	"These nebulas will kill off a ship's crew at a steady rate, regardless of the ship's status.",
	"NEBULA_METREON",		"Metreon Nebula",
	"NEBULA_METREON_V",		"These dangerous nebulas shoot out volatile electric currents and slow the movement of ships.  The reddish metreon also inflict damage on all shipboard systems.",
	"NEBULA_MUTARA",		"Mutara Nebula",
	"NEBULA_MUTARA_V",		"The Mutara Nebula, recognizable by its purplish, silver hue and sparking electricity slows down any ship within it.  The mutara also disables shields and sensors.",
	"NEBULA_METAPHASIC",	"Metaphasic Nebula",
	"NEBULA_METAPHASIC_V",	"Entrance into a Metaphasic Nebula will remove all the negative effects that an enemy's special weapon may have caused to a player's ship.  The metaphasic healing properites also increase shield recharge rates.",
	"NEBULA_CERULEAN",		"Cerulean Nebula",
	"NEBULA_CERULEAN_V",	"The light blue Cerulean Nebula disables shields and weapon systems.  Cloaking is also disabled within the confines of a Cerulean Nebula.",
	"NEBULA_IMPENETRABLE",	"Impenetrable Nebula",
	"NEBULA_IMPENETRABLE_V", "Due to the high concentrations of dense astrographic phenomena, these nebulas cannot be navigated.",
	"NEBULA_LATINUM",		"Precious Metal Deposit",
	"NEBULA_LATINUM_V",		"Precious Metals can be extracted from these deposits with mining freighters.",
	"NEBULA_TACHYON",		"Tachyon Nebula",
	"NEBULA_TACHYON_V",	"These nebulas have an unusally high concentration of tachyon particles, but otherwise have no positive or negative effects.",

	// Hotkeys
	"HOTKEY_F1", " (Hotkey: F1)",
	"HOTKEY_F2", " (Hotkey: F2)",
	"HOTKEY_F3", " (Hotkey: F3)",
	"HOTKEY_F4", " (Hotkey: F4)",
	"HOTKEY_F5", " (Hotkey: F5)",
	"HOTKEY_F6", " (Hotkey: F6)",
	"HOTKEY_F7", " (Hotkey: F7)>",
	"HOTKEY_F8", " (Hotkey: F8)",
	"HOTKEY_F9", " (Hotkey: F9)",
	"HOTKEY_F10"," (Hotkey: F10)",
	"HOTKEY_F11"," (Hotkey: F11)",
	"HOTKEY_F12"," (Hotkey: F12)",
	"HOTKEY_U", " (Hotkey: U)",

	"HOTKEY_~", " (Hotkey: ~)",
	"HOTKEY_BS", " (Hotkey: Backspace)",
	"HOTKEY_SBS", " (Hotkey: SHIFT + Backspace)",
	"HOTKEY_INS", " (Hotkey: Insert)",

	// tech tree display info
	"TECHTREE_WEAPONS",		"WEAPONS",
	"TECHTREE_SHIPS",		"SHIPS AND STATIONS",
	"TECHTREE_UNAVAILABLE",	"The Technology Tree is unavailable with the Free Tech selection.",

	// Admiral's Log localization info
	"ADLOG_FIRST_SUFFIX",	"st",
	"ADLOG_SECOND_SUFFIX",	"nd",
	"ADLOG_THIRD_SUFFIX",	"rd",
	"ADLOG_DEFAULT_SUFFIX",	"th",	// for 4th, 5th

	"ADLOG_BATTLE_VICTORY",	"Victory!",
	"ADLOG_BATTLE_DEFEAT",	"Defeat.",
	"ADLOG_BATTLE_DRAW",	"Draw.",
	"ADLOG_BATTLE_TITLE",	"The %d%s Battle of %s",		// ex, the 1st Battle of PlanetZ - change r to s if crashed

	"ADLOG_MOST_EFFECTIVE",				"Most Effective Combat Ship Class",
	"ADLOG_LEAST_EFFECTIVE",			"Least Effective Combat Ship Class",
	"ADLOG_NONE_EFFECTIVE",				"No effective Combat ships.",
	"ADLOG_MOST_EFFECTIVE_AGAINST",		"Most Effective Combat Ship Class Used Against %s",
	"ADLOG_LEAST_EFFECTIVE_AGAINST",	"Least Effective Combat Ship Class Used Against %s",
	"ADLOG_NONE_EFFECTIVE_AGAINST",		"No effective Combat Ships used against %s.",
	"ADLOG_EFFECTIVENESS_RATING",		"Effectiveness Rating",

	"ADLOG_TEAM_LABEL",					"Team ",		// Team 1
	"ADLOG_WINNER_LABEL",				"Winner",
	"ADLOG_ALLY_LABEL",				"Ally",
	"ADLOG_NEUTRAL_LABEL",			"Neutral",
	"ADLOG_ENEMY_LABEL",			"Enemy",
	"ADLOG_NORELATION_LABEL",		"",

	"ADLOG_SAVE_FILE_TILE",          "Save to File",
	"ADLOG_SAVE_BUTTON_TEXT",        "OK",
	"ADLOG_SAVE_SUCCESS",            "File Saved to your 'My Documents' folder.",
	"ADLOG_SAVE_FAILURE",            "Could not save file.",

	"ADLOG_SCORE_TAB",               "Score",
	"ADLOG_MILITARY_TAB",            "Military",
	"ADLOG_ECONOMY_TAB",             "Economy",
	"ADLOG_TIMELINE_TAB",            "Timeline",
	"ADLOG_BATTLES_TAB",             "Battles",
	"ADLOG_SHIPS_TAB",               "Ships",
	"ADLOG_BUILD_TAB",               "Build",
	"ADLOG_TALLY_TAB",               "Tally",

	// Admiral's Log Economy Screen labels
	"ADLOG_RESOURCE_GATHERED",		"Gathered: ",		
	"ADLOG_RESOURCE_SPENT",			"Spent: ",
	"ADLOG_RESOURCE_BOUGHT",		"Bought: ",
	"ADLOG_RESOURCE_SOLD",			"Sold: ",
	"ADLOG_CREW_ENLISTED",			"Enlisted: ",
	"ADLOG_CREW_ASSIGNED",			"Assigned: ",
	"ADLOG_CREW_KILLED",			"Killed: ",
	"ADLOG_TRADE_PROFIT",			"Trade Profit: ",
	"ADLOG_BIOMATTER_CONVERTED",	"Crystalene Converted: ",

	// timeline labels
	"ADLOG_TIMELINE_LABEL",			"Relative Power of Fleets",
	"ADLOG_TIMELINE_BATTLE_ICON",	" - Battle",
	"ADLOG_TIMELINE_PLANET_ICON",	" - Planet Colonisation",

	// Ship filter buttons
	"ADLOG_FILTER_ALL",				"All",
	"ADLOG_FILTER_ASSAULT",			"CL and CA",
	"ADLOG_FILTER_BATTLESHIP",		"DN and BB",
	"ADLOG_FILTER_DESTROYER",		"EC, FF and DD",
	"ADLOG_FILTER_SCIENCE",			"CT, CC and BC",
	"ADLOG_FILTER_OTHER",			"Other",
	"ADLOG_SHIPS_LOST",				"..DESTROYED",

	// Military screen
	"ADLOG_MILITARY_KILLED",		"Killed",
	"ADLOG_MILITARY_LOST",			"Lost",
	"ADLOG_MILITARY_RATIO",			"Ratio",
	"ADLOG_MILITARY_BUILT",			"Built",
	"ADLOG_MILITARY_MAX",			"Max",
	"ADLOG_MILITARY_COLONIZED",		"Colonised",


	// ADMIRALS LOG
	// Names for creation and destruction
	"ADM_COMMISSIONED",		"Commissioned",
	"ADM_ASSEMBLED",		"Assembled",
	"ADM_CREATED",			"Created",
	"ADM_EVOLVED",			"Evolved",
	"ADM_REJOINED",			"Launched",
	"ADM_SEPARATED",		"Docked",
	"ADM_DEFEATED",			"Destroyed",
	"ADM_ENTERED_FLEET",	"Joined Fleet",
	"ADM_DESTROYED_BY",		"Destroyed by",
	"ADM_NEBULA",			"Nebula/Asteroid Field",
	"ADM_UNKNOWN",			"Pirates or other forces",
	"ADM_RECYCLED",			"Recycled",
	"ADM_DECOMMISSIONED",	"Decommissioned",
	"ADM_TAKEN_BY",			"Captured by",
	"ADM_ASSIM_BY",			"Pacified by",
	"ADM_TAKEN_FROM",		"Captured from",
	"ADM_ASSIM_FROM",		"Pacified from",
	"ADM_SALVAGED",			"Salvaged by scavengers",
	"ADM_WARPED",			"Warped in",
	"ADM_RESERVE",			"Recommissioned from Reserve Fleet",

	//*******************************************************
	//*					MISSION  TITLES  					*
	//*******************************************************

    // ***[            ]*****************************************
    // ***[ CAMPAIGN 1 ]*****************************************
    // ***[            ]*****************************************

    // ***[ ST:A2 - FEDERATION MISSION 1 ]***********************
	"MISSION_FED_1_MAIN_TITLE", 			"Unto the Breach",
	"MISSION_FED_1_SUBTITLES_ENTERPRISE",	 "USS Enterprise
January 21st, 2292
Location: Regula System, Regula Badlands, Alpha Quadrant",
	"MISSION_FED_1_ENTERPRISE_DESTROYED_TITLE", "THE ENTERPRISE HAS BEEN DESTROYED",
	"MISSION_FED_1_INTRO_TEXT_1", 	"Space... the final frontier",
	"MISSION_FED_1_INTRO_TEXT_2", "These are the voyages of the starship Enterprise...",
	"MISSION_FED_1_INTRO_TEXT_3", "Its continuing mission: to explore strange new worlds",
	"MISSION_FED_1_INTRO_TEXT_4", "To seek out new life and new civilisations",
	"MISSION_FED_1_INTRO_TEXT_5", "To boldly go where no man has gone before.",


    // ***[ ST:A2 - FEDERATION MISSION 2 ]***********************
	"MISSION_FED_2_TITLE",				"The Alpha Theta Express",
	"MISSION_FED_2_LOCATION",			"January 30th, 2292
Location: Alpha Theta IV, inside the Federation, Alpha Quadrant",
	"MISSION_FED_2_TRADE_SUFFICIENT",	"ALPHA THETA VI HAS BEEN RESUPPLIED",
	"MISSION_FED_2_LOST_STATION",		"A TRADING STATION HAS BEEN LOST",


    // ***[ ST:A2 - FEDERATION MISSION 3 ]***********************
	"MISSION_FED_3_TITLE",							"Drawing the Line",
	"MISSION_FED_3_SUBTITLE",						"February 6th, 2292
Location: near BD-1586, Federation Frontier, Alpha Quadrant",
	"MISSION_FED_3_WIN",							"YOU HAVE RETAKEN THE USS YORKTOWN",
	"MISSION_FED_3_ENT_DEAD",						"THE ENTERPRISE HAS BEEN DESTROYED",
	"MISSION_FED_3_BASE_DEAD",						"THE STARBASE HAS BEEN DESTROYED",
	"MISSION_FED_3_ELVIS_HAS_LEFT_THE_BUILDING",	"THE USS YORKTOWN HAS LEFT THE SYSTEM",
	"MISSION_FED_3_BASE_DEAD_2",					"STARBASE 176 HAS BEEN DESTROYED",
	

    // ***[ ST:A2 - FEDERATION MISSION 4 ]***********************
	"MISSION_FED_4_TITLE",			"Perdition's Edge",
	"MISSION_FED_4_SUBTITLE",		"February 10th, 2292
Location: Voclus System, on the edge of the Romulan/Federation Neutral Zone, Regula Badlands, Alpha Quadrant",
	"MISSION_FED_4_INCURSION_1",	"You have violated the Neutral Zone",
	"MISSION_FED_4_INCURSION_2",	"Second Violation of the Neutral Zone",
	"MISSION_FED_4_ENTERPRISE",		"The Enterprise has arrived",
	"MISSION_FED_4_BORG_DESTROYED",	"YOU HAVE DESTROYED ALL THE ISC FORCES",
	"MISSION_FED_4_ENT_DESTROYED",	"THE ENTERPRISE HAS BEEN DESTROYED",


    // ***[ ST:A2 - FEDERATION MISSION 5 ]***********************
	"MISSION_FED_5_TITLE",			"Where No Man Has Gone Before",
	"MISSION_FED_5_LOCATION",		"February 19th, 2292
Location: Gamma Occuli System, Regula Badlands, Alpha Quadrant",
	"MISSION_FED_5_ENT_LOST",		"THE ENTERPRISE HAS BEEN DESTROYED",
	"MISSION_FED_5_GATE_LOST",		"THE SUBSPACE SLIPWAY HAS BEEN DESTROYED",
	"MISSION_FED_5_SEIZED_GATE",	"YOU HAVE SEIZED THE SUBSPACE SLIPWAY",


    // ***[ ST:A2 - FEDERATION MISSION 6 ]***********************
    "MISSION_F06_TITLE",                "From Hell's Heart",
	"MISSION_F06_LOCATION_ALPHA",       "February 21st, 2292
Location:  Gamma Occuli System, Alpha Quadrant",
    "MISSION_F06_LOCATION_DELTA",       "Location:  Bora System, Galactic Fringe",
    "MISSION_F06_ENTERPRISE",           "USS Enterprise NCC-1701-A",
    "MISSION_F06_PORTAL",               "The Subspace Slipway",
    "MISSION_F06_ENTERPRISE_DESTROYED", "THE ENTERPRISE HAS BEEN DESTROYED",
    "MISSION_F06_PORTAL_DESTROYED",     "THE SUBSPACE SLIPWAY HAS BEEN DESTROYED",
    "MISSION_F06_SUCCESS",              "ALL ISC FORCES IN THE SYSTEM HAVE BEEN ELIMINATED",


    // ***[ ST:A2 - FEDERATION MISSION 7 ]***********************
	"MISSION_FED_7_MAIN_TITLE",                  "Dire Discoveries",
	"MISSION_FED_7_SUBTITLE_ALLEGHENY",          "USS Allegheny, Flagship Third Fleet
Location: System J-356, Galactic Fringe",
	"MISSION_FED_7_SUBTITLE_ENTERPRISE",         "USS Enterprise
March 1st, 2292
Location: Galactic Fringe",
	"MISSION_FED_7_ALLEGHENY_DESTROYED_TITLE",   "THE ALLEGHENY HAS BEEN DESTROYED",
	"MISSION_FED_7_ENTERPRISE_DESTROYED_TITLE",  "THE ENTERPRISE HAS BEEN DESTROYED",


    // ***[ ST:A2 - FEDERATION MISSION 8 ]***********************
	"MISSION_FED_8_TITLE",            "A War of Words",
	"MISSION_FED_8_SUBTITLE",         "March 6th, 2292
Location: Rentras System, Galactic Fringe",
	"MISSION_FED_8_WIN",              "DATA RETRIEVED",
	"MISSION_FED_8_ENT_DESTROYED",    "THE ENTERPRISE HAS BEEN DESTROYED",
	"MISSION_FED_8_DATA_DESTROYED",   "THE DATA MINER HAS BEEN DESTROYED",
	"MISSION_FED_8_NEXUS_DESTROYED",  "THE STARBASE HAS BEEN DESTROYED",


    // ***[ ST:A2 - FEDERATION MISSION 9 ]***********************
	"MISSION_FED_9_TITLE",		"Heart of Darkness",
	"MISSION_FED_9_WIN1",		"YOU HAVE DESTROYED THE ISC STAGING", 
	"MISSION_FED_9_WIN2",		"GROUNDS AND SAVED YOUR FLEET",
	"MISSION_FED_9_ENT_DEAD",	"THE ENTERPRISE HAS BEEN DESTROYED",
	"MISSION_FED_9_SUBTITLE",	"March 10th, 2292
Location: System J-361, Galactic Fringe",


    // ***[ ST:A2 - FEDERATION MISSION 10 ]**********************
    "MISSION_F10_TITLE",                 "Lost at Sea",
	"MISSION_F10_LOCATION",              "March 17th, 2292
Location:  Bora System, Galactic Fringe",
    "MISSION_F10_ENTERPRISE",            "USS Enterprise NCC-1701-A",
    "MISSION_F10_PORTAL",                "The Subspace Slipway",
    "MISSION_F10_CADDEBOSTAN_DESTROYED", "THE TRINITY HAS BEEN DESTROYED",
    "MISSION_F10_ENTERPRISE_DESTROYED",  "THE ENTERPRISE HAS BEEN DESTROYED",
    "MISSION_F10_PORTAL_DESTROYED",      "THE TRANSWARP PORTAL HAS BEEN DESTROYED",




    // ***[            ]*****************************************
    // ***[ CAMPAIGN 2 ]*****************************************
    // ***[            ]*****************************************

    // ***[ ST:A2 - KLINGON MISSION 1 ]**************************
	"MISSION_KLING_1_TITLE",				"Day of Infamy",
	"MISSION_KLING_1_LOCATION",				"February 26th, 2292
Location: Federation Reserve Fleet HQ
Pearl System, inside the Federation, Alpha/Beta Quadrant Border",
	"MISSION_KLING_1_ZARUSH_FELL",			"HENDERSON HAS FALLEN",
	"MISSION_KLING_1_VANOSHAN_CAPTURED",	"WAKE HAS BEEN CAPTURED",
	"MISSION_KLING_1_MARTOK_DEAD",			"GENERAL THORMASSKK HAS BEEN KILLED",


    // ***[ ST:A2 - KLINGON MISSION 2 ]**************************
	"MISSION_KLING_2_MAIN_TITLE", "Ethics of War",
	"MISSION_KLING_2_KLINGON_BASE_DESTROYED_TITLE", "STARBASE FEROR HAS BEEN DESTROYED",
	"MISSION_KLING_2_CARDASSIANS_DESTROYED_TITLE", "THE OCCUPYING KLINGON FORCE HAS BEEN DEFEATED",
	"MISSION_KLING_2_SUBTITLE_MARTOK", "GNS King Grendel, General Thormasskk's Flagship
February 28th, 2292
Undisclosed location within the Federation, Alpha Quadrant",
	"MISSION_KLING_2_SUBTITLE_BEKTA", "GNS Gornskeen, Captain Skeethrask's Flagship
Location: Britannia System, Klingon Neutral Zone, Beta Quadrant",
	"MISSION_KLING_2_BEKTA_DESTROYED_TITLE", "CAPTAIN SKEETHRASK HAS BEEN KILLED",


    // ***[ ST:A2 - KLINGON MISSION 3 ]**************************
	"MISSION_KLING_3_TITLE",	"Divide and Conquer",
	"MISSION_KLING_3_SUBTITLE",	"March 3rd, 2292
Location: Bernard System, inside the Federation, Beta Quadrant",
	"MISSION_KLING_3_WIN",		"YOU HAVE SEIZED THE BERNARD SYSTEM",
	"MISSION_KLING_3_LOSE",		"YOUR FORCES HAVE BEEN DESTROYED",


    // ***[ ST:A2 - KLINGON MISSION 4 ]**************************
	"MISSION_KLING_4_TITLE",	"Starvation",
	"MISSION_KLING_4_SUBTITLE",	"March 9th, 2292 
Location: Near the Mornaur System, Klingon/Romulan/Federation Border, Beta Quadrant",
	"MISSION_KLING_4_WIN",		"YOU HAVE DESTROYED THE KLINGON CONVOY",
	"MISSION_KLING_4_LOSE",		"YOUR FORCES HAVE BEEN DESTROYED",
	"MISSION_KLING_4_LOSE_2",	"YOUR BLOCKADE HAS FAILED - CARGO FREIGHTERS REACHED THE PLANET",


    // ***[ ST:A2 - KLINGON MISSION 5 ]**************************
	"MISSION_KLING_5_TITLE",            "Desperate Measures",
	"MISSION_KLING_5_SUBTITLE",         "March 13th, 2292
Location: Research Facility Setor 3, pe'ch'GenH System, Klingon/Sha'Kurian Border, Beta Quadrant",
	"MISSION_KLING_5_FAIL_1",           "THE SUBSPACE JUMPDRIVE TEST SHIP HAS BEEN DESTROYED",
	"MISSION_KLING_5_FAIL_2",           "THORMASSKK HAS BEEN LOST!",
	"MISSION_KLING_5_WIN",              "YOU ARE VICTORIOUS!",
	"MISSION_KLING_5_FAIL_3",           "YOU HAVE FAILED THE CONFEDERACY",

    // ***[ ST:A2 - KLINGON MISSION 6 ]**************************
	"MISSION_KLING_6_TITLE",            "Gorn Diplomacy",
	"MISSION_KLING_6_SUBTITLE",         "March 19th, 2292
Location: Vornus System, Romulan/Gorn Border, Beta Quadrant",
	"MISSION_KLING_6_FAIL_TITLE_1",     "THORMASSKK HAS BEEN KILLED!",
	"MISSION_KLING_6_FAIL_TITLE_2",     "YOU HAVE FAILED!",

    // ***[ ST:A2 - KLINGON MISSION 7 ]**************************
	"MISSION_KLING_7_TITLE",            "The Battle of Corpus Majoris",
	"MISSION_KLING_7_SUBTITLE",         "March 29th, 2292
Location: Corpus Majoris System, near the Klingon/Federation Neutral Zone, inside the Klingon Empire, Beta Quadrant",
	"MISSION_KLING_7_WIN",              "YOU HAVE DESTROYED ALL THE KLINGON FORCES",
	"MISSION_KLING_7_LOSE",             "THE GNS KING GRENDEL HAS BEEN DESTROYED",

    // ***[ ST:A2 - KLINGON MISSION 8 ]**************************
	"MISSION_KLING_8_TITLE",            "Subterfuge",
	"MISSION_KLING_8_SUBTITLE",         "April 9th, 2292
Location: Tuzyri System, inside the Klingon Empire, Beta Quadrant",
	"MISSION_KLING_8_WIN",              "KLINGON SHIPYARDS DESTROYED",
	"MISSION_KLING_8_LOSE",             "THE GNS KING GRENDEL WAS DESTROYED",
	"MISSION_KLING_8_DETECTED",         "KLINGON FORCES DETECTED YOUR BASE",
	"MISSION_KLING_8_LOSE1",			"KLINGON FORCES DETECTED YOUR PRESENCE",

    // ***[ ST:A2 - KLINGON MISSION 9 ]**************************
    "MISSION_K09_TITLE",                "To Qo'NoS and Victory",
    "MISSION_K09_LOCATION",             "April 15th, 2292
Location:  Qo'NoS System, inside the Klingon Empire,  Beta Quadrant",
    "MISSION_K09_MARTOK",               "GNS King Grendel",
    "MISSION_K09_MARTOK_DESTROYED",     "THE GNS KING GRENDEL HAS BEEN DESTROYED",
    "MISSION_K09_SUCCESS",              "YOU HAVE TAKEN THE SYSTEM",
    "MISSION_K09_FAILURE",              "YOUR FORCES HAVE BEEN DESTROYED",

    // ***[ ST:A2 - KLINGON MISSION 10 ]*************************
	"MISSION_KLING_10_TITLE",           "Traitors Gate",
	"MISSION_KLING_10_SUBTITLE",        "April 22nd, 2292
Location: Talh'Nor Nebula (Formerly Talh'Nor Gates System), inside the Klingon Empire, Beta Quadrant",
	"MISSION_KLING_10_LOSE_1",          "THE GNS KING GRENDEL HAS BEEN DESTROYED",




    // ***[            ]*****************************************
    // ***[ CAMPAIGN 3 ]*****************************************
    // ***[            ]*****************************************

    // ***[ ST:A2 - BORG MISSION 1 ]*****************************
	"MISSION_BORG_1_TITLE",			"Survival of the Quickest",
	"MISSION_BORG_1_LOCATION",		"March 18th, 2292
Location: Doremos System, Outback Region, near Gorn/Federation Border Alpha/Beta Quadrant Border",
	"MISSION_BORG_1_QUEEN_LOST",	"COMMANDER NORTENE HAS BEEN KILLED",
	"MISSION_BORG_1_STATION_LOST",	"YOU HAVE NOT PROTECTED YOUR STATIONS",


    // ***[ ST:A2 - BORG MISSION 2 ]*****************************
	"MISSION_BORG_2_MAIN_TITLE",                      "Bitter Rivals",
	"MISSION_BORG_2_ALL_OBJECTIVES_COMPLETED_TITLE",  "FORMUS IS SECURE.",
	"MISSION_BORG_2_BORG_QUEEN_DESTROYED_TITLE",      "COMMANDER NORTENE HAS BEEN KILLED",
	"MISSION_BORG_2_SUBTITLE_BORG_QUEEN",             "Commander Nortene's Dreadnought
March 22nd, 2292
Location: Formus System, Federation Frontier, Alpha Quadrant",

    // ***[ ST:A2 - BORG MISSION 3 ]*****************************
	"MISSION_BORG_3_TITLE",		"A Pirate's Life...",
	"MISSION_BORG_3_WIN",		"YOU HAVE DESTROYED THE STARBASE",
	"MISSION_BORG_3_LOSE",		"YOUR FORCES HAVE BEEN DESTROYED",
	"MISSION_BORG_3_LOSE_2",	"YOUR STARBASE HAS BEEN DESTROYED",
	"MISSION_BORG_3_SUBTITLE",	"March 30th, 2292
Location: Metreen System, Outback Region, near Romulan Space, Beta Quadrant",

    // ***[ ST:A2 - BORG MISSION 4 ]*****************************
    "MISSION_B04_TITLE",            "Clipping the Eagle",
	"MISSION_B04_LOCATION",         "April 11th, 2292
Location:  Varinus, Romulan Space, Beta Quadrant",
    "MISSION_B04_QUEEN",            "Commander Nortene's Dreadnought",
    "MISSION_B04_QUEEN_DESTROYED",  "COMMANDER NORTENE's DREADNOUGHT HAS BEEN DESTROYED",
    "MISSION_B04_SUCCESS",          "THE ISC HAVE TAKEN CONTROL OF THIS SYSTEM",
    "MISSION_B04_FAILURE",          "THE ISC HAVE BEEN DEFEATED, BUT THE CONCORDIUM LIVES ON",

    // ***[ ST:A2 - BORG MISSION 5 ]*****************************
	"MISSION_BORG_5_TITLE",       "Gauntlet",
	"MISSION_BORG_5_SUBTITLE",    "April 21st, 2292
Location: DeGaulle System, Federation Space, Alpha Quadrant",
	"MISSION_BORG_5_SUBTITLE_2",  "Specimen: 'USS Romana'
Specimen: 'USS Titus'",
	"MISSION_BORG_5_LOSE_1",      "THE USS ROMANA HAS BEEN LOST",
	"MISSION_BORG_5_LOSE_2",      "THE USS TITUS HAS BEEN LOST",
	"MISSION_BORG_5_LOSE_3",      "STARBASE SB-4288 HAS BEEN LOST",
	"MISSION_BORG_5_WIN",         "TARGET VESSELS SUCCESSFULLY RELOCATED",

    // ***[ ST:A2 - BORG MISSION 6 ]*****************************
	"MISSION_BORG_6_TITLE",     "The Threat Revealed",
	"MISSION_BORG_6_SUBTITLE",  "April 30th, 2292
Location: Vorek System, Gorn Space, Beta Quadrant",
	"MISSION_BORG_6_LOSE",      "COMMANDER NORTENE HAS BEEN KILLED",
	"MISSION_BORG_6_WIN",       "WE HAVE CAPTURED THE GORN SCIENCE CENTER",

    // ***[ ST:A2 - BORG MISSION 7 ]*****************************
	"MISSION_BORG_7_TITLE",			"Mine Enemy's Enemy",
	"MISSION_BORG_7_SUBTITLE_1",	"Location: Venrix System, Beta Quadrant",
	"MISSION_BORG_7_SUBTITLE_2",	"June 4th, 2292
Location: Suah'Dron System, near the Klingon/Federation Neutral Zone, Beta Quadrant",
	"MISSION_BORG_7_ASSEMBLY",		"Technology 2702: Assembly Commencing",
	"MISSION_BORG_7_STARDATE_2",	"June 6th, 2292",
	"MISSION_BORG_7_DELTA",			"June 6th, 2292,
Location: Somewhere in the Galactic Fringe",
	"MISSION_BORG_7_LOSE",			"COMMANDER NORTENE'S DREADNOUGHT HAS BEEN DESTROYED",

    // ***[ ST:A2 - BORG MISSION 8 ]*****************************
	"MISSION_BORG_8_MAIN_TITLE",                    "Tsunami",
	"MISSION_BORG_8_SPECIES_8472_DESTROYED_TITLE",  "THE NEO-THOLIANS HAVE BEEN ELIMINATED FROM THIS SECTOR",
	"MISSION_BORG_8_BORG_QUEEN_DESTROYED_TITLE",    "COMMANDER NORTENE's DREADNOUGHT HAS BEEN DESTROYED",
	"MISSION_BORG_8_ENTERPRISE_DESTROYED_TITLE",    "THE ENTERPRISE HAS BEEN DESTROYED",
	"MISSION_BORG_8_SUBTITLE_BORG_QUEEN",           "Commander Nortene
June 11th, 2292
Location: Orion System, Federation Space, Alpha Quadrant",

    // ***[ ST:A2 - BORG MISSION 9 ]*****************************
    "MISSION_B09_TITLE",                 "The Final Frontier",
	"MISSION_B09_LOCATION",              "July 17th, 2292
Location:  Hurik System, beyond the Federation Frontier, Alpha Quadrant",
    "MISSION_B09_ENTERPRISE",            "USS Enterprise NCC-1701-A",
    "MISSION_B09_QUEEN",                 "Commander Nortene's Dreadnought",
    "MISSION_B09_QUEEN_DESTROYED",       "COMMANDER NORTENE's DREADNOUGHT HAS BEEN DESTROYED",
    "MISSION_B09_ENTERPRISE_DESTROYED",  "THE ENTERPRISE HAS BEEN DESTROYED",
    "MISSION_B09_STARBASE_DESTROYED",    "THE FEDERATION STARBASE HAS BEEN DESTROYED",
    "MISSION_B09_SHIPYARD_DESTROYED",    "THE FEDERATION SHIPYARD HAS BEEN DESTROYED",
    "MISSION_B09_SUCCESS",               "THE MISSION IS A SUCCESS",

    // ***[ ST:A2 - BORG MISSION 10 ]****************************
	"MISSION_BORG_10_ENT_KILLED",	"THE ENTERPRISE HAS BEEN DESTROYED",
	"MISSION_BORG_10_QUEEN_KILLED",	"COMMANDER NORTENE HAS BEEN KILLED",
	"MISSION_BORG_10_FLUIDIC",		"In Andromeda...",
	"MISSION_BORG_10_8472",			"NEO-THOLIAN SHIPS HAVE ESCAPED TO THE ALPHA QUADRANT.",
	"MISSION_BORG_10_TITLE",		"Fortes Fortuna Adiuviat",
	"MISSION_BORG_10_BIG_MAMA",		"THE RIFT GENERATOR HAS BEEN DESTROYED",
	"MISSION_BORG_10_ALPHA_QUAD",	"Back in the Milky Way......",
	"MISSION_BORG_10_STA2",			"KLINGON ACADEMY II",






    // ***[           ]******************************************
    // ***[ TUTORIALS ]******************************************
    // ***[           ]******************************************

    // ***[ ST:A2 - TUTORIAL 1 () ]******************************
	"MISSION_TUT_UI_TITLE",			"Tutorial: User Interface",
	"MISSION_TUT_UI_SUBTITLE",		"STARFLEET ACADEMY ADVANCED TUTITION",
	"MISSION_TUT_UI_SUBTITLE_1",	"Retinal Authorisation Status: SCANNING...",
	"MISSION_TUT_UI_SUBTITLE_2",	"Retinal Authorisation Status: VERIFYING AUTHORISATION...  PLEASE WAIT...",
	"MISSION_TUT_UI_SUBTITLE_3",	"Retinal Authorisation Status: APPROVED",
	"MISSION_TUT_UI_SUBJECT_1",		"Subject: User Interface",


    // ***[ ST:A2 - TUTORIAL 2 () ]******************************
	"MISSION_TUT_RES_TITLE",		"Tutorial: Resources and Economy",

    // ***[ ST:A2 - TUTORIAL 3 (Combat) ]************************
    "MISSION_T03_TITLE",  "Tutorial: Combat",

    // ***[ ST:A2 - TUTORIAL 4 () ]******************************
	"MISSION_TUT_ROM_TITLE",		"Tutorial: The Romulan Star Empire",
	"MISSION_TUT_ROM_SUBTITLE_1",	"TAL-SHIAR COMMAND SIMULATION",
	"MISSION_TUT_ROM_SUBTITLE_2",	"Retinal Authorisation Status: APPROVED",
	"MISSION_TUT_ROM_SUBJECT_1",	"Subject: The Romulan Star Empire",
	"MISSION_TUT_ROM_SUBJECT_2",	"Subject: Romulan Non-Combat Vessels",
	"MISSION_TUT_ROM_SUBJECT_3",	"Subject: Sparrow Class Colony Vessel",
	"MISSION_TUT_ROM_SUBJECT_4",	"Subject: Falcon Class Fleet Repair Tender",
	"MISSION_TUT_ROM_SUBJECT_5",	"Subject: Kestrel Class Assault Transport",
	"MISSION_TUT_ROM_SUBJECT_6",	"Subject: War Bird Class Destroyer",
	"MISSION_TUT_ROM_SUBJECT_7",	"Subject: Stormbird Class Cruiser",
	"MISSION_TUT_ROM_SUBJECT_8",	"Subject: Legion Class Light Cruiser",
	"MISSION_TUT_ROM_SUBJECT_9",	"Subject: Imperium Class Battlecruiser",
	"MISSION_TUT_ROM_SUBJECT_10",	"Subject: Praetorial Shipyard",
	"MISSION_TUT_ROM_SUBJECT_11",	"Subject: Peregrine Class Torpedo Cruiser",
	"MISSION_TUT_ROM_SUBJECT_12",	"Subject: Raven Class Battlecruiser",
	"MISSION_TUT_ROM_SUBJECT_13",	"Subject: Senator Class Command Cruiser",
	"MISSION_TUT_ROM_SUBJECT_14",	"Subject: Condor Class Dreadnought",
	"MISSION_TUT_ROM_SUBJECT_15",	"Subject: Imperial Hawk Class Battleship",
	"MISSION_TUT_ROM_SUBJECT_16",	"COMBAT COMPUTER SIMULATION",
	"MISSION_TUT_ROM_SUBJECT_17",	"Subject: Research Centre",
	"MISSION_TUT_ROM_SUBJECT_18",	"Subject: Praetorial Research Facility",
	"MISSION_TUT_ROM_SUBJECT_19",	"Subject: Praetorial Enhancement Institute",
    "MISSION_TUT_ROM_SUBJECT_99",   "Subject: Gladius Class Frigate",

    // ***[ ST:A2 - TUTORIAL 5 () ]******************************
	"MISSION_TUTORIAL_5_MAIN_TITLE",	"Tutorial: The Klingon Empire",
	"MISSION_TUTORIAL_5_STARFLEET",		"ELITE COMMAND ACADEMY COMMAND SIMULATION",
	"MISSION_TUTORIAL_5_RETINAL",		"Retinal Authorisation Status: APPROVED",
	"MISSION_TUTORIAL_5_GALOR",			"Subject: VoD'leH Class Battlecruiser",
	"MISSION_TUTORIAL_5_YARD2",			"Subject: Imperial Shipyard",
	"MISSION_TUTORIAL_5_KELDON",		"Subject: puwml Class Dreadnought",
	"MISSION_TUTORIAL_5_KULINOR",		"Subject: met'LetH Class Torpedo Cruiser",
	"MISSION_TUTORIAL_5_ROBOTICS",		"Subject: Project pIH D'ktagh Station",
	"MISSION_TUTORIAL_5_STARBASE",		"Subject: Klingon Starbase",
	"MISSION_TUTORIAL_5_FREIGHTER",		"Subject: Tah'Pah Class Mining Freighter",
	"MISSION_TUTORIAL_5_CARGO",			"Subject: BehK'TaH Class Cargo Freighter",

    // ***[ ST:A2 - TUTORIAL 6 (Species 8472) ]******************
	"MISSION_TUTORIAL_6_MAIN_TITLE",                    "Tutorial: The Tholian Assembly",
	"MISSION_TUTORIAL_6_TITLE_STARFLEET_INTELLIGENCE",  "CLASSIFIED DATA - STARFLEET DIPLOMATIC CORPS",
	"MISSION_TUTORIAL_6_SUBTITLE_RETINAL",              "Retinal Authorisation Status: APPROVED",
	"MISSION_TUTORIAL_6_SUBTITLE_SPECIES_BEHEMOTH",     "Subject: Sapphire Class Dreadnought",
	"MISSION_TUTORIAL_6_SUBTITLE_SPECIES_TRANSMUTER",   "Subject: Crystalene Converter",
	"MISSION_TUTORIAL_6_SUBTITLE_SPECIES_BIOGENESIS",   "Subject: Pre-Formed Crystalene Fabrication Facility",
	"MISSION_TUTORIAL_6_SUBTITLE_SPECIES_FRIGATE",      "Subject: Bismuth Class Crystal Carver",
	"MISSION_TUTORIAL_6_SUBTITLE_SPECIES_BATTLESHIP",   "Subject: Amethyst Class Battlecruiser",

	// Map Names for multiplayer maps
	"MP02ESSS_MAP_NAME",		"The Essence Of War",
	"MP02EYE_MAP_NAME",		"The Third Winter",
	"MP02POOL_MAP_NAME",		"Acheron",
	"MP02RING_MAP_NAME",		"Rings Of Opposition",
	"MP02STEP_MAP_NAME",		"Divided Worlds",
	"MP02TWIN_MAP_NAME",		"Death Snare",
	"MP02WHY_MAP_NAME",		"Worlds Apart",
	"MP04ASSAULT_MAP_NAME",	"Head to Head",
	"MP04COLAT_MAP_NAME",	"Collect Precious Metals",
	"MP04COLPLAN_MAP_NAME",	"Colonise Planets",
	"MP04CTF_MAP_NAME",		"Capture the Flag",
	"MP04DEFPLAN_MAP_NAME",	"The Alamo",
	"MP04LOOP_MAP_NAME",		"The Loop",
	"MP04PIE_MAP_NAME",		"Four Sisters",
	"MP04SPIN_MAP_NAME",		"Black Hole",
	"MP04TERR_MAP_NAME",		"Dante's World",
	"MP04TOSS_MAP_NAME",		"The Palatine System",
	"MP06BLUE_MAP_NAME",		"Wide Open",
	"MP06CORN_MAP_NAME",		"Planets",
	"MP06EGGS_MAP_NAME",		"Fat City",
	"MP06GOLD_MAP_NAME",		"Best Defense",
	"MP06LINK_MAP_NAME",		"The Prize",
	"MP06RUNG_MAP_NAME",		"Rung",
	"MP06SHOT_MAP_NAME",		"Back to Back",
	"MP08ASSAULT_MAP_NAME",	"The Ultimate Battle",
	"MP08COLAT_MAP_NAME",	"Gold Rush",
	"MP08COLPLAN_MAP_NAME",	"Colonise Planets",
	"MP08CTF_MAP_NAME",		"Capture the Flag",
	"MP08DEFPLAN_MAP_NAME",	"Stonewall",
	"MP08DOTS_MAP_NAME",		"Strings",
	"MP08GORN_MAP_NAME",		"Gates",
	"MP08HOMES_MAP_NAME",	"Homes",
	"MP08LATT_MAP_NAME",		"Treasures",
	"MP08SPAT_MAP_NAME",		"Columns",
	"MP08WALR_MAP_NAME",		"Warzone",

	// Name suffixes for saucer separation weapon
	"SAUCER_NAME_SUFFIX", "Saucer",
	"BRIDGE_NAME_SUFFIX", "Bridge",

	"UI_GRAPHICS_INITIALIZATION_ERROR_MESSAGE", "Graphics initialisation failed.  No compatible Direct3D8 hardware accelerator detected.",
	"UI_INITIALIZATION_ERROR_TITLE", "Klingon Academy II: Initialisation Failure",

	"GUI_CP_RECYCLE_METAL_TOOLTIP", "Transmute tritanium into dilithium <^M>",
	"GUI_CP_RECYCLE_METAL_VTOOLTIP", "Transmute 143 units of tritanium into 100 units of dilithium.",
	"GUI_CP_RECYCLE_DILITHIUM_TOOLTIP", "Transmute dilithium into tritanium <^D>",
	"GUI_CP_RECYCLE_DILITHIUM_VTOOLTIP", "Transmute 143 units of dilithium into 100 units of tritanium.",

	// *** [ EVENTS.ODF ] ***	
	"EVENTS_FERENGI_SCAVENGER",					"Scavengers have commandeered one of your derelict vessels.",
	"EVENTS_NO_REPAIR_FACILITIES",				"You have no repair facilities. Build a shipyard.",
	"EVENTS_BEGINNING_SHIP_CONSTRUCTION",		"Beginning ship construction.",
	"EVENTS_SHIP_CONSTRUCTION_COMPLETE",		"Ship construction complete.",
	"EVENTS_BEGINNING_STATION_CONSTRUCTION",	"Beginning station construction.",
	"EVENTS_STATION_CONSTRUCTION_COMPLETED",	"Station construction complete.",
	"EVENTS_RESEARCH_BEGUN",						"Research initiated.",
	"EVENTS_RESEARCH_COMPLETE",					"Research completed.",
	"EVENTS_ENEMY_ENGAGED",						"Enemy engaged.",
	"EVENTS_BASE_UNDER_ATTACK",					"Station under attack.",
	"EVENTS_PLANET_UNDER_ATTACK",				"Colony under attack.",
	"EVENTS_PLANET_DEPLETED_METAL",				"Planetary reserves depleted.",
	"EVENTS_INSUFFICIENT_DILITHIUM",			"Insufficient dilithium to build. Mine more dilithium.",
	"EVENTS_INSUFFICIENT_LATINUM",				"Insufficient precious metals to build. Mine more precious metals or establish more trade routes",
	"EVENTS_INSUFFICIENT_METAL",				"Insufficient tritanium to build. Extract more tritanium",
	"EVENTS_INSUFFICIENT_BIOMATTER",			"Insufficient crystalene.",
	"EVENTS_INSUFFICIENT_LATINUM_BUY",			"Insufficient precious metals to buy.",
	"EVENTS_INSUFFICIENT_METAL_BUY",			"Insufficient tritanium to buy.",
	"EVENTS_INSUFFICIENT_DILITHIUM_BUY",		"Insufficient dilithium to buy.",
	"EVENTS_GAINED_PLANET",						"New colony established.",
	"EVENTS_CONQUERED_PLANET",					"New planet under your control.",
	"EVENTS_LOST_PLANET",						"You have lost control of a colony",
	"EVENTS_INSUFFICIENT_CREW",					"Insufficient personnel to build. Colonise a planet.",
	
	"EVENTS_RESERVE_FLEET_CALLED",					"Reserve Fleet Starship on-route.",
	"EVENTS_MIRAK_FLEET_CALLED",					"Mirak Survivors on-route.",
	"EVENTS_PIRATE_FLEET_CALLED",					"A deal has been struck...",
	"EVENTS_SHAKURIAN_FLEET_CALLED",				"Sha'Kurian Mercenary Carrier on-route.",
	"EVENTS_TERRAN_FLEET_CALLED",					"WARNING! Dimensional Rift detected!",

	"EVENTS_INSUFFICIENT_FED_OFFICERS",			"Insufficient Starfleet Officers to build.",
	"EVENTS_INSUFFICIENT_KLING_OFFICERS",			"Insufficient KDF Officers to build.",
	"EVENTS_INSUFFICIENT_ROM_OFFICERS",			"Insufficient RSN Officers to build.",
	"EVENTS_INSUFFICIENT_CARD_OFFICERS",			"Insufficient GRN Officers to build.",
	"EVENTS_INSUFFICIENT_BORG_OFFICERS",			"Insufficient ISPF Officers to build.",
	"EVENTS_INSUFFICIENT_SPECIES_OFFICERS",			"Insufficient Commanders to build.",
	"EVENTS_INSUFFICIENT_HYDRAN_OFFICERS",			"Insufficient HRN Officers to build.",
	"EVENTS_INSUFFICIENT_LYRAN_OFFICERS",			"Insufficient ILN Officers to build.",

	"EVENTS_INSUFFICIENT_SPACE",				"Insufficient space for more upgrades. Build another starbase.",
	"EVENTS_CANNOT_BUILD_LOCATION",				"Can not build at specified location.",
	"EVENTS_ENTERED_DANGEROUS_NEBULA",			"Your ship has entered a dangerous nebula.",
	"EVENTS_DESTROYED_DANGEROUS_NEBULA",		"Your ship is taking damage of the effects of a nebula.",
	"EVENTS_PLANETARY_SHIELDS_FUNCTIONAL",		"Planetary shields are now operational.",
	"EVENTS_BORG_NANITES",						"Computer systems infected by Borg nanites.",
	"EVENTS_TRANSWARPGATE_DETECTED",			"Subspace Rift detected.",
	"EVENTS_SUBSPACE_SHOCKWAVE_DETECTED",		"Subspace Shockwave detected.",
	"EVENTS_TEMPORAL_STASIS_FIELD_DETECTED",	"Tholian Web detected.",
	"EVENTS_SPATIAL_RIFT_DETECTED",				"Triparralax Shockwave detected.",
	"EVENTS_DEPLETED_MOON",						"Moon has been depleted of dilithium.",
	"EVENTS_DEPLETED_LATINUM_NEBULA",			"Deposit has been depleted of precious metals.",
	"EVENTS_COLONIZATION_BEGUN",				"Colonisation has begun.",
	"EVENTS_VICTORY",								"You are victorious!",
	"EVENTS_FAILURE",								"You are vanquished.",
	"EVENTS_ELIMINATED",							"You were eliminated.",
	"EVENTS_PLAYER_ELIMINATED",					"A player has been eliminated.",
	"EVENTS_GAME_TIED",							"The game is tied!",
	"EVENTS_FLAG_TAKEN",							"Your flag was taken!",
	"EVENTS_FLAG_DROPPED",						"Your flag was dropped.",
	"EVENTS_FLAG_RETURNED",						"Your flag was returned.",
	"EVENTS_FLAG_CAPTURED",						"Your flag was captured!",
	"EVENTS_FLAG_TAKEN_GENERIC",				"A flag was taken!",
	"EVENTS_FLAG_DROPPED_GENERIC",				"A flag was dropped.",
	"EVENTS_FLAG_RETURNED_GENERIC",				"A flag was returned.",
	"EVENTS_FLAG_CAPTURED_GENERIC",				"A flag was captured!",
	"EVENTS_FLAG_RETURN_TO_BASE",				"You have taken an enemy flag!  Return it to your Starbase!",
	"EVENTS_FLAG_DROPPED_ENEMY",				"You dropped an enemy flag.",
	"EVENTS_FLAG_CAPTURED_ENEMY",				"You captured an enemy flag!",
	"EVENTS_FAILED_DEFEND_PLANET",				"You have failed to defend your planet.",
	"EVENTS_CIVILIZATION_DOMINATES",			"Your civilisation dominates!",
	"EVENTS_HELD_BASE",							"You held your base!",
	"EVENTS_VANQUISHED",							"You are vanquished.",
	"EVENTS_LATINUM_STASH",						"You were first to collect the precious metal stash!",
	"EVENTS_ENEMY_LATINUM_STASH",				"The enemy collected the precious metal stash!",
	"EVENTS_TIME_REMAINING",						"There is one minute remaining until the cease fire ends!",
	"EVENTS_CEASE_FIRE_OVER",					"The Cease Fire is Over!",

	"HOLOGEN",			"Holo Generator - USS Cerberus.",
	"HOLOGEN_V",		"Disguises ship as targeted ship. Once disguised cannot attack the race who's disguise it has adopted.",
	"MISSION_BORG_10_INCURSION_DESTROYED_TITLE", "THE CERBERUS HAS BEEN DESTROYED",

	"GUI_CREDITSSCREEN_SKIP",					"Press [ESC] to exit",
	"GUI_BP_MAIN_MENU",							"Options Menu",
	"GUI_BP_COMM_MENU",							"Comm Menu",

	// Race names No longer used
	"GUI_RD_BORG",							"ISC",
	"GUI_RD_CARDASSIAN",					"Gorn",
	"GUI_RD_FEDERATION",					"United Federation of Planets",
	"GUI_RD_FERENGI",						"Orion Pirate",
	"GUI_RD_KLINGON",						"Klingon Empire",
	"GUI_RD_NORACE",						"Uninhabited",
	"GUI_RD_ROMULAN",						"Romulan",
	"GUI_RD_8472",							"Tholian",

	"UI_GRAPHICS_STARTUP_ERROR_MESSAGE",	"Graphics startup failed.  Reboot you computer, then run dxdiag.exe, select the Display tab, and test Direct3D",
	"UI_INSUFFICIENT_VIRTUAL_MEMORY", 		"There is insufficient virtual memory to run KA2.  Increase the size of your windows swap file.",
	
	"GUI_OD_BRIEFING_SUMMARY",				"BRIEFING SUMMARY:",
	"GUI_OD_OBJECTIVES",					"OBJECTIVES:",

	"GUI_PLAYER",							"Player",
	"ADLOG_SAVE",							"Save",
	"ADLOG_DONE",							"Done",

	"GUI_SD_SPE_READY",						"Ready",
	"GUI_SD_SPE_EMPTY",						"Recharging",

	// Note to translators:
	// This is how you set the date/time format for saved games.
	// The format is taken from the Windows strftime() command.  The symbols
	// give you the following:
	// %b (month abbreviation) %d (day of month) 
	// %I (hour in 12-hour format) %M (Minutes) %p (am/pm) %H (hour in 24 hour format)
	// The format you choose should be equivalently small, ie, no weekday name, or year.
	"GUI_DATE_TIME_FORMAT",					"%d %b %I:%M %p",

	// Formation tooltips
	"GUI_CP_ARROW_TOOLTIP",					"Arrow",
	"GUI_CP_ARROW_VTOOLTIP",				"Arrow: Attack by darting back and forth.",
	"GUI_CP_CIRCLE_TOOLTIP",				"Circle",
	"GUI_CP_CIRCLE_VTOOLTIP",				"Circle: Attack by circling target.",
	"GUI_CP_CLOVER_TOOLTIP",				"Cloverleaf",
	"GUI_CP_CLOVER_VTOOLTIP",				"Cloverleaf: Attack in a clover leaf pattern.",
	"GUI_CP_COLUMN_TOOLTIP",				"Column",
	"GUI_CP_COLUMN_VTOOLTIP",				"Column: Puts ships in a column for movement with a narrow sensor footprint.",
	"GUI_CP_SHEET_TOOLTIP",					"Sheet",
	"GUI_CP_SHEET_VTOOLTIP",				"Sheet: Arrays ships in 2D plane.  Maximises sensor scanning.",
	"GUI_CP_V_TOOLTIP",						"V",
	"GUI_CP_V_VTOOLTIP",					"V: V Formation",
	"GUI_CP_WEDGE_TOOLTIP",					"Wedge",
	"GUI_CP_WEDGE_VTOOLTIP",				"Wedge: Wedge Formation",
	"GUI_CP_WALL_TOOLTIP",					"Assault Wall",
	"GUI_CP_WALL_VTOOLTIP",					"Assault Wall: Offensive.",
	"GUI_CP_X_TOOLTIP",						"X",
	"GUI_CP_X_VTOOLTIP",					"X: X Formation. Blockade. Spreads combat ships out widely to guard map areas.",

	// new message per Doug Pearson for multiplayer setup screen.  Message is displayed when 5 or more players (including ai's) join a network game.  (not instant action games)
	"PLAYER_OVERLIMIT_WARNING",				"This game exceeds the recommended number of players (4) for network play. It is possible to exceed this number of players, but performance will vary depending on your hardware configuration, Internet connection type, and the performance of your opponent's machines.",

	//
	"In-Progress Construction",				"In-Progress Construction",

	// Ship and Station Unit Names
	"Fluidic Nebula",						"Fluidic Nebula",
	"Fluidic Rift",							"Fluidic Rift",
	"Sun1",									"Sun1",
	"Sun2",									"Sun2",
	"Sun3",									"Sun3",
	"Asteroid",								"Asteroid",
	"Directional light",					"Directional light",
	"Latinum Nebula",						"Precious Metal Deposit",
	"Asteroid Field",						"Asteroid Field",
	"Big Asteroid Field",					"Big Asteroid Field",
	"Asteroid Type 1",						"Asteroid Type 1",
	"Black Hole",							"Black Hole",
	"Dilithium Moon",						"Dilithium Moon",
	"Construction",							"Construction",
	"Wormhole",								"Wormhole",
	"Dilithium Moon (Inf.)",				"Dilithium Moon",
	"Nebula",								"Nebula",
	"Big Cerulean Nebula",					"Big Cerulean Nebula",
	"Tachyon Nebula",						"Tachyon Nebula",
	"Big Radioactive Nebula",				"Big Radioactive Nebula",
	"Big Metreon Gas Nebula",				"Big Metreon Gas Nebula",
	"Big Mutara Nebula",					"Big Mutara Nebula",
	"Big Metaphasic Nebula",				"Big Metaphasic Nebula",
	"Planet",								"Planet",
	"Test Ship",							"Test Ship",
	"Space Wreckage",						"Space Wreckage",
	"Enterprise",							"Enterprise",
	"rift",									"rift",
	"Scrap",								"Scrap",


//****************
//** SPECIAL WEPS
//****************

"ROM_CLOAK",			"Cloaking Device",
"ROM_CLOAK_V",  		"Emits an energy field rendering a ship invisible to the eye and normal sensors.",
"PLANET_SHIELD",		"Construct Planetary Shield Generator",
"PLANET_SHIELD_V",		"Provides this planet with a powerful defensive shield.",
"8472_RESOURCEBEAM",			"Resource Extraction Beam - Granite Class Crystalene Extractor",
"8472_RESOURCEBEAM_V",  		"Breaks down ships and stations into their raw materials",

//****************
//** SHIPS								
//****************	

"FED_WASHINGTON_V", " - Washington Class
 - Troop Transport (FAPA)
 - Crew Complement: 500 
 - Crew Training Level: Marines
 - Hull Rating: 420 HSF
 - Shield Rating: 725 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30 Mk/s

 - 2x Type B Phaser Emitter
 - 1x Photon Torpedo Tube
 - Quantum Carrier-Wave Beam (w/ Research)
",

"FED_MISSOURI_V", " - Missouri Class
 - Battleship (FBB)
 - Crew Complement: 1190 
 - Crew Training Level: Professional
 - Hull Rating: 900 HSF
 - Shield Rating: 1850 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 28.5 Mk/s
 - Wasp Attack Shuttles (3 Total) 

 - 6x Type B Phaser Emitter
 - 6x Photon Torpedo Tube
 - Quantum Carrier-Wave Beam (w/ Research)
",

"FED_STAREMPIRE_V", " - Star Empire Class
 - Dreadnought (FDN)
 - Crew Complement: 1022
 - Crew Training Level: Professional
 - Hull Rating: 800 HSF
 - Shield Rating: 1400 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30 Mk/s
 - Wasp Attack Shuttles (2 Total) 

 - 5x Type B Phaser Emitter
 - 4x Heavy Photon Torpedo Tube
",

"FED_EXCELSIOR_REFIT_V", " - Excelsior Class Refit
 - Heavy Battlecruiser (FBCH)
 - Crew Complement: 795 
 - Crew Training Level: Professional
 - Hull Rating: 540 HSF
 - Shield Rating: 980 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 33 Mk/s
 - Wasp Attack Shuttle (1 Total) 

 - 4x Type B Phaser Emitter
 - 4x Photon Torpedo Tube
",

"FED_EXCELSIOR_V", " - Excelsior Class
 - Battlecruiser (FBC)
 - Crew Complement: 795 
 - Crew Training Level: Professional
 - Hull Rating: 420 HSF
 - Shield Rating: 725 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 33 Mk/s
 - Wasp Attack Shuttle (1 Total) 

 - 4x Type B Phaser Emitter
 - 4x Photon Torpedo Tube
",

"FED_CLYDESDALE_V", " - Clydesdale Class
 - Cargo Freighter (FAK)
 - Crew Complement: 100 
 - Crew Training Level: Civilian
 - Hull Rating: 250 HSF
 - Shield Rating: 523 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 25 Mk/s

 - Unarmed
",

"FED_ARKROYAL_V", " - Ark Royal Class
 - Fleet Carrier (FCVN)
 - Crew Complement: 1290 
 - Crew Training Level: Professional
 - Hull Rating: 944 HSF
 - Shield Rating: 1600 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30.75 Mk/s
 - Hornet Strike Fighters (12 Total) 

 - 3x Type B Phaser Emitter
 - 2x Photon Torpedo Tube
",

"FED_ARKROYALB_V", " - Ark Royal Class
 - Fleet Carrier (FCVN)
 - Crew Complement: 1290 
 - Crew Training Level: Professional
 - Hull Rating: 944 HSF
 - Shield Rating: 1600 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30.75 Mk/s
 - Hornet-B Strike Fighters (12 Total) 

 - 3x Type B Phaser Emitter
 - 2x Photon Torpedo Tube
",

"FED_LEXINGTON_V", " - Lexington Class
 - Command Cruiser (FCC)
 - Crew Complement: 610 
 - Crew Training Level: Professional
 - Hull Rating: 300 HSF
 - Shield Rating: 697 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 35.25 Mk/s
 - Type 2 Shuttles (3 Total) 

 - 4x Type B Phaser Emitter
 - 2x Photon Torpedo Tube
 - Quantum Carrier-Wave Beam (w/ Research)
 - Electronic Warfare Equipment (ECM & ECCM)
",

"FED_INDEPENDENCE_V", " - Independence Class
 - Colony Ship (FFB)
 - Crew Complement: 500 
 - Crew Training Level: Civilian
 - Hull Rating: 250 HSF
 - Shield Rating: 523 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 25 Mk/s

 - Unarmed
",

"FED_LIBERTY_V", " - Liberty Class
 - Construction Tender (FACS)
 - Crew Complement: 500 
 - Crew Training Level: Civilian
 - Hull Rating: 250 HSF
 - Shield Rating: 523 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 25 Mk/s

 - Unarmed
",

"FED_CONSTITUTION_REFIT_V", " - Constitution Class Refit
 - Heavy Cruiser (FCA)
 - Crew Complement: 500 
 - Crew Training Level: Professional
 - Hull Rating: 250 HSF
 - Shield Rating: 523 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 37.5 Mk/s
 - Type 2 Shuttles (2 Total) 

 - 4x Type B Phaser Emitter
 - 2x Photon Torpedo Tube
",

"FED_AKULA_REFIT_V", " - Akula Class Refit
 - Destroyer (FDD)
 - Crew Complement: 110 
 - Crew Training Level: Professional
 - Hull Rating: 230 HSF
 - Shield Rating: 407 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 42 Mk/s

 - 3x Type B Phaser Emitter
 - 2x Photon Torpedo Tube
",

"FED_WARSAW_V", " - Warsaw Class
 - Destroyer Leader (FDL)
 - Crew Complement: 110 
 - Crew Training Level: Professional
 - Hull Rating: 230 HSF
 - Shield Rating: 407 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 42 Mk/s

 - 2x Type B Phaser Emitter
 - 1x Type H Phaser Emitter
 - 2x Photon Torpedo Tube
 - Electronic Counter-Countermeasures (ECCM)
",

"FED_ULYSSES_V", " - Ulysses Class
 - Dreadnought (FDN)
 - Crew Complement: 1005 
 - Crew Training Level: Professional
 - Hull Rating: 600 HSF
 - Shield Rating: 1260 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30.75 Mk/s
 - Wasp Attack Shuttles (2 Total) 

 - 5x Type B Phaser Emitter
 - 4x Photon Torpedo Tube
 - Quantum Carrier-Wave Beam (w/ Research)
 - Electronic Warfare Equipment (ECM & ECCM)
",

"FED_BELKNAP_V", " - Belknap Class
 - Plasma Dreadnought (FDNp)
 - Crew Complement: 1005 
 - Crew Training Level: Professional
 - Hull Rating: 600 HSF
 - Shield Rating: 1260 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30.75 Mk/s
 - Wasp Attack Shuttles (2 Total) 

 - 5x Type B Phaser Emitter
 - 2x Type H Plasma Torpedo Tube
 - Electronic Warfare Equipment (ECM & ECCM)
",

"FED_OBERTH_V", " - Oberth Class
 - Escort (FEC)
 - Crew Complement: 45 
 - Crew Training Level: Professional
 - Hull Rating: 130 HSF
 - Shield Rating: 252 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 46.5 Mk/s

 - 2x Type B Phaser Emitter
 - 1x Photon Torpedo Tube
 - Electronic Warfare Equipment (ECM & ECCM)
 - ESPlaDs (w/ Research)
",

"FED_HORNET_V", " - Hornet
 - Strike Fighter (FFA)
 - Crew Complement: 0 (1 Pilot only)
 - Hull Rating: 12 HSF
 - Shield Rating: 12 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 50 Mk/s

 - 2x Type IV Phaser Emitter
 - 1x Photon Torpedo Tube (3 Torpedoes Total)
",

"FED_HORNET_B_V", " - Hornet-B
 - Strike Fighter (FFA)
 - Crew Complement: 0 (1 Pilot only)
 - Hull Rating: 12 HSF
 - Shield Rating: 12 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 50 Mk/s

 - 2x Type IVG Gatling Phaser Emitter
 - 1x Photon Torpedo Tube (3 Torpedoes Total)
",

"FED_FREELANCER_V", " - Freelancer Class
 - Mining Freighter (FDF)
 - Crew Complement: 100 
 - Crew Training Level: Civilian
 - Hull Rating: 250 HSF
 - Shield Rating: 523 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 25 Mk/s

 - Unarmed
",

"FED_OKINAWA_V", " - Okinawa Class
 - Frigate (FFF)
 - Crew Complement: 90 
 - Crew Training Level: Professional
 - Hull Rating: 170 HSF
 - Shield Rating: 350 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 44.25 Mk/s

 - 2x Type B Phaser Emitter
 - 2x Photon Torpedo Tube
",

"FED_SOYUZ_V", " - Soyuz Class
 - Gun Cruiser (FCG)
 - Crew Complement: 390 
 - Crew Training Level: Professional
 - Hull Rating: 250 HSF
 - Shield Rating: 480 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 39.75 Mk/s
 - Type 2 Shuttle (1 Total) 

 - 3x Type B Phaser Emitter
 - 5x Type H Phaser Emitter
",

"FED_RANGER_V", " - Ranger Class
 - Galactic Survey Cruiser (FGSC)
 - Crew Complement: 500 
 - Crew Training Level: Professional
 - Hull Rating: 250 HSF
 - Shield Rating: 523 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 37.5 Mk/s
 - Type 2 Shuttles (2 Total) 

 - 2x Type B Phaser Emitter
 - 2x Photon Torpedo Tube
 - Electronic Countermeasures (ECM)
",

"FED_MIRANDA_V", " - Miranda Class
 - Light Cruiser (FCL)
 - Crew Complement: 390 
 - Crew Training Level: Professional
 - Hull Rating: 250 HSF
 - Shield Rating: 480 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 39.75 Mk/s
 - Type 2 Shuttle (1 Total) 

 - 3x Type B Phaser Emitter
 - 2x Photon Torpedo Tube
",

"FED_RICHMOND_V", " - Richmond Class
 - Heavy Cruiser, New (FNCA)
 - Crew Complement: 610 
 - Crew Training Level: Professional
 - Hull Rating: 300 HSF
 - Shield Rating: 697 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 35.25 Mk/s
 - Type 2 Shuttles (3 Total) 

 - 5x Type B Phaser Emitter
 - 2x Photon Torpedo Tube
",

"FED_LANGLEY_V", " - Langley Class
 - Battleship, Obsolete (FOBB)
 - Crew Complement: 1070 
 - Crew Training Level: Professional
 - Hull Rating: 850 HSF
 - Shield Rating: 1700 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 28.5 Mk/s

 - 6x Type A Phaser Emitter
 - 6x Photon Torpedo Tube (Obsolete)
 - Quantum Carrier-Wave Beam
",

"FED_CONSTITUTION_V", " - Constitution Class
 - Heavy Cruiser, Obsolete (FOCA)
 - Crew Complement: 500 
 - Crew Training Level: Professional
 - Hull Rating: 230 HSF
 - Shield Rating: 450 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 37 Mk/s

 - 4x Type A Phaser Emitter
 - 2x Photon Torpedo Tube (Obsolete)
",

"FED_AKULA_V", " - Akula Class
 - Destroyer, Obsolete (FODD)
 - Crew Complement: 95 
 - Crew Training Level: Professional
 - Hull Rating: 200 HSF
 - Shield Rating: 350 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 40.5 Mk/s

 - 3x Type A Phaser Emitter
 - 2x Photon Torpedo Tube (Obsolete)
",

"FED_FEDERATION_V", " - Federation Class
 - Dreadnought, Obsolete (FODN)
 - Crew Complement: 1005 
 - Crew Training Level: Professional
 - Hull Rating: 650 HSF
 - Shield Rating: 1150 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30 Mk/s

 - 5x Type A Phaser Emitter
 - 4x Photon Torpedo Tube (Obsolete)
",

"FED_DAVIDS_V", " - Davids Class
 - Frigate, Obsolete (FOFF)
 - Crew Complement: 80 
 - Crew Training Level: Professional
 - Hull Rating: 140 HSF
 - Shield Rating: 300 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 44.25 Mk/s

 - 2x Type A Phaser Emitter
 - 2x Photon Torpedo Tube (Obsolete)
",

"FED_SURYA_V", " - Surya Class
 - Light Cruiser, Obsolete (FOCL)
 - Crew Complement: 390 
 - Crew Training Level: Professional
 - Hull Rating: 230 HSF
 - Shield Rating: 400 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 38.75 Mk/s

 - 3x Type A Phaser Emitter
 - 2x Photon Torpedo Tube (Obsolete)
",

"FED_DAVIDS_S_V", " - Davids Class, Scout Variant
 - Scout Frigate, Obsolete (FOFS)
 - Crew Complement: 80
 - Crew Training Level: Professional
 - Hull Rating: 140 HSF
 - Shield Rating: 300 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 44.25 Mk/s

 - 2x Type A Phaser Emitter
 - Electronic Warfare Equipment (ECM & ECCM)
",

"FED_PREMONITION_V", " - Premonition Class
 - Timeship (Hull Classification Unknown)
 - Crew Complement: 885
 - Crew Training Level: Professional
 - Hull Rating: 1500 HSF
 - Shield Rating: 2500 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 45 Mk/s

 - 4x Mark XII Phaser Array
 - 1x Mark XII Quantum Torpedo Launcher (3x Burst)
",

"FED_UNITY_V", " - Unity Class
 - Fleet Repair Tender (FAR)
 - Crew Complement: 500
 - Crew Training Level: Civilian
 - Hull Rating: 420 HSF
 - Shield Rating: 725 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 30 Mk/s

 - Unarmed
",

"FED_SALAZAR_V", " - Salazar Class
 - Torpedo Cruiser (FCT)
 - Crew Complement: 500
 - Crew Training Level: Professional
 - Hull Rating: 250 HSF
 - Shield Rating: 523 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 37.5 Mk/s
 - Type 2 Shuttles (2 Total) 

 - 2x Type B Phaser Emitter
 - 4x Photon Torpedo Tube
 - 2x Proximity Burst Photon Torpedo Tube
",

"FED_YAMATO_V", " - Yamato Class
 - Battleship, Experimental (FBBX)
 - Crew Complement: 1290
 - Crew Training Level: Professional
 - Hull Rating: 944 HSF
 - Shield Rating: 1983 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30.75 Mk/s
 - Wasp Attack Shuttles (3 Total) 

 - 6x Type B Phaser Emitter
 - 4x Photon Torpedo Tube
 - 2x Assault Phaser (w/ Research)
",

"GOR_ASP_V", " - Asp Class
 - Assault Transport (GAPA)
 - Crew Complement: 500 
 - Crew Training Level: Marines
 - Hull Rating: 750 HSF
 - Shield Rating: 480 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 33 Mk/s

 - 2x Gorn Type Phaser Emitter
 - 1x Type G Plasma Torpedo Tube
 - Quantum Carrier-Wave Beam (w/ Research)
",

"GOR_KING_GRENDEL_V", " - King Grendel Class
 - Battleship (GBB)
 - Crew Complement: 652 
 - Crew Training Level: Professional
 - Hull Rating: 1200 HSF
 - Shield Rating: 800 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 33 Mk/s

 - 6x Gorn Type Phaser Emitter
 - 4x Type G Plasma Torpedo Tube
 - Quantum Carrier-Wave Beam (w/ Research)
",

"GOR_BASILISK_V", " - Basilisk Class
 - Battlecruiser (GBC)
 - Crew Complement: 334
 - Crew Training Level: Professional
 - Hull Rating: 750 HSF
 - Shield Rating: 480 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 36.25 Mk/s

 - 6x Gorn Type Phaser Emitter
 - 3x Type G Plasma Torpedo Tube
 - Quantum Carrier-Wave Beam (w/ Research)
",

"GOR_COBRA_V", " - Cobra Class
 - Cargo Freighter (GAK)
 - Crew Complement: 100 
 - Crew Training Level: Civilian
 - Hull Rating: 750 HSF
 - Shield Rating: 480 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 33 Mk/s

 - Unarmed
",

"GOR_BEOWULF_V", " - Beowulf Class
 - Command Cruiser (GCC)
 - Crew Complement: 334 
 - Crew Training Level: Professional
 - Hull Rating: 750 HSF
 - Shield Rating: 480 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 36.25 Mk/s

 - 6x Gorn Type Phaser Emitter
 - 2x Type G Plasma Torpedo Tube
 - Electronic Warfare Equipment (ECM & ECCM)
",

"GOR_PYTHON_V", " - Python Class
 - Colony Ship (GFB)
 - Crew Complement: 500 
 - Crew Training Level: Civilian
 - Hull Rating: 750 HSF
 - Shield Rating: 480 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 33 Mk/s

 - Unarmed
",

"GOR_LIZARD_V", " - Lizard Class
 - Construction Tender (GACS)
 - Crew Complement: 500 
 - Crew Training Level: Civilian
 - Hull Rating: 600 HSF
 - Shield Rating: 320 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 33 Mk/s

 - Unarmed
",

"GOR_EUROMASTYX_V", " - Euromastyx Class
 - Heavy Cruiser (GCA)
 - Crew Complement: 244 
 - Crew Training Level: Professional
 - Hull Rating: 600 HSF
 - Shield Rating: 320 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 39.75 Mk/s

 - 4x Gorn Type Phaser Emitter
 - 1x Type G Plasma Torpedo Tube
 - Graviton Density Distortion Sphere (w/ Research)
",

"GOR_ANACONDA_V", " - Anaconda Class
 - Destroyer (GDD)
 - Crew Complement: 75 
 - Crew Training Level: Professional
 - Hull Rating: 380 HSF
 - Shield Rating: 220 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 44.25 Mk/s

 - 4x Gorn Type Phaser Emitter
 - Gravimetric Harmonic Resonance Cannon (w/ Research)
",

"GOR_GRENDEL_V", " - Grendel Class
 - Dreadnought (GDN)
 - Crew Complement: 478 
 - Crew Training Level: Professional
 - Hull Rating: 960 HSF
 - Shield Rating: 650 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 33 Mk/s

 - 6x Gorn Type Phaser Emitter
 - 4x Type G Plasma Torpedo Tube
 - Quantum Carrier-Wave Beam (w/ Research)
",

"GOR_ADDER_V", " - Adder Class
 - Mining Freighter (GDF)
 - Crew Complement: 100 
 - Crew Training Level: Civilian
 - Hull Rating: 600 HSF
 - Shield Rating: 320 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 33 Mk/s

 - Unarmed
",

"GOR_KING_SNAKE_V", " - King Snake Class
 - Frigate (GFF)
 - Crew Complement: 49 
 - Crew Training Level: Professional
 - Hull Rating: 260 HSF
 - Shield Rating: 150 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 46.5 Mk/s

 - 4x Gorn Type Phaser Emitter
 - 1x Type G Plasma Torpedo Tube
",

"GOR_RATTLESNAKE_V", " - Rattlesnake Class
 - Light Cruiser (GCL)
 - Crew Complement: 125 
 - Crew Training Level: Professional
 - Hull Rating: 540 HSF
 - Shield Rating: 275 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 41.25 Mk/s

 - 4x Gorn Type Phaser Emitter
 - Graviton Density Distortion Sphere (w/ Research)
",

"GOR_VIPER_V", " - Viper Class
 - Pseudo-Fighter (GFA)
 - Crew Complement: 0 (3 Crewmembers only)
 - Hull Rating: 75 HSF
 - Shield Rating: 75 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 44.25 Mk/s

 - 3x Gorn Type Phaser Emitter
 - 2x Type G Plasma Torpedo Tube
",

"GOR_KING_SNAKE_S_V", " - King Snake Class, Scout Variant
 - Scout Frigate (GFS)
 - Crew Complement: 49 
 - Crew Training Level: Professional
 - Hull Rating: 260 HSF
 - Shield Rating: 150 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 46.5 Mk/s

 - 3x Gorn Type Phaser Emitter
 - Electronic Warfare Equipment (ECM & ECCM)
",

"GOR_SAURUS_V", " - Saurus Class
 - Scout Cruiser (GCS)
 - Crew Complement: 244 
 - Crew Training Level: Professional
 - Hull Rating: 600 HSF
 - Shield Rating: 320 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 39.75 Mk/s

 - 3x Gorn Type Phaser Emitter
 - 1x Type G Plasma Torpedo Tube
 - Electronic Countermeasures (ECM)
",

"GOR_GECKO_V", " - Gecko Class
 - Fleet Repair Tender (GAR)
 - Crew Complement: 75 
 - Crew Training Level: Civilian
 - Hull Rating: 380 HSF
 - Shield Rating: 220 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 44.25 Mk/s

 - Unarmed
",

"GOR_GLORMASKT_V", " - Glormaskt Class
 - Special Duties Vessel (GXX)
 - Crew Complement: 50 
 - Crew Training Level: Professional
 - Hull Rating: 750 HSF
 - Shield Rating: 480 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 33 Mk/s

 - Triparallax Device
",

"GOR_REPTILLON_V", " - Reptillon Class
 - Torpedo Cruiser (GCT)
 - Crew Complement: 244 
 - Crew Training Level: Professional
 - Hull Rating: 600 HSF
 - Shield Rating: 320 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 39.75 Mk/s

 - 2x Gorn Type Phaser Emitter
 - 3x Type G Plasma Torpedo Tube
 - 2x Parallax Torpedo Tube 
",

"HYD_SARACEN_V", " - Saracen Class
 - Troop Transport (HAPA)
 - Crew Complement: 500 
 - Crew Training Level: Marines
 - Hull Rating: 420 HSF
 - Shield Rating: 725 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30 Mk/s

 - 2x Hydran Type Gatling Phaser Emitter
 - 1x Fusion Beam Emitter
",

"HYD_PEASANT_V", " - Peasant Class
 - Construction Tender (HACS)
 - Crew Complement: 500 
 - Crew Training Level: Civilian
 - Hull Rating: 250 HSF
 - Shield Rating: 523 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 25 Mk/s

 - Unarmed
",

"HYD_AUTOCRAT_V", " - Autocrat Class
 - Colony Ship (HFB)
 - Crew Complement: 500 
 - Crew Training Level: Civilian
 - Hull Rating: 250 HSF
 - Shield Rating: 523 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 25 Mk/s

 - Unarmed
",

"HYD_SQUIRE_V", " - Squire Class
 - Fleet Repair Tender (HAR)
 - Crew Complement: 500
 - Crew Training Level: Civilian
 - Hull Rating: 420 HSF
 - Shield Rating: 725 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 30 Mk/s

 - Unarmed
",

"HYD_REGENT_V", " - Regent Class
 - Light Cruiser (HCL)
 - Crew Complement: 335 
 - Crew Training Level: Professional
 - Hull Rating: 280 HSF
 - Shield Rating: 415 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 38.75 Mk/s
 - Fusileer Hellbore Fighters (4 Total) 

 - 4x Hydran Type Gatling Phaser Emitter
 - 2x Fusion Beam Emitter
",

"HYD_BARON_V", " - Baron Class
 - Heavy Cruiser (HCA)
 - Crew Complement: 380
 - Crew Training Level: Professional
 - Hull Rating: 340 HSF
 - Shield Rating: 520 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 37 Mk/s
 - Halberdier Fusion Beam Fighters (5 Total) 

 - 4x Hydran Type Gatling Phaser Emitter
 - 2x Hellbore Cannon
 - 1x Fusion Beam Emitter
",

"HYD_DUKE_V", " - Duke Class
 - Command Cruiser (HCC)
 - Crew Complement: 445 
 - Crew Training Level: Professional
 - Hull Rating: 430 HSF
 - Shield Rating: 660 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 37 Mk/s
 - Halberdier Fusion Beam Fighters (6 Total)  

 - 5x Hydran Type Gatling Phaser Emitter
 - 2x Hellbore Cannon
 - 1x Photon Cannon
 - Electronic Warfare Equipment (ECM & ECCM)
",

"HYD_PIKEMAN_V", " - Pikeman Class
 - Hellbore Monitor (HMH)
 - Crew Complement: 440
 - Crew Training Level: Professional
 - Hull Rating: 450 HSF
 - Shield Rating: 580 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 20 Mk/s
 - Halberdier Fusion Beam Fighters (5 Total) 

 - 2x Hydran Type Gatling Phaser Emitter
 - 4x Hellbore Cannon
 - 1x Photon Cannon (Proximity Shells)
",

"HYD_KNIGHT_V", " - Knight Class
 - Destroyer (HDD)
 - Crew Complement: 145
 - Crew Training Level: Professional
 - Hull Rating: 210 HSF
 - Shield Rating: 405 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 44.25 Mk/s
 - Fusileer Hellbore Fighters (3 Total) 

 - 3x Hydran Type Gatling Phaser Emitter
 - 1x Fusion Beam Emitter
",

"HYD_PALADIN_V", " - Paladin Class
 - Destroyer Leader (HDL)
 - Crew Complement: 155
 - Crew Training Level: Professional
 - Hull Rating: 210 HSF
 - Shield Rating: 405 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 44.25 Mk/s
 - Fusileer Hellbore Fighters (3 Total) 

 - 3x Hydran Type Gatling Phaser Emitter
 - 1x Fusion Beam Emitter
 - Electronic Counter-Countermeasures (ECCM)
",

"HYD_MONARCH_V", " - Monarch Class
 - Dreadnought (HDN)
 - Crew Complement: 1188
 - Crew Training Level: Professional
 - Hull Rating: 580 HSF
 - Shield Rating: 1200 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30 Mk/s
 - Halberdier Fusion Beam Fighters (6 Total) 

 - 6x Hydran Type Gatling Phaser Emitter
 - 2x Hellbore Cannon
 - 2x Photon Cannon
",

"HYD_ROYALSOV_V", " - Royal Sovereign Class
 - Fleet Carrier (HCVN)
 - Crew Complement: 1200
 - Crew Training Level: Professional
 - Hull Rating: 944 HSF
 - Shield Rating: 1600 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30.75 Mk/s
 - Mixed Fighter Complement (12 Total) 

 - 4x Hydran Type Gatling Phaser Emitter
 - 2x Fusion Beam Emitter
 - 1x Photon Cannon
",

"HYD_FUSILEER_V", " - Fusileer
 - Strike Fighter (HFA)
 - Crew Complement: 0 (1 Pilot only)
 - Hull Rating: 12 HSF
 - Shield Rating: 12 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 50 Mk/s

 - 1x Hydran Fighter Type Gatling Phaser Emitter
 - 1x Hellbore Cannon (3 Power Cells)
",

"HYD_SERF_V", " - Serf Class
 - Mining Freighter (HDF)
 - Crew Complement: 100 
 - Crew Training Level: Civilian
 - Hull Rating: 230 HSF
 - Shield Rating: 550 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 25 Mk/s

 - Unarmed
",

"HYD_MERCHANT_V", " - Merchant Class
 - Cargo Freighter (HAK)
 - Crew Complement: 100 
 - Crew Training Level: Civilian
 - Hull Rating: 250 HSF
 - Shield Rating: 523 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 25 Mk/s

 - Unarmed
",

"HYD_YEOMAN_V", " - Yeoman Class
 - Frigate (HFF)
 - Crew Complement: 55 
 - Crew Training Level: Professional
 - Hull Rating: 190 HSF
 - Shield Rating: 290 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 42.5 Mk/s
 - Halberdier Fusion Beam Fighters (2 Total) 

 - 2x Hydran Type Gatling Phaser Emitter
 - 1x Hellbore Cannon
",

"HYD_ARCHER_V", " - Archer Class
 - Scout Frigate (HFS)
 - Crew Complement: 55 
 - Crew Training Level: Professional
 - Hull Rating: 190 HSF
 - Shield Rating: 290 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 42.5 Mk/s

 - 2x Hydran Type Gatling Phaser Emitter
 - Electronic Warfare Equipment (ECM & ECCM)
",

"ISC_IAPA_V", " - Type APA-VII
 - Troop Transport (IAPA)
 - Crew Complement: 520 
 - Crew Training Level: Marines
 - Hull Rating: 530 HSF
 - Shield Rating: 260 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30 Mk/s

 - 2x Concordium Type Phaser Emitter
 - 2x Type I Plasma Torpedo Tube
",

"ISC_ICVN_V", " - Type CVN-VI
 - Fleet Carrier (ICVN)
 - Crew Complement: 1140 
 - Crew Training Level: Professional
 - Hull Rating: 944 HSF
 - Shield Rating: 1750 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 28.5 Mk/s
 - Type FA-VII Strike Fighters (12 Total) 

 - 6x Concordium Type Phaser Emitter
 - 2x Type I Plasma Torpedo Tube
 - Subspace Distortion Generator
",

"ISC_ICVNB_V", " - Type CVN-VI
 - Fleet Carrier (ICVN)
 - Crew Complement: 1140 
 - Crew Training Level: Professional
 - Hull Rating: 944 HSF
 - Shield Rating: 1750 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 28.5 Mk/s
 - Type FA-IX Strike Fighters (12 Total) 

 - 6x Concordium Type Phaser Emitter
 - 2x Type I Plasma Torpedo Tube
 - Subspace Distortion Generator
",

"ISC_IFB_V", " - Type FB-I
 - Colony Ship (IFB)
 - Crew Complement: 500 
 - Crew Training Level: Civilian
 - Hull Rating: 260 HSF
 - Shield Rating: 530 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 25 Mk/s

 - Unarmed
",

"ISC_IACS_V", " - Type ACS-XIV
 - Construction Tender (IACS)
 - Crew Complement: 500 
 - Crew Training Level: Civilian
 - Hull Rating: 260 HSF
 - Shield Rating: 530 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 25 Mk/s

 - Unarmed
",

"ISC_ICA_V", " - Type CA-VIII
 - Heavy Cruiser (ICA)
 - Crew Complement: 500 
 - Crew Training Level: Professional
 - Hull Rating: 260 HSF
 - Shield Rating: 530 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 37.5 Mk/s

 - 5x Concordium Type Phaser Emitter
 - 2x Type I Plasma Torpedo Tube
 - Plasmatic Pulsar Device, Standard Variant
",

"ISC_ICAD_V", " - Type CA-VIIId
 - Heavy Cruiser, Disruptor Refit (ICAd)
 - Crew Complement: 500 
 - Crew Training Level: Professional
 - Hull Rating: 260 HSF
 - Shield Rating: 530 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 37.5 Mk/s

 - 5x Concordium Type Phaser Emitter
 - 2x Heavy Disruptor
 - 2x Type I Plasma Torpedo Tube
 - Plasmatic Pulsar Device, Standard Variant
",

"ISC_IDD_V", " - Type DD-III
 - Destroyer (IDD)
 - Crew Complement: 110 
 - Crew Training Level: Professional
 - Hull Rating: 240 HSF
 - Shield Rating: 410 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 42 Mk/s

 - 3x Concordium Type Phaser Emitter
 - 2x Type I Plasma Torpedo Tube
",

"ISC_IDL_V", " - Type DD-IIIFL
 - Destroyer Leader (IDL)
 - Crew Complement: 110 
 - Crew Training Level: Professional
 - Hull Rating: 240 HSF
 - Shield Rating: 410 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 42 Mk/s

 - 2x Concordium Type Phaser Emitter
 - 2x Type I Plasma Torpedo Tube
 - Electronic Counter-Countermeasures (ECCM)
",

"ISC_IDLD_V", " - Type DD-IIIFLd
 - Destroyer Leader, Disruptor Refit (IDLd)
 - Crew Complement: 110 
 - Crew Training Level: Professional
 - Hull Rating: 240 HSF
 - Shield Rating: 410 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 42 Mk/s

 - 2x Concordium Type Phaser Emitter
 - 2x Heavy Disruptor
 - 2x Type I Plasma Torpedo Tube
 - Electronic Counter-Countermeasures (ECCM)
",

"ISC_IDDD_V", " - Type DD-IIId
 - Destroyer, Disruptor Refit (IDDd)
 - Crew Complement: 110 
 - Crew Training Level: Professional
 - Hull Rating: 240 HSF
 - Shield Rating: 410 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 42 Mk/s

 - 3x Concordium Type Phaser Emitter
 - 2x Heavy Disruptor
 - 2x Type I Plasma Torpedo Tube
",

"ISC_IDN_V", " - Type DN-III
 - Dreadnought (IDN)
 - Crew Complement: 1005 
 - Crew Training Level: Professional
 - Hull Rating: 944 HSF
 - Shield Rating: 1875 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30.75 Mk/s

 - 6x Concordium Type Phaser Emitter
 - 4x Type I Plasma Torpedo Tube
 - Plasmatic Pulsar Device, Heavy Variant
 - Electronic Warfare Equipment (ECM & ECCM)
",

"ISC_IDND_V", " - Type DN-IIId
 - Dreadnought, Disruptor Refit (IDNd)
 - Crew Complement: 1005 
 - Crew Training Level: Professional
 - Hull Rating: 944 HSF
 - Shield Rating: 1875 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30.75 Mk/s

 - 6x Concordium Type Phaser Emitter
 - 2x Heavy Disruptor
 - 4x Type I Plasma Torpedo Tube
 - Plasmatic Pulsar Device, Heavy Variant
 - Subspace Rift Generator
 - Electronic Warfare Equipment (ECM & ECCM)
",

"ISC_IFA_V", " - Type FA-VII
 - Strike Fighter (IFA)
 - Crew Complement: 0 (1 Pilot only)
 - Hull Rating: 12 HSF
 - Shield Rating: 12 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 50 Mk/s

 - 1x Concordium Fighter Type Phaser Emitter
 - 1x Type I Plasma Torpedo Tube (Single Shot)
",

"ISC_IFAB_V", " - Type FA-IX
 - Strike Fighter (IFA)
 - Crew Complement: 0 (1 Pilot only)
 - Hull Rating: 12 HSF
 - Shield Rating: 12 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 50 Mk/s

 - 2x Concordium Fighter Type Phaser Emitter
 - 1x Type I Plasma Torpedo Tube (Single Shot)
",


"ISC_IDF_V", " - Type DF-XX
 - Mining Freighter (IDF)
 - Crew Complement: 100 
 - Crew Training Level: Civilian
 - Hull Rating: 260 HSF
 - Shield Rating: 530 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 25 Mk/s

 - Unarmed
",

"ISC_IFF_V", " - Type FF-IV
 - Frigate (IFF)
 - Crew Complement: 90 
 - Crew Training Level: Professional
 - Hull Rating: 180 HSF
 - Shield Rating: 340 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 44.25 Mk/s

 - 2x Concordium Type Phaser Emitter
 - 2x Type I Plasma Torpedo Tube
 - Subspace Jump Drive
",

"ISC_IFFD_V", " - Type FF-IVd
 - Frigate, Disruptor Refit (IFFd)
 - Crew Complement: 90 
 - Crew Training Level: Professional
 - Hull Rating: 180 HSF
 - Shield Rating: 340 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 44.25 Mk/s

 - 2x Concordium Type Phaser Emitter
 - 2x Heavy Disruptor
 - 2x Type I Plasma Torpedo Tube
 - Subspace Jump Drive
",

"ISC_ICCL_V", " - Type CCL-II
 - Light Command Cruiser (ICCL)
 - Crew Complement: 390 
 - Crew Training Level: Professional
 - Hull Rating: 235 HSF
 - Shield Rating: 495 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 39.75 Mk/s

 - 3x Concordium Type Phaser Emitter
 - 2x Type I Plasma Torpedo Tube
 - Plasmatic Pulsar Device, Light Variant
 - Electronic Warfare Equipment (ECM & ECCM)
",

"ISC_ICL_V", " - Type CL-V
 - Light Cruiser (ICL)
 - Crew Complement: 390 
 - Crew Training Level: Professional
 - Hull Rating: 235 HSF
 - Shield Rating: 495 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 39.75 Mk/s

 - 4x Concordium Type Phaser Emitter
 - 2x Type I Plasma Torpedo Tube
 - Plasmatic Pulsar Device, Light Variant
",

"ISC_IFS_V", " - Type FF-IVsc
 - Scout Frigate (IFS)
 - Crew Complement: 90 
 - Crew Training Level: Professional
 - Hull Rating: 180 HSF
 - Shield Rating: 340 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 44.25 Mk/s

 - 2x Concordium Type Phaser Emitter
 - Subspace Jump Drive
 - Electronic Warfare Equipment (ECM & ECCM)
",

"ISC_ICSA_V", " - Type CSA-III
 - Star Cruiser (ICSA)
 - Crew Complement: 520 
 - Crew Training Level: Professional
 - Hull Rating: 425 HSF
 - Shield Rating: 650 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 37.5 Mk/s

 - 5x Concordium Type Phaser Emitter
 - 2x Type I Plasma Torpedo Tube
 - Subspace Distortion Generator
 - Electronic Warfare Equipment (ECM & ECCM)
",

"ISC_IAR_V", " - Type AR-XII
 - Fleet Repair Tender (IAR)
 - Crew Complement: 500 
 - Crew Training Level: Civilian
 - Hull Rating: 260 HSF
 - Shield Rating: 530 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 25 Mk/s

 - Unarmed
",

"ISC_ICT_V", " - Type CT-II
 - Torpedo Cruiser (ICT)
 - Crew Complement: 480 
 - Crew Training Level: Professional
 - Hull Rating: 260 HSF
 - Shield Rating: 530 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 37.5 Mk/s

 - 2x Concordium Type Phaser Emitter
 - 4x Type I Plasma Torpedo Tube
 - 2x Proximity Burst Photon Torpedo Tube
",

"KLI_POISONEDBARB_V", " - D7Q Chava'Kal (Poisoned Barb) Class
 - Assault Transport (KAPA)
 - Crew Complement: 500 
 - Crew Training Level: Marines
 - Hull Rating: 280 HSF
 - Shield Rating: 380 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 22.5 Mk/s

 - 2x Disruptor
 - 2x Heavy Disruptor
",

"KLI_SWORDOFKAHLESS_V", " - B11 qeyLIS bet'Leth (Sword of Kahless) Class
 - Battleship (KBB)
 - Crew Complement: 770
 - Crew Training Level: Professional
 - Hull Rating: 800 HSF
 - Shield Rating: 1260 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 26.25 Mk/s
 - D'ktagh (Dagger) Shuttles (3 Total)  

 - 6x Disruptor
 - 4x Heavy Photon Torpedo Tube
 - Assault Phaser (w/ Research)
",

"KLI_EMPEROR_V", " - C8B VoD'leH (Emperor) Class
 - Heavy Battlecruiser (KBCH)
 - Crew Complement: 505
 - Crew Training Level: Professional
 - Hull Rating: 370 HSF
 - Shield Rating: 573 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 30.75 Mk/s
 - D'ktagh (Dagger) Shuttles (2 Total)  

 - 4x Disruptor
 - 2x Frequency Modulated Particle Accelerator Cannon
 - 1x Heavy Photon Torpedo Tube
 - Cloaking Device
",

"KLI_BIRDOFBLOOD_V", " - C8 Ber'Taa (Bird of Blood) Class
 - Supercruiser (KCB)
 - Crew Complement: 683
 - Crew Training Level: Professional
 - Hull Rating: 460 HSF
 - Shield Rating: 670 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 30 Mk/s
 - D'ktagh (Dagger) Shuttles (3 Total)  

 - 4x Disruptor
 - 5x Photon Torpedo Tube
 - Cloaking Device
",

"KLI_LIFEBLOOD_V", " - D7F BehK'TaH (Lifeblood) Class
 - Cargo Freighter (KAK)
 - Crew Complement: 100
 - Crew Training Level: Civilian
 - Hull Rating: 280 HSF
 - Shield Rating: 380 FSP
 - Sensor Rating: 400 SRU
 - Impulse Speed: 22.5 Mk/s

 - 2x Disruptor
",

"KLI_MOTHEROFDEATH_V", " - B10V Talh'vor (Mother of Death) Class
 - Battlecarrier (KCVA)
 - Crew Complement: 770
 - Crew Training Level: Professional
 - Hull Rating: 800 HSF
 - Shield Rating: 980 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 25 Mk/s
 - Hegh'GogH (Iron Fist) Heavy Fighters (9 Total)  

 - 6x Disruptor
 - 1x Heavy Photon Torpedo Tube
",

"KLI_MOTHEROFDEATHB_V", " - B10V Talh'vor (Mother of Death) Class
 - Battlecarrier (KCVA)
 - Crew Complement: 770
 - Crew Training Level: Professional
 - Hull Rating: 800 HSF
 - Shield Rating: 980 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 25 Mk/s
 - StoH'GogH (Steel Fist) Heavy Fighters (9 Total)  

 - 6x Disruptor
 - 1x Heavy Photon Torpedo Tube
",

"KLI_WARRIORSANGER_V", " - D7M Suvwl' QeH (Warrior's Anger) Class
 - Command Cruiser (KCC)
 - Crew Complement: 395
 - Crew Training Level: Professional
 - Hull Rating: 260 HSF
 - Shield Rating: 478 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 33 Mk/s
 - D'ktagh (Dagger) Shuttles (2 Total)  

 - 4x Disruptor
 - 2x Photon Torpedo Tube
 - Gravimetric Harmonic Resonance Cannon (w/ Research)
 - Electronic Countermeasures (ECM) 
 - Cloaking Device
",

"KLI_SUSPICIOUS_CARGO_V", " - F5Q pIH (Suspicious) Class
 - Cargo Frigate (KFC)
 - Crew Complement: 105
 - Crew Training Level: Marines
 - Hull Rating: 170 HSF
 - Shield Rating: 317 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 42 Mk/s

 - 4x Disruptor
 - Cloaking Device
",

"KLI_BRAVESETTLER_V", " - D7U tuQ'jaCh (Brave Settler) Class
 - Colony Ship (KFB)
 - Crew Complement: 500
 - Crew Training Level: Civilian
 - Hull Rating: 280 HSF
 - Shield Rating: 380 FSP
 - Sensor Rating: 400 SRU
 - Impulse Speed: 22.5 Mk/s

 - 2x Disruptor
",

"KLI_WARPIG_V", " - L3 Maj'TagH (War Pig) Class
 - Construction Tender (KACS)
 - Crew Complement: 500
 - Crew Training Level: Civilian
 - Hull Rating: 280 HSF
 - Shield Rating: 380 FSP
 - Sensor Rating: 400 SRU
 - Impulse Speed: 25 Mk/s

 - 2x Disruptor
",

"KLI_CONQUEROR_V", " - D7C qItI'tinga' (Great Powerful Conqueror) Class
 - Heavy Cruiser (KCA)
 - Crew Complement: 340
 - Crew Training Level: Professional
 - Hull Rating: 280 HSF
 - Shield Rating: 380 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 33 Mk/s
 - D'ktagh (Dagger) Shuttle (1 Total)  

 - 2x Disruptor
 - 2x Heavy Disruptor
 - 1x Photon Torpedo Tube
 - Cloaking Device
",

"KLI_INSURRECTION_V", " - F15 QuD (Insurrection) Class
 - Destroyer (KDD)
 - Crew Complement: 75
 - Crew Training Level: Professional
 - Hull Rating: 220 HSF
 - Shield Rating: 365 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 39.75 Mk/s

 - 4x Disruptor
 - 1x Frequency Modulated Particle Accelerator Cannon
 - 1x Photon Torpedo Tube
 - Cloaking Device
",

"KLI_CAPTAIN_V", " - F15L VoD (Captain) Class
 - Destroyer Leader (KDL)
 - Crew Complement: 75
 - Crew Training Level: Professional
 - Hull Rating: 220 HSF
 - Shield Rating: 365 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 39.75 Mk/s

 - 2x Disruptor
 - 2x Heavy Disruptor
 - 1x Photon Torpedo Tube
 - Electronic Counter-Countermeasures (ECCM)
 - Cloaking Device
",

"KLI_ACCUSER_V", " - C9A pumwI' (Accuser) Class
 - Dreadnought (KDN)
 - Crew Complement: 660
 - Crew Training Level: Professional
 - Hull Rating: 550 HSF
 - Shield Rating: 830 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 28.5 Mk/s
 - D'ktagh (Dagger) Shuttles (3 Total)  

 - 5x Disruptor
 - 2x Heavy Photon Torpedo Tube
 - Anti-Matter Field Projector (w/ Research)
 - Electronic Countermeasures (ECM) 
 - Cloaking Device
",

"KLI_BIRDOFPREY_V", " - E12 B'Rel (Bird of Prey) Class
 - Escort (KEC)
 - Crew Complement: 17
 - Crew Training Level: Professional
 - Hull Rating: 140 HSF
 - Shield Rating: 220 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 44.25 Mk/s

 - 2x Light Disruptor
 - 1x Photon Torpedo Tube
 - Cloaking Device
",

"KLI_IRONFIST_V", " - Hegh'GogH (Iron Fist)
 - Heavy Fighter (KFA)
 - Crew Complement: 0 (1 Pilot only)
 - Hull Rating: 17 HSF
 - Shield Rating: 17 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 45 Mk/s

 - 2x Light Disruptor
 - 1x Heavy Disruptor
 - 1x Photon Torpedo Tube (3 Torpedoes Total)
",

"KLI_BLOODLINE_V", " - L2 Tah'paH (Bloodline) Class
 - Mining Freighter (KDF)
 - Crew Complement: 100
 - Crew Training Level: Civilian
 - Hull Rating: 280 HSF
 - Shield Rating: 380 FSP
 - Sensor Rating: 400 SRU
 - Impulse Speed: 25 Mk/s

 - 2x Disruptor
",

"KLI_SUSPICIOUS_BATTLE_V", " - F5B pIH (Suspicious) Class
 - Battle Frigate (KFF)
 - Crew Complement: 45
 - Crew Training Level: Professional
 - Hull Rating: 170 HSF
 - Shield Rating: 317 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 42 Mk/s

 - 2x Disruptor
 - 2x Heavy Disruptor
 - Cloaking Device
",

"KLI_RELENTLESS_V", " - D5C Qa'HoS (Relentless) Class
 - Light Cruiser (KCL)
 - Crew Complement: 280
 - Crew Training Level: Professional
 - Hull Rating: 220 HSF
 - Shield Rating: 370 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 37.5 Mk/s

 - 4x Disruptor
 - 1x Photon Torpedo Tube
 - Cloaking Device
",

"KLI_KRONOS_V", " - C7 Qo'NoS (Kronos) Class
 - Battlecruiser (KBC)
 - Crew Complement: 380
 - Crew Training Level: Professional
 - Hull Rating: 280 HSF
 - Shield Rating: 490 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 33 Mk/s
 - D'ktagh (Dagger) Shuttles (1 Total)  

 - 4x Disruptor
 - 2x Heavy Disruptor
 - 1x Photon Torpedo Tube
 - Cloaking Device
",

"KLI_WARSCOUT_V", " - D6S Maj'NuQ (War Scout) Class
 - Scout Cruiser (KCS)
 - Crew Complement: 340
 - Crew Training Level: Professional
 - Hull Rating: 230 HSF
 - Shield Rating: 323 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 33 Mk/s

 - 4x Disruptor
 - 1x Photon Torpedo Tube
 - Electronic Countermeasures (ECM) 
 - Cloaking Device
",

"KLI_SUSPICIOUS_SCIENCE_V", " - F5S pIH (Suspicious) Class
 - Science Frigate (KFS)
 - Crew Complement: 35
 - Crew Training Level: Professional
 - Hull Rating: 170 HSF
 - Shield Rating: 317 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 42 Mk/s

 - 4x Disruptor
 - Sensor Jamming Equipment
 - Electronic Countermeasures (ECM) 
 - Cloaking Device
",

"KLI_SUSPICIOUS_REPAIR_V", " - F5U pIH (Suspicious) Class
 - Fleet Repair Frigate (KFR)
 - Crew Complement: 35
 - Crew Training Level: Professional
 - Hull Rating: 170 HSF
 - Shield Rating: 317 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 42 Mk/s

 - 4x Disruptor
 - Cloaking Device
",

"KLI_EXBIRDOFPREY_V", " - E12X Experimental B'Rel Class
 - Escort, Experimental (KECX)
 - Crew Complement: 17
 - Crew Training Level: Professional
 - Hull Rating: 140 HSF
 - Shield Rating: 220 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 44.25 Mk/s

 - 1x Photon Torpedo Tube
 - Modified Cloaking Field Generator
 - Cloaking Device
",

"KLI_SHORTSWORD_V", " - D7T mek'Leth (Shortsword) Class
 - Torpedo Cruiser (KCT)
 - Crew Complement: 395
 - Crew Training Level: Professional
 - Hull Rating: 260 HSF
 - Shield Rating: 380 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 33 Mk/s
 - D'ktagh (Dagger) Shuttles (2 Total)  

 - 2x Disruptor
 - 4x Photon Torpedo Tube
 - 2x Proximity Burst Photon Torpedo Tube
",

"LYR_LIONESS_V", " - Lioness Class
 - Pseudo-Fighter Tender (LTPF)
 - Crew Complement: 570
 - Crew Training Level: Professional
 - Hull Rating: 750 HSF
 - Shield Rating: 980 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 26.25 Mk/s
 - Occicat Pseudo-Fighters (6 Total) 

 - 2x Light Disruptor
 - 2x Disruptor
 - 2x Heavy Phaser Cannon
",

"LYR_LIONESSB_V", " - Lioness Class
 - Pseudo-Fighter Tender (LTPF)
 - Crew Complement: 570
 - Crew Training Level: Professional
 - Hull Rating: 750 HSF
 - Shield Rating: 980 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 26.25 Mk/s
 - Occilot Pseudo-Fighters (6 Total) 

 - 2x Light Disruptor
 - 2x Disruptor
 - 2x Heavy Phaser Cannon
",

"LYR_ROYALLION_V", " - Royal Lion Class
 - Battleship (LBB)
 - Crew Complement: 650
 - Crew Training Level: Professional
 - Hull Rating: 780 HSF
 - Shield Rating: 1280 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 26.25 Mk/s

 - 6x Disruptor
 - 4x Heavy Disruptor
 - 4x Heavy Phaser Cannon
 - 2x Mauler Cannon
 - Expanding Sphere Generator 
",

"LYR_LION_V", " - Lion Class
 - Dreadnought (LDN)
 - Crew Complement: 580
 - Crew Training Level: Professional
 - Hull Rating: 540 HSF
 - Shield Rating: 850 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 28.5 Mk/s

 - 6x Disruptor
 - 4x Heavy Disruptor
 - 2x Heavy Phaser Cannon
 - 2x Mauler Cannon
 - Expanding Sphere Generator
",

"LYR_PANTHER_V", " - Panther Class
 - Battlecruiser (LBC)
 - Crew Complement: 510
 - Crew Training Level: Professional
 - Hull Rating: 360 HSF
 - Shield Rating: 580 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 30.75 Mk/s

 - 6x Disruptor
 - 4x Heavy Disruptor
 - 4x Heavy Phaser Cannon
 - Expanding Sphere Generator
",

"LYR_PUMA_V", " - Puma Class
 - Guided Missile Monitor (LMNG)
 - Crew Complement: 370
 - Crew Training Level: Professional
 - Hull Rating: 280 HSF
 - Shield Rating: 320 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 33 Mk/s

 - 1x Light Disruptor
 - 2x Disruptor
 - 4x Cruise Missile Launcher
 - 2x Proximity Missile Launcher
",

"LYR_FELIDAE_V", " - Felidae Class
 - Construction Tender (LACS)
 - Crew Complement: 500
 - Crew Training Level: Civilian
 - Hull Rating: 280 HSF
 - Shield Rating: 380 FSP
 - Sensor Rating: 400 SRU
 - Impulse Speed: 25 Mk/s

 - Unarmed
",

"LYR_QUEENCAT_V", " - Queen Cat Class
 - Mining Freighter (LDF)
 - Crew Complement: 100
 - Crew Training Level: Civilian
 - Hull Rating: 280 HSF
 - Shield Rating: 380 FSP
 - Sensor Rating: 400 SRU
 - Impulse Speed: 25 Mk/s

 - Unarmed
",

"LYR_FELINE_V", " - Feline Class
 - Colony Ship (LFB)
 - Crew Complement: 500
 - Crew Training Level: Civilian
 - Hull Rating: 280 HSF
 - Shield Rating: 380 FSP
 - Sensor Rating: 400 SRU
 - Impulse Speed: 22.5 Mk/s

 - Unarmed
",

"LYR_COUGAR_V", " - Cougar Class
 - Cargo Freighter (LAK)
 - Crew Complement: 100
 - Crew Training Level: Civilian
 - Hull Rating: 280 HSF
 - Shield Rating: 380 FSP
 - Sensor Rating: 400 SRU
 - Impulse Speed: 25 Mk/s

 - Unarmed
",

"LYR_SERVAL_V", " - Serval Class
 - Assault Transport (LAPA)
 - Crew Complement: 500 
 - Crew Training Level: Marines
 - Hull Rating: 280 HSF
 - Shield Rating: 380 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 22.5 Mk/s

 - 4x Light Disruptor
 - 2x Heavy Disruptor
",

"LYR_BOBCAT_V", " - Bobcat Class
 - Fleet Repair Frigate (LFR)
 - Crew Complement: 37
 - Crew Training Level: Professional
 - Hull Rating: 180 HSF
 - Shield Rating: 200 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 42 Mk/s

 - 2x Disruptor
",

"LYR_TIGER_V", " - Tiger Class
 - Heavy Cruiser (LCA)
 - Crew Complement: 350
 - Crew Training Level: Professional
 - Hull Rating: 280 HSF
 - Shield Rating: 350 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 33 Mk/s

 - 3x Disruptor
 - 2x Heavy Disruptor
 - 2x Heavy Phaser Cannon
 - Expanding Sphere Generator
",

"LYR_LEOPARD_V", " - Leopard Class
 - Light Cruiser (LCL)
 - Crew Complement: 165
 - Crew Training Level: Professional
 - Hull Rating: 230 HSF
 - Shield Rating: 320 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 37.5 Mk/s

 - 5x Disruptor
 - 2x Heavy Disruptor
 - Electronic Countermeasures (ECM)
",

"LYR_CARACAL_V", " - Caracal Class
 - Destroyer (LDD)
 - Crew Complement: 80
 - Crew Training Level: Professional
 - Hull Rating: 230 HSF
 - Shield Rating: 240 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 39.75 Mk/s

 - 5x Disruptor
 - 2x Heavy Disruptor
 - 2x Heavy Phaser Cannon
 - Electronic Counter-Countermeasures (ECCM)
",

"LYR_LYNX_V", " - Lynx Class
 - Frigate (LFF)
 - Crew Complement: 37
 - Crew Training Level: Professional
 - Hull Rating: 180 HSF
 - Shield Rating: 200 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 42 Mk/s

 - 3x Disruptor
 - 2x Heavy Disruptor
",

"LYR_WILDCAT_V", " - Wildcat Class
 - Scout Frigate (LFS)
 - Crew Complement: 37
 - Crew Training Level: Professional
 - Hull Rating: 180 HSF
 - Shield Rating: 200 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 42 Mk/s

 - 2x Light Disruptor
 - 2x Disruptor
 - Electronic Countermeasures (ECM)
",

"LYR_OCCICAT_V", " - Occicat Class
 - Pseudo-Fighter (LPF)
 - Crew Complement: 0 (6 Crewmembers only)
 - Hull Rating: 45 HSF
 - Shield Rating: 45 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 45 Mk/s

 - 4x Light Disruptor
 - 2x Heavy Disruptor
 - 1x Heavy Phaser Cannon
",

"MIR_VIXEN_V", " - Vixen Class
 - Missile Carrier (MCVG)
 - Crew Complement: 620
 - Crew Training Level: Professional
 - Hull Rating: 460 HSF
 - Shield Rating: 633 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30 Mk/s
 - Daggerfang Scatterpack Shuttles (12 Total)

 - 4x Disruptor
 - 4x Missile Scatterpack
",

"MIR_WOLF_V", " - Wolf Class
 - Heavy Cruiser (MCA)
 - Crew Complement: 280
 - Crew Training Level: Professional
 - Hull Rating: 240 HSF
 - Shield Rating: 323 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 35.25 Mk/s

 - 3x Disruptor
 - 4x Missile Scatterpack
",

"MIR_JACKAL_V", " - Jackal Class
 - Light Cruiser (MCL)
 - Crew Complement: 170
 - Crew Training Level: Professional
 - Hull Rating: 225 HSF
 - Shield Rating: 295 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 38.75 Mk/s

 - 2x Disruptor
 - 4x Missile Scatterpack
 - Electronic Counter-Countermeasures (ECCM)
",

"MIR_FOX_V", " - Fox Class
 - Destroyer (MDD)
 - Crew Complement: 75
 - Crew Training Level: Professional
 - Hull Rating: 215 HSF
 - Shield Rating: 260 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 39.75 Mk/s

 - 2x Disruptor
 - 3x Missile Scatterpack
",

"MIR_WOLVERINE_V", " - Wolverine Class
 - Dreadnought (MDN)
 - Crew Complement: 580
 - Crew Training Level: Professional
 - Hull Rating: 450 HSF
 - Shield Rating: 633 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 32.5 Mk/s

 - 4x Disruptor
 - 6x Missile Scatterpack
 - Electronic Countermeasures (ECM)
",

"MIR_DAGGERFANG_V", " - Daggerfang
 - Scatterpack Shuttle (MFA)
 - Crew Complement: 0 (1 Pilot only)
 - Hull Rating: 10 HSF
 - Shield Rating: 10 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 50 Mk/s

 - 2x Missile Scatterpack (Single Shot)
",

"MIR_DENMOTHER_V", " - Den Mother Class
 - Mining Freighter (MDF)
 - Crew Complement: 100
 - Crew Training Level: Civilian
 - Hull Rating: 230 HSF
 - Shield Rating: 523 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 25 Mk/s

 - Unarmed
",

"MIR_DINGO_V", " - Dingo Class
 - Frigate (MFF)
 - Crew Complement: 37
 - Crew Training Level: Professional
 - Hull Rating: 125 HSF
 - Shield Rating: 195 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 42 Mk/s

 - 2x Disruptor
 - 2x Missile Scatterpack
 - Electronic Warfare Equipment (ECM & ECCM)
",

"ORI_KING_V", " - King Pin Class
 - Dreadnought (PDN)
 - Crew Complement: 1160
 - Crew Training Level: Professional
 - Hull Rating: 380 HSF
 - Shield Rating: 880 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 28.5 Mk/s

 - 2x Type B Phaser Emitter
 - 6x Disruptor
 - 3x Heavy Disruptor
 - 2x Photon Torpedo Tube
 - 1x Heavy Photon Torpedo Tube
",

"ORI_BLACKJACK_V", " - Blackjack Class
 - Battlecruiser (PBC)
 - Crew Complement: 1005
 - Crew Training Level: Professional
 - Hull Rating: 270 HSF
 - Shield Rating: 575 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30.75 Mk/s

 - 4x Type B Phaser Emitter
 - 4x Disruptor
 - 3x Heavy Disruptor
 - 1x Photon Torpedo Tube
",

"ORI_SCABBARD_V", " - Scabbard Class
 - Merchant Carrier (PCVM)
 - Crew Complement: 500
 - Crew Training Level: Professional
 - Hull Rating: 250 HSF
 - Shield Rating: 523 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 33 Mk/s
 - Flintlock Assault Craft (6 Total) 

 - 3x Disruptor
",

"ORI_BUCCANEER_V", " - Buccaneer Class
 - Heavy Cruiser (PCA)
 - Crew Complement: 500
 - Crew Training Level: Professional
 - Hull Rating: 250 HSF
 - Shield Rating: 523 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 33 Mk/s

 - 2x Type B Phaser Emitter
 - 3x Disruptor
 - 2x Heavy Disruptor
 - 1x Photon Torpedo Tube
 - Cloaking Device
",

"ORI_PILFERER_V", " - Pilferer Class
 - Destroyer (PDD)
 - Crew Complement: 85
 - Crew Training Level: Professional
 - Hull Rating: 295 HSF
 - Shield Rating: 390 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 39.75 Mk/s

 - 2x Type B Phaser Emitter
 - 2x Disruptor
 - 2x Heavy Disruptor
 - Cloaking Device
",

"ORI_DIRK_V", " - Dirk Class
 - Escort (PEC)
 - Crew Complement: 47
 - Crew Training Level: Professional
 - Hull Rating: 120 HSF
 - Shield Rating: 180 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 44.5 Mk/s

 - 2x Light Disruptor
 - 2x Type L Plasma Torpedo Tube
",

"ORI_FLINTLOCK_V", " - Flintlock
 - Assault Craft (PFA)
 - Crew Complement: 0 (1 Pilot only)
 - Hull Rating: 12 HSF
 - Shield Rating: 12 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 50 Mk/s

 - 1x Light Disruptor
 - 1x Meson Gun (3 Charges)
",

"ORI_CUTLASS_V", " - Cutlass Class
 - Light Cruiser (PCL)
 - Crew Complement: 230
 - Crew Training Level: Professional
 - Hull Rating: 250 HSF
 - Shield Rating: 420 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 37.5 Mk/s

 - 2x Type B Phaser Emitter
 - 2x Disruptor
 - 1x Photon Torpedo Tube
 - Cloaking Device
",

"ROM_KESTREL_V", " - Kestrel Class
 - Assault Transport (RAPA)
 - Crew Complement: 500 
 - Crew Training Level: Marines
 - Hull Rating: 370 HSF
 - Shield Rating: 500 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 22.5 Mk/s

 - 2x Disruptor
 - 1x Type L Plasma Torpedo Tube
 - Tal Shiar Transporter Pad (w/ Research)
 - Cloaking Device
",

"ROM_IMPERIALHAWK_V", " - Imperial Hawk Class
 - Battleship (RBB)
 - Crew Complement: 680
 - Crew Training Level: Professional
 - Hull Rating: 800 HSF
 - Shield Rating: 1025 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 24 Mk/s

 - 6x Disruptor
 - 4x Type H Plasma Torpedo Tube
 - 2x Assault Phaser (w/ Capture & Research)
 - Tal Shiar Transporter Pad (w/ Research)
 - Cloaking Device
",

"ROM_IMPERIUM_V", " - Imperium Class
 - Heavy Battlecruiser (RBCH)
 - Crew Complement: 465
 - Crew Training Level: Professional
 - Hull Rating: 510 HSF
 - Shield Rating: 653 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 28.5 Mk/s

 - 5x Disruptor
 - 2x Cohesive Fused Deuterium Irradiation Cannon
 - 2x Type M Plasma Torpedo Tube
 - Tal Shiar Transporter Pad (w/ Research)
 - Cloaking Device
",

"ROM_PATRICIAN_V", " - Patrician Class
 - Cargo Freighter (RAK)
 - Crew Complement: 100
 - Crew Training Level: Civilian
 - Hull Rating: 270 HSF
 - Shield Rating: 282 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 22.5 Mk/s

 - Cloaking Device
",

"ROM_SENATOR_V", " - Senator Class
 - Command Cruiser (RCC)
 - Crew Complement: 355
 - Crew Training Level: Professional
 - Hull Rating: 280 HSF
 - Shield Rating: 390 FSP
 - Sensor Rating: 1200 SRU
 - Impulse Speed: 30.75 Mk/s

 - 4x Disruptor
 - 2x Type M Plasma Torpedo Tube
 - Tal Shiar Transporter Pad (w/ Research)
 - Electronic Countermeasures (ECM)
 - Cloaking Device
",

"ROM_SPARROW_V", " - Sparrow Class
 - Colony Ship (RFB)
 - Crew Complement: 500
 - Crew Training Level: Civilian
 - Hull Rating: 270 HSF
 - Shield Rating: 282 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 22.5 Mk/s

 - Cloaking Device
",

"ROM_MERLIN_V", " - Merlin Class
 - Construction Tender (RACS)
 - Crew Complement: 500
 - Crew Training Level: Civilian
 - Hull Rating: 270 HSF
 - Shield Rating: 282 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 25 Mk/s

 - Cloaking Device
",

"ROM_CENTURION_V", " - Centurion Class
 - Heavy Cruiser (RCA)
 - Crew Complement: 295
 - Crew Training Level: Professional
 - Hull Rating: 270 HSF
 - Shield Rating: 282 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 33 Mk/s

 - 2x Disruptor
 - 2x Type M Plasma Torpedo Tube
 - Tal Shiar Transporter Pad (w/ Research)
 - Electronic Countermeasures (ECM) 
 - Cloaking Device
",

"ROM_TRIBUNE_V", " - Tribune Class
 - Escort Carrier (RCVE)
 - Crew Complement: 500 
 - Crew Training Level: Professional
 - Hull Rating: 370 HSF
 - Shield Rating: 500 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 22.5 Mk/s
 - Blade Cloakshape Fighters (6 Total) 

 - 2x Disruptor
 - 1x Type L Plasma Torpedo Tube
 - Tal Shiar Transporter Pad (w/ Research)
 - Cloaking Device
",

"ROM_TRIBUNEB_V", " - Tribune Class
 - Escort Carrier (RCVE)
 - Crew Complement: 500 
 - Crew Training Level: Professional
 - Hull Rating: 370 HSF
 - Shield Rating: 500 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 22.5 Mk/s
 - Shadowblade Cloakshape Fighters (6 Total) 

 - 2x Disruptor
 - 1x Type L Plasma Torpedo Tube
 - Tal Shiar Transporter Pad (w/ Research)
 - Cloaking Device
",

"ROM_WARBIRD_V", " - War Bird Class
 - Destroyer (RDD)
 - Crew Complement: 75
 - Crew Training Level: Professional
 - Hull Rating: 150 HSF
 - Shield Rating: 272 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 37.5 Mk/s

 - 4x Disruptor
 - 1x Type H Plasma Torpedo Tube
 - Tal Shiar Transporter Pad (w/ Research)
 - Cloaking Device
",

"ROM_WAREAGLE_V", " - War Eagle Class
 - Dreadnought (RDN)
 - Crew Complement: 570
 - Crew Training Level: Professional
 - Hull Rating: 700 HSF
 - Shield Rating: 780 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 26.25 Mk/s

 - 5x Disruptor
 - 3x Type H Plasma Torpedo Tube
 - Extremely High Frequency Radiation Cannon (w/ Research)
 - Tal Shiar Transporter Pad (w/ Research)
 - Cloaking Device
",

"ROM_PREAX_V", " - Preax Class
 - Escort (REC)
 - Crew Complement: 28
 - Crew Training Level: Professional
 - Hull Rating: 155 HSF
 - Shield Rating: 195 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 42 Mk/s

 - 2x Disruptor
 - 1x Cohesive Fused Deuterium Irradiation Cannon
 - Tal Shiar Transporter Pad (w/ Research)
 - Cloaking Device
",

"ROM_BLADE_V", " - Blade
 - Cloakshape Fighter (RFA)
 - Crew Complement: 0 (1 Pilot only)
 - Hull Rating: 10 HSF
 - Shield Rating: 10 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 50 Mk/s

 - 1x Type L Plasma Torpedo Tube (Single Shot)
 - Cloaking Device
",

"ROM_OSPREY_V", " - Osprey Class
 - Mining Freighter (RDF)
 - Crew Complement: 100 
 - Crew Training Level: Civilian
 - Hull Rating: 270 HSF
 - Shield Rating: 282 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 25 Mk/s

 - Cloaking Device
",

"ROM_GLADIUS_V", " - Gladius Class
 - Frigate (RFF)
 - Crew Complement: 60
 - Crew Training Level: Professional
 - Hull Rating: 180 HSF
 - Shield Rating: 195 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 39.75 Mk/s

 - 2x Disruptor
 - 1x Cohesive Fused Deuterium Irradiation Cannon
 - 1x Type L Plasma Torpedo Tube
 - Tal Shiar Transporter Pad (w/ Research)
 - Cloaking Device
",

"ROM_RAVEN_V", " - Raven Class
 - Battlecruiser, KR Series (RBKC)
 - Crew Complement: 505
 - Crew Training Level: Professional
 - Hull Rating: 370 HSF
 - Shield Rating: 500 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 30.75 Mk/s

 - 4x Disruptor
 - 2x Cohesive Fused Deuterium Irradiation Cannon
 - 1x Type H Plasma Torpedo Tube
 - Cloaking Device
",

"ROM_STORMBIRD_V", " - Stormbird Class
 - Heavy Cruiser, KR Series (RCKA)
 - Crew Complement: 340
 - Crew Training Level: Professional
 - Hull Rating: 240 HSF
 - Shield Rating: 300 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 35.25 Mk/s

 - 4x Disruptor
 - 1x Type M Plasma Torpedo Tube
 - Cloaking Device
",

"ROM_CONDOR_V", " - Condor Class
 - Dreadnought, KR Series (RDKN)
 - Crew Complement: 660
 - Crew Training Level: Professional
 - Hull Rating: 550 HSF
 - Shield Rating: 800 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 28.5 Mk/s

 - 5x Disruptor
 - 2x Type H Plasma Torpedo Tube
 - Electronic Warfare Equipment (ECM & ECCM)
 - Cloaking Device
",

"ROM_KITE_V", " - Kite Class
 - Escort, KR Series (REKC)
 - Crew Complement: 17
 - Crew Training Level: Professional
 - Hull Rating: 140 HSF
 - Shield Rating: 150 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 44.5 Mk/s

 - 1x Type M Plasma Torpedo Tube
 - Cloaking Device
",

"ROM_FINCH_V", " - Finch Class
 - Frigate, KR Series (RFKF)
 - Crew Complement: 45
 - Crew Training Level: Professional
 - Hull Rating: 170 HSF
 - Shield Rating: 230 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 42 Mk/s

 - 4x Disruptor
 - 1x Cohesive Fused Deuterium Irradiation Cannon
 - Cloaking Device
",

"ROM_FINCH_S_V", " - Finch Class, Scout Variant
 - Scout Frigate, KR Series (RFKS)
 - Crew Complement: 35
 - Crew Training Level: Professional
 - Hull Rating: 170 HSF
 - Shield Rating: 230 FSP
 - Sensor Rating: 1200 SRU
 - Impulse Speed: 42 Mk/s

 - 4x Disruptor
 - Electronic Warfare Equipment (ECM & ECCM)
 - Cloaking Device
",

"ROM_LEGION_V", " - Legion Class
 - Light Cruiser (RCL)
 - Crew Complement: 235
 - Crew Training Level: Professional
 - Hull Rating: 220 HSF
 - Shield Rating: 277 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 35.25 Mk/s

 - 2x Disruptor
 - 2x Type L Plasma Torpedo Tube
 - Gravimetric Harmonic Resonance Cannon (w/ Capture & Research)
 - Tal Shiar Transporter Pad (w/ Research)
 - Cloaking Device
",

"ROM_GLADIUS_S_V", " - Gladius Class, Scout Variant
 - Scout Frigate (RFS)
 - Crew Complement: 60
 - Crew Training Level: Professional
 - Hull Rating: 180 HSF
 - Shield Rating: 195 FSP
 - Sensor Rating: 1200 SRU
 - Impulse Speed: 39.75 Mk/s

 - 2x Disruptor
 - Electronic Countermeasures (ECM) 
 - Tal Shiar Transporter Pad (w/ Research)
 - Cloaking Device
",

"ROM_TALON_V", " - Talon Class
 - Fleet Repair Tender (RAR)
 - Crew Complement: 150 
 - Crew Training Level: Civilian
 - Hull Rating: 270 HSF
 - Shield Rating: 282 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 39.75 Mk/s

 - Cloaking Device
",

"ROM_PEREGRINE_V", " - Peregrine Class
 - Torpedo Cruiser (RCT)
 - Crew Complement: 500
 - Crew Training Level: Professional
 - Hull Rating: 270 HSF
 - Shield Rating: 300 FSP
 - Sensor Rating: 1200 SRU
 - Impulse Speed: 35.25 Mk/s

 - 2x Disruptor
 - 3x Type M Plasma Torpedo Tube
 - 2x Parallax Torpedo Tube
 - Tal Shiar Transporter Pad (w/ Research)
 - Cloaking Device
",

"SHA_CLAW_V", " - Claw
 - Space Superiority Fighter (SFA)
 - Crew Complement: 0 (1 Pilot only)
 - Hull Rating: 10 HSF
 - Shield Rating: 10 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 50 Mk/s

 - 1x Sha'Kurian Fighter Type Gatling Phaser Emitter
 - 1x Ballistic Projectile Launcher (2 Projectiles)
",

"SHA_LONGFANG_V", " - Long Fang Class
 - Attack Carrier (SCVA)
 - Crew Complement: 955
 - Crew Training Level: Professional
 - Hull Rating: 250 HSF
 - Shield Rating: 350 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 36.38 Mk/s
 - Mixed Fighter Complement (12 Total) 

 - 2x Sha'Kurian Type Gatling Phaser Emitter
 - 2x Multiwarhead Projectile Tube
 - Graviton Density Distortion Sphere
 - Cloak Detection Arrays
",

"SHA_ALPHA_V", " - Alpha Class
 - Supercarrier (SCVB)
 - Crew Complement: 1270
 - Crew Training Level: Professional
 - Hull Rating: 560 HSF
 - Shield Rating: 770 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 31.88 Mk/s
 - Mixed Fighter Complement (24 Total) 

 - 2x Sha'Kurian Type Gatling Phaser Emitter
 - 5x Multiwarhead Projectile Tube
 - Graviton Density Distortion Sphere
 - Cloak Detection Arrays
",

"SHA_HUNTER_V", " - Hunter Class
 - Light Carrier (SCVL)
 - Crew Complement: 440
 - Crew Training Level: Professional
 - Hull Rating: 150 HSF
 - Shield Rating: 210 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 40.88 Mk/s
 - Claw Space Superiority Fighters (6 Total) 

 - 1x Sha'Kurian Type Gatling Phaser Emitter
 - 2x Active Terminal Projectile (Ship) Tube
 - Graviton Density Distortion Sphere
 - Cloak Detection Arrays
",

"SHA_SHARPTOOTH_V", " - Sharp Tooth
 - Bomber (SFA)
 - Crew Complement: 0 (2 Crewmembers only)
 - Hull Rating: 15 HSF
 - Shield Rating: 15 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 45 Mk/s

 - 1x Sha'Kurian Fighter Type Gatling Phaser Emitter
 - 1x Active Terminal Projectile (Bomber) Launcher (14 Projectiles)
",

"THO_EMERALD_V", " - Emerald Class
 - Battleship (TBB)
 - Crew Complement: 560
 - Crew Training Level: Professional
 - Hull Rating: 780 HSF
 - Shield Rating: 1480 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 26.25 Mk/s

 - 6x Tholian Type Phaser Emitter
 - 4x Heavy Disruptor
 - Tholian Web Cannon (w/ Research)
",

"THO_AMETHYST_V", " - Amethyst Class
 - Battlecruiser (TBC)
 - Crew Complement: 378
 - Crew Training Level: Professional
 - Hull Rating: 580 HSF
 - Shield Rating: 1050 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 28.5 Mk/s

 - 6x Tholian Type Phaser Emitter
 - 4x Heavy Disruptor
 - Tholian Web Cannon (w/ Research)
",

"THO_CALCINITE_V", " - Calcinite Class
 - Colony Ship (TFB)
 - Crew Complement: 250
 - Crew Training Level: Civilian
 - Hull Rating: 330 HSF
 - Shield Rating: 590 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 25 Mk/s

 - Unarmed
",

"THO_BISMUTH_V", " - Bismuth Class
 - Crystal Carver (TACS)
 - Crew Complement: 250
 - Crew Training Level: Civilian
 - Hull Rating: 330 HSF
 - Shield Rating: 590 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 33 Mk/s

 - Unarmed
",

"THO_RUBY_V", " - Ruby Class
 - Heavy Cruiser (TCA)
 - Crew Complement: 294
 - Crew Training Level: Professional
 - Hull Rating: 330 HSF
 - Shield Rating: 590 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 33 Mk/s

 - 6x Tholian Type Phaser Emitter
 - 1x Heavy Disruptor
 - Tholian Web Cannon (w/ Research)
",

"THO_QUARTZ_V", " - Quartz Class
 - Destroyer (TDD)
 - Crew Complement: 42
 - Crew Training Level: Professional
 - Hull Rating: 310 HSF
 - Shield Rating: 557 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 37.5 Mk/s

 - 6x Tholian Type Phaser Emitter
 - 1x Heavy Disruptor
 - Tholian Web Cannon (w/ Research)
",

"THO_SAPPHIRE_V", " - Sapphire Class
 - Dreadnought (TDN)
 - Crew Complement: 462
 - Crew Training Level: Professional
 - Hull Rating: 670 HSF
 - Shield Rating: 1357 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 26.25 Mk/s

 - 6x Tholian Type Phaser Emitter
 - 2x Heavy Disruptor
 - Tholian Web Cannon (w/ Research)
 - Electronic Warfare Equipment (ECM & ECCM)
",

"TER_IMPERATOR_V", " - Imperator Class
 - Dreadnought (EDN)
 - Crew Complement: 1022
 - Crew Training Level: Professional
 - Hull Rating: 800 HSF
 - Shield Rating: 1400 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30 Mk/s

 - 5x Terran Type Phaser Emitter
 - 4x Heavy Photon Torpedo Tube
",

"TER_DOMINATOR_V", " - Dominator Class
 - Battlecruiser (EBC)
 - Crew Complement: 795 
 - Crew Training Level: Professional
 - Hull Rating: 420 HSF
 - Shield Rating: 725 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 33 Mk/s

 - 4x Terran Type Phaser Emitter
 - 2x Heavy Photon Torpedo Tube
",

"TER_CONFLAGRATION_V", " - Conflagration Class
 - Heavy Cruiser (ECA)
 - Crew Complement: 500 
 - Crew Training Level: Professional
 - Hull Rating: 250 HSF
 - Shield Rating: 523 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 37.5 Mk/s

 - 4x Terran Type Phaser Emitter
 - 2x Photon Torpedo Tube
",

"TER_TEMPEST_V", " - Tempest Class
 - Light Cruiser (ECL)
 - Crew Complement: 390 
 - Crew Training Level: Professional
 - Hull Rating: 250 HSF
 - Shield Rating: 480 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 39.75 Mk/s

 - 3x Terran Type Phaser Emitter
 - 2x Photon Torpedo Tube
",


"TER_MAKO_V", " - Mako Class
 - Destroyer (EDD)
 - Crew Complement: 110 
 - Crew Training Level: Professional
 - Hull Rating: 230 HSF
 - Shield Rating: 407 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 42 Mk/s

 - 3x Terran Type Phaser Emitter
 - 2x Photon Torpedo Tube
",


"TER_LEGIONARY_V", " - Legionary Class
 - Frigate (EFF)
 - Crew Complement: 90 
 - Crew Training Level: Professional
 - Hull Rating: 170 HSF
 - Shield Rating: 350 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 44.25 Mk/s

 - 2x Terran Type Phaser Emitter
 - 2x Photon Torpedo Tube
",

"THO_FELDSPAR_V", " - Feldspar Class
 - Escort (TEC)
 - Crew Complement: 13
 - Crew Training Level: Professional
 - Hull Rating: 150 HSF
 - Shield Rating: 68 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 42 Mk/s

 - 3x Tholian Type Phaser Emitter
 - 1x Heavy Disruptor
 - Cloak Detection Filaments
",

"THO_GRANITE_V", " - Granite Class
 - Crystalene Extractor (TDF)
 - Crew Complement: 100
 - Crew Training Level: Civilian
 - Hull Rating: 330 HSF
 - Shield Rating: 590 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 33 Mk/s

 - Unarmed
",

"THO_GARNET_V", " - Garnet Class
 - Light Cruiser (TCL)
 - Crew Complement: 126
 - Crew Training Level: Professional
 - Hull Rating: 427 HSF
 - Shield Rating: 240 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 35.25 Mk/s

 - 3x Tholian Type Phaser Emitter
 - 1x Heavy Disruptor
 - Tholian Web Cannon (w/ Research)
",

"THO_CITRINE_V", " - Citrine Class
 - Defence Monitor (TDM)
 - Crew Complement: 320
 - Crew Training Level: Professional
 - Hull Rating: 450 HSF
 - Shield Rating: 800 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 20 Mk/s

 - 2x Tholian Type Phaser Emitter
 - 3x Heavy Disruptor
",

"THO_FELDSPAR_S_V", " - Feldspar Class, Scout Variant
 - Scout (TES)
 - Crew Complement: 13
 - Crew Training Level: Professional
 - Hull Rating: 150 HSF
 - Shield Rating: 68 FSP
 - Sensor Rating: 1200 SRU
 - Impulse Speed: 42 Mk/s

 - 2x Tholian Type Phaser Emitter
 - Electronic Warfare Equipment (ECM & ECCM)
",

"THO_DIAMOND_V", " - Diamond Class
 - Crystal Reconciler (TAR)
 - Crew Complement: 100
 - Crew Training Level: Civilian
 - Hull Rating: 330 HSF
 - Shield Rating: 590 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 25 Mk/s

 - Unarmed
",

"CIV_HUMPBACK_V", " - Humpback Class
 - Cargo Freighter (CAK)
 - Crew Complement: 450
 - Crew Training Level: Civilian
 - Hull Rating: 600 HSF
 - Shield Rating: 250 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 20 Mk/s

 - Unarmed
",

"CIV_DY6000_V", " - DY-6000 Class
 - Cargo Freighter (CAK)
 - Crew Complement: 26
 - Crew Training Level: Civilian
 - Hull Rating: 42 HSF
 - Shield Rating: 67 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 33 Mk/s

 - Unarmed
",

"CIV_TYPE400_V", " - Type 400
 - Cargo Freighter (CAK)
 - Crew Complement: 11
 - Crew Training Level: Civilian
 - Hull Rating: 64 HSF
 - Shield Rating: 130 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 33 Mk/s

 - Unarmed
",

"CIV_TYPE800_V", " - Type 800
 - Cargo Freighter (CAK)
 - Crew Complement: 34
 - Crew Training Level: Civilian
 - Hull Rating: 69 HSF
 - Shield Rating: 67 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 33 Mk/s

 - Unarmed
",

"CIV_BULLDOG_V", " - Bulldog Class
 - Cargo Freighter (CAK)
 - Crew Complement: 22
 - Crew Training Level: Civilian
 - Hull Rating: 42 HSF
 - Shield Rating: 67 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 33 Mk/s

 - Unarmed
",

"CIV_PORTER_V", " - Porter Class
 - Cargo Freighter (CAK)
 - Crew Complement: 30
 - Crew Training Level: Civilian
 - Hull Rating: 69 HSF
 - Shield Rating: 67 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 33 Mk/s

 - Unarmed
",

"CIV_PRIVATEER_V", " - Privateer Class
 - Cargo Freighter (CAK)
 - Crew Complement: 340
 - Crew Training Level: Civilian
 - Hull Rating: 250 HSF
 - Shield Rating: 250 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 33 Mk/s

 - Unarmed
",

"CIV_STAR_V", " - Star Class
 - Warpliner (CAK)
 - Crew Complement: 340
 - Crew Training Level: Civilian
 - Hull Rating: 34 HSF
 - Shield Rating: 67 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 44.25 Mk/s

 - Unarmed
",

"CIV_OCEAN_V", " - Ocean Class
 - Cargo Freighter (CAK)
 - Crew Complement: 85
 - Crew Training Level: Civilian
 - Hull Rating: 69 HSF
 - Shield Rating: 67 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 33 Mk/s

 - Unarmed
",

"CIV_MERCHANTMAN_V", " - Merchantman Class
 - Cargo Freighter (CAK)
 - Crew Complement: 100
 - Crew Training Level: Civilian
 - Hull Rating: 75 HSF
 - Shield Rating: 200 FSP
 - Sensor Rating: 600 SRU
 - Impulse Speed: 33 Mk/s

 - Unarmed
",

//****************
//** STATIONS								
//****************

"FED_STARBASE_V", " - Starbase
 - Command & Control Centre
 - Ship Construction & Repair
 - Precious Metal Processing
 - Crew Complement: 7100 
 - Defensive Rating: 5400 HSF/FSP
 - Sensor Rating: 1500 SRU

 - 6x Type S Phaser Emitter
 - 4x Photon Torpedo Tube
 - 2x Assault Phaser
 - Electronic Warfare Equipment (ECM & ECCM)
",

"FED_RESERVE_V", " - Reserve Fleet Starbase
 - Command & Control Centre
 - Ship Construction & Repair
 - Precious Metal Processing
 - Crew Complement: 7100 
 - Defensive Rating: 5400 HSF/FSP
 - Sensor Rating: 1500 SRU

 - 6x Type S Phaser Emitter
 - 4x Photon Torpedo Tube
 - 2x Assault Phaser
 - Electronic Warfare Equipment (ECM & ECCM)
",

"FED_MINE_V", " - Type FA Mine
 - Umanned Defensive Platform
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 800 SRU

 - 2x Type S Phaser Emitter
 - 2x Photon Torpedo Tube
",

"FED_MINING_V", " - Dilithium Mining Station
 - Dilithium Processing
 - Crew Complement: 250 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 600 SRU

 - 2x Type S Phaser Emitter
",

"FED_MONITORING_V", " - Monitoring Station
 - Probe Net Control
 - Ship Repair
 - Crew Complement: 80 
 - Defensive Rating: 2000 HSF/FSP
 - Sensor Rating: 1000 SRU

 - 4x Type S Phaser Emitter
 - 4x Photon Torpedo Tube
 - ESPlaDs (w/ Research)
",

"FED_ORBITAL_V", " - Orbital Processing Facility
 - Tritanium Extraction & Processing
 - Crew Complement: 40 
 - Defensive Rating: 300 HSF/FSP
 - Sensor Rating: 600 SRU

 - 2x Type S Phaser Emitter
",

"FED_RESEARCHA_V", " - Research Station
 - Hull Research & Development
 - Crew Complement: 40 
 - Defensive Rating: 690 HSF/FSP
 - Sensor Rating: 600 SRU

 - 4x Type S Phaser Emitter
",

"FED_RESEARCHB_V", " - Research Station
 - Hull Conversion Package Development
 - Crew Complement: 40 
 - Defensive Rating: 690 HSF/FSP
 - Sensor Rating: 600 SRU

 - 4x Type S Phaser Emitter
",

"FED_RESEARCHC_V", " - Research Station
 - Weapon/Ship Systems Research & Development
 - Crew Complement: 40 
 - Defensive Rating: 690 HSF/FSP
 - Sensor Rating: 600 SRU

 - 4x Type S Phaser Emitter
",

"FED_SENSOR_V", " - Sensor Probe
 - Umanned Sensor Platform
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 2000 SRU

 - ESPlaDs (w/ Research)
",

"FED_SUPERBL_V", " - Research Station
 - Cutting-Edge Research & Development
 - Crew Complement: 300 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 600 SRU

 - 2x Type S Phaser Emitter
",

"FED_TRADING_V", " - Trading Station
 - Resource Trading
 - Civilian Trading Outpost
 - Crew Complement: 300 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 600 SRU

 - Unarmed
",

"FED_UPGRADE_V", " - Research Institute
 - Ship Internal Systems Development
 - Crew Complement: 400 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 600 SRU

 - Unarmed
",

"FED_YARD1_V", " - Standard Shipyard
 - Ship Construction & Repair
 - Escort to Torpedo Cruiser Class
 - Crew Complement: 500 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 600 SRU

 - Unarmed
",

"FED_YARD2_V", " - Advanced Shipyard
 - Ship Construction & Repair
 - Command Cruiser to Experimental Battleship Class
 - Crew Complement: 500 
 - Defensive Rating: 2500 HSF/FSP
 - Sensor Rating: 600 SRU

 - Unarmed
",

"GOR_STARBASE_V", " - Starbase
 - Command & Control Centre
 - Ship Construction & Repair
 - Precious Metal Processing
 - Crew Complement: 7100 
 - Defensive Rating: 5400 HSF/FSP
 - Sensor Rating: 1500 SRU

 - 6x Gorn Station Type Phaser Emitter
 - 4x Type G Plasma Torpedo Tube
 - 2x Assault Phaser
 - Electronic Warfare Equipment (ECM & ECCM)
",

"GOR_MINE_V", " - Type GA Mine
 - Umanned Defensive Platform
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 800 SRU

 - 2x Gorn Station Type Phaser Emitter
 - 2x Type G Plasma Torpedo Tube
",

"GOR_MINING_V", " - Dilithium Emulsifier
 - Dilithium Processing
 - Crew Complement: 250 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 600 SRU

 - 2x Gorn Station Type Phaser Emitter
",

"GOR_ORBITAL_V", " - Orbital Processing Facility
 - Tritanium Extraction & Processing
 - Crew Complement: 100 
 - Defensive Rating: 2000 HSF/FSP
 - Sensor Rating: 600 SRU

 - 2x Gorn Station Type Phaser Emitter
",

"GOR_OUTPOST_V", " - Outpost
 - Area Defense
 - Viper Psuedo-Fighters (6 Total)
 - Ship Repair
 - Crew Complement: 80 
 - Defensive Rating: 1500 HSF/FSP
 - Sensor Rating: 1000 SRU

 - 6x Gorn Station Type Phaser Emitter
 - 2x Type G Plasma Torpedo Tube
",

"GOR_OUTPOSTB_V", " - Outpost
 - Area Defense
 - Viper Psuedo-Fighters (9 Total)
 - Ship Repair
 - Crew Complement: 80 
 - Defensive Rating: 1500 HSF/FSP
 - Sensor Rating: 1000 SRU

 - 6x Gorn Station Type Phaser Emitter
 - 2x Type G Plasma Torpedo Tube
",

"GOR_RESEARCHA_V", " - Research Station
 - Hull Research & Development
 - Crew Complement: 300 
 - Defensive Rating: 1200 HSF/FSP
 - Sensor Rating: 600 SRU

 - 4x Gorn Station Type Phaser Emitter
",

"GOR_RESEARCHB_V", " - Research Station
 - Hull Conversion Package Development
 - Crew Complement: 300 
 - Defensive Rating: 1200 HSF/FSP
 - Sensor Rating: 600 SRU

 - 4x Gorn Station Type Phaser Emitter
",

"GOR_RESEARCHC_V", " - Research Station
 - Weapon/Ship Systems Research & Development
 - Crew Complement: 300 
 - Defensive Rating: 1200 HSF/FSP
 - Sensor Rating: 600 SRU

 - 4x Gorn Station Type Phaser Emitter
",

"GOR_SENSOR_V", " - Sensor Emplacement
 - Umanned Sensor Platform
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 1500 SRU

 - Unarmed
",

"GOR_SUPERBL_V", " - Project Glormaskt Station
 - Glormaskt Class Ship Construction
 - Crew Complement: 300 
 - Defensive Rating: 2000 HSF/FSP
 - Sensor Rating: 600 SRU

 - Unarmed
",

"GOR_TRADING_V", " - Trading Station
 - Resource Trading
 - Civilian Trading Outpost
 - Crew Complement: 300 
 - Defensive Rating: 2500 HSF/FSP
 - Sensor Rating: 600 SRU

 - Unarmed
",

"GOR_UPGRADE_V", " - Research Institute
 - Ship Internal Systems Development
 - Crew Complement: 400 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 600 SRU

 - Unarmed
",

"GOR_YARD1_V", " - Standard Shipyard
 - Ship Construction & Repair
 - Frigate to Torpedo Cruiser Class
 - Crew Complement: 500 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 600 SRU

 - Unarmed
",

"GOR_YARD2_V", " - Royal Shipyard
 - Ship Construction & Repair
 - Command Cruiser to Battleship Class
 - Crew Complement: 500 
 - Defensive Rating: 2500 HSF/FSP
 - Sensor Rating: 600 SRU

 - Unarmed
",

"HYD_STARBASE_V", " - Starbase
 - Command & Control Centre
 - Ship Construction & Repair
 - Precious Metal Processing
 - Crew Complement: 7100 
 - Defensive Rating: 5400 HSF/FSP
 - Sensor Rating: 1500 SRU

 - 6x Hydran Station Type Gatling Phaser Emitter
 - 3x Hellbore Cannon
 - 3x Fusion Beam Emitter
 - 1x Photon Cannon
 - Electronic Warfare Equipment (ECM & ECCM)
",

"HYD_MINING_V", " - Dilithium Purifier
 - Dilithium Processing
 - Crew Complement: 250 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 600 SRU

 - Unarmed
",

"HYD_OUTPOST_V", " - Outpost
 - Area Defense
 - Mixed Fighter Compliment (6 Total) 
 - Ship Repair
 - Crew Complement: 80 
 - Defensive Rating: 2000 HSF/FSP
 - Sensor Rating: 1000 SRU

 - 4x Hydran Station Type Gatling Phaser Emitter
 - 2x Hellbore Cannon
 - 2x Fusion Beam Emitter
",

"HYD_ORBITAL_V", " - Orbital Processing Facility
 - Tritanium Extraction & Processing
 - Crew Complement: 40 
 - Defensive Rating: 300 HSF/FSP
 - Sensor Rating: 600 SRU

  - 2x Hydran Station Type Gatling Phaser Emitter
",

"HYD_YARD1_V", " - Standard Shipyard
 - Ship Construction & Repair
 - Scout Frigate to Command Cruiser Class
 - Crew Complement: 500 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 600 SRU

 - Unarmed
",

"HYD_TRADING_V", " - Trading Station
 - Resource Trading
 - Civilian Trading Outpost
 - Crew Complement: 300 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 600 SRU

 - Unarmed
",

"HYD_MINE_V", " - Type HA Mine
 - Umanned Defensive Platform
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 800 SRU

 - 2x Hydran Type Gatling Phaser Emitter
 - 2x Hellbore Cannon
",

"HYD_SENSOR_V", " - Sensor Drone
 - Umanned Sensor Platform
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 2000 SRU

 - Unarmed
",

"HYD_RESEARCHA_V", " - Research Station
 - Hull Research & Development
 - Crew Complement: 40 
 - Defensive Rating: 690 HSF/FSP
 - Sensor Rating: 600 SRU

 - 4x Hydran Station Type Gatling Phaser Emitter
",

"HYD_RESEARCHB_V", " - Research Station
 - Hull Conversion Package Development
 - Crew Complement: 40 
 - Defensive Rating: 690 HSF/FSP
 - Sensor Rating: 600 SRU

 - 4x Hydran Station Type Gatling Phaser Emitter
",

"HYD_RESEARCHC_V", " - Research Station
 - Weapon/Ship Systems Research & Development
 - Crew Complement: 40 
 - Defensive Rating: 690 HSF/FSP
 - Sensor Rating: 600 SRU

 - 4x Hydran Station Type Gatling Phaser Emitter
",

"HYD_UPGRADE_V", " - Royal Shipyard Committee
 - Ship Internal Systems Development
 - Crew Complement: 400 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 600 SRU

 - Unarmed
",

"ISC_STARBASE_V", " - Starbase
 - Command & Control Centre
 - Ship Construction & Repair
 - Crew Complement: 7100 
 - Defensive Rating: 5400 HSF/FSP
 - Sensor Rating: 1500 SRU

 - 8x Concordium Station Type Phaser Emitter
 - 3x Type I Plasma Torpedo Tube
 - 3x Plasmatic Pulsar Device, Standard Variant
 - Electronic Warfare Equipment (ECM & ECCM)
",

"ISC_MINE_V", " - Type IA Mine
 - Umanned Defensive Platform
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 1000 SRU

 - 2x Concordium Station Type Phaser Emitter
 - 2x Type I Plasma Torpedo Tube
",

"ISC_SENSOR_V", " - Sensor Buoy
 - Umanned Sensor Platform
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 2000 SRU

 - Unarmed
",

"ISC_MINING_V", " - Resource Station
 - Tritanium & Dilithium Processing
 - Crew Complement: 250 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 600 SRU

 - 2x Concordium Station Type Phaser Emitter
",

"ISC_RECYCLE_V", " - Disassembly Array
 - Resource Transmuting
 - Ship Recycling
 - Crew Complement: 250 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 600 SRU

 - 2x Concordium Station Type Phaser Emitter
",

"ISC_RESEARCHA_V", " - Research Station
 - Hull Research & Development
 - Crew Complement: 300 
 - Defensive Rating: 690 HSF/FSP
 - Sensor Rating: 600 SRU

 - 6x Concordium Station Type Phaser Emitter
",

"ISC_RESEARCHB_V", " - Research Station
 - Hull Conversion Package Development
 - Crew Complement: 300 
 - Defensive Rating: 690 HSF/FSP
 - Sensor Rating: 600 SRU

 - 6x Concordium Station Type Phaser Emitter
",

"ISC_RESEARCHC_V", " - Research Station
 - Weapon/Ship Systems Research & Development
 - Crew Complement: 300 
 - Defensive Rating: 690 HSF/FSP
 - Sensor Rating: 600 SRU

 - 6x Concordium Station Type Phaser Emitter
",

"ISC_SUPERBL_V", " - Subspace Research Facility
 - Mass Transit
 - Exotic Weaponry
 - Crew Complement: 160
 - Defensive Rating: 5400 HSF/FSP
 - Sensor Rating: 600 SRU

 - 6x Concordium Station Type Phaser Emitter
 - Subspace Slipway Generator
 - Subspace Rift Generator
",

"ISC_UPGRADE_V", " - Research Station
 - Ship Internal Systems Development
 - Crew Complement: 400 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 600 SRU

 - Unarmed
",

"ISC_YARD1_V", " - Shipyard Type I
 - Ship Construction & Repair
 - Frigate to Torpedo Cruiser Class
 - Crew Complement: 500 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 600 SRU

 - Unarmed
",

"ISC_YARD2_V", " - Shipyard Type II
 - Ship Construction & Repair
 - Star Cruiser to Fleet Carrier Class
 - Crew Complement: 500 
 - Defensive Rating: 2500 HSF/FSP
 - Sensor Rating: 600 SRU

 - Unarmed
",

"KLI_STARBASE_V", " - Starbase
 - Command & Control Centre
 - Ship Construction & Repair
 - Precious Metal Processing
 - Crew Complement: 6150 
 - Defensive Rating: 4660 HSF/FSP
 - Sensor Rating: 1300 SRU

 - 6x Disruptor
 - 5x Heavy Photon Torpedo Tube
 - 2x Assault Phaser
 - Electronic Warfare Equipment (ECM & ECCM)
",

"KLI_MINE_V", " - Type KA Mine
 - Umanned Defensive Platform
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 700 SRU

 - 2x Disruptor
 - 2x Photon Torpedo Tube
",

"KLI_MINING_V", " - Dilithium Refinery
 - Dilithium Processing
 - Crew Complement: 250 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 400 SRU

 - 4x Disruptor
",

"KLI_ORBITAL_V", " - Orbital Processing Facility
 - Tritanium Extraction & Processing
 - Crew Complement: 100 
 - Defensive Rating: 2000 HSF/FSP
 - Sensor Rating: 400 SRU

 - 4x Disruptor
",

"KLI_OUTPOST_V", " - Outpost
 - Area Defense
 - Ship Repair
 - Crew Complement: 80 
 - Defensive Rating: 2000 HSF/FSP
 - Sensor Rating: 700 SRU

 - 6x Disruptor
 - 4x Heavy Disruptor
",

"KLI_RESEARCHA_V", " - Research Station
 - Hull Research & Development
 - Crew Complement: 300 
 - Defensive Rating: 1200 HSF/FSP
 - Sensor Rating: 400 SRU

 - 6x Disruptor
",

"KLI_RESEARCHB_V", " - Research Station
 - Hull Conversion Package Development
 - Crew Complement: 300 
 - Defensive Rating: 1200 HSF/FSP
 - Sensor Rating: 400 SRU

 - 6x Disruptor
",

"KLI_RESEARCHC_V", " - Research Station
 - Weapon/Ship Systems Research & Development
 - Crew Complement: 300 
 - Defensive Rating: 1200 HSF/FSP
 - Sensor Rating: 600 SRU

 - 4x Disruptor
",

"KLI_SENSOR_V", " - Sensor Array
 - Umanned Sensor Platform
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 1000 SRU

 - Unarmed
",

"KLI_SUPERBL_V", " - Project pIH D'ktagh (Hidden Dagger) Station
 - E12X Experimental B'Rel Class Ship Construction
 - Crew Complement: 300 
 - Defensive Rating: 1200 HSF/FSP
 - Sensor Rating: 400 SRU

 - Unarmed
",

"KLI_TRADING_V", " - Trading Station
 - Resource Trading
 - Civilian Trading Outpost
 - Crew Complement: 300 
 - Defensive Rating: 1200 HSF/FSP
 - Sensor Rating: 400 SRU

 - Unarmed
",

"KLI_UPGRADE_V", " - Research Institute
 - Ship Internal Systems Development
 - Crew Complement: 400 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 400 SRU

 - Unarmed
",

"KLI_YARD1_V", " - Standard Shipyard
 - Ship Construction & Repair
 - Escort to Torpedo Cruiser Class
 - Crew Complement: 500 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 400 SRU

 - Unarmed
",

"KLI_YARD2_V", " - Imperial Shipyard
 - Ship Construction & Repair
 - Command Cruiser to Battleship Class
 - Crew Complement: 500 
 - Defensive Rating: 2500 HSF/FSP
 - Sensor Rating: 400 SRU

 - Unarmed
",

"LYR_STARBASE_V", " - Starbase
 - Command & Control Centre
 - Ship Construction & Repair
 - Precious Metal Processing
 - Crew Complement: 7100 
 - Defensive Rating: 5400 HSF/FSP
 - Sensor Rating: 1500 SRU

 - 6x Disruptor
 - 3x Heavy Disruptor
 - 3x Heavy Phaser Cannon
 - 3x Mauler Cannon
 - Electronic Warfare Equipment (ECM & ECCM)
",

"LYR_OUTPOST_V", " - Outpost
 - Area Defense
 - Occicat Psuedo-Fighters (6 Total)
 - Ship Repair
 - Crew Complement: 80 
 - Defensive Rating: 2000 HSF/FSP
 - Sensor Rating: 700 SRU

 - 4x Disruptor
 - 2x Heavy Disruptor
 - 2x Heavy Phaser Cannon
",

"LYR_OUTPOSTB_V", " - Outpost
 - Area Defense
 - Occilot Psuedo-Fighters (6 Total)
 - Ship Repair
 - Crew Complement: 80 
 - Defensive Rating: 2000 HSF/FSP
 - Sensor Rating: 700 SRU

 - 4x Disruptor
 - 2x Heavy Disruptor
 - 2x Heavy Phaser Cannon
",

"LYR_MINING_V", " - Dilithium Grader
 - Dilithium Processing
 - Crew Complement: 250 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 400 SRU

 - Unarmed
",

"LYR_ORBITAL_V", " - Orbital Processing Facility
 - Tritanium Extraction & Processing
 - Crew Complement: 100 
 - Defensive Rating: 2000 HSF/FSP
 - Sensor Rating: 400 SRU

 - 3x Disruptor
",

"LYR_MINE_V", " - Type LA Mine
 - Umanned Defensive Platform
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 700 SRU

 - 4x Disruptor
 - 2x Heavy Disruptor
",

"LYR_RESEARCHA_V", " - Research Station
 - Hull Research & Development
 - Crew Complement: 300 
 - Defensive Rating: 1200 HSF/FSP
 - Sensor Rating: 400 SRU

 - Unarmed
",

"LYR_RESEARCHB_V", " - Research Station
 - Hull Conversion Package Development
 - Crew Complement: 300 
 - Defensive Rating: 1200 HSF/FSP
 - Sensor Rating: 400 SRU

 - Unarmed
",

"LYR_RESEARCHC_V", " - Research Station
 - Weapon/Ship Systems Research & Development
 - Crew Complement: 300 
 - Defensive Rating: 1200 HSF/FSP
 - Sensor Rating: 600 SRU

 - Unarmed
",

"LYR_SENSOR_V", " - Sensor Post
 - Umanned Sensor Platform
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 1000 SRU

 - Unarmed
",

"LYR_TRADING_V", " - Trading Station
 - Resource Trading
 - Civilian Trading Outpost
 - Crew Complement: 300 
 - Defensive Rating: 1200 HSF/FSP
 - Sensor Rating: 400 SRU

 - Unarmed
",

"LYR_UPGRADE_V", " - Naval Commissariat
 - Ship Internal Systems Development
 - Crew Complement: 400 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 400 SRU

 - Unarmed
",

"LYR_YARD1_V", " - Standard Shipyard
 - Ship Construction & Repair
 - Scout Frigate to Guided Missile Monitor Class
 - Crew Complement: 500 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 400 SRU

 - Unarmed
",

"LYR_YARD2_V", " - Grand Shipyard
 - Ship Construction & Repair
 - Battlecruiser to Pseudo-Fighter Tender Class
 - Crew Complement: 500 
 - Defensive Rating: 2500 HSF/FSP
 - Sensor Rating: 400 SRU

 - Unarmed
",

"MIR_STARBASE_V", " - Starbase
 - Command & Control Centre
 - Ship Construction & Repair
 - Precious Metal & Dilithium Processing
 - Crew Complement: 7100 
 - Defensive Rating: 5400 HSF/FSP
 - Sensor Rating: 1500 SRU

 - 6x Disruptor
 - 3x Missile Scatterpack
 - Electronic Warfare Equipment (ECM & ECCM)
",

"ORI_STARBASE_V", " - Orion Pirate Base
 - Command & Control Centre
 - Crew Complement: 3500 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 800 SRU

 - 4x Type S Phaser Emitter
 - 2x Photon Torpedo Tube
",

"ROM_STARBASE_V", " - Starbase
 - Command & Control Centre
 - Ship Construction & Repair
 - Precious Metal Processing
 - Crew Complement: 6150 
 - Defensive Rating: 3550 HSF/FSP
 - Sensor Rating: 1500 SRU

 - 6x Disruptor
 - 6x Type H Plasma Torpedo Tube
 - 2x Cohesive Fused Deuterium Irradiation Cannon
 - Electronic Warfare Equipment (ECM & ECCM)
 - Cloaking Device
",

"ROM_MINE_V", " - Type RA Mine
 - Umanned Defensive Platform
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 1000 SRU

 - 2x Disruptor
 - 1x Type H Plasma Torpedo Tube
",

"ROM_MINING_V", " - Dilithium Processor
 - Dilithium Processing
 - Crew Complement: 250 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 800 SRU

 - Unarmed
",

"ROM_ORBITAL_V", " - Orbital Processing Facility
 - Tritanium Extraction & Processing
 - Crew Complement: 100 
 - Defensive Rating: 2000 HSF/FSP
 - Sensor Rating: 800 SRU

 - 2x Disruptor
 - Cloaking Device
",

"ROM_OUTPOST_V", " - Outpost
 - Area Defense
 - Ship Repair
 - Crew Complement: 80 
 - Defensive Rating: 2000 HSF/FSP
 - Sensor Rating: 1000 SRU

 - 6x Disruptor
 - 4x Type L Plasma Torpedo Tube
 - Cloaking Device
",

"ROM_RESEARCHA_V", " - Research Station
 - Hull Research & Development
 - Crew Complement: 300 
 - Defensive Rating: 1200 HSF/FSP
 - Sensor Rating: 400 SRU

 - Cloaking Field Generator
 - Cloaking Device
",

"ROM_RESEARCHB_V", " - Research Station
 - Hull Conversion Package Development
 - Crew Complement: 300 
 - Defensive Rating: 1200 HSF/FSP
 - Sensor Rating: 400 SRU

 - Cloaking Field Generator
 - Cloaking Device
",

"ROM_RESEARCHC_V", " - Research Station
 - Weapon/Ship Systems Research & Development
 - Crew Complement: 200 
 - Defensive Rating: 1200 HSF/FSP
 - Sensor Rating: 600 SRU

 - Cloaking Field Generator
 - Cloaking Device
",

"ROM_SENSOR_V", " - Spy Satellite
 - Umanned Sensor Platform
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 2200 SRU

 - Cloaking Device
",

"ROM_TRADING_V", " - Trading Station
 - Resource Trading
 - Civilian Trading Outpost
 - Crew Complement: 300 
 - Defensive Rating: 1200 HSF/FSP
 - Sensor Rating: 800 SRU

 - Unarmed
",

"ROM_UPGRADE_V", " - Enhancement Institute
 - Ship Internal Systems Development
 - Crew Complement: 400 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 800 SRU

 - Unarmed
",

"ROM_YARD1_V", " - Standard Shipyard
 - Ship Construction & Repair
 - Escort to Torpedo Cruiser Class
 - Crew Complement: 500 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 800 SRU

 - Unarmed
",

"ROM_YARD2_V", " - Praetorial Shipyard
 - Ship Construction & Repair
 - Command Cruiser to Battleship Class
 - Crew Complement: 500 
 - Defensive Rating: 2500 HSF/FSP
 - Sensor Rating: 800 SRU

 - Unarmed
",

"THO_STARBASE_V", " - Starbase
 - Command & Control Centre
 - Ship Construction & Repair
 - Crew Complement: 4250
 - Defensive Rating: 3550 HSF/FSP
 - Sensor Rating: 1500 SRU

 - 8x Tholian Base Type Phaser Emitter
 - 6x Heavy Disruptor
 - Tholian Web Cannon (w/ Research)
 - Electronic Warfare Equipment (ECM & ECCM)
",

"THO_MINE_V", " - Type TA Mine
 - Umanned Defensive Platform
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 1000 SRU

 - 2x Tholian Base Type Phaser Emitter
 - 2x Heavy Disruptor
",

"THO_MINING_V", " - Crystalene Converter
 - Resource Processing
 - Crew Complement: 250 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 800 SRU

 - 2x Tholian Type Phaser Emitter
",

"THO_RESEARCHA_V", " - Crystal Library
 - Recovering Lost Ship Hull Technologies
 - Crew Complement: 49 
 - Defensive Rating: 690 HSF/FSP
 - Sensor Rating: 800 SRU

 - 6x Tholian Type Phaser Emitter
",

"THO_RESEARCHB_V", " - Crystal Pre-Former
 - Hull Conversion Package Development
 - Crew Complement: 40 
 - Defensive Rating: 690 HSF/FSP
 - Sensor Rating: 800 SRU

 - 6x Tholian Type Phaser Emitter
",

"THO_RESEARCHC_V", " - Crystal Capacitor
 - Miscellaneous Data Storage
 - Crew Complement: 40 
 - Defensive Rating: 690 HSF/FSP
 - Sensor Rating: 800 SRU

 - 6x Tholian Type Phaser Emitter
",

"THO_SENSOR_V", " - Crystalline Resonator
 - Umanned Sensor Platform
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 2200 SRU

 - Unarmed
",

"THO_TRANSMIT_V", " - Transmission Resolver
 - Intergalactic Communications
 - Crew Complement: 300 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 800 SRU

 - 2x Tholian Type Phaser Emitter
",

"THO_UPGRADE_V", " - Research Assembly
 - Ship Internal Systems Development
 - Crew Complement: 400 
 - Defensive Rating: 1000 HSF/FSP
 - Sensor Rating: 800 SRU

 - Unarmed
",

"THO_YARD1_V", " - Crystal Former
 - Ship Construction & Repair
 - Escort to Defence Monitor Class
 - Crew Complement: 500 
 - Defensive Rating: 2000 HSF/FSP
 - Sensor Rating: 800 SRU

 - Unarmed
",

"THO_YARD2_V", " - Neo-Tholian Gate
 - Ship Requisition
 - Battlecruiser to Battleship Class
 - Crew Complement: 500 
 - Defensive Rating: 2500 HSF/FSP
 - Sensor Rating: 800 SRU

 - Unarmed
",

"THO_SUPERBL_V", " - Tholian Rift Generator
 - Instantaneous Travel
 - Crew Complement: 0 
 - Defensive Rating: 3000 HSF/FSP
 - Sensor Rating: 1500 SRU

 - Unarmed
",

"FED_CONSTELLATION_V", " - Constellation Class
 - Light Cruiser (FCL)
 - Crew Complement: 535 
 - Crew Training Level: Professional
 - Hull Rating: 250 HSF
 - Shield Rating: 523 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 37.5 Mk/s
 - Type 2 Shuttles (2 Total) 

 - 4x Type B Phaser Emitter
 - 2x Photon Torpedo Tube
",

"FED_CENTAUR_V", " - Centaur Class
 - Destroyer (FDD)
 - Crew Complement: 225 
 - Crew Training Level: Professional
 - Hull Rating: 230 HSF
 - Shield Rating: 407 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 38.5 Mk/s

 - 4x Type B Phaser Emitter
 - 2x Photon Torpedo Tube
",

"FED_SPRINGFIELD_V", " - Springfield Class
 - Destroyer (FDD)
 - Crew Complement: 340
 - Crew Training Level: Professional
 - Hull Rating: 340 HSF
 - Shield Rating: 590 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 36.0 Mk/s

 - 1x Type C Phaser Array (1x Strength)
 - 1x Mark IX Photon Torpedo Launcher (3x Shot Burst)
",

"FED_NEWORLEANS_V", " - New Orleans Class
 - Light Cruiser (FCL)
 - Crew Complement: 460
 - Crew Training Level: Professional
 - Hull Rating: 390 HSF
 - Shield Rating: 780 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 34.0 Mk/s

 - 1x Type C Phaser Array (1x Strength)
 - 1x Mark IX Photon Torpedo Launcher (3x Shot Burst)
",

"FED_EXCELSIORRET_V", " - Excelsior Class Retrofit
 - Cruiser (FCC)
 - Crew Complement: 795 
 - Crew Training Level: Professional
 - Hull Rating: 580 HSF
 - Shield Rating: 1080 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 33 Mk/s

 - 4x Type B Phaser Emitter
 - 1x Mark IX Photon Torpedo Launcher (3x Shot Burst)
",

"FED_AMBASSADOR_V", " - Ambassador Class
 - Battlecruiser (FBC)
 - Crew Complement: 900
 - Crew Training Level: Professional
 - Hull Rating: 780 HSF
 - Shield Rating: 1350 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 32.0 Mk/s

 - 1x Type C Phaser Array (2x Strength)
 - 1x Mark IX Photon Torpedo Launcher (3x Shot Burst)
",

"FED_NEBULABATTLE_V", " - Nebula Class
 - Heavy Cruiser (FCA)
 - Crew Complement: 750
 - Crew Training Level: Professional
 - Hull Rating: 820 HSF
 - Shield Rating: 1480 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 32.0 Mk/s

 - 1x Type C Phaser Array (2x Strength)
 - 2x Mark IX Photon Torpedo Launcher (3x Shot Burst)
",

"FED_NEBULASCIENCE_V", " - Nebula Class
 - Science Cruiser (FCS)
 - Crew Complement: 750
 - Crew Training Level: Professional
 - Hull Rating: 820 HSF
 - Shield Rating: 1480 FSP
 - Sensor Rating: 1200 SRU
 - Impulse Speed: 32.0 Mk/s

 - 1x Type C Phaser Array (2x Strength)
 - 1x Mark IX Photon Torpedo Launcher (3x Shot Burst)
",

"FED_GALAXY_V", " - Galaxy Class
 - Dreadnought (FDN)
 - Crew Complement: 1100
 - Crew Training Level: Professional
 - Hull Rating: 1100 HSF
 - Shield Rating: 1800 FSP
 - Sensor Rating: 1000 SRU
 - Impulse Speed: 32.0 Mk/s

 - 1x Type C Phaser Array (4x Strength)
 - 1x Mark IX Photon Torpedo Launcher (6x Shot Burst)
",

"FED_BRADSHAW_V", " - Bradshaw Class
 - Construction Tender (FACS)
 - Crew Complement: 500 
 - Crew Training Level: Civilian
 - Hull Rating: 450 HSF
 - Shield Rating: 650 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30 Mk/s

 - Unarmed
",

"FED_LONDON_V", " - London Class
 - Mining Freighter (FDF)
 - Crew Complement: 100 
 - Crew Training Level: Civilian
 - Hull Rating: 450 HSF
 - Shield Rating: 650 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30 Mk/s

 - Unarmed
",

"FED_GLASGOW_V", " - Glasgow Class
 - Colony Ship (FFB)
 - Crew Complement: 500 
 - Crew Training Level: Civilian
 - Hull Rating: 450 HSF
 - Shield Rating: 650 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 30 Mk/s

 - Unarmed
",

"KLI_BIRDOFPREYNEW_V", " - E15 B'Rel (Bird of Prey) Class
 - Frigate (KFF)
 - Crew Complement: 20
 - Crew Training Level: Professional
 - Hull Rating: 190 HSF
 - Shield Rating: 350 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 44.25 Mk/s

 - 2x Pulse Disruptor
 - 1x Photon Torpedo Tube (Modern)
 - Cloaking Device (Modern)
",

"KLI_KOLOTH_V", " - D12 Koloth Class
 - Light Cruiser (KCL)
 - Crew Complement: 300
 - Crew Training Level: Professional
 - Hull Rating: 315 HSF
 - Shield Rating: 450 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 35 Mk/s

 - 2x Pulse Disruptor
 - 1x Beam Disruptor
 - 1x Photon Torpedo Tube (Modern)
 - Cloaking Device (Modern)
",

"KLI_KVORT_V", " - D9 K'Vort (Great Bird) Class
 - Cruiser (KCC)
 - Crew Complement: 305
 - Crew Training Level: Professional
 - Hull Rating: 340 HSF
 - Shield Rating: 530 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 39 Mk/s

 - 4x Pulse Disruptor
 - 1x Photon Torpedo Launcher (3x Shot Burst)
 - Cloaking Device (Modern)
",

"KLI_ATTACKER_V", " - D18 Vor'Cha (Attacker) Class
 - Battlecruiser (KBC)
 - Crew Complement: 480
 - Crew Training Level: Professional
 - Hull Rating: 800 HSF
 - Shield Rating: 1100 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 40 Mk/s

 - 4x Pulse Disruptor
 - 1x Beam Disruptor
 - 1x Photon Torpedo Launcher (3x Shot Burst)
 - Cloaking Device (Modern)
",

"KLI_QEHRAL_V", " - B12 qeh'RaL (Cold Fury) Class
 - Battleship (KBB)
 - Crew Complement: 730
 - Crew Training Level: Professional
 - Hull Rating: 1000 HSF
 - Shield Rating: 1400 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 28.50 Mk/s

 - 4x Disruptor
 - 2x Beam Disruptor
 - 4x Heavy Photon Torpedo Tube
",

"KLI_STEADFAST_V", " - D18Q Charghwl' (Steadfast) Class
 - Assault Cruiser (KAPA)
 - Crew Complement: 480
 - Crew Training Level: Marines
 - Hull Rating: 750 HSF
 - Shield Rating: 980 FSP
 - Sensor Rating: 800 SRU
 - Impulse Speed: 40 Mk/s

 - 4x Pulse Disruptor
 - 1x Beam Disruptor
",

//#############################
//######  Hotkey Strings  #####
//#############################

	"GAME-HOTKEY-A", "
(Hotkey: A)",
	"GAME-HOTKEY-B", "
(Hotkey: B)",
	"GAME-HOTKEY-C", "
(Hotkey: C)",
	"GAME-HOTKEY-D", "
(Hotkey: D)",
	"GAME-HOTKEY-E", "
(Hotkey: E)",
	"GAME-HOTKEY-F", "
(Hotkey: F)",
	"GAME-HOTKEY-G", "
(Hotkey: G)",
	"GAME-HOTKEY-H", "
(Hotkey: H)",
	"GAME-HOTKEY-I", "
(Hotkey: I)",
	"GAME-HOTKEY-J", "
(Hotkey: J)",
	"GAME-HOTKEY-K", "
(Hotkey: K)",
	"GAME-HOTKEY-L", "
(Hotkey: L)",
	"GAME-HOTKEY-M", "
(Hotkey: M)",
	"GAME-HOTKEY-N", "
(Hotkey: N)",
	"GAME-HOTKEY-O", "
(Hotkey: O)",
	"GAME-HOTKEY-P", "
(Hotkey: P)",
	"GAME-HOTKEY-Q", "
(Hotkey: Q)",
	"GAME-HOTKEY-R", "
(Hotkey: R)",
	"GAME-HOTKEY-S", "
(Hotkey: S)",
	"GAME-HOTKEY-T", "
(Hotkey: T)",
	"GAME-HOTKEY-U", "
(Hotkey: U)",
	"GAME-HOTKEY-V", "
(Hotkey: V)",
	"GAME-HOTKEY-W", "
(Hotkey: W)",
	"GAME-HOTKEY-X", "
(Hotkey: X)",
	"GAME-HOTKEY-Y", "
(Hotkey: Y)",
	"GAME-HOTKEY-Z", "
(Hotkey: Z)",
	"GAME-HOTKEY-SHIFT_A", "
(Hotkey: Shift + A)",
	"GAME-HOTKEY-SHIFT_B", "
(Hotkey: Shift + B)",
	"GAME-HOTKEY-SHIFT_C", "
(Hotkey: Shift + C)",
	"GAME-HOTKEY-SHIFT_D", "
(Hotkey: Shift + D)",
	"GAME-HOTKEY-SHIFT_E", "
(Hotkey: Shift + E)",
	"GAME-HOTKEY-SHIFT_F", "
(Hotkey: Shift + F)",
	"GAME-HOTKEY-SHIFT_G", "
(Hotkey: Shift + G)",
	"GAME-HOTKEY-SHIFT_H", "
(Hotkey: Shift + H)",
	"GAME-HOTKEY-SHIFT_I", "
(Hotkey: Shift + I)",
	"GAME-HOTKEY-SHIFT_J", "
(Hotkey: Shift + J)",
	"GAME-HOTKEY-SHIFT_K", "
(Hotkey: Shift + K)",
	"GAME-HOTKEY-SHIFT_L", "
(Hotkey: Shift + L)",
	"GAME-HOTKEY-SHIFT_M", "
(Hotkey: Shift + M)",
	"GAME-HOTKEY-SHIFT_N", "
(Hotkey: Shift + N)",
	"GAME-HOTKEY-SHIFT_O", "
(Hotkey: Shift + O)",
	"GAME-HOTKEY-SHIFT_P", "
(Hotkey: Shift + P)",
	"GAME-HOTKEY-SHIFT_Q", "
(Hotkey: Shift + Q)",
	"GAME-HOTKEY-SHIFT_R", "
(Hotkey: Shift + R)",
	"GAME-HOTKEY-SHIFT_S", "
(Hotkey: Shift + S)",
	"GAME-HOTKEY-SHIFT_T", "
(Hotkey: Shift + T)",
	"GAME-HOTKEY-SHIFT_U", "
(Hotkey: Shift + U)",
	"GAME-HOTKEY-SHIFT_V", "
(Hotkey: Shift + V)",
	"GAME-HOTKEY-SHIFT_W", "
(Hotkey: Shift + W)",
	"GAME-HOTKEY-SHIFT_X", "
(Hotkey: Shift + X)",
	"GAME-HOTKEY-SHIFT_Y", "
(Hotkey: Shift + Y)",
	"GAME-HOTKEY-SHIFT_Z", "
(Hotkey: Shift + Z)",
	"GAME-HOTKEY-F1", "
(Hotkey: F1)",
	"GAME-HOTKEY-F2", "
(Hotkey: F2)",
	"GAME-HOTKEY-F3", "
(Hotkey: F3)",
	"GAME-HOTKEY-F4", "
(Hotkey: F4)",
	"GAME-HOTKEY-F5", "
(Hotkey: F5)",
	"GAME-HOTKEY-F6", "
(Hotkey: F6)",
	"GAME-HOTKEY-F7", "
(Hotkey: F7)",
	"GAME-HOTKEY-F8", "
(Hotkey: F8)",
	"GAME-HOTKEY-F9", "
(Hotkey: F9)",
	"GAME-HOTKEY-F10", "
(Hotkey: F10)",
	"GAME-HOTKEY-F11", "
(Hotkey: F11)",
	"GAME-HOTKEY-F12", "
(Hotkey: F12)",
	"GAME-HOTKEY-CTRL_C", "
(Hotkey: Ctrl + C)",
	"GAME-HOTKEY-DELETE", "
(Hotkey: Delete)",
	"GAME-HOTKEY-NUM_0", "
(Hotkey: Numblock 0)",
	"GAME-HOTKEY-NUM_1", "
(Hotkey: Numblock 1)",
	"GAME-HOTKEY-NUM_2", "
(Hotkey: Numblock 2)",
	"GAME-HOTKEY-NUM_3", "
(Hotkey: Numblock 3)",
	"GAME-HOTKEY-NUM_4", "
(Hotkey: Numblock 4)",
	"GAME-HOTKEY-NUM_5", "
(Hotkey: Numblock 5)",
	"GAME-HOTKEY-NUM_6", "
(Hotkey: Numblock 6)",
	"GAME-HOTKEY-NUM_7", "
(Hotkey: Numblock 7)",
	"GAME-HOTKEY-NUM_8", "
(Hotkey: Numblock 8)",
	"GAME-HOTKEY-NUM_9", "
(Hotkey: Numblock 9)",
	"GAME-HOTKEY-CONTROL_C", "
(Hotkey: Ctrl + C)",
// Added for KA2 Hotkeys 
	"GAME-HOTKEY-F12_F", "
(Hotkey: F12 + F)",
	"GAME-HOTKEY-F12_K", "
(Hotkey: F12 + K)",
	"GAME-HOTKEY-F12_SHIFT_K", "
(Hotkey: F12 + Shift + K)",
	"GAME-HOTKEY-F12_R", "
(Hotkey: F12 + R)",
	"GAME-HOTKEY-F12_SHIFT_R", "
(Hotkey: F12 + Shift + R)",
	"GAME-HOTKEY-F12_G", "
(Hotkey: F12 + G)",
	"GAME-HOTKEY-F12_I", "
(Hotkey: F12 + I)",
	"GAME-HOTKEY-F12_H", "
(Hotkey: F12 + H)",
	"GAME-HOTKEY-F12_L", "
(Hotkey: F12 + L)",
	"GAME-HOTKEY-F12_SHIFT_L", "
(Hotkey: F12 + Shift + L)",
	"GAME-HOTKEY-BACKQUOTE_E", "
(Hotkey: Tilde + E)",
	"GAME-HOTKEY-BACKQUOTE_SHIFT_E", "
(Hotkey: Tilde + Shift + E)",
	"GAME-HOTKEY-BACKQUOTE_P", "
(Hotkey: Tilde + P)",
	"GAME-HOTKEY-BACKQUOTE_U", "
(Hotkey: Tilde + U)",
	"GAME-HOTKEY-BACKSPACE_T", "
(Hotkey: Backspace + T)",
	"GAME-HOTKEY-BACKQUOTE_G", "
(Hotkey: Tilde + G)",
	"GAME-HOTKEY-BACKQUOTE_R", "
(Hotkey: Tilde + R)",
	"GAME-HOTKEY-BACKQUOTE_C", "
(Hotkey: Tilde + C)",
	"GAME-HOTKEY-BACKQUOTE_M", "
(Hotkey: Tilde + M)",
	"GAME-HOTKEY-BACKQUOTE_S", "
(Hotkey: Tilde + S)",
	"GAME-HOTKEY-BACKQUOTE_T", "
(Hotkey: Tilde + T)",
	"GAME-HOTKEY-BACKQUOTE_B", "
(Hotkey: Tilde + B)",

"GUI_CP_RACEBUILD",		"Only buildable by: %s",
"GUI_CP_CAP_CLASSVALUE",    "         Consumes %d slots",

"TIPP-1",		"Remember, Secondary Weapons like Photon Torpedoes are powerful enough to cause hull damage and crew casualties even through fully charged shields",
"TIPP-2",		"Never engage an enemy at his optimal weapons range. If he has better long ranged weaponry, close for the kill. If he has better short ranged weaponry, stay at range.",
"TIPP-3",		"The Tholians cannot board or be boarded. They do however have very low crew complements. Use this to your advantage when attacking",
"TIPP-4",		"Avoid engaging strongly defended targets such as Starbases until you have a strong taskforce of capital ships",
"TIPP-5",		"ECM and ECCM can turn the tide of a battle. Use them!",
"TIPP-6",		"Only Torpedo Cruisers and Capital Ships can perform Planetary Bombardment",
"TIPP-7",		"All Sha'Kurian Carriers have extremely sensitive sensors that can detect cloaked vessels. Avoid tactics that rely on cloaking when engaging them",
"TIPP-8",		"Escorts are light ships designed for scouting and convoy attacks",
"TIPP-9",		"Frigates are inexpensive jacks-of-all-trades that bulk out Destroyer Flotillas and escort non-combatants",
"TIPP-10",		"The Klingon Empire employs several variants of Suspicious Class Frigate, each with it's own defined role",
"TIPP-11",		"Federation, ISC, Hydran and Gorn Destroyers are well-rounded light starships suitable for early resource interdiction",
"TIPP-12",		"Klingon, Romulan and Tholian Destroyers are predatory warships effective at lightning strikes at any stage of an engagement",
"TIPP-13",		"The Federation, Hydran Kingdoms, Klingon Empire and the ISC employ Destroyer Leaders to spearhead their Destroyer Flotillas",
"TIPP-14",		"Light Cruisers mount comparable weapons to their larger brethren, but lack their shield and hull strength",
"TIPP-15",		"Heavy Cruisers are the bread-and-butter of all combatants. They are potent mix of strength, speed, firepower and cost effectiveness",
"TIPP-16",		"Scout Cruisers lack the heavy armament of a fully-fledged Heavy Cruiser, but are excellent spotters for taskforces",
"TIPP-17",		"Scout Frigates lack secondary and heavy weapons, but mount impressive sensor arrays and electronic warfare equipment to support the fleet",
"TIPP-18",		"Torpedo Cruisers mount Capital Ship Grade torpedo weaponry on a Heavy Cruiser hull. They are primarily designed for Planetary Bombardment",
"TIPP-19",		"Command Cruisers act like Destroyer Leaders for Cruiser Squadrons, helping to coordinate and focus their attacks",
"TIPP-20",		"Battlecruisers are the greyhounds of the Capital Ship classes, intended for long range lightning strikes in their own Battlecruiser Squadrons",
"TIPP-21",		"Dreadnoughts are designed for intense fleet combat and are often fitted with electronic warfare equipment to act as command ships in such battles",
"TIPP-22",		"Battleships are gigantic warships designed primarily as anti-Starbase tools. They are rather ungainly for fleet combat, but pack a powerful punch",
"TIPP-23",		"Carriers, in all their sizes, are primarily a base of operations for Fightercraft. They mount insufficient weaponry to fight as a conventional starship",
"TIPP-24",		"Fighters punch well above their weight, but are unable to recharge their fixed shield batteries and are extremely vulnerable to massed weapons fire",
"TIPP-25",		"Gorn and Lyran Pseudo-Fighters are gunboats designed to defend fixed installations. Unlike their smaller counterparts, they can recharge shields.",
"TIPP-26",		"Explore nebulae quickly. Any derelicts inside may destablise and explode, or be captured by Orion Pirates, Smugglers and the like",
"TIPP-27",		"Avoid getting too close to Stars. Their magnetic fields will merely slow your vessels; their coronas however will quickly destroy them",
"TIPP-28",		"Use probes to explore areas of space that might be too hostile to otherwise enter",
"TIPP-29",		"Remember your Sun-Tzu. Never advance on numbers alone",
"TIPP-30",		"If it's a fair fight, you didn't plan well enough!",

// the default game name is constructed as LEFT + Playername + RIGHT
	// so for German, LEFT should be "Game von " and RIGHT should be ""
	"MP_DEFAULT_GAME_NAME_LEFT",			"",
	"MP_DEFAULT_GAME_NAME_RIGHT",			"'s Game",

	// these permit the translation of the default GameSpy room names.  
	// Note, additional rooms may be added by GameSpy at any time, and will be untranslated (unless a key is in here)
	"MP_ROOM_NAME_Cadet",					"Cadet",
	"MP_ROOM_NAME_Captain",					"Captain",
	"MP_ROOM_NAME_Admiral",					"Admiral",
	"MP_ROOM_NAME_Main Lobby",				"Main Lobby",

	// various messages for filetransfer progress.  the filename is printed between LHS and RHS.  An empty RHS indicates no filename in that message.
	"MP_FILETRANSFER_COMMENCED_LHS",		"A new map (",
	"MP_FILETRANSFER_COMMENCED_RHS",		") is downloading into your bzn directory.  Back out of this game set up if you need to stop this download.",
	"MP_FILETRANSFER_COMPLETED_LHS",		"The new map download was successful.  You are ready to play on this new map now.",
	"MP_FILETRANSFER_COMPLETED_RHS",		"",
	"MP_FILETRANSFER_PERMISSION_REQUEST_LHS","The host has chosen a map (",
	"MP_FILETRANSFER_PERMISSION_REQUEST_RHS",") that you do not have.  Click on the 'Download this Map' button to receive it.",
	"MP_FILETRANSFER_FAIL_NEVER_LHS",		"The host has chosen a map (",
	"MP_FILETRANSFER_FAIL_NEVER_RHS",		") that you do not have.  Per your request (Download Maps is set to Never), it will not be downloaded.",
	"MP_FILETRANSFER_FAIL_EXISTS_LHS",		"The host's map cannot be downloaded, because you already have a map with the same filename (",
	"MP_FILETRANSFER_FAIL_EXISTS_RHS",		").",
	"MP_FILETRANSFER_FAIL_SAVE_LHS",		"The host has chosen a save game that you do not have.  You cannot play this map.",
	"MP_FILETRANSFER_FAIL_SAVE_RHS",		"",
	"MP_FILETRANSFER_FAIL_SERVER_LHS",		"The new map download was terminated by the host.",
	"MP_FILETRANSFER_FAIL_SERVER_RHS",		"",

	// multiplayer filetransfer button texts
	"MP_FILETRANSFER_BUTTON_ACCEPT",		"Download this Map",
	"MP_FILETRANSFER_BUTTON_NEVER",			"Download Maps: Never",
	"MP_FILETRANSFER_BUTTON_ASK",			"Download Maps: Ask",
	"MP_FILETRANSFER_BUTTON_ALWAYS",		"Download Maps: Always",

	// replay tooltips
	"GUI_REPLAY_RESTART",					"Restart Playback",
	"GUI_REPLAY_RESTART_V",					"Restart the replay from the beginning.",
	"GUI_REPLAY_PAUSE",						"Pause Replay",
	"GUI_REPLAY_PAUSE_V",					"Pause playback of the replay.  Press Normal Playback to restore the normal playback speed.",
	"GUI_REPLAY_SLOW",						"Slow Playback",
	"GUI_REPLAY_SLOW_V",					"Play the replay at a slower than normal rate.  Press Normal Playback to restore the normal playback speed.",
	"GUI_REPLAY_NORMAL",					"Normal Playback",
	"GUI_REPLAY_NORMAL_V",					"Play the replay at normal playback speed.",
	"GUI_REPLAY_FAST",						"Fast Playback",
	"GUI_REPLAY_FAST_V",					"Play the replay back at a faster than normal rate.  Press Normal Playback to restore the normal playback speed."
};



