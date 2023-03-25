/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *button_mul;
    QPushButton *button_lpar;
    QPushButton *button_9;
    QPushButton *button_2;
    QPushButton *button_1;
    QPushButton *button_clear;
    QPushButton *button_5;
    QPushButton *button_7;
    QPushButton *button_rpar;
    QPushButton *button_8;
    QPushButton *button_plus;
    QPushButton *button_3;
    QPushButton *button_0;
    QPushButton *button_4;
    QPushButton *button_point;
    QPushButton *button_abs;
    QPushButton *button_6;
    QPushButton *button_root;
    QPushButton *button_fact;
    QPushButton *button_pow;
    QPushButton *button_div;
    QPushButton *button_minus;
    QPushButton *button_equal;
    QLabel *expression;
    QLabel *result;
    QPushButton *button_del;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(401, 610);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(24,32,42);\n"
"}\n"
"\n"
"QLabel{\n"
"color: rgb(229,229,229);\n"
"font: 32pt \"URW Gothic\";\n"
"margin-right: 20px;\n"
"}\n"
"\n"
"QLabel#expression{\n"
"font: 22pt \"URW Gothic\";\n"
"}\n"
"\n"
"\n"
"QPushButton{\n"
"background-color: rgb(24,32,42);\n"
"border-style: solid;\n"
"border-color: rgb(24,32,42);\n"
"border-radius: 25px;\n"
"\n"
"color: rgb(229,229,229);\n"
"font: 16pt \"URW Gothic\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(93,98,105);\n"
"\n"
"}\n"
"\n"
"#button_equal{\n"
"background-color: rgb(255,101,49);\n"
"\n"
"border-style: solid;\n"
"border-color: rgb(255,101,49);\n"
"border-radius: 25px;\n"
"}\n"
"\n"
"#button_equal:pressed{\n"
"background-color: rgb(229,90,44);\n"
" \n"
"}\n"
"\n"
"#button_plus,#button_minus,#button_mul,#button_div,#button_root,#button_pow,#button_abs,#button_fact{\n"
"background-color: rgb(229,229,229);\n"
"color: rgb(24,32,42);\n"
"\n"
"border-style: solid;\n"
"border-color: rgb(229,229,229);\n"
"border-radius: 2"
                        "5px;\n"
