#!/bin/bash

SHIP_LIST = $(cat ../../ship_list.txt)

for f in $SHIP_LIST ; do
	
	touch $f
	cat $f > $f < EOF
\#include \"$f\"
nextRankClass = \"$f\"
EOF
	
done
