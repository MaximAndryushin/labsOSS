#!/bin/bash
name=$1
echo "$name"
echo "Каталоги:"
ls -Al -- "$name"| grep ^d
echo "Обычные файлы:"
ls -Al -- "$name"| grep ^-
echo "Символьные ссылки:"
ls -Al -- "$name"| grep ^l
echo "Символьные устройства:"
ls -Al -- "$name"| grep ^c
echo "Блочные устройства:"
ls -Al -- "$name"| grep ^b

