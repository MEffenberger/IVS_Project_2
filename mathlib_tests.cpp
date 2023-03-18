#ifdef TESTING
#define main test_main
#endif

#include <stdio.h>
#include <cstdio>
#include <cassert>
#include "mathlib.h"

int main() {
    // Test 1: Test addition
    assert(add(2, 3) == 5);
    assert(add(-2, -3) == -5);
    assert(add(2, -3) == -1);
    assert(add(-2, 3) == 1);
    assert(add(0, 5) == 5);
    assert(add(5, 0) == 5);

    // Test 2: Test subtraction
    assert(sub(3, 2) == 1);
    assert(sub(-3, -2) == -1);
    assert(sub(-2, 3) == -5);
    assert(sub(2, -3) == 5);
    assert(sub(0, 5) == -5);
    assert(sub(5, 0) == 5);



    printf("\033[32mAll tests passed!\033[0m\n");
    return 0;
}

