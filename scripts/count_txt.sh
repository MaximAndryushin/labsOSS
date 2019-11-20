#!/bin/bash
find ~ -maxdepth 1  -type f -name "*.txt"
find ~ -maxdepth 1  -type f -name "*.txt" | xargs cat >> /tmp/lab
echo "Суммарный размер(байты):"
wc -c /tmp/lab
echo "Суммарный размер(строки):"
wc -l /tmp/lab
rm /tmp/lab
