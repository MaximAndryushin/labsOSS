#!/bin/bash
pattern=$1
filename=$2
max=$3
counter=1
grep "$pattern" -- "$filename"| sort > /tmp/lab
exec </tmp/lab
while read line
do
	echo "$counter $line"
	((counter++))
	if (("$counter" > "$max")); then
		break
	fi 
done </tmp/lab
