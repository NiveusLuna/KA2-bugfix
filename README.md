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
	
TODO (list kindly provided by Admiral Nat on Discord)

- The Lyran outpost upgrade loses its footprint.
- The Klingon's Experimental BoP couldn't use the explore or search and destroy commands.
- The Kronos Class couldn't attack planets despite being a battlecruiser, which can attack planets.
- The Gorn's Lyran-tech Carrier stopped counting toward its cap of one if upgraded with Hydran technology.
- The ISC transporter effect was broken. (The race odf was looking for btransport, rather than itransport.)
- The ISC Carrier's Hydran-tech upgrade costed precious metals/latinum, even though the ISC don't use that resource. (I just swapped it for a tritanium/metal cost instead.)
- The ships repairing at Hydran Starbases and Outposts would visibly clip into the station. (Change the repairside for both to 2.)
- The Hydran's fighter miniaturization research didn't do anything. (I added it as a requirement for the carrier conversion, since that's apparently the intention.)
- The Orion Pirate unit cap was broken.
- Type 400 civilian cargo ships and scavengers couldn't use their tractor beams, due to lacking weapon hitpoints.
- There was a small chance that a Class L Planet would be named J-30823.
- AIs wouldn't use wormhole generators properly, always opening wormholes to the bottom left corner of the map. Adding aitargetlocation = 1 to the relevant weapons fixed that.
- The Gorn-ISC mixed-tech Plasmatic Pulsar Device was missing its hotkey.
