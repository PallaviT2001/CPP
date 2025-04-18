#ifndef THEATREMANAGER_H
#define THEATREMANAGER_H
#include <map>
#include <vector>
#include "theatre.h"
#include "date.h"
#include <iostream>
using namespace std;

class TheatreManager
{
private:
    std::map<int, Theatre*> theatreMap;
    map<string, vector<int>> bookingsMap;
public:
    TheatreManager();
    ~TheatreManager();
    void bookTheatre(int id, const Date& date);
    void showAvailableTheatres(const Date& date) const;
    void showBookedTheatres(const Date& date) const;
};

#endif
