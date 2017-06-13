#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::evalInt() {
    int a,b;
    a = ui->intEdit1->text().toInt();
    b = ui->intEdit2->text().toInt();
    ui->intResult->setText(QString::number(a+b));
}

void MainWindow::evalDouble()
{
    double a,b;
    a = ui->doubleEdit1->text().toDouble();
    b = ui->doubleEdit2->text().toDouble();
    ui->doubleResult->setText(QString::number(a+b));
}
