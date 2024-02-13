#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    int b=1;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.switching(b);
    return a.exec();
}
