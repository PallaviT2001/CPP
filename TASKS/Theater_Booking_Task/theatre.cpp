#include "theatre.h"

Theatre::Theatre()
{
    cout<<"Theater constructor called"<<endl;
}

Theatre::~Theatre()
{
    cout<<"Theater destructor called"<<endl;
}

Theatre::Theatre(int id):m_id(id)
{
    for(int i=1;i<31;i++)
    {
        booked[i] = false;
    }
    cout<<"Theater parameterized constructor called"<<endl;
}

int Theatre::getId()
{
    return m_id;
}

void Theatre::setId(int id)
{
    m_id=id;
}

bool Theatre::book(int day)
{
    if (day < 1 || day > 30 || booked[day])
        return false;
    booked[day] = true;
       return true;
}

bool Theatre::isBooked(int day)
{
    if (day < 1 || day > 30)
        return false;
    return booked[day];
}


















