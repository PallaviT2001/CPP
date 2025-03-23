#ifndef RENTALFILEOPERATIONS_H
#define RENTALFILEOPERATIONS_H
#include "rentalbikedetails.h"
#include "rentalcardetails.h"
#include "onlinepayment.h"
#include "cashpayment.h"
#include "rentaldetails.h"
#include <list>

class RentalFileOperation
{
public:
    RentalFileOperation();
    ~RentalFileOperation();


    list<RentalBikeDetails*> readBikeData();
    list<RentalCarDetails*> readCarData();
    list<RentalDetails*>readRentalData();


    void writeCarData(list<RentalCarDetails*> &car);
    void writeRentalData(list<RentalDetails*> &rent);
    void writeBikeData(list<RentalBikeDetails*> &bike);




};

#endif // RENTALFILEOPERATIONS_H



































































