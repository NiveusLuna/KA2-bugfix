# KA2-bugfix
Klingon Academy II - Bugfix mod

As the name suggests, this is a bugfix mod for Klingon Academy II v2.0. This
repository is purely objective bug fixes. If there is doubt as to whether it's
a bug, the change will not be made here.

Bugs fixed:

- Pseudofighters are able to shipyard repair and repairship repair.
- Ships are unable to complete GO_RALLY upon leaving the starbase
	- This may have since been addressed in stock; I haven't checked.
- Some ships are unable to enter the Fed starbase to repair
- Lyran repair ships don't show SW autonomy
- The Solar System, a 4-player map, causes crashes due to size.
	- now 35k square, down from 50k square
	- More maps will be added to this as I play them
- Romulan capture tech does not provide a cloaking device to Lyran scout
	- This bug was only mitigated, not fixed. I chose to hide the research
	from the player and let upstream decide what to do with the technology.
	- See Issue 1 for details.
- Units exiting ISC large yard can get stuck against northern barrier
- Upgrading Gorn outpost results in it losing its footprint
- Upgrading Lyran outpost results in it losing its footprint
- Type 400 civilian cargo ships and scavengers can't use their tractor beams,
due to lacking weapon hitpoints.
- The Klingon's Experimental BoP can't use the search and destroy command
- The ships repairing at Hydran Starbases and Outposts visibly clip into the
station.
- AIs don't use wormhole generators properly, always opening wormholes to
the bottom left corner of the map.
- Orion destroyers and light cruisers take up fewer slots than escorts.
- Mixed Tech research keyboard shortcuts don't work
- Some keyboard shortcuts also trigger other shortcuts
- Mixed Tech research shortcuts just plain don't function
	- Because some pairings have both capture and ally tech:
		- Capture tech is now "Ctrl+Shift+FirstLetterOfFaction"
		- Ally tech is now "Ctrl+Alt+Shift+FirstLetterOfFaction"
- The ISC transporter effect is broken. (looks for Borg transporter effect)
- The Kronos Class can't attack planets despite being a battlecruiser, which
can attack planets.
- The Hydran fighter miniaturization research doesn't do anything.
	- Added as a requirement for the carrier conversion, since that appears to
	be the intention.
- The Gorn's Lyran-tech Carrier stops counting toward its cap of one if
upgraded with Hydran technology.
- The ISC Carrier's Hydran-tech upgrade costs precious metals/latinum, even
though the ISC don't use that resource. (swapped for tritanium/metal cost)
- There is a small chance that a Class L Planet would be named J-30823.
- The Gorn-ISC mixed-tech Plasmatic Pulsar Device is missing its hotkey.
- Federation Reserve Fleet cap has typos that affect ship values
- Mirak warp-in cap has typos that affect ship values

TODO

- ISC carrier GDDS/ESG shows offensive mode button despite being defensive

IN PROGRESS

- Ship/station decom values are always 0 due to FO 3.2.7 engine limitations
	- Fixed by using 4.0 launcher with my KA2-4.0-compat mod as a compatibility
	layer
