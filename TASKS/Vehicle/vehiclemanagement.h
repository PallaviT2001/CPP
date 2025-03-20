#ifndef VEHICALMANAGEMENT_H
#define VEHICALMANAGEMENT_H
#include "fileoperation.h"
#include "vehical.h"
#include "bike.h"
#include "car.h"
#include <list>

class VehicalManagement
{
private:
    FileOperation *m_fileoperations;
    list<Bike*>m_bikeList;
    list<Car*>m_carList;
    list<RentalDetails*>m_rentalList;


public:
    VehicalManagement();
    ~VehicalManagement();

    void menu();
    void bookBike();
    void bookCar();
    void returnBike();
    void returnCar();
    void displayBike();
    void displayCar();
    void rentalHistory();
    void addBike();
    void addCar();
    void updateCarRent();
    void updateBikeRent();
    void deleteBike();
    void deleteCar();
    void searchBike();
    void searchCar();

    void sortBike();
    void sortCar();
    void sortBikeByPrice();
    void sortBikeByName();
    void sortBikeByStatus();
    void sortCarByPrice();
    void sortCarByName();
    void sortCarByStatus();


};

enum choice{Book =1,Exit };
enum option{AddVehical=1,BookVehical,ReturnVehical,DisplayVehical,UpdateVehicalRent,DisplayHistory,DeleteVehical,SearchVehical,SortVehical,EXIT};
enum select{BIKE =1,CAR};
enum returnVehical{Return=1,exiT};
enum sort{VehicalStatus =1,VehicalRent,VehicalName};
enum paymentmode{Online =1,Cash };
#endif // VEHICALMANAGEMENT_H
