#! /bin/bash
    #local delimeter=","
    echo "$1" | awk -F "," '{for(i=1; i<=NF; i++)print "\""$i"\"";}' | sed 's/1/\n/'    # awk -F "," '{for(i=1; i<=NF; i++)print "\""$i"\"";}'  $1
