#!/bin/bash
name=$USERNAME
home=$HOME
len="$(($(expr length "$name") + $(expr length "$home")))"
echo "$name $home $len"


