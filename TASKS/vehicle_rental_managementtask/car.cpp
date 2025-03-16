#include "car.h"

Car::Car(std::string brand, std::string model, std::string vehicleNumber, float rentPrice, std::string status)
{
    m_brand=brand;
    m_model=model;
    m_vehicleNumber=vehicleNumber;
    m_rentPrice=rentPrice;
    m_status=status;
}

Car::Car()
{

}

Car::~Car()
{

}

