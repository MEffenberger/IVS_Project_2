/******************************************
 *  Název projektu: Kalkulačka
 *  Soubor: doctests.cpp
 *  Datum: 25.4.2023
 *  Autor: Rogalo
 *  Popis: Testy pro matematickou knihovnu
 ******************************************/

/**
* @file doctests.cpp
* @author Rogalo
* @brief Testy pro matematickou knihovnu
*/

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "mathlib.h"

/**
 * @brief Testovací sada pro operaci sčítání
*/
TEST_CASE("Scitani") {

    CHECK(lib_add(1, 1) == 2);
    CHECK(lib_add(5, 3) == 8);
    CHECK(lib_add(-5, 3) == -2);
    CHECK(lib_add(5, -3) == 2);
    CHECK(lib_add(-5, -3) == -8);
    CHECK(lib_add(0, 0) == 0);
    CHECK(lib_add(5, 0) == 5);
    CHECK(lib_add(0, 5) == 5);
    CHECK(lib_add(-5, 0) == -5);
    CHECK(lib_add(0, -5) == -5);

    CHECK(lib_add(1.1, 2.2) == doctest::Approx(3.3).epsilon(0.0001));
    CHECK(lib_add(-1.1, 2.2) == doctest::Approx(1.1).epsilon(0.0001));
    CHECK(lib_add(1.1, -2.2) == doctest::Approx(-1.1).epsilon(0.0001));
    CHECK(lib_add(-1.1, -2.2) == doctest::Approx(-3.3).epsilon(0.0001));
}

/**
 * @brief Testovací sada pro operaci odčítání
*/
TEST_CASE("Odcitani") {

    CHECK(lib_sub(1, 1) == 0);
    CHECK(lib_sub(5, 3) == 2);
    CHECK(lib_sub(-5, 3) == -8);
    CHECK(lib_sub(5, -3) == 8);
    CHECK(lib_sub(-5, -3) == -2);
    CHECK(lib_sub(0, 0) == 0);
    CHECK(lib_sub(5, 0) == 5);
    CHECK(lib_sub(0, 5) == -5);
    CHECK(lib_sub(-5, 0) == -5);
    CHECK(lib_sub(0, -5) == 5);

    CHECK(lib_sub(1.1, 2.2) == doctest::Approx(-1.1).epsilon(0.0001));
    CHECK(lib_sub(-1.1, 2.2) == doctest::Approx(-3.3).epsilon(0.0001));
    CHECK(lib_sub(1.1, -2.2) == doctest::Approx(3.3).epsilon(0.0001));
    CHECK(lib_sub(-1.1, -2.2) == doctest::Approx(1.1).epsilon(0.0001));
}

/**
 * @brief Testovací sada pro operaci násobení
*/
TEST_CASE("Nasobeni") {

    CHECK(lib_mul(1, 1) == 1);
    CHECK(lib_mul(5, 3) == 15);
    CHECK(lib_mul(-5, 3) == -15);
    CHECK(lib_mul(5, -3) == -15);
    CHECK(lib_mul(-5, -3) == 15);
    CHECK(lib_mul(0, 0) == 0);
    CHECK(lib_mul(5, 0) == 0);
    CHECK(lib_mul(0, 5) == 0);
    CHECK(lib_mul(-5, 0) == 0);
    CHECK(lib_mul(0, -5) == 0);

    CHECK(lib_mul(1.1, 2.2) == doctest::Approx(2.42).epsilon(0.0001));
    CHECK(lib_mul(-1.1, 2.2) == doctest::Approx(-2.42).epsilon(0.0001));
    CHECK(lib_mul(1.1, -2.2) == doctest::Approx(-2.42).epsilon(0.0001));
    CHECK(lib_mul(-1.1, -2.2) == doctest::Approx(2.42).epsilon(0.0001));
}

/**
 * @brief Testovací sada pro operaci dělení
*/
TEST_CASE("Deleni") {

    CHECK(lib_div(1, 1) == 1);

    CHECK(lib_div(6, 3) == 2);
    CHECK(lib_div(-6, 3) == -2);
    CHECK(lib_div(6, -3) == -2);
    CHECK(lib_div(-6, -3) == 2);
    CHECK(lib_div(3, 6) == doctest::Approx(0.5).epsilon(0.0001));
    CHECK(lib_div(-3, 6) == doctest::Approx(-0.5).epsilon(0.0001));
    CHECK(lib_div(3, -6) == doctest::Approx(-0.5).epsilon(0.0001));
    CHECK(lib_div(-3, -6) == doctest::Approx(0.5).epsilon(0.0001));

    CHECK(lib_div(0, 5) == 0);
    CHECK(lib_div(0, -5) == 0);

    CHECK(lib_div(1.8, 1.2) == doctest::Approx(1.5).epsilon(0.0001));
    CHECK(lib_div(-1.8, 1.2) == doctest::Approx(-1.5).epsilon(0.0001));
    CHECK(lib_div(1.8, -1.2) == doctest::Approx(-1.5).epsilon(0.0001));
    CHECK(lib_div(-1.8, -1.2) == doctest::Approx(1.5).epsilon(0.0001));

    //test chyby dělení nulou
    REQUIRE_THROWS(lib_div(5, 0));
    REQUIRE_THROWS(lib_div(-5, 0));
    REQUIRE_THROWS(lib_div(0, 0));
}
    
