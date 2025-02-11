#ifndef SHAPE_H
#define SHAPE_H
// #include "Rectangle.h"
// #include "Circle.h"

class Shape
{
public:
    Shape();
    ~Shape();
    virtual void area()=0;
    virtual void display()=0;
};

#endif
