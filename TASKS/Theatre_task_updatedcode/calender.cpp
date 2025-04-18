#include <iostream>
#include <iomanip>
#include <ctime>
#include "calender.h"
using namespace std;

Calender::Calender()
{
    cout<<"calendar constructor called"<<endl;
}

Calender::~Calender()
{
    cout<<"calendar destructor called"<<endl;
}

int Calender::getStartDayOfApril(int year) const
{
    tm firstDay = {};
    firstDay.tm_mday = 1;
    firstDay.tm_mon = 3;
    firstDay.tm_year = year - 1900;

    mktime(&firstDay);
    return firstDay.tm_wday;
}

void Calender::displayAprilCalendar()const
{
    time_t now = time(nullptr);
    tm* localTime = localtime(&now);
    int year = localTime->tm_year + 1900;

    int startDay = getStartDayOfApril(year);
    int totalDays = 30;

    cout << "\nCalendar for April " << year << "\n";
    cout<<endl;
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

void Calender::displayCurrentDate() const
{
    time_t now = time(nullptr);
    tm* localTime = localtime(&now);

    int day = localTime->tm_mday;
    int month = localTime->tm_mon + 1;
    int year = localTime->tm_year + 1900;


    cout<<"current date: "<<setw(2)<<day<<"-"<<setw(2)<<month<<"-"<<year<<endl;
    cout<<endl;
}
