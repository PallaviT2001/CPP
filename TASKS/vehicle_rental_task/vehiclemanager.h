#ifndef VEHICLEMANAGER_H
#define VEHICLEMANAGER_H

#include "bike.h"
#include "car.h"
#include "customerdetails.h"
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

    void functionalities();

    void deletebike();
    void deletecar();

    void displaycustomerdetailsbike();
    void displaycustomerdetailscar();

    void searchbike();
    void searchcar();

    void sortbikeStatus();
    void sortcarbyStatus();

    void sortbikebyPrice();
    void sortcarbyPrice();

    //void paymentdetails();

private:
    std::list<Bike>m_bikeList;
    std::list<Car>m_carList;
    std::list<Customerdetails>m_Customerlist;
    FileOperation fileoperation;
};

#endif



