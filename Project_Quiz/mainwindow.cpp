#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    database db;
    db.open();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_plainTextEdit_textChanged()
{

}


void MainWindow::on_pushButton_pressed()
{

}

