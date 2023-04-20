/********************************************************
 *  Název projektu: Kalkulačka
 *  Soubor: mainwindow.cpp
 *  Datum: 20.4.2023
 *  Autor: Rogalo
 *  Popis: Třída spojující uživatelské rozhraní a backend
*********************************************************/

/**
 * @file mainwindow.cpp
 * @brief Třída spojující uživatelské rozhraní a backend
 * @author Rogalo
 */

#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "mainwindow.h"
#include "QDebug"
#include <QKeyEvent>
#include <qstring.h>
#include "arguments_parser.h"
#include "arguments_parser.cpp"
#include "mathlib.cpp"
#include "mathlib.h"
#include "cmath"
#include "iostream"

/**
 * @brief Konstruktorová funkce pro třídu MainWindow
 * Funkce inicializuje objekt MainWindow a nastavuje jeho uživatelské rozhraní
 * vytvořením instance Ui::MainWindow
 * @param parent Ukazatel na rodičovský widget
 */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
   ui->setupUi(this);

   ui->button_equal->setFocus();

   // Propojení tlačítek s funkcí digit_pressed()
    connect(ui->button_0, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->button_1, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->button_2, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->button_3, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->button_4, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->button_5, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->button_6, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->button_7, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->button_8, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->button_9, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->button_point, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->button_plus, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->button_minus, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->button_mul, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->button_div, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->button_lpar, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->button_rpar, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->button_mod, SIGNAL(released()),this, SLOT(digit_pressed()));

    // Skrytí nápovědového okna při spuštění
    ui->label_help->setVisible(false);
    ui->button_closeHelp->setVisible(false);

    // Propojení tlačítka pro zobrazení a skrytí nápovědy (otazník)
    QObject::connect(ui->button_help, &QPushButton::clicked, this, [=]() {
            // Skrytí nápovědy
            if (ui->label_help->isVisible()) {
                ui->button_help->clearFocus();
                ui->button_closeHelp->clearFocus();
                ui->label_help->setVisible(false);
                ui->button_closeHelp->setVisible(false);
            }
            // Zobrazení nápovědy
            else {
                ui->button_help->clearFocus();
                ui->button_closeHelp->clearFocus();
                ui->label_help->setVisible(true);
                ui->button_closeHelp->setVisible(true);
            }
        });
    // Propojení tlačítka pro skrytí nápovědy (křížek)
    QObject::connect(ui->button_closeHelp, &QPushButton::clicked, this, [=]() {
        ui->button_closeHelp->clearFocus();
        ui->button_help->clearFocus();
        ui->label_help->setVisible(false);
        ui->button_closeHelp->setVisible(false);
        });

}

/**
 * @brief Destruktorová funkce pro třídu MainWindow
 * Funkce odstraňuje promměnnou ui a uvolňuje tak pamět alokovanou
 * pro objekt Ui::MainWindow
 */
MainWindow::~MainWindow()
{
    delete ui;
}


/**
 * @brief Pomocná funkce pro zadání výrazu pomocí klávesnice
 * Funkce přidá znak do labelu s výrazem který má být vypočítán
 * @param num Znak, který bude do výrazu přidán
 */
void MainWindow::typeIn(QString num){
    ui->expression->setText(ui->expression->text() + num);
}

/**
 * @brief Funkce pro zadání výrazu pomocí klávesnice
 * Funkce reaguje na stisk klávesy (číslic, operátorů, ...)
 * zavoláním funkce \ref typeIn
 * @param event Ukazatel na event stisku klávesy
 */
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_0) {
        typeIn("0");
    }
    if (event->key() == Qt::Key_1) {
        typeIn("1");
    }
    if (event->key() == Qt::Key_2) {
        typeIn("2");
    }
    if (event->key() == Qt::Key_3) {
        typeIn("3");
    }
    if (event->key() == Qt::Key_4) {
        typeIn("4");
    }
    if (event->key() == Qt::Key_5) {
        typeIn("5");
    }
    if (event->key() == Qt::Key_6) {
        typeIn("6");
    }
    if (event->key() == Qt::Key_7) {
        typeIn("7");
    }
    if (event->key() == Qt::Key_8) {
        typeIn("8");
    }
    if (event->key() == Qt::Key_9) {
        typeIn("9");
    }
    if (event->key() == Qt::Key_Plus) {
        typeIn("+");
    }
    if (event->key() == Qt::Key_Minus) {
        typeIn("-");
    }
    if (event->key() == Qt::Key_Asterisk) {
        typeIn("×");
    }
    if (event->key() == Qt::Key_Slash) {
        typeIn("÷");
    }
    if (event->key() == Qt::Key_AsciiCircum) {
        typeIn("^");
    }
    if (event->key() == Qt::Key_Exclam) {
        typeIn("!");
    }
    if (event->key() == Qt::Key_ParenLeft) {
        typeIn("(");
    }
    if (event->key() == Qt::Key_ParenRight) {
        typeIn(")");
    }
    if (event->key() == Qt::Key_Comma || event->key() == Qt::Key_Period) {
        typeIn(".");
    }
    if (event->key() == Qt::Key_Backspace) {
        on_button_del_released();
    }
    if (event->key() == Qt::Key_Delete || event->key() == Qt::Key_C) {
        on_button_clear_released();
    }
    if (event->key() == Qt::Key_Equal || event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        on_button_equal_released();
    }

}

