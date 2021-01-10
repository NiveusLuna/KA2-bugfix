#!/bin/bash

SHIP_LIST=$(cat ../../ship_list.txt)

for f in $SHIP_LIST ; do
	touch $f
	NEW_FILE="${f}.new"
	echo $NEW_FILE
	cat $f > $NEW_FILE << EOF
\#include \"$f\"
nextRankClass = \"$f\"
EOF
	
done
