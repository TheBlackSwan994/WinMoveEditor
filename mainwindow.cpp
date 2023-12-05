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

QString QTemp = selectColor->selectedColor().name();




WinHighlightingOptionsWithoutParametrs = "Windows Registry Editor Version 5.00\n\n"
                                         "[HKEY_CURRENT_USER\\Control Panel\\Colors]\n\"Hilight\"=\"188 188 188\"\n\n"
                                         "[HKEY_CURRENT_USER\\Control Panel\\Colors]\n\"HotTrackingColor\"=\"117 117 117\"";
path = "testFile.txt";

QFile fmove(path);
if (fmove.open(QIODevice::WriteOnly)){
QTextStream out(&fmove);
out<<WinHighlightingOptionsWithoutParametrs.toUtf8();
fmove.close();
}



connect(OKButton, SIGNAL(clicked()), this, SLOT(QTemp>>fmove));






MainWindow::OKButton->move(405, 360);

}



MainWindow::~MainWindow()
{

}

