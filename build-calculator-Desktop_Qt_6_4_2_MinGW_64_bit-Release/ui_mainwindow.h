/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *pantalla;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Button7;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *Button0;
    QPushButton *sumar;
    QPushButton *restar;
    QPushButton *multiplicar;
    QPushButton *dividir;
    QPushButton *raiz;
    QPushButton *potencia;
    QPushButton *resultado;
    QLabel *label_2;
    QPushButton *Buttonborrar;
    QPushButton *modulo;
    QPushButton *punto_decimal;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(921, 626);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 153, 142);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(170, 20, 601, 61));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Trebuchet MS")});
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Sunken);
        label->setLineWidth(3);

        verticalLayout->addWidget(label);

        pantalla = new QLineEdit(centralwidget);
        pantalla->setObjectName("pantalla");
        pantalla->setGeometry(QRect(10, 110, 901, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(24);
        pantalla->setFont(font1);
        pantalla->setLayoutDirection(Qt::LeftToRight);
        pantalla->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pantalla->setFrame(true);
        pantalla->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName("Button1");
        Button1->setGeometry(QRect(10, 390, 141, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Yu Gothic UI Semibold")});
        font2.setPointSize(20);
        font2.setBold(true);
        Button1->setFont(font2);
        Button1->setCursor(QCursor(Qt::PointingHandCursor));
        Button1->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);"));
        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName("Button2");
        Button2->setGeometry(QRect(170, 390, 141, 61));
        Button2->setFont(font2);
        Button2->setCursor(QCursor(Qt::PointingHandCursor));
        Button2->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);"));
        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName("Button3");
        Button3->setGeometry(QRect(330, 390, 141, 61));
        Button3->setFont(font2);
        Button3->setCursor(QCursor(Qt::PointingHandCursor));
        Button3->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);"));
        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName("Button4");
        Button4->setGeometry(QRect(10, 310, 141, 61));
        Button4->setFont(font2);
        Button4->setCursor(QCursor(Qt::PointingHandCursor));
        Button4->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);"));
        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName("Button5");
        Button5->setGeometry(QRect(170, 310, 141, 61));
        Button5->setFont(font2);
        Button5->setCursor(QCursor(Qt::PointingHandCursor));
        Button5->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);"));
        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName("Button6");
        Button6->setGeometry(QRect(330, 310, 141, 61));
        Button6->setFont(font2);
        Button6->setCursor(QCursor(Qt::PointingHandCursor));
        Button6->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);"));
        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName("Button7");
        Button7->setGeometry(QRect(10, 230, 141, 61));
        Button7->setFont(font2);
        Button7->setCursor(QCursor(Qt::PointingHandCursor));
        Button7->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);"));
        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName("Button8");
        Button8->setGeometry(QRect(170, 230, 141, 61));
        Button8->setFont(font2);
        Button8->setCursor(QCursor(Qt::PointingHandCursor));
        Button8->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);"));
        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName("Button9");
        Button9->setGeometry(QRect(330, 230, 141, 61));
        Button9->setFont(font2);
        Button9->setCursor(QCursor(Qt::PointingHandCursor));
        Button9->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);"));
        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName("Button0");
        Button0->setGeometry(QRect(10, 470, 141, 61));
        Button0->setFont(font2);
        Button0->setCursor(QCursor(Qt::PointingHandCursor));
        Button0->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);"));
        sumar = new QPushButton(centralwidget);
        sumar->setObjectName("sumar");
        sumar->setGeometry(QRect(530, 230, 161, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sitka Text")});
        font3.setPointSize(22);
        sumar->setFont(font3);
        sumar->setCursor(QCursor(Qt::PointingHandCursor));
        sumar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        restar = new QPushButton(centralwidget);
        restar->setObjectName("restar");
        restar->setGeometry(QRect(710, 230, 161, 61));
        restar->setFont(font3);
        restar->setCursor(QCursor(Qt::PointingHandCursor));
        restar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        multiplicar = new QPushButton(centralwidget);
        multiplicar->setObjectName("multiplicar");
        multiplicar->setGeometry(QRect(530, 310, 161, 61));
        multiplicar->setFont(font3);
        multiplicar->setCursor(QCursor(Qt::PointingHandCursor));
        multiplicar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        dividir = new QPushButton(centralwidget);
        dividir->setObjectName("dividir");
        dividir->setGeometry(QRect(710, 310, 161, 61));
        dividir->setFont(font3);
        dividir->setCursor(QCursor(Qt::PointingHandCursor));
        dividir->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        raiz = new QPushButton(centralwidget);
        raiz->setObjectName("raiz");
        raiz->setGeometry(QRect(530, 390, 161, 61));
        raiz->setFont(font3);
        raiz->setCursor(QCursor(Qt::PointingHandCursor));
        raiz->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        potencia = new QPushButton(centralwidget);
        potencia->setObjectName("potencia");
        potencia->setGeometry(QRect(710, 390, 161, 61));
        potencia->setFont(font3);
        potencia->setCursor(QCursor(Qt::PointingHandCursor));
        potencia->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        resultado = new QPushButton(centralwidget);
        resultado->setObjectName("resultado");
        resultado->setGeometry(QRect(530, 470, 161, 51));
        resultado->setFont(font3);
        resultado->setCursor(QCursor(Qt::PointingHandCursor));
        resultado->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(500, 550, 401, 20));
        label_2->setTabletTracking(false);
        label_2->setAlignment(Qt::AlignCenter);
        Buttonborrar = new QPushButton(centralwidget);
        Buttonborrar->setObjectName("Buttonborrar");
        Buttonborrar->setGeometry(QRect(170, 470, 141, 61));
        Buttonborrar->setFont(font2);
        Buttonborrar->setCursor(QCursor(Qt::PointingHandCursor));
        Buttonborrar->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);"));
        modulo = new QPushButton(centralwidget);
        modulo->setObjectName("modulo");
        modulo->setGeometry(QRect(710, 470, 161, 51));
        modulo->setFont(font3);
        modulo->setCursor(QCursor(Qt::PointingHandCursor));
        modulo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        punto_decimal = new QPushButton(centralwidget);
        punto_decimal->setObjectName("punto_decimal");
        punto_decimal->setGeometry(QRect(330, 470, 141, 61));
        punto_decimal->setFont(font2);
        punto_decimal->setCursor(QCursor(Qt::PointingHandCursor));
        punto_decimal->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 921, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">CALCULADORA</span></p></body></html>", nullptr));
        pantalla->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        Button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        sumar->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        restar->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        multiplicar->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        dividir->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        raiz->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        potencia->setText(QCoreApplication::translate("MainWindow", "pow", nullptr));
        resultado->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Desarrollado por: Super compu mundo hiper mega red", nullptr));
        Buttonborrar->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        modulo->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        punto_decimal->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
