#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <stdexcept>
#include <cmath>

//double primer_num = 0.0;
//double segundo_num = 0.0;
//int operador = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_Button0_clicked()
{
    ui->pantalla->setText(ui->pantalla->text()+"0");
}


void MainWindow::on_Button1_clicked()
{
    ui->pantalla->setText(ui->pantalla->text()+"1");
}


void MainWindow::on_Button2_clicked()
{
    ui->pantalla->setText(ui->pantalla->text()+"2");
}


void MainWindow::on_Button3_clicked()
{
    ui->pantalla->setText(ui->pantalla->text()+"3");
}


void MainWindow::on_Button4_clicked()
{
    ui->pantalla->setText(ui->pantalla->text()+"4");
}


void MainWindow::on_Button5_clicked()
{
    ui->pantalla->setText(ui->pantalla->text()+"5");
}


void MainWindow::on_Button6_clicked()
{
    ui->pantalla->setText(ui->pantalla->text()+"6");
}


void MainWindow::on_Button7_clicked()
{
    ui->pantalla->setText(ui->pantalla->text()+"7");
}


void MainWindow::on_Button8_clicked()
{
    ui->pantalla->setText(ui->pantalla->text()+"8");
}


void MainWindow::on_Button9_clicked()
{
    ui->pantalla->setText(ui->pantalla->text()+"9");
}


void MainWindow::on_Buttonborrar_clicked()
{
    ui->pantalla->setText("");
    primer_num = segundo_num = 0.0;
}


void MainWindow::on_sumar_clicked()
{
    primer_num = ui->pantalla->text().toDouble();
    operador = 1;
    ui->pantalla->setText("");
}




void MainWindow::on_restar_clicked()
{
    primer_num = ui->pantalla->text().toDouble();
    operador = 2;
    ui->pantalla->setText("");
}


void MainWindow::on_multiplicar_clicked()
{
    primer_num = ui->pantalla->text().toDouble();
    operador = 3;
    ui->pantalla->setText("");
}


void MainWindow::on_dividir_clicked()
{
    primer_num = ui->pantalla->text().toDouble();
    operador = 4;
    ui->pantalla->setText("");
}


void MainWindow::on_modulo_clicked()
{
    primer_num = ui->pantalla->text().toDouble();
    operador = 5;
    ui->pantalla->setText("");
}


void MainWindow::on_potencia_clicked()
{
    primer_num = ui->pantalla->text().toDouble();
    operador = 6;
    ui->pantalla->setText("");
}


void MainWindow::on_raiz_clicked()
{
    primer_num = ui->pantalla->text().toDouble();
    operador = 7;
    ui->pantalla->setText("");
}


void MainWindow::on_punto_decimal_clicked()
{
    if( !(ui->pantalla->text().contains(".")) ){
        ui->pantalla->setText( QString::number(primer_num) );
    }
}


void MainWindow::on_resultado_clicked()
{
    segundo_num = ui->pantalla->text().toDouble();
    switch(operador){
        case 1:{
            ui->pantalla->setText( QString::number(primer_num+segundo_num) );
            primer_num = primer_num+segundo_num;
        }
        break;

        case 2:{
            ui->pantalla->setText( QString::number(primer_num-segundo_num) );
            primer_num = primer_num-segundo_num;
        }
        break;

        case 3:{
            ui->pantalla->setText( QString::number(primer_num*segundo_num) );
            primer_num = primer_num*segundo_num;
        }
        break;

        case 4:{

            try{

                if(segundo_num == 0){
                    throw std::runtime_error("Error, no se puede dividir para 0");
                }else{
                    ui->pantalla->setText( QString::number(primer_num/segundo_num) );
                    primer_num = primer_num/segundo_num;
                }


            }catch(std::runtime_error& er){
                QMessageBox::critical(this,"Error","Error matemático, no se puede dividir para 0");
            }

        }
        break;

        case 5:{
            ui->pantalla->setText( QString::number((int)primer_num%(int)segundo_num) );
            primer_num = (int)primer_num%(int)segundo_num;
        }
        break;

        case 6:{
            ui->pantalla->setText( QString::number( pow(primer_num,segundo_num) ) );
            primer_num = pow(primer_num,segundo_num) ;
        }
        break;

        case 7:{

            try{

                if(primer_num < 0){
                    throw std::runtime_error("Error, no existe la raíz de un negativo");
                }else{
                    ui->pantalla->setText( QString::number(sqrt(primer_num)) );
                    primer_num = sqrt(primer_num);
                }


            }catch(std::runtime_error& er){
                QMessageBox::critical(this,"Error","Error matemático, no existe la raíz cuadrada de un número negativo");

            }

        }
        break;
    }//FIN DEL SWITCH
}

