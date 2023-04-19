#!/bin/bash


files=("src/mathlib.cpp" "src/stddev.cpp" "src/arguments_parser.cpp")
flags=

for f in "${files[@]}"; do
    echo checking "$f"
    clang-tidy "$f" -- -std=c++11 "$flags"
done

exit
