#include "mainwindow.h"
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

settingsButoon = new QPushButton(this);
settingsButoon->resize(90, 20);
settingsButoon->setText("Настройки");
MainLayout = new QVBoxLayout(this);
ScrollAreaOfApss = new QScrollArea(this);
ButtonInside1 = new QPushButton(this);
ButtonInside2 = new QPushButton(this);
ButtonInside3 = new QPushButton(this);
ButtonInside4 = new QPushButton(this);
ButtonInside5 = new QPushButton(this);
ButtonInside6 = new QPushButton(this);
ButtonInside7 = new QPushButton(this);
ButtonInside8 = new QPushButton(this);
ButtonInside9 = new QPushButton(this);
ButtonInside10 = new QPushButton(this);
ButtonInside11 = new QPushButton(this);
ButtonInside12 = new QPushButton(this);
ButtonInside13 = new QPushButton(this);
ButtonInside14 = new QPushButton(this);
ButtonInside15 = new QPushButton(this);
ButtonInside16 = new QPushButton(this);
ButtonInside17 = new QPushButton(this);
ButtonInside18 = new QPushButton(this);
ButtonInside19 = new QPushButton(this);
ButtonInside20 = new QPushButton(this);
ButtonInside21 = new QPushButton(this);


ScrollAreaOfApss->setMinimumSize(400,200);
ScrollAreaOfApss->move(60, 60);
WidgetForIncludeTheGames= new QWidget();
MainLayoutIncludeTheGames = new QHBoxLayout();
WidgetForIncludeTheGames->setLayout(MainLayoutIncludeTheGames);
MainLayoutIncludeTheGames->addWidget(ButtonInside1);
MainLayoutIncludeTheGames->addWidget(ButtonInside2);
MainLayoutIncludeTheGames->addWidget(ButtonInside3);
MainLayoutIncludeTheGames->addWidget(ButtonInside4);
MainLayoutIncludeTheGames->addWidget(ButtonInside5);
MainLayoutIncludeTheGames->addWidget(ButtonInside6);
MainLayoutIncludeTheGames->addWidget(ButtonInside7);
MainLayoutIncludeTheGames->addWidget(ButtonInside8);
MainLayoutIncludeTheGames->addWidget(ButtonInside9);
MainLayoutIncludeTheGames->addWidget(ButtonInside10);
MainLayoutIncludeTheGames->addWidget(ButtonInside11);
MainLayoutIncludeTheGames->addWidget(ButtonInside12);
MainLayoutIncludeTheGames->addWidget(ButtonInside13);
MainLayoutIncludeTheGames->addWidget(ButtonInside14);
MainLayoutIncludeTheGames->addWidget(ButtonInside15);
MainLayoutIncludeTheGames->addWidget(ButtonInside16);
MainLayoutIncludeTheGames->addWidget(ButtonInside17);
MainLayoutIncludeTheGames->addWidget(ButtonInside18);
MainLayoutIncludeTheGames->addWidget(ButtonInside19);
MainLayoutIncludeTheGames->addWidget(ButtonInside20);
MainLayoutIncludeTheGames->addWidget(ButtonInside21);




MainLayout->addWidget(settingsButoon);
MainLayout->addWidget(ScrollAreaOfApss);
ScrollAreaOfApss->setWidget(WidgetForIncludeTheGames);



}

MainWindow::~MainWindow()
{
}

