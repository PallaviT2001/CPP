#ifndef RENTALCARDETAILS_H
#define RENTALCARDETAILS_H
#include "rentalvehicaldetails.h"
#include <iostream>
using namespace std;

class RentalCarDetails:public RentalVehicalDetails
{
public:
    RentalCarDetails();
     ~RentalCarDetails();
     //RentalCarDetails(RentalCarDetails &rentalcar);
    RentalCarDetails(int id,string brand,string model,string vehicalNumber,float cost,string status,int duration);


    string getBrand();
    string getModel();
    string getVehicalNumber();
    float getCost();
    string getStatus();
    int getDuration();
    int getId();
    void setStatus(string status);
    void setCost(float cost);

};

#endif // RENTALCARDETAILS_H
