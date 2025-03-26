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
    std::list<Rentalcar*> readCarData();

    void writeBikeData(std::list<Rentalbike *> bikeList);
    std::list<Rentalbike*> readBikeData();

    void writecustomerdata(std::list<Customer*> Customerlist);
    std::list<Customer*> readcustomerdata();

    void writeAdminData(std::list<Admins*> adminList);
    std::list<Admins*> readAdminData();

    void writeUserData(std::list<Users*> userList);
    std::list<Users*> readUserData();

    void writecustomerdatacar(std::list<Customer*> Customerlist);
    std::list<Customer*> readcustomerdatacar();


};

#endif


