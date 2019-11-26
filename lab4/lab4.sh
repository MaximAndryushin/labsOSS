#!/bin/bash
ps -eo euid,ruid,comm | tail -n +2 >temp.out #tail чтобы не учиьвыать строку "EUID RUID COMMAN"
exec 0<temp.out
while read euid ruid comm 
do
	if [[ $euid != $ruid ]]; then
		echo "process $comm's euid differs from ruid"
	fi
done
rm temp.out
