#ifndef BIKE_H
#define BIKE_H
#include "vehicle.h"

class Bike:public Vehicle
{
public:
     Bike();
    ~Bike();

     void setstatus();
     void setcost();
};

#endif
