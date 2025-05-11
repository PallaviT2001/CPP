#include "calender.h"
#include <iostream>
#include <iomanip>
#include <sstream>

Calendar::Calendar(TheaterManager* mgr) : manager(mgr)
{
    Date today = Date::today();
    currentMonth = today.toString()[3] == '0' ? today.toString()[4] - '0' : std::stoi(today.toString().substr(3, 2));
    currentYear = std::stoi(today.toString().substr(6));
}

void Calendar::nextMonth()
{
    if (++currentMonth > 12) {
        currentMonth = 1;
        ++currentYear;
    }
}

void Calendar::prevMonth()
{
    if (--currentMonth < 1) {
        currentMonth = 12;
        --currentYear;
    }
}

void Calendar::showCalendar() const
{
    std::string monthNames[] = { "", "January", "February", "March", "April", "May", "June",
                                "July", "August", "September", "October", "November", "December" };

    std::cout << "\n" << monthNames[currentMonth] << " " << currentYear << "\n";
    std::cout << "  Sun     Mon   Tue   Wed   Thu   Fri   Sat\n";

    std::tm t = {};
    t.tm_mday = 1;
    t.tm_mon = currentMonth - 1;
    t.tm_year = currentYear - 1900;
    std::mktime(&t);
    int startDay = t.tm_wday;

    int days = Date::daysInMonth(currentMonth, currentYear);
    int printed = 0;

    for (int i = 0; i < startDay; ++i) {
        std::cout <<"      ";
        ++printed;
    }

    for (int d = 1; d <= days; ++d) {
        Date curr(d, currentMonth, currentYear);
        std::string dateStr = curr.toString();
        std::vector<std::string> booked = manager->getBookedTheatres(dateStr);
        int bookedCount = booked.size();

        std::ostringstream oss;
        oss << std::setw(2) << std::setfill('0') << d << "/" << bookedCount;
        std::cout << oss.str() << " ";

        if (++printed % 7 == 0) std::cout << "\n";
    }
    std::cout << "\n";
}

std::string Calendar::getCalendarDisplay() const
{
    std::ostringstream oss;
    std::string monthNames[] = { "", "January", "February", "March", "April", "May", "June",
                                "July", "August", "September", "October", "November", "December" };
    oss << monthNames[currentMonth] << " " << currentYear << "\n";
    oss << "  Sun     Mon   Tue   Wed   Thu   Fri   Sat\n";

    std::tm t = {};
    t.tm_mday = 1;
    t.tm_mon = currentMonth - 1;
    t.tm_year = currentYear - 1900;
    std::mktime(&t);
    int startDay = t.tm_wday;

    int days = Date::daysInMonth(currentMonth, currentYear);
    int printed = 0;

    for (int i = 0; i < startDay; ++i) {
        oss << "      ";
        ++printed;
    }

    for (int d = 1; d <= days; ++d) {
        Date curr(d, currentMonth, currentYear);
        std::string dateStr = curr.toString();
        std::vector<std::string> booked = manager->getBookedTheatres(dateStr);
        int bookedCount = booked.size();

        oss << std::setw(2) << std::setfill('0') << d << "/" << bookedCount << " ";

        if (++printed % 7 == 0) oss << "\n";
    }

    return oss.str();
}

