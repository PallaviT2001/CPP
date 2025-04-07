#include "qpaintevent.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget widget;
    widget.show();

    QObject object;

    QPaintEvent paintEvent;
    paintEvent.paintEngine();
    return a.exec();
}
