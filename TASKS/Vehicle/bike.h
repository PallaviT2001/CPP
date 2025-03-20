#ifndef BIKE_H
#define BIKE_H
#include "vehical.h"
#include <iostream>
using namespace std;

class Bike:public Vehical
{
public:
    Bike();
    Bike(int id,string model,float cost,string status,int duration);
    ~Bike();


    string getModel();
    float getCost();
    string getStatus();
    int getDuration();
    int getId();
    void setStatus(string status);
    void setCost(float cost);

};

#endif // BIKE_H
