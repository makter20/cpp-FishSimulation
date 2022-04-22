#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "hw8_sea.h"
#include <iostream>
MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  ui->spinBox->setButtonSymbols( QAbstractSpinBox::NoButtons );
  fishCount = 0;
  numFish = "";

}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_runBtn_clicked()
{
  numFish="";
  Sea sea;

  spinBoxVal = ui->spinBox->value();
  qDebug() << "Spin Box Value: " << spinBoxVal;

  fishSimulation(spinBoxVal, sea);
  for(int i = 0; i < SIZE; i++){
      for(int j = 0; j < SIZE; j++){
          fishCount = sea.getCell(i,j);
          qDebug() << "Fish count in each cell: " << fishCount;
          numFish+=QString::number(fishCount) + " ";
        }
      numFish+="\n";
      qDebug() << "Fish string: " << numFish;
    }


  QMessageBox msgBox;
  msgBox.setIcon(QMessageBox::Information);
  msgBox.setText(numFish);
  msgBox.exec();

}


void MainWindow::on_quitBtn_clicked()
{
  this->close();
}

void MainWindow::fishSimulation(int input, Sea &sea){
  for(int i = 0; i< input; i++){
      sea.SimulateOneStep();
    }
   sea.Print();
}

