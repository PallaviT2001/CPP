#include "qpaintevent.h"
#include <iostream>
#include <QDebug>
using namespace std;

QPaintEvent::QPaintEvent()
{
    QDebug<<"QPaintevent constructor called"<<endl;
}

QPaintEvent::~QPaintEvent()
{
    QDebug<<"Qpaintevent destructor called"<<endl;
}

bool QPaintEvent::paintEngine()
{
    QDebug<<"paintengine function called"<<endl;
}
