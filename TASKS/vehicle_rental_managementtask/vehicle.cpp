#include "vehicle.h"

Vehicle::Vehicle()
{

}

Vehicle::~Vehicle()
{

}


std::string Vehicle::getBrand()
{
    return m_brand;
}

std::string Vehicle::getModel()
{
    return m_model;
}

std::string Vehicle::getVehicleNumber()
{
    return m_vehicleNumber;
}

float Vehicle::getRentPrice()
{
    return m_rentPrice;
}

std::string Vehicle::getStatus()
{
    return m_status;
}

void Vehicle::setBrand(std::string brand)
{
    m_brand=brand;
}

void Vehicle::setModel(std::string model)
{
    m_model=model;
}

void Vehicle::setVehicleNumber(std::string vehicleNumber)
{
    m_vehicleNumber=vehicleNumber;
}

void Vehicle::setRentPrice(float rentPrice)
{
    m_rentPrice=rentPrice;
}

void Vehicle::setStatus(std::string status)
{
    m_status=status;
}
