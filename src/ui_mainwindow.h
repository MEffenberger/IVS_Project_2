/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
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
    QPushButton *button_mod;
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
    QPushButton *button_help;
    QLabel *label_help;
    QPushButton *button_closeHelp;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 610);
        MainWindow->setMinimumSize(QSize(400, 610));
        MainWindow->setMaximumSize(QSize(400, 610));
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
"#button_plus,#button_minus,#button_mul,#button_div,#button_root,#button_pow,#button_mod,#button_fact{\n"
"background-color: rgb(229,229,229);\n"
"color: rgb(24,32,42);\n"
"\n"
"border-style: solid;\n"
"border-color: rgb(229,229,229);\n"
"border-radius: 2"
                        "5px;\n"
"}\n"
"\n"
"#button_plus:pressed,#button_minus:pressed,#button_mul:pressed,#button_div:pressed,#button_root:pressed,#button_pow:pressed,#button_mod:pressed,#button_fact:pressed{\n"
"background-color: rgb(206,206,206);\n"
"}\n"
"\n"
"#button_del{\n"
"background-image: url(./pic/backspace.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;\n"
"border-radius: 10px;\n"
"\n"
"}\n"
"\n"
"#button_help{\n"
"background-color: rgb(229,229,229);\n"
"color: rgb(24,32,42);\n"
"border-style: solid;\n"
"border-color: rgb(229,229,229);\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#button_help:pressed{\n"
"background-color: rgb(206,206,206);\n"
"}\n"
"\n"
"#label_help{\n"
"background-color: rgb(229,229,229);\n"
"color: rgb(24,32,42);\n"
"border-style: solid;\n"
"border-color: rgb(229,229,229);\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#button_closeHelp{\n"
"background-color: rgb(255,101,49);\n"
"\n"
"border-style: solid;\n"
"border-color: rgb(255,101,49);\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#button_cl"
                        "oseHelp:pressed{\n"
