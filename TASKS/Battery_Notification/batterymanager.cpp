#include "batterymanager.h"
#include <iostream>
using namespace std;

BatteryManager::BatteryManager()
{
    cout<<"Battery manager constructor called"<<endl;
}

BatteryManager::~BatteryManager()
{
    cout<<"Battery manager destructor called"<<endl;
}

int BatteryManager::getbatterypercentage()
{
     return m_batterypercentage;
}

void BatteryManager::setbatterypercentage(int percentage)
{
    m_batterypercentage=percentage;
}

void BatteryManager::batterycapacity()
{
    for(int i=0;i<20;i++)
    {
        m_batterypercentage=m_batterypercentage-5;
        if(m_batterypercentage<=0)
        {
            break;
        }
    }
}

