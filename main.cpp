#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow *window=new MainWindow();
    window->setFixedSize(510, 400);
    return app.exec();
}