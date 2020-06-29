#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    MainWindow w;
    w.show();
    QIcon icon = QIcon(":/pics/icon");

    w.setWindowIcon(icon);

    return a.exec();
}

