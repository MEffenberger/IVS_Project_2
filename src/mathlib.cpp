/********************************************************
 *  Název projektu: Kalkulačka
 *  Soubor: mathlib.cpp
 *  Datum: 23.4.2023
 *  Autor: Rogalo
 *  Popis: Matematická knihovna pro kalkulačku
*********************************************************/

/**
 * @file mathlib.cpp
 * @brief Matematická knihovna pro kalkulačku
 * @author Rogalo
 */

// Knihovna s makry a konstantami
#include "mathlib.h"

/**
 * @brief Funkce, která sečte dva operandy
 * @param num1 První operand
 * @param num2 Druhý operand
 * @return Součet num1 a num2
 */
double lib_add (double num1, double num2) {

    double result = num1 + num2;

    return result;
}


/**
 * @brief Funkce, která odečte dva operandy
 * @param num1 První operand
 * @param num2 Druhý operand
 * @return Rozdíl num1 a num2
 */
double lib_sub (double num1, double num2) {


    double result = num1 - num2;

    return result;
}


/**
 * @brief Funkce, která vynásobí dva operandy
 * @param num1 První operand
 * @param num2 Druhý operand
 * @return Součin num1 a num2
 */
double lib_mul (double num1, double num2) {

    double result = num1 * num2;

    return result;
}


/**
 * @brief Funkce, která vydělí dva operandy
 * @param num1 První operand
 * @param num2 Druhý operand
 * @return Podíl num1 a num2
 */
double lib_div (double num1, double num2) {

    if (num2 == 0) {
        throw std::runtime_error(ERROR_DIV);
    }

    double result = num1 / num2;

    return result;
}

/**
 * @brief Funkce, která umocní první operand na druhý
 * @param num První operand = mocněnec
 * @param exp Druhý operand = mocnitel
 * @return První operand umocněný na druhý
 */
double lib_pow (double num, double exp) {

    if (int(exp) != exp) {
        throw std::runtime_error(ERROR_OTHER);
    }
    double result = pow(num, exp);

    return result;
}


/**
 * @brief Funkce, která odmocní první operand druhým
 * @param num Odmocňované číslo
 * @param root Odmocnitel
 * @return Obecná odmocnina
 */
double lib_root (double num, double root) {

    if (root == 0) {
        throw std::runtime_error(ERROR_OTHER);
    }

    if (num < 0 && std::fmod(root, 2) == 0) {
        throw std::runtime_error(ERROR_OTHER);
    }

    if(num < 0 && std::fmod(root, 2) != 0) {
        double result = -std::pow(-num, 1.0/root);

        return result;
    }
    double result = std::pow(num, 1.0/root);

    return result;
}


/**
 * @brief Funkce, která vypočítá faktoriál čísla
 * @param num Číslo, kterému se vypočítá faktoriál
 * @return Faktoriál num
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
 * @brief Funkce, která vypočítá modulo čísla
 * @param num1 První operand
 * @param num2 Druhý operand
 * @return Modulo num1 a num2
 */
double lib_mod (double num1, double num2) {

    if (num2 == 0) {
        throw std::runtime_error(ERROR_DIV);
    }
    return fmod(num1, num2);
}

/** Konec souboru mathlib.cpp */