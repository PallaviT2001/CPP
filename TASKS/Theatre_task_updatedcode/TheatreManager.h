#ifndef THEATREMANAGER_H
#define THEATREMANAGER_H
#include "date.h"
#include <map>
#include <vector>
#include <string>

class TheatreManager
{
    std::map<std::string, std::vector<std::string>> bookings;
public:
    void bookTheatre(const std::string& dateStr, const std::string& theatreId);
    std::vector<std::string> getBookedTheatres(const std::string& dateStr) const;
    bool isAvailable(const std::string& dateStr, const std::string& theatreId) const;
};

#endif
