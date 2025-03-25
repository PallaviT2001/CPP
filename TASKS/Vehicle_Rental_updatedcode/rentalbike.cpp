#include "rentalbike.h"
#include <iostream>
using namespace std;

Rentalbike::Rentalbike()
{
    //cout<<"bike class constructor called"<<endl;
}

Rentalbike::~Rentalbike()
{
    //cout<<"bike class destructor called"<<endl;
}

Rentalbike::Rentalbike(std::string brand, std::string model, std::string vehicleNumber, float rentPrice, std::string status)
{
    m_brand=brand;
    m_model=model;
    m_vehicleNumber=vehicleNumber;
    m_rentPrice=rentPrice;
    m_status=status;
}
std::string Rentalbike::getBrand()
{
    return m_brand;
}

std::string Rentalbike::getModel()
{
    return m_model;
}

std::string Rentalbike::getVehicleNumber()
{
    return m_vehicleNumber;
}

float Rentalbike::getRentPrice()
{
    return m_rentPrice;
}

std::string Rentalbike::getStatus()
{
    return m_status;
}

