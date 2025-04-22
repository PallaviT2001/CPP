#include "date.h"
#include <iomanip>
#include <sstream>
#include <ctime>
using namespace std;

Date::Date(int day, int month, int year) : m_day(day), m_month(month), m_year(year) {
    cout << "Date constructor called" << endl;
}

Date::~Date() {
    cout << "Date destructor called" << endl;
}

bool Date::isValidFormat(const std::string& dateStr) {
    if (dateStr.length() != 10) return false;
    if (dateStr[2] != '-' || dateStr[5] != '-') return false;

    for (int i = 0; i < dateStr.length(); ++i) {
        if ((i == 2 || i == 5)) continue;
        if (!isdigit(dateStr[i])) return false;
    }

    int d, m, y;
    char sep1, sep2;
    std::istringstream iss(dateStr);
    iss >> d >> sep1 >> m >> sep2 >> y;

    if (d < 1 || m < 1 || m > 12 || y < 2025) return false;
    int daysInMonth[] = {0, 31,28,31,30,31,30,31,31,30,31,30,31};
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) daysInMonth[2] = 29;
    return d <= daysInMonth[m];
}

Date Date::fromString(const std::string& dateStr) {
    int d, m, y;
    char sep1, sep2;
    std::istringstream iss(dateStr);
    iss >> d >> sep1 >> m >> sep2 >> y;
    return Date(d, m, y);
}

std::string Date::toString() const {
    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << m_day << "-"
        << std::setw(2) << std::setfill('0') << m_month << "-"
        << m_year;
    return oss.str();
}

int Date::getDay() const { return m_day; }
int Date::getMonth() const { return m_month; }
int Date::getYear() const { return m_year; }

bool Date::isTodayOrFuture() const {
    time_t now = time(nullptr);
    tm* local = localtime(&now);
    int today = local->tm_mday;
    int thisMonth = local->tm_mon + 1;
    int thisYear = local->tm_year + 1900;

    if (m_year > thisYear) return true;
    if (m_year == thisYear && m_month > thisMonth) return true;
    if (m_year == thisYear && m_month == thisMonth && m_day >= today) return true;
    return false;
}

ostream& operator<<(ostream& os, const Date& dt) {
    os << dt.toString();
    return os;
}
