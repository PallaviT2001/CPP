#include "calender.h"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <conio.h>
using namespace std;

Calendar::Calendar()
{
    cout << "Calendar constructor called" << endl;
}

Calendar::~Calendar()
{
    cout << "Calendar destructor called" << endl;
}

bool Calendar::isLeapYear(int year) const
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int Calendar::getDaysInMonth(int month, int year) const
{
    switch (month)
    {
    case 2: return isLeapYear(year) ? 29 : 28;
    case 4: case 6: case 9: case 11: return 30;
    default: return 31;
    }
}

int Calendar::getStartDay(int month, int year) const {
    tm firstDay = {};
    firstDay.tm_mday = 1;
    firstDay.tm_mon = month - 1;
    firstDay.tm_year = year - 1900;
    mktime(&firstDay);
    return firstDay.tm_wday;
}

void Calendar::displayCalendar(int month, int year) const
{
    static const char* monthNames[] =
    {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    int startDay = getStartDay(month, year);
    int totalDays = getDaysInMonth(month, year);

    cout << "\n  " << monthNames[month] << " " << year << "\n";
    cout << "  Sun Mon Tue Wed Thu Fri Sat\n";

    // Padding for first row
    for (int i = 0; i < startDay; ++i) {
        cout << "    ";
    }

    for (int day = 1; day <= totalDays; ++day) {
        cout << setw(4) << day;
        if ((day + startDay) % 7 == 0) cout << "\n";
    }

    cout << "\n\n<- Previous Month     -> Next Month     ESC to Exit\n";
}

void Calendar::run() {
    time_t now = time(nullptr);
    tm* localTime = localtime(&now);
    int month = localTime->tm_mon + 1;
    int year = localTime->tm_year + 1900;
    char ch;
    do {
        system("cls"); // Clear console
        displayCalendar(month, year);

        ch = _getch();
        if (ch == 0 || ch == -32) {
            ch = _getch(); // arrow keys
            if (ch == 75) { // Left
                --month;
                if (month < 1) {
                    month = 12;
                    --year;
                }
            } else if (ch == 77) { // Right
                ++month;
                if (month > 12) {
                    month = 1;
                    ++year;
                }
            }
        }
    } while (ch != 27); // ESC key
}

void Calendar::displayCurrentDate() const
{
    time_t now = time(nullptr);
    tm* localTime = localtime(&now);

    int day = localTime->tm_mday;
    int month = localTime->tm_mon + 1;
    int year = localTime->tm_year + 1900;

    cout <<"Current date: "<< std::setw(2) << std::setfill('0') << day << "-"
         << std::setw(2) << std::setfill('0') <<month << "-"
         << year<<endl<<endl;
}

