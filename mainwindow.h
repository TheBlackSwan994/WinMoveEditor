#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QColorDialog>
#include <QString>
#include <QCheckBox>


class QPushButton;
class QWidget;
class QColorDialog;
class QCheckBox;
class QString;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private:

QColorDialog *selectColor;
QPushButton *OKButton;
QCheckBox *selectCrusor;
QCheckBox *selectHighLighting;





};
#endif // MAINWINDOW_H
