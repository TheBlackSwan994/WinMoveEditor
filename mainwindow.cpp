#include "mainwindow.h"
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{


QString ColorToString;
CurrentColor = MainWindow::WinMoveEditor->getColor();
ColorToString = CurrentColor.name(QColor::HexRgb);

//The next line change values what changes look Highlighting
WinHighlightingOptionsWithoutParametrs = ColorToString;

//The next creates .reg-file what changes look Highlighting
path = "testFile.txt";

QFile fmove(path);
if (fmove.open(QIODevice::WriteOnly)){
QTextStream out(&fmove);
out<<WinHighlightingOptionsWithoutParametrs.toUtf8();
fmove.close();
}










}



MainWindow::~MainWindow()
{

}

