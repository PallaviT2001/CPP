#include "date.h"
#include <iomanip>
#include <sstream>
#include <iostream>
using namespace std;

Date::Date(int day, int month, int year) : m_day(day), m_month(month), m_year(year)
{
    cout << "Date default constructor called" << endl;
}

Date::~Date()
{
    cout << "Date destructor called" << endl;
}

Date Date::fromString(const std::string& dateStr)
{
    int d, m, y;
    char sep1, sep2;
    std::istringstream iss(dateStr);
    iss >> d >> sep1 >> m >> sep2 >> y;
    return (sep1 == '-' && sep2 == '-') ? Date(d, m, y) : Date();
}

std::string Date::toString() const
{
    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << m_day << "-"
        << std::setw(2) << std::setfill('0') << m_month << "-"
        << m_year;

    return oss.str();
}

int Date::getDay() const
{
    return m_day;
}

int Date::getMonth() const
{
    return m_month;
}

int Date::getYear() const
{
    return m_year;
}

std::ostream& operator<<(std::ostream& os, const Date& dt)
{
    os << dt.toString();
    return os;
}
