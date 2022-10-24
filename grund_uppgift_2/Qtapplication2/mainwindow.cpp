#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{
int val;
    QString VAL=ui->lineEdit->text();
    val = VAL.toInt();
    //qDebug()<<val;

    while (val != 0){

        if ((ui->spinBox->value() == ui->spinBox->maximum())
        | (ui->spinBox_2->value() == ui->spinBox_2->maximum())
        | (ui->spinBox_3->value() == ui->spinBox_3->maximum())){
           QMessageBox::about(this,"Increase","Maximum is 255");
           qDebug()<<ui->spinBox->value();
           qDebug()<<ui->spinBox_2->value();
           qDebug()<<ui->spinBox_3->value();
           break;
        }
        if (val != 0){
        ui->spinBox->stepUp();
        ui->spinBox_2->stepUp();
        ui->spinBox_3->stepUp();
    }
        val--;
        qDebug()<<val;
    }
}

void MainWindow::on_pushButton_clicked()
{
    qApp->exit();
}

void MainWindow::on_pushButton_2_clicked()
{
    int val;
    QString VAL=ui->lineEdit->text();
    val = VAL.toInt();
    qDebug()<<val;
    //int s;
    while (val > 0){
        if (val == 0) break;
        if ((ui->spinBox->value() == ui->spinBox->minimum())
                | (ui->spinBox_2->value() == ui->spinBox_2->minimum())
                | (ui->spinBox_3->value() == ui->spinBox_3->minimum())){
           QMessageBox::about(this,"Decrease","Minimum is 0");
           qDebug()<<ui->spinBox->value();
           qDebug()<<ui->spinBox_2->value();
           qDebug()<<ui->spinBox_3->value();
           break;
        }
        ui->spinBox->stepDown();
        ui->spinBox_2->stepDown();
        ui->spinBox_3->stepDown();
        val--;
    }
}
