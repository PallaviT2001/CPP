#include "TheatreManager.h"

void TheaterManager::bookTheater(const std::string& date, const std::string& theaterId)
{
    bookedTheaters[date].push_back(theaterId);
}

bool TheaterManager::isAvailable(const std::string& date, const std::string& theaterId)
{
    auto it = bookedTheaters.find(date);
    if (it != bookedTheaters.end()) {
        for (const auto& id : it->second) {
            if (id == theaterId) {
                return false; // Theatre is already booked
            }
        }
    }
    return true; // Theatre is available
}

std::vector<std::string> TheaterManager::getBookedTheatres(const std::string& date) const
{
    auto it = bookedTheaters.find(date);
    if (it != bookedTheaters.end()) {
        return it->second;
    }
    return {};
}

