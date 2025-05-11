#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Theatre Management System");
    w.setGeometry(100, 100, 400, 600);
    w.show();
    return a.exec();
}
