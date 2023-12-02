#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLayout>
#include <QColorDialog>
#include <QDrag>
#include <QRadioButton>
#include <QString>


class QPushButton;
class QLayout;
class QDrag;
class QWidget;
class QColorDialog;
class QRadioButton;
class QString;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private:


QPushButton *OKButton;
QRadioButton *choiceCrusor;
QRadioButton *choiceHighLighting;
QHBoxLayout *BottonLayoutForButtons;





QVBoxLayout *MainLayout;

};
#endif // MAINWINDOW_H
