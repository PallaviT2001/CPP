#include "date.h"
#include <iostream>
using namespace std;

Date::Date() : dateStr("01-04-2025")
{
    cout<<"Date constructor called"<<endl;
}

Date::~Date()
{
    cout<<"Date destructor called"<<endl;
}

Date::Date(string d) : dateStr(d)
{
    cout<<"Date parameterized constructor called"<<endl;
}

string Date::getDateStr() const
{
    return dateStr;
}

bool Date::operator==(const Date& other) const
{
    return dateStr == other.dateStr;
}

bool Date::operator<(const Date& other) const
{
    return dateStr < other.dateStr;
}
