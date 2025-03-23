#ifndef RENTALVEHICALMANAGEMENT_H
#define RENTALVEHICALMANAGEMENT_H
#include "rentalfileoperation.h"
#include "rentalvehicaldetails.h"
#include "rentalbikedetails.h"
#include "rentalcardetails.h"
#include <list>
#include "onlinepayment.h"
#include "cashpayment.h"
#include "paymentmode.h"
class RentalVehicalManagement
{

public:
    RentalVehicalManagement();
    ~RentalVehicalManagement();

    void functionalities();

    void addBike();
    void addCar();

    void displayBike();
    void displayCar();

    void updateCarRent();
    void updateBikeRent();

    void bookBike();
    void bookCar();

    void returnBike();
    void returnCar();

    void rentalHistory();

    void deleteBike();
    void deleteCar();

    void searchBike();
    void searchCar();

    void sortBike();
    void sortCar();

    void sortBikeByPrice();
    void sortBikeByBrand();
    void sortBikeByStatus();

    void sortCarByPrice();
    void sortCarByBrand();
    void sortCarByStatus();

private:
    RentalFileOperation *m_fileoperations;
    list<RentalBikeDetails*>m_bikeList;
    list<RentalCarDetails*>m_carList;
    list<RentalDetails*>m_rentalList;
};

enum choice{Book =1,Exit };
enum option{AddVehical=1,BookVehical,ReturnVehical,DisplayVehical,UpdateVehicalRent,DisplayHistory,DeleteVehical,SearchVehical,SortVehical,EXIT};
enum select{BIKE =1,CAR};
enum returnVehical{Return=1,exiT};
enum sort{VehicalStatus =1,VehicalRent,VehicalBrand};
enum paymentmode{ONLINE =1,CASH };
#endif // RENTALVEHICALMANAGEMENT_H
