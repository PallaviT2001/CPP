#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"


class Rectangle:public Shape
{
private:
    double m_length;
    double m_width;
public:
    Rectangle();
    ~Rectangle();
    Rectangle(double length,double width);

    void area();
    void display();
};

#endif
