#include "rentalbikedetails.h"

RentalBikeDetails::RentalBikeDetails()
{
    cout<<"RentalBike Constructor called"<<endl;
}

RentalBikeDetails::RentalBikeDetails(int id, string brand, string model,string vehicalNumber, float cost, string status, int duration)
{
    cout<<"Bike Parameterized Constructor Called"<<endl;
    m_id =id;
    m_brand = brand;
    m_model = model;
    m_vehicalNumber = vehicalNumber;
    m_cost = cost;
    m_status = status;
    m_duration = duration;
}

RentalBikeDetails::~RentalBikeDetails()
{
    cout<<"RentalBike Destructor Called"<<endl;
}

/*RentalBikeDetails::RentalBikeDetails(RentalBikeDetails &rent)
{
    cout<<"Rentalbike copy constructor called"<<endl;
}*/

string RentalBikeDetails::getBrand()
{
    return m_brand;
}

string RentalBikeDetails::getModel()
{
    return m_model;
}

string RentalBikeDetails::getVehicalNumber()
{
    return m_vehicalNumber;
}

float RentalBikeDetails::getCost()
{
    return m_cost;
}

string RentalBikeDetails::getStatus()
{
    return m_status;
}

int RentalBikeDetails::getDuration()
{
    return m_duration;
}

int RentalBikeDetails::getId()
{
    return m_id;
}

void RentalBikeDetails::setStatus(string status)
{
    m_status = status;
}

void RentalBikeDetails::setCost(float cost)
{
    m_cost = cost;
}
