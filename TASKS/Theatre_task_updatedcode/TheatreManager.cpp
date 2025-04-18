#include "TheatreManager.h"
#include <algorithm>
using namespace std;

TheatreManager::TheatreManager()
{
    cout << "TheatreManager constructor created\n";
    for (int i = 0; i < 10; ++i)
        theatreMap[i] = new Theatre(i);
}

TheatreManager::~TheatreManager()
{
    for (auto& pair : theatreMap)
    {
        delete pair.second;
    }
    theatreMap.clear();
    cout << "TheatreManager destructor called" << endl;
}



void TheatreManager::bookTheatre(int id, const Date& date)
{
    string dateKey = date.getDateStr();
    if (id < 0 || id >= theatreMap.size())
    {
        cout << "Invalid Theatre ID"<<endl;
        return;
    }
    auto &booked = bookingsMap[dateKey];

    if (find(booked.begin(), booked.end(), id) != booked.end())
    {
        cout << "Theatre " << id << " already booked for " << dateKey << endl;
        return;
    }

    booked.push_back(id);
    cout << "Theatre " << id << " successfully booked for " << dateKey << ".\n";
}

void TheatreManager::showAvailableTheatres(const Date& date) const
{
    string dateKey = date.getDateStr();

    auto it = bookingsMap.find(dateKey);

    vector<int> booked = (it != bookingsMap.end()) ? it->second : vector<int>{};

    cout << "Available Theatres for " << dateKey << ":\n";
    for (const auto& [id, theatre] : theatreMap)
    {
        if (find(booked.begin(), booked.end(), id) == booked.end())
            cout << "Theatre " << id << endl;
    }
}

void TheatreManager::showBookedTheatres(const Date& date) const
{
    string dateKey = date.getDateStr();
    auto it = bookingsMap.find(dateKey);

    cout << "Booked Theatres for " << dateKey << ":\n";
    if (it == bookingsMap.end() || it->second.empty())
    {
        cout << "No theatres booked.\n";
        return;
    }

    for (int id : it->second)
    {
        cout << "Theatre " << id << endl;
    }
}
