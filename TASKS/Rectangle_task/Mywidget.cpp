#include "Mywidget.h"
#include <QPainter>
#include <QPaintEvent>
#include <QDebug>

MyWidget::MyWidget(int x, int y, int width, int height, QWidget *parent)
    : QWidget(parent), rectX(x), rectY(y), rectWidth(width), rectHeight(height)
{
    qDebug()<<"Mywidget constructor called";
}

MyWidget::~MyWidget()
{
    qDebug() << "MyWidget destructor called";
}

void MyWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setPen(Qt::black);
    painter.setBrush(Qt::blue);
    painter.drawRect(rectX, rectY, rectWidth, rectHeight);
}

