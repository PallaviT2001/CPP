#include "bike.h"
#include <iostream>
using namespace std;

Bike::Bike()
{
    cout<<"bike class constructor called"<<endl;
}

Bike::~Bike()
{
    cout<<"bike class destructor called"<<endl;
}

Bike::Bike(std::string brand, std::string model, std::string vehicleNumber, float rentPrice, std::string status)
{
    m_brand=brand;
    m_model=model;
    m_vehicleNumber=vehicleNumber;
    m_rentPrice=rentPrice;
    m_status=status;
}



