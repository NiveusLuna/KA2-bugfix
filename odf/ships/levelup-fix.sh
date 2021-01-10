#!/bin/bash

SHIP_LIST=$(cat ../../ship_list.txt)

for f in $SHIP_LIST ; do
	touch $f
	# NEW_FILE="${f}.new"
	# echo $NEW_FILE
	echo -e "#include" \"$f\"\\nnextRankClass = \"$f\" >> $f
done
