#include "bike.h"

Bike::Bike()
{
    cout<<"Bike Constructor called"<<endl;
}

Bike::~Bike()
{
    cout<<"Bike Destructor Called"<<endl;
}

Bike::Bike(int id, string model, float cost, string status, int duration)
{
    cout<<"Bike Parameterized Constructor Called"<<endl;
    m_id =id;
    m_model = model;
    m_cost = cost;
    m_status = status;
    m_duration = duration;
}

string Bike::getModel()
{
    return m_model;
}

float Bike::getCost()
{
    return m_cost;
}

string Bike::getStatus()
{
    return m_status;
}

int Bike::getDuration()
{
    return m_duration;
}

int Bike::getId()
{
    return m_id;
}


void Bike::setStatus(string status)
{
    m_status = status;
}

void Bike::setCost(float cost)
{
    m_cost = cost;
}
