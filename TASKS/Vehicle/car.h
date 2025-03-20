#ifndef CAR_H
#define CAR_H
#include "vehical.h"
#include <iostream>
using namespace std;

class Car:public Vehical
{
public:
    Car();
    Car(int id,string model,float cost,string status,int duration);
    ~Car();

    string getModel();
    float getCost();
    string getStatus();
    int getDuration();
    int getId();
    void setStatus(string status);
    void setCost(float cost);

};

#endif // CAR_H
