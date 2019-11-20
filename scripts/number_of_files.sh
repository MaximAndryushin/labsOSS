#!/bin/bash
echo "Домашний каталог пользователя $USERNAME"
echo "содержит обычных файлов:"
find ~/ -type f 2>/dev/null| wc -l
echo "содержит скрытых файлов:"
find ~/ -type f -name ".*" 2>/dev/null| wc -l

