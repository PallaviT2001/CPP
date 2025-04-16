#include "theatres.h"
#include <iostream>
using namespace std;


Theatres::Theatres()
{
    cout<<"heatres constructor called"<<endl;
}

Theatres::~Theatres()
{
    cout<<"Theatres destructor called"<<endl;
}

Theatres::Theatres(int theatreId) : id(theatreId)
{
    for (int day = 1; day <= 30; ++day)
    {
        bookedDates[day] = false;
    }
}

int Theatres::getId() const
{
    return id;
}

bool Theatres::isAvailable(int day) const
{
    return !bookedDates.at(day);
}

bool Theatres::book(int day)
{
    if (!bookedDates[day])
    {
        bookedDates[day] = true;
        return true;
    }
    return false;
}

void Theatres::showBookings() const
{
    cout << "\nTheatre " << id << " Bookings for April 2025:\n";

    for (const auto &entry: bookedDates)
    {
        cout << "  Day " <<entry.first << ": " << (entry.second ? "Booked" : "Available") << endl;
    }
}