/**
 * @brief Funkce pro zadání výrazu pomocí myši
 * Kliknutím na tlačítko je do labelu s výrazem přidán další znak
 */
void MainWindow::digit_pressed(){
    QPushButton * button = (QPushButton*)sender();

    ui->expression->setText(ui->expression->text() + button->text());
    button->clearFocus();
    return;
}

/**
 * @brief Funkce pro přidání znaku mocniny (^) do výrazu
 * Pomocí tlačítka je do labelu s výrazem přidán znak '^'
 */
void MainWindow::on_button_pow_released()
{
    ui->expression->setText(ui->expression->text() + "^");
    ui->button_pow->clearFocus();
}

/**
 * @brief Funkce pro přidání znaku faktoriálu (!) do výrazu
 * Pomocí tlačítka je do labelu s výrazem přidán znak '!'
 */
void MainWindow::on_button_fact_released()
{
    ui->expression->setText(ui->expression->text() + "!");
    ui->button_fact->clearFocus();
}

/**
 * @brief Funkce implementující delete
 * Funkce smaže z labelu s výrazem poslední znak
 */
void MainWindow::on_button_del_released()
{
    QString text = ui->expression->text();
    if (text.endsWith(QChar(0x221A))) {
        QChar num = text[text.length()-8];

        text.remove(text.length() - 13, 13);
        text.append(num);



        ui->expression->setText(text);
        ui->button_del->clearFocus();
    }else{
        text.chop(1);
        ui->expression->setText(text);
        ui->button_del->clearFocus();
    }
}


/**
 * @brief Funkce implementující clear
 * Funkce smaže celý obsah labelu s výrazem a label s výsledkem nastaví na '0'
 */
void MainWindow::on_button_clear_released()
{
    ui->expression->setText("");
    ui->result->setText("0");
    ui->button_clear->clearFocus();
}

/**
 * @brief Funkce implementující zobrazení obecné odmocniny
 * Funkce po stisknutí tlačítka obecné odmocniny vloží předchozí znak
 * do superscriptu (pro lepší představu uživatele co je odmocnina) a vypíše znak
 * odmocniny
 */
void MainWindow::on_button_root_released()
{
  int charIndex = (ui->expression->text().length() - 1);
  QString expression =  ui->expression->text();

  // Vložení předchozího znaku do superscriptu
  expression.replace(charIndex, 1, "<sup>" + QString(expression[charIndex]) + "</sup>");
  expression.append(QString::fromUtf8("\u221A"));
  ui->expression->setText(expression);
  ui->button_root->clearFocus();

}

//Funkce prepise vyraz na pozadovany format pro predani parseru a ziska z nej vysledek
/**
 * @brief Funkce pro předání výrazu parseru a matematické knihovně
 * Funkce po stistknutí tlačítka '=' nahradí znaky (÷, ×, odmocnina a superscript)
 * v labelu výrazu (ui->expression)
 * za znaky podporované parserem argumentů (/, *, v)
 * Následně je pak výraz předán funkci arg_parser() která vrací výsledek.
 * Výsledek je pak nastaven do labelu s výsledkem (ui->result)
 */
void MainWindow::on_button_equal_released()
{
    // Pokud je label s výrazem prázdný je label s výsledkem nastaven na '0'
    if(ui->expression->text().isEmpty()){
        on_button_clear_released();
        return;
    }

    ui->result->setText(ui->expression->text());
    // Nahrazení znaků za znaky podporované parserem
    ui->result->setText(ui->result->text().replace("÷", "/"));
    ui->result->setText(ui->result->text().replace("×", "*"));
    ui->result->setText(ui->result->text().replace("\u221A", "v"));
    ui->result->setText(ui->result->text().replace("<sup>", ""));
    ui->result->setText(ui->result->text().replace("</sup>", ""));

    std::string expression = ui->result->text().toStdString();

    // V případě chyby je místo výsledku vyprintována chybová hláška
    try {
            std::string result = arg_parser(expression);
            QString toLabel = QString::fromStdString(result);
            toLabel.replace(",", ".");
            ui->result->setText(toLabel);
        } catch (const std::exception& e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
            ui->result->setText(QString::fromStdString(e.what()));
        }

    ui->button_equal->clearFocus();
}





