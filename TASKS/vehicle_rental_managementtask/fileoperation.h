#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include "bike.h"
#include "car.h"
#include "customerdetails.h"
#include <list>
#include <fstream>

class FileOperation
{
public:
    FileOperation();
    ~FileOperation();

    void writeCarData(std::list<Car>carList);
    void writeBikeData(std::list<Bike>bikeList);

    std::list<Car> readCarData();
    std::list<Bike> readBikeData();

    void writecustomerdata(std::list<Customerdetails> Customerlist);
    std::list<Customerdetails> readcustomerdata();

};

#endif // FILEOPERATION_H
