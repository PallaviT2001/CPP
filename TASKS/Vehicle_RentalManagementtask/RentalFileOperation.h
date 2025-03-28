#ifndef RENTALFILEOPERATIONS_H
#define RENTALFILEOPERATIONS_H
#include "RentalBikeDetails.h"
#include "RentalCarDetails.h"
#include "onlinepayment.h"
#include "cashpayment.h"
#include "RentalDetails.h"
#include "users.h"
#include "admins.h"
#include <list>

class RentalFileOperation
{
public:
    RentalFileOperation();
    ~RentalFileOperation();

    void writeBikeData(list<RentalBikeDetails*> &bike);
    list<RentalBikeDetails*> readBikeData();

    void writeCarData(list<RentalCarDetails*> &car);
    list<RentalCarDetails*> readCarData();

    void writeRentalData(list<RentalDetails*> &rent);
    list<RentalDetails*>readRentalData();

    void writeAdminData(std::list<Admins*> adminList);
    std::list<Admins*> readAdminData();

    void writeUserData(std::list<Users*> userList);
    std::list<Users*> readUserData();

};

#endif // RENTALFILEOPERATIONS_H



































































