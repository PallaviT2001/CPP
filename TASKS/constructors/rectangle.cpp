#include "rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(int x, int y)
{
    length = 10;
    breadth =20;
}
void Rectangle ::area()
{
    a=length*breadth;
    cout<< "area="<<a<<endl;
}
void Rectangle :: perimeter(int x, int y)
{

    p=2*(length+breadth);
    cout<< "perimeter="<<p<<endl;

}
