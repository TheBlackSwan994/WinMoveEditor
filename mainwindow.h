#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QColorDialog>
#include <QString>
#include <QCheckBox>
#include <QFile>
#include <QTextStream>
#include <QColor>

#include <fstream>
#include <iostream>

class QPushButton;
class QWidget;
class QColorDialog;
class QCheckBox;
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


QColor CurrentColor;

QString path;
QString WinHighlightingOptionsWithoutParametrs;
QColorDialog *selectColor;
QPushButton *OKButton;
QCheckBox *selectCrusor;
QCheckBox *selectHighLighting;
QString QTemp;




};
#endif // MAINWINDOW_H
