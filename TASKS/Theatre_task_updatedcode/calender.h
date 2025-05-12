#ifndef CALENDAR_H
#define CALENDAR_H
#include <string>
#include <vector>
#include "TheatreManager.h"
#include "date.h"

class Calendar {
public:
    // Constructor and Destructor
    Calendar(TheaterManager* mgr);
    ~Calendar() = default;

    // Method to go to the next month
    void nextMonth();

    // Method to go to the previous month
    void prevMonth();

    // Method to display the calendar for the current month
    void showCalendar() const;

    // Method to get the calendar display as a string
    std::string getCalendarDisplay() const;

private:
    int currentMonth; // Current month (1-12)
    int currentYear;  // Current year
    TheaterManager* manager; // Pointer to TheaterManager to check booked theatres
};

#endif // CALENDAR_H


