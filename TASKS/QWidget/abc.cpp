#include "abc.h"
#include "QDebug"

ABC::ABC(QWidget *parent):QWidget(parent)
{
    qDebug()<<"ABC class constructor called";
}

ABC::~ABC()
{
    qDebug()<<"ABC class destructor called";
}

void ABC::paintEvent(QPaintEvent *event)
{
    qDebug()<<"ABC class paint function called";
}