"background-color: rgb(229,90,44);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 190, 401, 401));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        button_mul = new QPushButton(gridLayoutWidget);
        button_mul->setObjectName(QString::fromUtf8("button_mul"));
        button_mul->setMinimumSize(QSize(70, 70));
        button_mul->setMaximumSize(QSize(70, 70));
        button_mul->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_mul, 2, 3, 1, 1);

        button_lpar = new QPushButton(gridLayoutWidget);
        button_lpar->setObjectName(QString::fromUtf8("button_lpar"));
        button_lpar->setMinimumSize(QSize(70, 70));
        button_lpar->setMaximumSize(QSize(70, 70));
        button_lpar->setCursor(QCursor(Qt::PointingHandCursor));
        button_lpar->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(button_lpar, 0, 1, 1, 1);

        button_9 = new QPushButton(gridLayoutWidget);
        button_9->setObjectName(QString::fromUtf8("button_9"));
        button_9->setMinimumSize(QSize(70, 70));
        button_9->setMaximumSize(QSize(70, 70));
        button_9->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_9, 1, 2, 1, 1);

        button_2 = new QPushButton(gridLayoutWidget);
        button_2->setObjectName(QString::fromUtf8("button_2"));
        button_2->setMinimumSize(QSize(70, 70));
        button_2->setMaximumSize(QSize(70, 70));
        button_2->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_2, 3, 1, 1, 1);

        button_1 = new QPushButton(gridLayoutWidget);
        button_1->setObjectName(QString::fromUtf8("button_1"));
        button_1->setMinimumSize(QSize(70, 70));
        button_1->setMaximumSize(QSize(70, 70));
        button_1->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_1, 3, 0, 1, 1);

        button_clear = new QPushButton(gridLayoutWidget);
        button_clear->setObjectName(QString::fromUtf8("button_clear"));
        button_clear->setMinimumSize(QSize(70, 70));
        button_clear->setMaximumSize(QSize(70, 70));
        button_clear->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_clear, 0, 0, 1, 1);

        button_5 = new QPushButton(gridLayoutWidget);
        button_5->setObjectName(QString::fromUtf8("button_5"));
        button_5->setMinimumSize(QSize(70, 70));
        button_5->setMaximumSize(QSize(70, 70));
        button_5->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_5, 2, 1, 1, 1);

        button_7 = new QPushButton(gridLayoutWidget);
        button_7->setObjectName(QString::fromUtf8("button_7"));
        button_7->setMinimumSize(QSize(70, 70));
        button_7->setMaximumSize(QSize(70, 70));
        button_7->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_7, 1, 0, 1, 1);

        button_rpar = new QPushButton(gridLayoutWidget);
        button_rpar->setObjectName(QString::fromUtf8("button_rpar"));
        button_rpar->setMinimumSize(QSize(70, 70));
        button_rpar->setMaximumSize(QSize(70, 70));
        button_rpar->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_rpar, 0, 2, 1, 1);

        button_8 = new QPushButton(gridLayoutWidget);
        button_8->setObjectName(QString::fromUtf8("button_8"));
        button_8->setMinimumSize(QSize(70, 70));
        button_8->setMaximumSize(QSize(70, 70));
        button_8->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_8, 1, 1, 1, 1);

        button_plus = new QPushButton(gridLayoutWidget);
        button_plus->setObjectName(QString::fromUtf8("button_plus"));
        button_plus->setMinimumSize(QSize(70, 70));
        button_plus->setMaximumSize(QSize(70, 70));
        button_plus->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_plus, 3, 3, 1, 1);

        button_3 = new QPushButton(gridLayoutWidget);
        button_3->setObjectName(QString::fromUtf8("button_3"));
        button_3->setMinimumSize(QSize(70, 70));
        button_3->setMaximumSize(QSize(70, 70));
        button_3->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_3, 3, 2, 1, 1);

        button_0 = new QPushButton(gridLayoutWidget);
        button_0->setObjectName(QString::fromUtf8("button_0"));
        button_0->setMinimumSize(QSize(70, 70));
        button_0->setMaximumSize(QSize(70, 70));
        button_0->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_0, 4, 0, 1, 1);

        button_4 = new QPushButton(gridLayoutWidget);
        button_4->setObjectName(QString::fromUtf8("button_4"));
        button_4->setMinimumSize(QSize(70, 70));
        button_4->setMaximumSize(QSize(70, 70));
        button_4->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_4, 2, 0, 1, 1);

        button_point = new QPushButton(gridLayoutWidget);
        button_point->setObjectName(QString::fromUtf8("button_point"));
        button_point->setMinimumSize(QSize(70, 70));
        button_point->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(button_point, 4, 1, 1, 1);

        button_mod = new QPushButton(gridLayoutWidget);
        button_mod->setObjectName(QString::fromUtf8("button_mod"));
        button_mod->setMinimumSize(QSize(70, 70));
        button_mod->setMaximumSize(QSize(70, 70));
        button_mod->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_mod, 0, 3, 1, 1);

        button_6 = new QPushButton(gridLayoutWidget);
        button_6->setObjectName(QString::fromUtf8("button_6"));
        button_6->setMinimumSize(QSize(70, 70));
        button_6->setMaximumSize(QSize(70, 70));
        button_6->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_6, 2, 2, 1, 1);

        button_root = new QPushButton(gridLayoutWidget);
        button_root->setObjectName(QString::fromUtf8("button_root"));
        button_root->setMinimumSize(QSize(70, 70));
        button_root->setMaximumSize(QSize(70, 70));
        button_root->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_root, 1, 3, 1, 1);

        button_fact = new QPushButton(gridLayoutWidget);
        button_fact->setObjectName(QString::fromUtf8("button_fact"));
        button_fact->setMinimumSize(QSize(70, 70));
        button_fact->setMaximumSize(QSize(70, 70));
        button_fact->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_fact, 0, 4, 1, 1);

        button_pow = new QPushButton(gridLayoutWidget);
        button_pow->setObjectName(QString::fromUtf8("button_pow"));
        button_pow->setMinimumSize(QSize(70, 70));
        button_pow->setMaximumSize(QSize(70, 70));
        button_pow->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_pow, 1, 4, 1, 1);

        button_div = new QPushButton(gridLayoutWidget);
        button_div->setObjectName(QString::fromUtf8("button_div"));
        button_div->setMinimumSize(QSize(70, 70));
        button_div->setMaximumSize(QSize(70, 70));
        button_div->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_div, 2, 4, 1, 1);

        button_minus = new QPushButton(gridLayoutWidget);
        button_minus->setObjectName(QString::fromUtf8("button_minus"));
        button_minus->setMinimumSize(QSize(70, 70));
        button_minus->setMaximumSize(QSize(70, 70));
        button_minus->setCursor(QCursor(Qt::PointingHandCursor));
        button_minus->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(button_minus, 3, 4, 1, 1);

        button_equal = new QPushButton(gridLayoutWidget);
        button_equal->setObjectName(QString::fromUtf8("button_equal"));
        button_equal->setMinimumSize(QSize(70, 70));
        button_equal->setMaximumSize(QSize(70, 70));
        button_equal->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_equal, 4, 3, 1, 1);

        expression = new QLabel(centralwidget);
        expression->setObjectName(QString::fromUtf8("expression"));
        expression->setGeometry(QRect(60, 0, 341, 71));
        expression->setStyleSheet(QString::fromUtf8(""));
        expression->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        result = new QLabel(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(0, 70, 401, 81));
        result->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        button_del = new QPushButton(centralwidget);
        button_del->setObjectName(QString::fromUtf8("button_del"));
        button_del->setGeometry(QRect(320, 140, 71, 41));
        button_del->setCursor(QCursor(Qt::PointingHandCursor));
        button_help = new QPushButton(centralwidget);
        button_help->setObjectName(QString::fromUtf8("button_help"));
        button_help->setGeometry(QRect(10, 10, 40, 40));
        button_help->setMinimumSize(QSize(40, 40));
        button_help->setMaximumSize(QSize(40, 40));
        label_help = new QLabel(centralwidget);
        label_help->setObjectName(QString::fromUtf8("label_help"));
        label_help->setGeometry(QRect(10, 60, 401, 521));
        button_closeHelp = new QPushButton(centralwidget);
        button_closeHelp->setObjectName(QString::fromUtf8("button_closeHelp"));
        button_closeHelp->setGeometry(QRect(340, 70, 40, 40));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 20));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        button_mul->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>N\303\241soben\303\255 </p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        button_mul->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
