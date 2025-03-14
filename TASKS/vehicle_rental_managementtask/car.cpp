#include "car.h"
#include<iostream>
using namespace std;

Car::Car()
{
    cout<<"car constructor called"<<endl;
}

Car::~Car()
{
    cout<<"car destructor called"<<endl;
}

void Car::setcost(float cost)
{
    m_cost=cost;
}

void Car::setstatus()
{
    m_status=status;
}
