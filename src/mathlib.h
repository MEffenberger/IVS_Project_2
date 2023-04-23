/********************************************************
 *  Název projektu: Kalkulačka
 *  Soubor: mathlib.h
 *  Datum: 23.4.2023
 *  Autor: Rogalo
 *  Popis: Hlavickovy soubor pro matematickou knihovnu kalkulacky
*********************************************************/

/**
 * @file mathlib.h
 * @brief Hlavičkový soubor pro matematickou knihovnu kalkulačky
 * @author Rogalo
 */




#ifndef MATHLIB_H
#define MATHLIB_H

// Knihovny pro matematické funkce a výjimky
#include <cstdlib>
#include <stdexcept>
#include <cmath>
#include <cfloat>

// Makra a konstanty
#define ERROR_DIV "Division by zero!"
#define ERROR_OTHER "Wrong input!"
#define ERROR_OUT_OF_RANGE "Out of range!"
#define FACTORIAL_MAX 170

// Prototypy funkcí
double lib_add (double num1, double num2);
double lib_sub (double num1, double num2);

double lib_mul (double num1, double num2);
double lib_div (double num1, double num2);

double lib_fact (double num);
double lib_pow (double num, double exp);
double lib_root (double num, double root);

double lib_mod (double num1, double num2);

#endif

/** Konec souboru mathlib.h */