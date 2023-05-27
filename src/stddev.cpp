/***
 * Název projektu: Kalkulačka
 * Soubor: stddev.cpp
 * Datum: 20.4.2023
 * Autor: Rogalo
 * Popis: Soubor pro výpočet směrodatné odchylky
 ***/
/**
* @file stddev.cpp
* @author xhejni00
* @brief výpočet směrodatné odchylky
*/
#include "mathlib.h"
#include <iostream>

using namespace std;

/**
 * @brief Funkce pro výpočet směrodatné odchylky
 * @return 0 pokud vše proběhlo úspěšně, -1 pokud nebylo zadáno žádné číslo
 */
int main() {
    //dekarace potřebných proměnnných
    double number;
    double sum = 0;
    double sum_sq = 0;
    double SDeviation;
    double var = 0;
    double count = 0;
    
    //načítání čísel ze standardního vstupu
    while(fscanf(stdin, "%lf", &number) == 1){
        sum = lib_add(sum, number); //výpočet součtu čísel
        sum_sq = lib_add(sum_sq, lib_pow(number, 2)); //výpočet součtu druhých mocnin čísel
        count = lib_add(count, 1); //inkrementace čítače celkového počtu čísel
    }
    //chyba pokud není zadáno žádné číslo
    if(count == 0){
        fprintf(stderr, "Chyba, nezadano zadne cislo.\n");
        return -1;
    }
    
    double mean = lib_div(sum, count); // výpočet průměru 
    var = lib_sub(sum_sq, lib_mul(lib_pow(mean, 2),count)); //výpočet rozptylu
    var = lib_div(var, lib_sub(count, 1)); // vydělení rozptylu celkovým počtem čísel
    SDeviation = lib_root(var, 2); //výpočet odmocniny z rozptylu 
    
    //výpis standardní odchylky na standardní výstup
    cout << SDeviation << endl;

    return 0;
}
