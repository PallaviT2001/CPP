#ifndef OWNER_H
#define OWNER_H
#include "cars.h"
#include "drivers.h"

class Owner
{
private:
    Cars *m_car;
public:
    Owner();
    ~Owner();
    void assignDriver(Drivers *d);
};

#endif
