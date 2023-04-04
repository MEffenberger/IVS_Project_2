#!/bin/bash


files=("mathlib.cpp" "stddev.cpp" "parser.cpp")

for f in "${files[@]}"; do
    echo checking "$f"
    clang-tidy "$f" 
done
