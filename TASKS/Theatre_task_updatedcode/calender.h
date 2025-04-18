#ifndef CALENDER_H
#define CALENDER_H

class Calender
{
public:
    Calender();
    ~Calender();
    void displayAprilCalendar()const;
    void displayCurrentDate() const;
private:
    int getStartDayOfApril(int year) const;
};

#endif
