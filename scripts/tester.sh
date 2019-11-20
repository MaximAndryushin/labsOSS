#!/bin/bash
name=$1
echo "args '1' '2' '3':"
bash "$name" "1" "2" "3"
echo "args 5 random numbers:"
bash "$name" "$RANDOM" "$RANDOM" "$RANDOM" "$RANDOM" "$RANDOM"
echo 'args "foo" "bar" "foobar" "foo bar":'
bash "$name" "foo" "bar" "foobar" "foo bar"
echo 'args "foo" "--foo" "--help" "-l":'
bash "$name" "foo" "--foo" "--help" "-l"
