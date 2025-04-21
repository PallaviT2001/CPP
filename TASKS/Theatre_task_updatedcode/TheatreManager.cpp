#include "TheatreManager.h"
#include <iostream>
#include <algorithm>
using namespace std;

TheatreManager::TheatreManager()
{
    cout << "TheatreManager constructor called" << endl;
    for (int i = 1; i <= 10; ++i)
        m_theaters[i] = new Theatre(i);
}

TheatreManager::~TheatreManager()
{
    cout << "TheatreManager destructor called" << endl;
    for (auto& pair : m_theaters)
    {
        delete pair.second;
        pair.second = nullptr;
    }
    m_theaters.clear();
}

bool TheatreManager::bookTheater(int id, const Date& date)
{
    std::string dateStr = date.toString();
    auto& bookings = m_dateBookings[dateStr];
    if (std::find(bookings.begin(), bookings.end(), id) != bookings.end())
    {
        std::cout << "Theater already booked on " << dateStr << endl;
        return false;
    }

    bookings.push_back(id);
    m_theaters[id]->bookDay(date.getDay());
    std::cout << "Booked Theater ID " << id << " on " << dateStr << endl;
    return true;
}

void TheatreManager::showBookings(const Date& date) const
{
    auto it = m_dateBookings.find(date.toString());
    if (it != m_dateBookings.end())
    {
        std::cout << "Bookings on " << date.toString() << ":\n";
        for (int id : it->second) std::cout << "  Theater ID: " << id << endl;
    }
    else std::cout << "No bookings on " << date.toString() << ".\n";
}

void TheatreManager::printAvailableTheaters(const Date& date) const
{
    std::cout << "Available Theaters on " << date.toString() << ":\n";
    for (const auto& pair : m_theaters)
    {
        if (!pair.second->isBooked(date.getDay()))
            std::cout << "  Theater ID: " << pair.first << " is available\n";
    }
}

std::map<int, Theatre*>& TheatreManager::getTheaters()
{
    return m_theaters;
}


