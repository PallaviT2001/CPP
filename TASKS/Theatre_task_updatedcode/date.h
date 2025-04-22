#ifndef DATE_H
#define DATE_H
#include <string>
#include <iostream>

class Date
{
private:
    int m_day;
    int m_month;
    int m_year;
public:
    ~Date();
    Date(int day = 1, int month = 4, int year = 2025);
    static Date fromString(const std::string& dateStr);
    std::string toString() const;
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    friend std::ostream& operator<<(std::ostream& os, const Date& dt);
    //bool operator==(const Date& other) const;
};

#endif

