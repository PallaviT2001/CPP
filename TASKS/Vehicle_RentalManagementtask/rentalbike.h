#ifndef RENTALBIKE_H
#define RENTALBIKE_H
#include "rentalvehicledetails.h"

class Rentalbike:public Rentalvehicledetails
{
public:
    Rentalbike();
    ~Rentalbike();
    Rentalbike(std::string brand,std::string model,std::string vehicleNumber,float rentPrice,std::string status);
};

#endif

