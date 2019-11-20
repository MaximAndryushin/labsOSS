#!/bin/bash
echo "sorted list of files and dirs from $USERNAME's home directory:"
find ~ | xargs du 2>/dev/null | sort -n

