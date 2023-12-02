#include "mainwindow.h"
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

OKButton = new QPushButton(this);
OKButton->move(400, 360);
OKButton->setText("OK");


}

MainWindow::~MainWindow()
{

}

