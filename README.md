# KA2-bugfix
Klingon Academy II - Bugfix mod

As the name suggests, this is a bugfix mod for Klingon Academy II. This
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
