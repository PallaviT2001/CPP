#ifndef THEATREMANAGER_H
#define THEATREMANAGER_H

#include "date.h"
#include "theatre.h"
#include <map>
#include <vector>
#include <iostream>
using namespace std;

class TheatreManager {
private:
    map<int, Theatre*> m_theaters;
    map<string, vector<int>> m_dateBookings;
public:
    TheatreManager();
    ~TheatreManager();
    bool bookTheater(int id, const Date& date);
    void showBookings(const Date& date) const;
    void printAvailableTheaters(const Date& date) const;
};

#endif
