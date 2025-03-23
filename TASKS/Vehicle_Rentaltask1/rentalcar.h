#ifndef RENTALCAR_H
#define RENTALCAR_H
#include "rentalvehicledetails.h"

class Rentalcar:public Rentalvehicledetails
{
public:
    Rentalcar();
    ~Rentalcar();
    Rentalcar(std::string brand, std::string model, std::string vehicleNumber, float rentPrice, std::string status);
};
#endif // CAR_H

