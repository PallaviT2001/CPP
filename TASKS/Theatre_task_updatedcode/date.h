#ifndef DATE_H
#define DATE_H
#include <string>
#include <iostream>
class Date{

private:
    int m_day;
    int m_month;
    int m_year;

public:
    Date(int day, int month, int year);
    Date(const std::string& dateStr);
    ~Date();

    static Date fromString(const std::string& dateStr);
    static bool isValidFormat(const std::string& dateStr);
    static bool isValidDate(int day, int month, int year);
    static Date getCurrentDate();

    std::string toString() const;

    int getDay() const;
    int getMonth() const;
    int getYear() const;

    bool operator<(const Date& other) const; // <-- ADD THIS

    friend std::ostream& operator<<(std::ostream& os, const Date& dt);
};

#endif
