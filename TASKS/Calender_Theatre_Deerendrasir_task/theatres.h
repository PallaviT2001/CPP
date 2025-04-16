#ifndef THEATRES_H
#define THEATRES_H
#include <map>
#include "calender.h"

class Theatres
{
private:
    int id;
    std::map<int, bool> bookedDates;
public:
    Theatres();
    ~Theatres();
    Theatres(int theatreId);

    bool isAvailable(int day) const;
    bool book(int day);
    void showBookings() const;
    int getId() const;

};

#endif
