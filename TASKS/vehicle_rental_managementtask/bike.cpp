#include "bike.h"

Bike::Bike()
{
    cout<<"bike constructor called"<<endl;
}

Bike::~Bike()
{
    cout<<"bike destructor called"<<endl;
}

void Bike::setcost(float cost)
{
    m_cost=cost;
}

void Bike::setstatus(string status)
{
    m_status=status;
}
