#include <QApplication>
#include "abc.h"
#include "dbc.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /*QWidget *basePtr = new DBC();
    basePtr->show();

    QWidget *basePtr =new ABC();
    basePtr->show();*/

    /*QWidget w;
    QObject object;
    w.show();
    QWidget *widget=new DBC;
    DBC * derived=static_cast<DBC*>(widget);

    derived->show();
    derived->func();*/

    QWidget w;
    QObject object;
    w.show();
    QWidget *widget=new DBC;
    DBC * derived=dynamic_cast<DBC*>(widget);

    derived->show();
    derived->func();

    return a.exec();
}

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









