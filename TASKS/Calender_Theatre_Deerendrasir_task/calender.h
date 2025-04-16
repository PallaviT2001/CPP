#ifndef CALENDAR_H
#define CALENDAR_H

class Calendar
{
public:
    Calendar();
    ~Calendar();
    void displayAprilCalendar()const;
    void displayCurrentDate() const;

private:
    int getStartDayOfApril(int year) const;
};

#endif

