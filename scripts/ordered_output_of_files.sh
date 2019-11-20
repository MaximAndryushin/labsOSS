#!/bin/bash
echo "Каталоги:"
ls -Al | grep ^d
echo "Обычные файлы:"
ls -Al | grep ^-
echo "Символьные ссылки:"
ls -Al | grep ^l
echo "Символьные устройства:"
ls -Al | grep ^c
echo "Блочные устройства:"
ls -Al | grep ^b

