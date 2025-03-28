#ifndef RENTALVEHICALMANAGEMENT_H
#define RENTALVEHICALMANAGEMENT_H
#include "RentalFileOperation.h"
#include "rentalvehicaldetails.h"
#include "RentalBikeDetails.h"
#include "RentalCarDetails.h"
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

    void bookBike();
    void bookCar();

    void updateCarRent();
    void updateBikeRent();

    void returnBike();
    void returnCar();

    void deleteBike();
    void deleteCar();

    void searchBike();
    void searchCar();

    void sortBike();
    void sortCar();

    void sortBikeByPrice();
    void sortCarByPrice();

    void sortBikeByBrand();
    void sortCarByBrand();

    void sortBikeByStatus();
    void sortCarByStatus();

     void rentalHistory();

    list<RentalDetails*> getRentalList();
    //void saveData();

private:
    RentalFileOperation *m_fileoperations;
    list<RentalBikeDetails*>m_bikeList;
    list<RentalCarDetails*>m_carList;
    list<RentalDetails*>m_rentalList;
};

//enum choice{Book =1,Exit };
//enum option{AddVehical=1,BookVehical,ReturnVehical,DisplayVehical,UpdateVehicalRent,DisplayHistory,DeleteVehical,SearchVehical,SortVehical,EXIT};
//enum Choose{BIKE =1,CAR,ExitVehical};
//enum returnVehical{Return=1,exiT};
//enum sort{VehicalStatus =1,VehicalRent,VehicalBrand};
//enum paymentmode{ONLINE =1,CASH ,ExitPayment};

#endif
