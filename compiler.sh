#!/bin/bash

echo "=========================="
echo "[1] Compile this project"
echo "[2] Clean all residues"
echo "=========================="
read -r resp

if [ "$resp" == "1" ]; then
    if [ -d "build" ]; then
        cd build; cmake ..; make || return
        
    else
        mkdir build
    fi
elif [ "$resp" == "2" ]; then
    if [ -d "build" ]; then
        rm -rf build/*
        rmdir build
    else
        echo "No build directory found."
    fi
fi
