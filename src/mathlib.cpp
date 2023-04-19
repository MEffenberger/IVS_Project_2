#include "mathlib.h"



/**
 * @brief function to add two numbers
 * @param num1 first operand
 * @param num2 second operand
 * @return sum of num1 and num2
 */
double lib_add (double num1, double num2) {

    return num1 + num2;
}


/**
 * @brief function to subtract two numbers
 * @param num1 first operand
 * @param num2 second operand
 * @return difference of num1 and num2
 */
double lib_sub (double num1, double num2) {

    return num1 - num2;
}


/**
 * @brief function to multiply two numbers
 * @param num1 first operand
 * @param num2 second operand
 * @return product of num1 and num2
 */
double lib_mul (double num1, double num2) {

    return num1 * num2;
}


/**
 * @brief function to divide two numbers
 * @param num1 first operand
 * @param num2 second operand
 * @return quotient of num1 and num2
 */
double lib_div (double num1, double num2) {

    if (num2 == 0) {
        throw std::runtime_error(ERROR_DIV);
    }
    return num1 / num2;
}

/**
 * @brief function to calculate the power of a number
 * @param num number to calculate the power of
 * @param exp exponent
 * @return num^exp
 */
double lib_pow (double num, double exp) {

    if ((num == 0 && exp == 0) || int(exp) != exp) {
        throw std::runtime_error(ERROR_OTHER);
    }

    return pow(num, exp);
}


/**
 * @brief function to calculate the root of a number
 * @param num number to calculate the root of
 * @param root root
 * @return num^root
 */
double lib_root (double num, double root) {

    if (root == 0) {
        throw std::runtime_error(ERROR_OTHER);
    }

    if (num < 0 && std::fmod(root, 2) == 0) {
        throw std::runtime_error(ERROR_OTHER);
    }

    if(num < 0 && std::fmod(root, 2) != 0) {
        return -std::pow(-num, 1.0/root);
    }
    return std::pow(num, 1.0/root);
}


/**
 * @brief function to calculate the factorial of a number
 * @param num number to calculate the factorial of
 * @return num!
 */
double lib_fact (double num) {

    if (num < 0) {
        throw std::runtime_error(ERROR_OTHER);
    }

    // maximal supported number should be determined based on the GUI
    if (num == 0) {
        return 1;
    }
    return num * lib_fact(num - 1);
}


/**
 * @brief function to calculate the modulo of two numbers
 * @param num1 first operand
 * @param num2 second operand
 * @return modulo of num1 and num2
 */
double lib_mod (double num1, double num2) {

    if (num2 == 0) {
        throw std::runtime_error(ERROR_DIV);
    }
    return fmod(num1, num2);
}
