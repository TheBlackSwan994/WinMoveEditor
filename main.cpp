#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow *window=new MainWindow();
    QVBoxLayout *MainLayout = new QVBoxLayout();
    window->setWindowTitle("WinMoveEditor");
    QColorDialog *selectColor = new QColorDialog();
    window->setCentralWidget(selectColor);

    selectColor->setWindowFlags(Qt::Widget);
    selectColor->setOptions(QColorDialog::DontUseNativeDialog |QColorDialog::NoButtons);
    window->setMinimumSize(510, 400);
    window->setMaximumSize(510, 400);
    window->show();
    return app.exec();
}
