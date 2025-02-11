#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;
#include <string>

class vehicle
{
private:
    int vehiclenumber;
public:
    string fuel;
    vehicle();
    ~vehicle();
    virtual void fuelfun(string fuel);
};

#endif // VEHICLE_H
