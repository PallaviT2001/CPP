#include "theatremanager.h"

TheatreManager::TheatreManager()
{
    cout<<"TheaterManager constructor called"<<endl;
}

TheatreManager::~TheatreManager()
{
    cout<<"TheaterManager destructor called"<<endl;
}

void TheatreManager::bookTheater(vector<Theatre> &m_theaterlist, int id, int day)
{
    if(id < -1|| id >= m_theaterlist.size())
    {
        cout<<"Invalid theater ID.\n";
        return;
    }

    if(m_theaterlist[id].book(day))
    {
        cout<<"Theater "<<id <<" successfully booked for April " <<day<<".\n";
    }

    else
    {
        cout<<"Theater "<<id<<" is already booked for April" <<day<<".\n";
    }
}

void TheatreManager::printStatus(vector<Theatre> &m_theaterlist, int day)
{
    cout<<"Status on April"<<day<<":\n";

    for(auto& t:m_theaterlist)
    {
        cout<< " Theater "<<t.getId()<<": "<<(t.isBooked(day) ? "Booked" : "Available")<<"\n";
    }
}






