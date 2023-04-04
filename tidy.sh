#!/bin/bash


files=("mathlib.cpp" "stddev.cpp" "arguments_parser.cpp")
#files=$(find . -name "*.hpp" -o -name "*.cpp")
flags=

for f in "${files[@]}"; do
    echo checking "$f"
    clang-tidy "$f" -- -std=c++11 "$flags"
done

exit
