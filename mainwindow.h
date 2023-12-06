#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColorDialog>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QColor>
#include <QRgb>

#include <windows.h>

class QColorDialog;
class QString;
class QFile;
class QTextStream;
class QColor;


using namespace std;


class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private:

QString path;
QString WinHighlightingOptionsWithoutParametrs;
QColorDialog *WinMoveEditor;
QColor CurrentColor;
QString QTemp;


};
#endif // MAINWINDOW_H
