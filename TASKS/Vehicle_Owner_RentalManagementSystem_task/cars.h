#ifndef CARS_H
#define CARS_H
#include "drivers.h"
class Cars
{
public:
    Cars();
    ~Cars();

    void setDriver(Drivers* d);
    std::string getBrand();
    void setBrand(std::string newBrand);
private:
    Drivers* m_driver;
    std::string m_brand;
};

#endif // CAR_H
