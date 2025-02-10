#include <iostream>
#include "shape.h"
using namespace std;

int main()
{
    Rectangle r(1.2,5.6);
    r.area();
    r.display();

    Circle c(2);
    c.area();
    c.display();

    return 0;
}