/**
 * @brief Testovací sada pro faktoriál
*/
TEST_CASE("Faktorial") {

    CHECK(lib_fact(0) == 1);
    CHECK(lib_fact(1) == 1);
    CHECK(lib_fact(2) == 2);
    CHECK(lib_fact(3) == 6);
    CHECK(lib_fact(4) == 24);
    CHECK(lib_fact(5) == 120);
    CHECK(lib_fact(10) == 3628800);

    //test chyby, faktoriál pouze pro čísla z oboru přirozených čísel
    CHECK_THROWS(lib_fact(-1));
    CHECK_THROWS(lib_fact(1.1));
}

/**
 * @brief Testovací sada pro mocninu s celočíselným exponentem
*/
TEST_CASE("Mocnina s celociselnym exponentem") {
    
    CHECK(lib_pow(2, 2) == 4);
    CHECK(lib_pow(2, 3) == 8);
    CHECK(lib_pow(-2, 2) == 4);
    CHECK(lib_pow(-2, 3) == -8);
    CHECK(lib_pow(-2, 4) == 16);
    CHECK(lib_pow(-1, 2) == 1);
    CHECK(lib_pow(-1, 3) == -1);
    CHECK(lib_pow(-1, 4) == 1);
    CHECK(lib_pow(2, 0) == 1);
    CHECK(lib_pow(5, 0) == 1);
    CHECK(lib_pow(1.5, 2) == doctest::Approx(2.25).epsilon(0.0001));
    CHECK(lib_pow(-1.5, 2) == doctest::Approx(2.25).epsilon(0.0001));
    CHECK(lib_pow(1.5, 3) == doctest::Approx(3.375).epsilon(0.0001));
    CHECK(lib_pow(-1.5, 3) == doctest::Approx(-3.375).epsilon(0.0001));

    CHECK(lib_pow(2, -1) == doctest::Approx(0.5).epsilon(0.0001));
    CHECK(lib_pow(2, -2) == doctest::Approx(0.25).epsilon(0.0001));
    CHECK(lib_pow(2, -3) == doctest::Approx(0.125).epsilon(0.0001));

    //test chyby, mocnina pouze s celočíselným exponentem
    CHECK_THROWS(lib_pow(0, 0));
    CHECK_THROWS(lib_pow(2, 1.1));
}

/**
 * @brief Testovací sada pro obecnou odmocninu
*/
TEST_CASE("Obecna odmocnina") {
    
    CHECK(lib_root(4, 2) == 2);
    CHECK(lib_root(9, 2) == 3);
    CHECK(lib_root(2, 2) == doctest::Approx(1.414).epsilon(0.0001));
    CHECK(lib_root(8, 3) == 2);
    CHECK(lib_root(27, 3) == 3);
    CHECK(lib_root(3, 3) == doctest::Approx(1.4422).epsilon(0.0001));

    //test záporného čísla pod sudou odmocninou, pod lichou je v pořádku
    for (int i = 2; i < 10; i++) {
        if (i%2 == 0)
            CHECK_THROWS(lib_root(-2, i));
        else 
            CHECK_NOTHROW(lib_root(-2, i));
    }

    //záporná odmocnina
    CHECK_NOTHROW(lib_root(2, -2));
    CHECK(lib_root(4, -2) == doctest::Approx(0.5).epsilon(0.0001));
    CHECK(lib_root(2, -2) == doctest::Approx(0.7071).epsilon(0.0001));
    CHECK(lib_root(27, -3) == doctest::Approx(lib_div(1, 3)).epsilon(0.0001));
}

/**
 * @brief Testovací sada pro operaci modulo - zbytek po dělení (dle fmod)
*/
TEST_CASE("Modulo") {

    CHECK(lib_mod(1, 1) == 0);
    CHECK(lib_mod(1, 2) == 1);
    CHECK(lib_mod(2, 1) == 0);

    CHECK(lib_mod(6, 3) == 0);
    CHECK(lib_mod(3, 6) == 3);
    CHECK(lib_mod(5, 2) == 1);
    CHECK(lib_mod(2, 5) == 2);

    CHECK(lib_mod(6, 4) == 2);
    CHECK(lib_mod(-6, 4) == -2);
    CHECK(lib_mod(6, -4) == 2);
    CHECK(lib_mod(-6, -4) == -2);
    CHECK(lib_mod(0, 5) == 0);
    CHECK(lib_mod(0, -5) == 0);

    CHECK(lib_mod(1.8, 1.2) == doctest::Approx(0.6).epsilon(0.0001));
    CHECK(lib_mod(-1.8, 1.2) == doctest::Approx(-0.6).epsilon(0.0001));
    CHECK(lib_mod(1.8, -1.2) == doctest::Approx(0.6).epsilon(0.0001));
    CHECK(lib_mod(-1.8, -1.2) == doctest::Approx(-0.6).epsilon(0.0001));

    REQUIRE_THROWS(lib_mod(5, 0));
    REQUIRE_THROWS(lib_mod(-5, 0));
    REQUIRE_THROWS(lib_mod(0, 0));
}

/*** Konec souboru doctests.cpp ***/