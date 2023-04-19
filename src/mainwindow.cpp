#include "mainwindow.h"
#include "helpwindow.h"
#include "./ui_mainwindow.h"
#include "QDebug"
#include <QKeyEvent>
#include <qstring.h>
#include "arguments_parser.h"
#include "arguments_parser.cpp"
#include "mathlib.cpp"
#include "mathlib.h"
#include "cmath"

//for debug
#include <iostream>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   ui->button_equal->setFocus();

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
    ui->label_help->setVisible(false);
    ui->button_closeHelp->setVisible(false);

    QObject::connect(ui->button_help, &QPushButton::clicked,this, [=]() {
            if (ui->label_help->isVisible()) {
                ui->button_help->clearFocus();
                ui->button_closeHelp->clearFocus();
                ui->label_help->setVisible(false);
                ui->button_closeHelp->setVisible(false);


            } else {
                ui->button_help->clearFocus();
                ui->button_closeHelp->clearFocus();
                ui->label_help->setVisible(true);
                ui->button_closeHelp->setVisible(true);

            }
        });
    QObject::connect(ui->button_closeHelp, &QPushButton::clicked,this, [=]() {
        ui->button_closeHelp->clearFocus();
        ui->button_help->clearFocus();
        ui->label_help->setVisible(false);
        ui->button_closeHelp->setVisible(false);

        });

}

MainWindow::~MainWindow()
{
    delete ui;
}

//Function which writes into expression label
void MainWindow::typeIn(QString num){
    ui->expression->setText(ui->expression->text() + num);

}

//Function to input from keyboard
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

//Function to input numbers and some of the arithmethic symbols to epxression label
void MainWindow::digit_pressed(){
    QPushButton * button = (QPushButton*)sender();

    ui->expression->setText(ui->expression->text() + button->text());
    button->clearFocus();
    return;
}

//Functions to convert power of, absolut value and factorial to right input on expression display
void MainWindow::on_button_pow_released()
{
    ui->expression->setText(ui->expression->text() + "^");
    ui->button_pow->clearFocus();
}

void MainWindow::on_button_fact_released()
{
    ui->expression->setText(ui->expression->text() + "!");
    ui->button_fact->clearFocus();
}

//Function which deletes last character from expression
void MainWindow::on_button_del_released()
{
    QString text = ui->expression->text();
        text.chop(1);
        ui->expression->setText(text);
        ui->button_del->clearFocus();
}

//Funkce prepise vyraz na pozadovany format pro predani parseru a ziska z nej vysledek
void MainWindow::on_button_equal_released()
{
    ui->result->setText(ui->expression->text());
    //Formating expression to have valid format for parser
    ui->result->setText(ui->result->text().replace("÷", "/"));
    ui->result->setText(ui->result->text().replace("×", "*"));
    ui->result->setText(ui->result->text().replace("\u221A", "v"));
    ui->result->setText(ui->result->text().replace("<sup>", ""));
    ui->result->setText(ui->result->text().replace("</sup>", ""));

    std::string vyraz = ui->result->text().toStdString();
    std::cout << vyraz << std::endl;
    std::string vysledek = arg_parser(vyraz);
    std::cout << vysledek << std::endl;
    QString toLabel = QString::fromStdString(vysledek);


    ui->result->setText(toLabel);

    ui->button_equal->clearFocus();
}

//Function which will clear expression input and result input
void MainWindow::on_button_clear_released()
{
    ui->expression->setText("");
    ui->result->setText("0");
    ui->button_clear->clearFocus();
}

//Formating the root visual
void MainWindow::on_button_root_released()
{
  int charIndex = (ui->expression->text().length() - 1);
  QString expression =  ui->expression->text();
  expression.replace(charIndex, 1, "<sup>" + QString(expression[charIndex]) + "</sup>");
  expression.append(QString::fromUtf8("\u221A"));
  ui->expression->setText(expression);
  ui->button_root->clearFocus();

}



