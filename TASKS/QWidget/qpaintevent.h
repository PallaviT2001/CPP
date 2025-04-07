#ifndef QPAINTEVENT_H
#define QPAINTEVENT_H
#include <QWidget>
#include <QDebug>

class QPaintEvent: public QWidget
{
public:
    QPaintEvent();
    ~QPaintEvent();
    bool paintEngine();
};

#endif
