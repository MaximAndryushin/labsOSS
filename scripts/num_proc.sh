#!/bin/bash
echo "Процессов пользователя $USERNAME:"
ps -u "$USER" | wc -l
echo "Процессов пользователя root:"
ps -u root | wc -l
