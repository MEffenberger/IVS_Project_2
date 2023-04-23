/********************************************************
 *  Název projektu: Kalkulačka
 *  Soubor: arguments_parser.h
 *  Datum: 23.4.2023
 *  Autor: Rogalo
 *  Popis: Hlavickovy soubor pro parser kalkulacky
*********************************************************/

/**
 * @file arguments_parser.h
 * @brief Hlavičkový soubor pro parser kalkulačky
 * @author Rogalo
 */


#ifndef IVS_PROJECT_2_ARGUMENTS_PARSER_H
#define IVS_PROJECT_2_ARGUMENTS_PARSER_H

// Knihovny potřebné pro chod parseru
#include "mathlib.h"
#include <cstdlib>
#include <vector>
#include <string>
#include <map>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <sstream>

// Prototyp funkce
std::string arg_parser(std::string input_string);


#endif

/** Konec souboru arguments_parser.h */
