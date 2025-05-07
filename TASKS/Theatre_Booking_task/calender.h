#ifndef CALENDAR_H
#define CALENDAR_H

class Calendar
{
public:
    Calendar();
    ~Calendar();
    void run();
    void displayCurrentDate() const;
private:
    void displayCalendar(int month, int year) const;
    int getStartDay(int month, int year) const;
    int getDaysInMonth(int month, int year) const;
    bool isLeapYear(int year) const;
};

#endif

