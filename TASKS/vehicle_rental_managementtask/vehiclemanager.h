#ifndef VEHICLEMANAGER_H
#define VEHICLEMANAGER_H

#include "bike.h"
#include "car.h"
#include "fileoperation.h"
#include <list>
class VehicleManager
{
public:
    VehicleManager();
    ~VehicleManager();

    void addBike();
    void addCar();
    void displayListOfBikes();
    void displayListOfCars();

    void updateBikePrice();
    void updateCarPrice();

    void Bookbike();
    void Bookcar();

    void returnbike();
    void returncar();

private:
    std::list<Bike>m_bikeList;
    std::list<Car>m_carList;
    FileOperation fileoperation;
};

#endif
