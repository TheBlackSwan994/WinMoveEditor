#include "mainwindow.h"
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{


QString ColorToString;
CurrentColor = MainWindow::WinMoveEditor->getColor();
auto rgbToString=[](const QColor &color, const QString &sep=","){
        return QString("%1 %0 %2 %0%3").arg(sep)
                                    .arg(color.red())
                                    .arg(color.green())
                                    .arg(color.blue());
    };


//The next line change values what changes look Highlighting
WinHighlightingOptionsWithoutParametrs = rgbToString(CurrentColor, ColorToString);


//The next creates .reg-file what changes look Highlighting
path = "testFile.txt";






QFile fmove(path);
if (fmove.open(QIODevice::WriteOnly)){
QTextStream out(&fmove);
out<<WinHighlightingOptionsWithoutParametrs.toUtf8();
fmove.close();
system("YoureHiglightingColor.reg");
}










}



MainWindow::~MainWindow()
{

}

