/***************************************************************
 *  Název projektu: Kalkulačka
 *  Soubor: mainwindow.h
 *  Datum: 20.4.2023
 *  Autor: Rogalo
 *  Popis: Hlavičkový soubor pro třídu MainWindow
****************************************************************/

/**
 * @file mainwindow.h
 * @brief Hlavičkový soubor pro třídu MainWindow která reprezentuje okno
 * @author Rogalo
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "arguments_parser.h"
#include "mathlib.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * @brief Třída MainWindow reprezentující okno kalkulačky
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Konstruktor třídy MainWindow
     * @param parent Ukazatel na rodičovské okno
     */
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    /**
     * @brief Funkce pro zpracování vstupu z klávesnice
     * @param event Event klávesnice
     */
    void keyPressEvent(QKeyEvent *event) override;

private:
    Ui::MainWindow *ui;
/**
 * Deklarace funkcí
 */
private slots:

    void digit_pressed();
    void typeIn(QString num);
    void on_button_pow_released();
    void on_button_fact_released();
    void on_button_del_released();
    void on_button_equal_released();
    void on_button_clear_released();
    void on_button_root_released();
};
#endif // MAINWINDOW_H
