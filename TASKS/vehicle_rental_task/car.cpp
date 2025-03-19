#include "car.h"
#include <iostream>
using namespace std;

Car::Car()
{
    cout<<"car class constructor called"<<endl;
}

Car::~Car()
{
    cout<<"car class destructor called"<<endl;
}

Car::Car(std::string brand, std::string model, std::string vehicleNumber, float rentPrice, std::string status)
{
    m_brand=brand;
    m_model=model;
    m_vehicleNumber=vehicleNumber;
    m_rentPrice=rentPrice;
    m_status=status;
}

