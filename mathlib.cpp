#include "mathlib.h"
#include <stdlib.h>
#include <iostream>


/**
 * @brief function to add two numbers
 * @param num1 first operand
 * @param num2 second operand
 * @return sum of num1 and num2
 */
double libb_add (double num1, double num2) {

    if (num1 + num2 > MAX_SUPPORTED_NUM || num1 + num2 < MIN_SUPPORTED_NUM) {
        return std::cout << ERROR << std::endl;
    }
    return num1 + num2;
}

/**
 * @brief function to subtract two numbers
 * @param num1 first operand
 * @param num2 second operand
 * @return difference of num1 and num2
 */
double libb_sub (double num1, double num2) {

    if (num1 - num2 > MAX_SUPPORTED_NUM || num1 - num2 < MIN_SUPPORTED_NUM) {
        return std::cout << ERROR << std::endl;
    }
    return num1 - num2;
}

/**
 * @brief function to multiply two numbers
 * @param num1 first operand
 * @param num2 second operand
 * @return product of num1 and num2
 */
double libb_mul (double num1, double num2) {

    if (num1 * num2 > MAX_SUPPORTED_NUM || num1 * num2 < MIN_SUPPORTED_NUM) {
        return std::cout << ERROR << std::endl;
    }
    return num1 * num2;
}

/**
 * @brief function to divide two numbers
 * @param num1 first operand
 * @param num2 second operand
 * @return quotient of num1 and num2
 */
double libb_div (double num1, double num2) {

    if (num1 / num2 > MAX_SUPPORTED_NUM || num1 / num2 < MIN_SUPPORTED_NUM) {
        return std::cout << ERROR << std::endl;
    }
    if (num2 == 0) {
        return std::cout << ERROR_DIV << std::endl;
    }
    return num1 / num2;
}

/**
 * @brief function to calculate the absolute value of a number
 * @param num number to calculate the absolute value of
 * @return absolute value of num
 */
double libb_abs (double num) {

    if (num > MAX_SUPPORTED_NUM || num < MIN_SUPPORTED_NUM) {
        return std::cout << ERROR << std::endl;
    }

    if (num < 0) {
        return num * -1;
    }
    return num;
}

/**
 * @brief function to calculate the power of a number
 * @param num number to calculate the power of
 * @param exp exponent
 * @return num^exp
 */
double libb_pow (double num, double exp) {

    if (pow(num, exp) > MAX_SUPPORTED_NUM || pow(num, exp) < MIN_SUPPORTED_NUM) {
        return std::cout << ERROR << std::endl;
    }
    if (pow(num, exp) > MAX_SUPPORTED_NUM ||  pow(num, exp) < MIN_SUPPORTED_NUM) {
        return std::cout << ERROR << std::endl;
    }
    return pow(num, exp);
}

/**
 * @brief function to calculate the root of a number
 * @param num number to calculate the root of
 * @param root root
 * @return num^root
 */
double libb_root (double num, double root) {

    if (root == 0 || num < 0)) {
        return std::cout << ERROR_OTHER << std::endl;
    }

    if (pow(num, 1/root) > MAX_SUPPORTED_NUM || pow(num, 1/root) < MIN_SUPPORTED_NUM) {
        return std::cout << ERROR << std::endl;
    }
    return pow(num, 1/root);
}

/**
 * @brief function to calculate the factorial of a number
 * @param num number to calculate the factorial of
 * @return num!
 */
double libb_fact (double num) {

    if (num < 0) {
        return std::cout << ERROR_OTHER << std::endl;
    }

    // maximal supported number should be determined based on the GUI
    if (num == 0) {
        return 1;
    }
    return num * libb_fact(num - 1);

}