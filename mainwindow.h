#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QColorDialog>
#include <QString>
#include <QCheckBox>
#include <QFile>
#include <QTextStream>

#include <fstream>
#include <iostream>

class QPushButton;
class QWidget;
class QColorDialog;
class QCheckBox;
class QString;
class QFile;
class QTextStream;


using namespace std;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private:


string Temp;
QString path;
QString WinHighlightingOptionsWithoutParametrs;
QColorDialog *selectColor;
QPushButton *OKButton;
QCheckBox *selectCrusor;
QCheckBox *selectHighLighting;
QString QTemp;




};
#endif // MAINWINDOW_H
