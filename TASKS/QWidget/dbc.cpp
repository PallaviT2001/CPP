#include "dbc.h"
#include "QDebug"

DBC::DBC(QWidget *parent):QWidget(parent)
{
    qDebug()<<"DBC class constructor called";
}

DBC::~DBC()
{
    qDebug()<<"DBC class destructor called";
}

void DBC::paintEvent(QPaintEvent *event)
{
    qDebug()<<"DBC class paint function called";
}

