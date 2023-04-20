/***************************************************************
 *  Název projektu: Kalkulačka
 *  Soubor: main.cpp
 *  Datum: 20.4.2023
 *  Autor: Rogalo
 *  Popis: Funkce pro spuštění uživatelského rozhraní kalkulačky
****************************************************************/

/**
 * @file main.cpp
 * @brief Hlavní funkce pro spuštění uživatelského rozhraní kalkulačky
 * @author Rogalo
 */

#include "mainwindow.h"
#include <QApplication>

/**
 * @brief Hlavní funkce pro spuštění kalkulačky
 * Vytváří nové okno MainWindow a nastavuje jeho titulek
 * @param argc počet argumentů
 * @param argv pole argumentů
 * @return Návratová hodnota z funkce QApplication::exec()
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowTitle("calc");
    w.show();
    return a.exec();
}
