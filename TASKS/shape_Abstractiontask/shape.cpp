#include <iostream>
using namespace std;
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

Shape::Shape()
{
    cout<<"shape class default constructor called"<<endl;
}

Shape::~Shape()
{
    cout<<"shape class destructor called"<<endl;
}

