#include "RentalCarDetails.h"


RentalCarDetails::RentalCarDetails()
{
    cout<<"RentalCar Constructor Called"<<endl;
}

RentalCarDetails::~RentalCarDetails()
{
    cout<<"RentalCar Destructor Called"<<endl;
}

RentalCarDetails::RentalCarDetails(int id, string brand, string model, string vehicalNumber, float cost, string status, int duration)
{
    cout<<"Car Parameterized Constructor Called"<<endl;

    m_id =id;
    m_brand = brand;
    m_model = model;
    m_vehicalNumber = vehicalNumber;
    m_cost = cost;
    m_status = status;
    m_duration = duration;
}

string RentalCarDetails::getBrand()
{
    return m_brand;
}


string RentalCarDetails::getModel()
{
    return m_model;
}

string RentalCarDetails::getVehicalNumber()
{
    return m_vehicalNumber;
}

float RentalCarDetails::getCost()
{
    return m_cost;
}

int RentalCarDetails::getId()
{
    return m_id;
}
string RentalCarDetails::getStatus()
{
    return m_status;
}

int RentalCarDetails::getDuration()
{
    return m_duration;
}

void RentalCarDetails::setStatus(string status)
{
    m_status = status;
}

void RentalCarDetails::setCost(float cost)
{
    m_cost = cost;
}
