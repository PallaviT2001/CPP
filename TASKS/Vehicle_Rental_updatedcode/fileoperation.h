#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include "rentalbike.h"
#include "rentalcar.h"
#include "customer.h"
#include <list>
#include <fstream>
#include "users.h"
#include "admins.h"

class FileOperation
{
public:
    FileOperation();
    ~FileOperation();

    void writeCarData(std::list<Rentalcar*> carList);
    void writeBikeData(std::list<Rentalbike *> bikeList);

    std::list<Rentalcar*> readCarData();
    std::list<Rentalbike*> readBikeData();

    void writecustomerdata(std::list<Customer*> Customerlist);
    std::list<Customer*> readcustomerdata();

    void writecustomerdatacar(std::list<Customer*> Customerlist);
    std::list<Customer*> readcustomerdatacar();

    void writeAdminData(std::list<Admins*> adminList);
    std::list<Admins*> readAdminData();

    void writeUserData(std::list<Users*> userList);
    std::list<Users*> readUserData();

};

#endif


