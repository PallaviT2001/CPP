#include "rentalvehicledetails.h"
#include <iostream>
using namespace std;

Rentalvehicledetails::Rentalvehicledetails()
{
    //cout<<"vehicle class constructor called"<<endl;
}

Rentalvehicledetails::~Rentalvehicledetails()
{
    //cout<<"vehicle class destructor called"<<endl;
}

Rentalvehicledetails::Rentalvehicledetails(std::string brand, std::string model, std::string vehicleNumber, float rentPrice, std::string status)
{
    m_brand=brand;
    m_model=model;
    m_vehicleNumber=vehicleNumber;
    m_rentPrice=rentPrice;
    m_status=status;
}


std::string Rentalvehicledetails::getBrand()
{
    return m_brand;
}

std::string Rentalvehicledetails::getModel()
{
    return m_model;
}

std::string Rentalvehicledetails::getVehicleNumber()
{
    return m_vehicleNumber;
}

float Rentalvehicledetails::getRentPrice()
{
    return m_rentPrice;
}

std::string Rentalvehicledetails::getStatus()
{
    return m_status;
}

void Rentalvehicledetails::setBrand(std::string brand)
{
    m_brand=brand;
}

void Rentalvehicledetails::setModel(std::string model)
{
    m_model=model;
}

void Rentalvehicledetails::setVehicleNumber(std::string vehicleNumber)
{
    m_vehicleNumber=vehicleNumber;
}

void Rentalvehicledetails::setRentPrice(float rentPrice)
{
    m_rentPrice=rentPrice;
}

void Rentalvehicledetails::setStatus(std::string status)
{
    m_status=status;
}

