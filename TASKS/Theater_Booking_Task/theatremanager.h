#ifndef THEATREMANAGER_H
#define THEATREMANAGER_H
#include "theatre.h"
#include <iostream>
#include <vector>
using namespace std;

class TheatreManager
{
private:
    vector<Theatre>m_theaterlist;
public:
    TheatreManager();
    ~TheatreManager();
    void bookTheater(vector<Theatre>& m_theaterlist,int id,int day);
    void printStatus(vector<Theatre>& m_theaterlist,int day);
};

#endif
