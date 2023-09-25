#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QPlainTextEdit>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDir>
#include <QTableWidget>

#include "sistema.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->spinBox_x->setValue(0);
    ui->spinBox_x->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


/*
void MainWindow::on_actionOpen_Triggered()
{
    QString Filename= QFileDialog::getOpenFile(this, tr("Open File"),
                                                "/home",tr("Images (*.png *.xpm *.jpg)"));
    QMessageBox T;
        T.setText(Filename);
    T.exec();
}
void MainWindow::on_pushButton_clicked()
{
    ui->tableWidget->setColumnCount(8);
    ui->tableWidget->setRowCount(4);
    QTableWidgetItem=MyItem= new QTableWidgetItem("Hola");
    ui->tableWidget->setWidget->setItem(0,0,MyItem);
}
*/


void MainWindow::on_ButtonAAI_clicked()
{
    ui->ButtonAAI->setText("Agregar al inicio");
    Sistema st;
    Neurona n;
    int id, pos_x, pos_y, red, green, blue;
    float voltaje;
    QString ID=ui->lineEdit_id->text();
    id=ID.toInt();
    n.setId(id);
    QString VOLTAJE=ui->lineEdit_voltaje->text();
    voltaje=VOLTAJE.toFloat();
    n.setVoltaje(voltaje);
    QString POS_X=ui->spinBox_x->text();
    pos_x=POS_X.toInt();
    n.setPos_x(pos_x);
    QString POS_Y=ui->spinBox_y->text();
    pos_y=POS_Y.toInt();
    n.setPos_y(pos_y);
    QString RED=ui->lineEdit_red->text();
    red=RED.toInt();
    n.setRed(red);
    QString GREEN=ui->lineEdit_green->text();
    green=GREEN.toInt();
    n.setGreen(green);
    QString BLUE=ui->lineEdit_blue->text();
    blue=BLUE.toInt();
    n.setBlue(blue);

    st.agregar_inicio(n);
}


void MainWindow::on_ButtonAAF_clicked()
{
    ui->ButtonAAF->setText("Agregar al final");
    Sistema st;
    Neurona n;
    int id, pos_x, pos_y, red, green, blue;
    float voltaje;
    QString ID=ui->lineEdit_id->text();
    id=ID.toInt();
    n.setId(id);
    QString VOLTAJE=ui->lineEdit_voltaje->text();
    voltaje=VOLTAJE.toFloat();
    n.setVoltaje(voltaje);
    QString POS_X=ui->spinBox_x->text();
    pos_x=POS_X.toInt();
    n.setPos_x(pos_x);
    QString POS_Y=ui->spinBox_y->text();
    pos_y=POS_Y.toInt();
    n.setPos_y(pos_y);
    QString RED=ui->lineEdit_red->text();
    red=RED.toInt();
    n.setRed(red);
    QString GREEN=ui->lineEdit_green->text();
    green=GREEN.toInt();
    n.setGreen(green);
    QString BLUE=ui->lineEdit_blue->text();
    blue=BLUE.toInt();
    n.setBlue(blue);

    st.agregar_final(n);
}


void MainWindow::on_ButtonMostrar_clicked()
{
    ui->ButtonMostrar->setText("Mostrar neuronas");
    Sistema st;
    st.guardar_tabla();
    st.guardar();
    st.recuperar();

    QFile file("neuronas_tabla.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"title","file not open");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->ListaNeuronas->setPlainText(text);
    file.close();
}

void MainWindow::on_ButtonGuardar_clicked()
{
    QFile file("neuronas.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"title","file not open");
    }
    QTextStream out(&file);
    QString text = ui->ListaNeuronas->toPlainText();
    out << text;
    file.flush();
    file.close();
}


void MainWindow::on_ButtonRecuperar_clicked()
{
    QFile file("neuronas.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"title","file not open");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->ListaNeuronas->setPlainText(text);
    file.close();
}
