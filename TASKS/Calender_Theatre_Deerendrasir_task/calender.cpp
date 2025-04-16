#include <iostream>
#include <iomanip>
#include <ctime>
#include "calender.h"
using namespace std;

Calendar::Calendar()
{
    cout<<"calendar constructor called"<<endl;
}

Calendar::~Calendar()
{
    cout<<"calendar destructor called"<<endl;
}

int Calendar::getStartDayOfApril(int year) const
{
    tm firstDay = {};
    firstDay.tm_mday = 1;
    firstDay.tm_mon = 3;
    firstDay.tm_year = year - 1900;

    mktime(&firstDay);
    return firstDay.tm_wday;
}

void Calendar::displayAprilCalendar()const
{
    time_t now = time(nullptr);
    tm* localTime = localtime(&now);
    int year = localTime->tm_year + 1900;

    int startDay = getStartDayOfApril(year);
    int totalDays = 30;

    cout << "\nCalendar for April " << year << "\n";
    cout << "Sun Mon Tue Wed Thu Fri Sat\n";

    for (int i = 0; i < startDay; ++i)
    {
        cout << "    ";
    }

    for (int day = 1; day <= totalDays; ++day)
    {
        cout << setw(3) << day << " ";

        if ((day + startDay) % 7 == 0)
            cout << "\n";
    }
    cout << "\n";
}

void Calendar::displayCurrentDate() const
{
    time_t now = time(nullptr);
    tm* localTime = localtime(&now);

    int day = localTime->tm_mday;
    int month = localTime->tm_mon + 1;
    int year = localTime->tm_year + 1900;

    /*cout << "\nCurrent Date: "
         << setfill('0') << setw(2) << day << "-"
         << setfill('0') << setw(2) << month << "-"
         << year << "\n";*/

    cout<<" current date: "<<setw(2)<<day<<"-"<<setw(2)<<month<<"-"<<year<<endl;
}
