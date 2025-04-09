#ifndef OWNER_H
#define OWNER_H
#include "cars.h"
#include "drivers.h"

class Owner
{
public:
    Owner();
    ~Owner();
    void assignDriver(Drivers *d);
private:
    Cars* m_car;
};

#endif // OWNER_H
