#ifndef RENTALVEHICALMANAGEMENT_H
#define RENTALVEHICALMANAGEMENT_H
#include "rentalfileoperation.h"
#include "RentalvehicalDetails.h"
#include "RentalBikeDetails.h"
#include "RentalCarDetails.h"
#include <list>
#include "OnlinePayment.h"
#include "CashPayment.h"
#include "paymentmode.h"
class RentalVehicalManagement
{

public:
    RentalVehicalManagement();
    ~RentalVehicalManagement();

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
    void sortBikeByBrand();
    void sortBikeByStatus();
    void sortCarByPrice();
    void sortCarByBrand();
    void sortCarByStatus();



    list<RentalDetails*> getRentalList();


    void saveData();
private:
    RentalFileOperation *m_fileoperations;
    list<RentalBikeDetails*>m_bikeList;
    list<RentalCarDetails*>m_carList;
    list<RentalDetails*>m_rentalList;




};

enum choice{Book =1,Exit };
enum option{AddVehical=1,BookVehical,ReturnVehical,DisplayVehical,UpdateVehicalRent,DisplayHistory,DeleteVehical,SearchVehical,SortVehical,EXIT};
enum select{BIKE =1,CAR,ExitVehical};
enum returnVehical{Return=1,exiT};
enum sort{VehicalStatus =1,VehicalRent,VehicalBrand};
enum paymentmode{ONLINE =1,CASH ,ExitPayment};
#endif // RENTALVEHICALMANAGEMENT_H
