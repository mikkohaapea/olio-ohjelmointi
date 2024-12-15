#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::updateDisplay(int)
{
    // Muuttaa counter-muuttujan arvon QStringiksi ja päivittää
    // txtResult -widgetissä ja labelInfo -widgetissä näkyvän luvun
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelInfo->setText("Painiketta painettu " + s + " kertaa");
}

void MainWindow::on_btnCount_clicked()
{
    counter++;
    qDebug()<<counter;
    updateDisplay(counter);
    /*
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelInfo->setText("Painiketta painettu "+s+" kertaa");
    */
}


void MainWindow::on_btnReset_clicked()
{
    counter = 0;
    qDebug()<<counter;
    updateDisplay(counter);
    /*
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelInfo->setText("Painiketta painettu " + s + " kertaa");
    */
}

