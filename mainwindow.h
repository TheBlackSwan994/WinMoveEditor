#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLayout>
#include <QScrollArea>
#include <QDrag>


class QPushButton;
class QLayout;
class QScrollArea;
class QDrag;
class QWidget;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:



QPushButton *settingsButoon;
QPushButton *ButtonInside1;
QPushButton *ButtonInside2;
QPushButton *ButtonInside3;
QPushButton *ButtonInside4;
QPushButton *ButtonInside5;
QPushButton *ButtonInside6;
QPushButton *ButtonInside7;
QPushButton *ButtonInside8;
QPushButton *ButtonInside9;
QPushButton *ButtonInside10;
QPushButton *ButtonInside11;
QPushButton *ButtonInside12;
QPushButton *ButtonInside13;
QPushButton *ButtonInside14;
QPushButton *ButtonInside15;
QPushButton *ButtonInside16;
QPushButton *ButtonInside17;
QPushButton *ButtonInside18;
QPushButton *ButtonInside19;
QPushButton *ButtonInside20;
QPushButton *ButtonInside21;


QVBoxLayout *MainLayout;
QScrollArea *ScrollAreaOfApss;
QWidget *WidgetForIncludeTheGames;
QHBoxLayout *MainLayoutIncludeTheGames;

};
#endif // MAINWINDOW_H
