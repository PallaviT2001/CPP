#ifndef SHAPE_H
#define SHAPE_H
#include "Rectangle.h"
#include "Circle.h"

class Shape
{
public:
    Shape();
    ~Shape();

    virtual area();
    virtual display();
};

#endif
