#include "mainwindow.h"
#include<iostream>
#include <QApplication>
#include"hw8_shark.h"
const float Shark::max_hunger = 20.0;
float Shark::hunger_increment = 5.0;
int main(int argc, char *argv[])
{
  int nsharks, nfish;
      Sea sea;
      sea.PopulationCensus(nsharks, nfish);
      cout << "Init num sharks: " << nsharks << " nfish: " << nfish << endl;
  QApplication a(argc, argv);
  MainWindow w;
  w.show();
  return a.exec();
}
