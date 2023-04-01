#!/bin/bash

status=0
files=("mathlib.cpp" "stddev.cpp" "parser.cpp" "doctests.cpp")

for f in "${files[@]}"; do
    echo checking "$f"
    clang-tidy "$f" 
		ret=$?
    if [ $ret -ne 0 ]; then
        status=1
    fi
done
exit $status