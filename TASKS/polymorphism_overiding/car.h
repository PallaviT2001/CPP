#ifndef CAR_H
#define CAR_H
#include "vehicle.h"
#include <string>

class car:public vehicle
{
public:
    car();
    ~car();
    void fuelfun(string fuel);
};

#endif
