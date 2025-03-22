#ifndef VEHICLEMANAGER_H
#define VEHICLEMANAGER_H
#include "rentalbike.h"
#include "rentalcar.h"
#include "customer.h"
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
private:
    std::list<Rentalbike>m_bikeList;
    std::list<Rentalcar>m_carList;
    std::list<Customer>m_Customerlist;
    FileOperation *fileoperation;
};

#endif



