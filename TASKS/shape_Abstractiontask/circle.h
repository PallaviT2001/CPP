#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle:public Shape
{
private:
    int m_radious;
public:
    Circle();
    ~Circle();
    Circle(int radius);

    virtual void area()=0;
    void display();
};

#endif