"}\n"
"\n"
"#button_plus:pressed,#button_minus:pressed,#button_mul:pressed,#button_div:pressed,#button_root:pressed,#button_pow:pressed,#button_abs:pressed,#button_fact:pressed{\n"
"background-color: rgb(206,206,206);\n"
"}\n"
"\n"
"#button_del{\n"
"background-image: url(/home/dominik/calculatorGUI/pic/backspace.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;\n"
"border-radius: 10px;\n"
"\n"
"\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 190, 401, 401));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        button_mul = new QPushButton(gridLayoutWidget);
        button_mul->setObjectName("button_mul");
        button_mul->setMinimumSize(QSize(70, 70));
        button_mul->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_mul, 2, 3, 1, 1);

        button_lpar = new QPushButton(gridLayoutWidget);
        button_lpar->setObjectName("button_lpar");
        button_lpar->setMinimumSize(QSize(70, 70));
        button_lpar->setMaximumSize(QSize(70, 70));
        button_lpar->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(button_lpar, 0, 1, 1, 1);

        button_9 = new QPushButton(gridLayoutWidget);
        button_9->setObjectName("button_9");
        button_9->setMinimumSize(QSize(70, 70));
        button_9->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_9, 1, 2, 1, 1);

        button_2 = new QPushButton(gridLayoutWidget);
        button_2->setObjectName("button_2");
        button_2->setMinimumSize(QSize(70, 70));
        button_2->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_2, 3, 1, 1, 1);

        button_1 = new QPushButton(gridLayoutWidget);
        button_1->setObjectName("button_1");
        button_1->setMinimumSize(QSize(70, 70));
        button_1->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_1, 3, 0, 1, 1);

        button_clear = new QPushButton(gridLayoutWidget);
        button_clear->setObjectName("button_clear");
        button_clear->setMinimumSize(QSize(70, 70));
        button_clear->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_clear, 0, 0, 1, 1);

        button_5 = new QPushButton(gridLayoutWidget);
        button_5->setObjectName("button_5");
        button_5->setMinimumSize(QSize(70, 70));
        button_5->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_5, 2, 1, 1, 1);

        button_7 = new QPushButton(gridLayoutWidget);
        button_7->setObjectName("button_7");
        button_7->setMinimumSize(QSize(70, 70));
        button_7->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_7, 1, 0, 1, 1);

        button_rpar = new QPushButton(gridLayoutWidget);
        button_rpar->setObjectName("button_rpar");
        button_rpar->setMinimumSize(QSize(70, 70));
        button_rpar->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_rpar, 0, 2, 1, 1);

        button_8 = new QPushButton(gridLayoutWidget);
        button_8->setObjectName("button_8");
        button_8->setMinimumSize(QSize(70, 70));
        button_8->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_8, 1, 1, 1, 1);

        button_plus = new QPushButton(gridLayoutWidget);
        button_plus->setObjectName("button_plus");
        button_plus->setMinimumSize(QSize(70, 70));
        button_plus->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_plus, 3, 3, 1, 1);

        button_3 = new QPushButton(gridLayoutWidget);
        button_3->setObjectName("button_3");
        button_3->setMinimumSize(QSize(70, 70));
        button_3->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_3, 3, 2, 1, 1);

        button_0 = new QPushButton(gridLayoutWidget);
        button_0->setObjectName("button_0");
        button_0->setMinimumSize(QSize(70, 70));
        button_0->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_0, 4, 0, 1, 1);

        button_4 = new QPushButton(gridLayoutWidget);
        button_4->setObjectName("button_4");
        button_4->setMinimumSize(QSize(70, 70));
        button_4->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_4, 2, 0, 1, 1);

        button_point = new QPushButton(gridLayoutWidget);
        button_point->setObjectName("button_point");
        button_point->setMinimumSize(QSize(70, 70));
        button_point->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_point, 4, 1, 1, 1);

        button_abs = new QPushButton(gridLayoutWidget);
        button_abs->setObjectName("button_abs");
        button_abs->setMinimumSize(QSize(70, 70));
        button_abs->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_abs, 0, 3, 1, 1);

        button_6 = new QPushButton(gridLayoutWidget);
        button_6->setObjectName("button_6");
        button_6->setMinimumSize(QSize(70, 70));
        button_6->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_6, 2, 2, 1, 1);

        button_root = new QPushButton(gridLayoutWidget);
        button_root->setObjectName("button_root");
        button_root->setMinimumSize(QSize(70, 70));
        button_root->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_root, 1, 3, 1, 1);

        button_fact = new QPushButton(gridLayoutWidget);
        button_fact->setObjectName("button_fact");
        button_fact->setMinimumSize(QSize(70, 70));
        button_fact->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_fact, 0, 4, 1, 1);

        button_pow = new QPushButton(gridLayoutWidget);
        button_pow->setObjectName("button_pow");
        button_pow->setMinimumSize(QSize(70, 70));
        button_pow->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_pow, 1, 4, 1, 1);

        button_div = new QPushButton(gridLayoutWidget);
        button_div->setObjectName("button_div");
        button_div->setMinimumSize(QSize(70, 70));
        button_div->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_div, 2, 4, 1, 1);

        button_minus = new QPushButton(gridLayoutWidget);
        button_minus->setObjectName("button_minus");
        button_minus->setMinimumSize(QSize(70, 70));
        button_minus->setMaximumSize(QSize(70, 70));
        button_minus->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(button_minus, 3, 4, 1, 1);

        button_equal = new QPushButton(gridLayoutWidget);
        button_equal->setObjectName("button_equal");
        button_equal->setMinimumSize(QSize(70, 70));
        button_equal->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_equal, 4, 3, 1, 1);

        expression = new QLabel(centralwidget);
        expression->setObjectName("expression");
        expression->setGeometry(QRect(0, 0, 401, 71));
        expression->setStyleSheet(QString::fromUtf8(""));
        expression->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        result = new QLabel(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(0, 70, 401, 81));
        result->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        button_del = new QPushButton(centralwidget);
        button_del->setObjectName("button_del");
        button_del->setGeometry(QRect(320, 150, 61, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 401, 20));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        button_mul->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        button_lpar->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button_rpar->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        button_abs->setText(QCoreApplication::translate("MainWindow", "|x|", nullptr));
        button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button_root->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        button_fact->setText(QCoreApplication::translate("MainWindow", "x!", nullptr));
        button_pow->setText(QCoreApplication::translate("MainWindow", "x\342\201\277", nullptr));
        button_div->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        button_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        button_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        expression->setText(QString());
        result->setText(QCoreApplication::translate("MainWindow", "65", nullptr));
        button_del->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
