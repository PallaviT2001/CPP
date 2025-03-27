#ifndef RENTALBIKEDETAILS_H
#define RENTALBIKEDETAILS_H
#include "RentalvehicalDetails.h"
#include <iostream>
using namespace std;

class RentalBikeDetails:public RentalVehicalDetails
{
public:
    RentalBikeDetails();
    RentalBikeDetails(int id, string brand, string model, string vehicalNumber, float cost, string status, int duration);
    ~RentalBikeDetails();

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

#endif // RENTALBIKEDETAILS_H
