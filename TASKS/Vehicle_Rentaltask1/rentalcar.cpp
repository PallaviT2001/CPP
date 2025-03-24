#include "rentalcar.h"
#include <iostream>
using namespace std;

Rentalcar::Rentalcar()
{
    //cout<<"car class constructor called"<<endl;
}

Rentalcar::~Rentalcar()
{
    //cout<<"car class destructor called"<<endl;
}

Rentalcar::Rentalcar(std::string brand, std::string model, std::string vehicleNumber, float rentPrice, std::string status)
{
    m_brand=brand;
    m_model=model;
    m_vehicleNumber=vehicleNumber;
    m_rentPrice=rentPrice;
    m_status=status;
}

std::string Rentalcar::getBrand()
{
    return m_brand;
}

std::string Rentalcar::getModel()
{
    return m_model;
}

std::string Rentalcar::getVehicleNumber()
{
    return m_vehicleNumber;
}

float Rentalcar::getRentPrice()
{
    return m_rentPrice;
}

std::string Rentalcar::getStatus()
{
    return m_status;
}