#if QT_CONFIG(tooltip)
        button_lpar->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>P\305\231id\303\241 levou z\303\241vorku</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        button_lpar->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(tooltip)
        button_1->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">You will insert number ONE!</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        button_1->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(tooltip)
        button_clear->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Sma\305\276e cel\303\275 v\303\275raz i v\303\275sledek</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        button_clear->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Clears expression and result</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        button_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
#if QT_CONFIG(tooltip)
        button_rpar->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>P\305\231id\303\241 pravou z\303\241vorku</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        button_rpar->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
#if QT_CONFIG(tooltip)
        button_plus->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>S\304\215\303\255t\303\241n\303\255</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        button_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(tooltip)
        button_point->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Desetinn\303\241 \304\215\303\241rka</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        button_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
#if QT_CONFIG(tooltip)
        button_mod->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Modulo</p><p>Pou\305\276it\303\255: x % y</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        button_mod->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
#if QT_CONFIG(tooltip)
        button_root->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Obecn\303\241 odmocnina</p><p>Pou\305\276it\303\255: n -&gt;  \342\201\277\342\210\232x  -&gt; x</p><p>V\303\275sledek: n-t\303\241 odmocnina z x</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        button_root->setText(QCoreApplication::translate("MainWindow", "\342\201\277\342\210\232x", nullptr));
#if QT_CONFIG(tooltip)
        button_fact->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Faktori\303\241l</p><p>Pou\305\276it\303\255: x -&gt; x!</p><p>V\303\275sledek: faktori\303\241l x</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        button_fact->setText(QCoreApplication::translate("MainWindow", "x!", nullptr));
#if QT_CONFIG(tooltip)
        button_pow->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Obecn\303\241 mocnina </p><p>Pou\305\276it\303\255: x -&gt; x\342\201\277 -&gt; n</p><p>V\303\275sledek: n-t\303\241 mocnina x</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        button_pow->setText(QCoreApplication::translate("MainWindow", "x\342\201\277", nullptr));
#if QT_CONFIG(tooltip)
        button_div->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>D\304\233len\303\255</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        button_div->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
#if QT_CONFIG(tooltip)
        button_minus->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Od\304\215\303\255t\303\241n\303\255</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        button_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(tooltip)
        button_equal->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Vypo\304\215\303\255t\303\241 v\303\275sledek</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        button_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        expression->setText(QString());
        result->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(tooltip)
        button_del->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Sma\305\276e posledn\303\255 znak v\303\275razu</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        button_del->setText(QString());
        button_help->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_help->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">N\303\241pov\304\233da</span></p><p><br/></p></body></html>", nullptr));
        button_closeHelp->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
