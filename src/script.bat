@echo off
cd D:
cd D:\C - test_files
mkdir %1
cd ./%1
dir > "%2.c"
start "" "D:\C - test_files\%1\"