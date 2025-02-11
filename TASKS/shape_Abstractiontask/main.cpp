#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
using namespace std;

int main()
{
    Rectangle r(1.2,5.6);
    r.area();
    r.display();


    /*Circle *ptr;
    ptr->display();*/

   Circle c;
   c.area();
   c.display();
   return 0;
}
