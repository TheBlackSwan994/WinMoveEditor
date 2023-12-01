#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow *window=new MainWindow();

    window->setMinimumSize(500, 300);
    window->setWindowTitle("UGL");
    window->show();
    return app.exec();
}
