#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <cmath>
#include <stdexcept>
#include <QMessageBox>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    double primer_num = 0.0;
    double segundo_num = 0.0;
    int operador = 0;

private slots:
    void on_Button0_clicked();

    void on_Button1_clicked();

    void on_Button2_clicked();

    void on_Button3_clicked();

    void on_Button4_clicked();

    void on_Button5_clicked();

    void on_Button6_clicked();

    void on_Button7_clicked();

    void on_Button8_clicked();

    void on_Button9_clicked();

    void on_Buttonborrar_clicked();

    void on_sumar_clicked();

    void on_restar_clicked();

    void on_multiplicar_clicked();

    void on_dividir_clicked();

    void on_modulo_clicked();

    void on_potencia_clicked();

    void on_raiz_clicked();

    void on_punto_decimal_clicked();

    void on_resultado_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
