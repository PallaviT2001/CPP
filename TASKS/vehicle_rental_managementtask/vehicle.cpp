#include "vehicle.h"

Vehicle::Vehicle()
{
    cout<<"vehicle constructor called"<<endl;
}

Vehicle::~Vehicle()
{
    cout<<"vehicle destructor called"<<endl;
}

Vehicle::Vehicle(string vehiclename, float cost, string status, int duration)
{
    m_vehiclename=vehiclename;
    m_cost=cost;
    m_status=status;
    m_duration=duration;
}

int Vehicle::getvehiclename()
{
    return m_vehiclename;
}

float Vehicle::getcost()
{
    return m_cost;
}

string Vehicle::getstatus()
{
    return m_status;
}

int Vehicle::getduration()
{
    return m_duration;
}

void Vehicle::setstatus(string status)
{
    m_status=status;
}

void Vehicle::setcost(float cost)
{
    m_cost=cost;
}


