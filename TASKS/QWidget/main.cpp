/*#include <QApplication>
#include "abc.h"
#include "dbc.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget w;
    QObject object;
    //QPaintDevice QPaintDevice;
    w.show();

    ABC abc;
    abc.show();
    DBC dbc;
    dbc.show();
    QWidget w1;
    w1.show();
    return a.exec();
}*/


#include <QApplication>
#include "abc.h"
#include "dbc.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget *basePtr = new DBC();
    basePtr->show();


    return a.exec();
}








