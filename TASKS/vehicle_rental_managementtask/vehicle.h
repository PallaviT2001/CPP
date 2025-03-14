#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string m_vehiclename;
    float m_cost;
    string m_status;
    int m_duration;
public:
    Vehicle();
    ~Vehicle();
    Vehicle(string vehiclename,float cost,string status,int duration);

    int getvehiclename();
    float getcost();
    string getstatus();
    int getduration();

};

#endif
