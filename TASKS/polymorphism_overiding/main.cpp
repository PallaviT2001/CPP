#include <iostream>
using namespace std;
#include "bike.h"
#include "car.h"
//#include "vehicle.h"

int main()
{
    vehicle *ptr;

    Bike b;
    ptr=&b;
    ptr->fuelfun("diesel");

    car c;
    ptr=&c;
    ptr->fuelfun("petrol");

    /*vehicle v;
    Bike b;
    car c;
    v.fuelfun("diesel");
    b.Bike::fuelfun("diesel");
    c.car::fuelfun("diesel");*/

    return 0;
}
