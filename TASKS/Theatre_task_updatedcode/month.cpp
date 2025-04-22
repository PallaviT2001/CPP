#include "month.h"
#include <iostream>
#include <iomanip>
using namespace std;

Month::Month()
{
    cout << "Month default constructor called" << endl;
}

Month::~Month()
{
    cout << "Month destructor called" << endl;
}

Month::Month(int monthNumber, int year) : m_monthNumber(monthNumber), m_year(year)
{
    for (int i = 1; i <= 30; ++i)
        m_dates.emplace_back(i, monthNumber, year);
    cout << "Month parameterized constructor called" << endl;
}

std::vector<Date>& Month::getDates()
{
    return m_dates;
}

/*void Month::printMonthCalendar()
{
    cout << "\nApril " << m_year << " Calendar\n";
    cout << "Sun Mon Tue Wed Thu Fri Sat\n";

    int q = 1, m = m_monthNumber, Y = m_year;

    if (m < 3)
    {
        m += 12; Y--;
    }

    int K = Y % 100;
    int J = Y / 100;

    int dayOfWeek = (q + (13 * (m + 1)) / 5 + K + K/4 + J/4 + 5*J) % 7;
    dayOfWeek = (dayOfWeek + 6) % 7;

    for (int i = 0; i < dayOfWeek; ++i) cout << "    ";

    for (int d = 1; d <= 30; ++d)
    {
        cout << setw(3) << d << " ";
        if ((dayOfWeek + d - 1) % 7 == 6) cout << "\n";
    }
    cout << endl;
}*/
