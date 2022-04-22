#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "hw8_sea.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
  void fishSimulation(int i, Sea &sea);

private slots:
  void on_runBtn_clicked();

  void on_quitBtn_clicked();

private:
  Ui::MainWindow *ui;
  int spinBoxVal;
  QString numFish;
  int fishCount;
};
#endif // MAINWINDOW_H
