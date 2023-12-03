#include "mainwindow.h"
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
selectColor = new QColorDialog(this);
MainWindow::setCentralWidget(selectColor);
selectColor->setWindowFlags(Qt::Widget);
selectColor->setOptions(QColorDialog::DontUseNativeDialog |QColorDialog::NoButtons);
OKButton = new QPushButton(this);
OKButton->setText("OK");
MainWindow::OKButton->move(405, 360);
}

MainWindow::~MainWindow()
{

}

