#ifndef BIKE_H
#define BIKE_H
#include <iostream>
using namespace std;
#include <string>
#include "vehicle.h"

class Bike:public vehicle
{

public:
    Bike();
    ~Bike();
    void fuelfun(string fuel);
};

#endif
