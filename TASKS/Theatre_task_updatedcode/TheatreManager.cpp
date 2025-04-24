#include "TheatreManager.h"

void TheatreManager::bookTheatre(const std::string& dateStr, const std::string& theatreId) {
    bookings[dateStr].push_back(theatreId);
}

std::vector<std::string> TheatreManager::getBookedTheatres(const std::string& dateStr) const {
    auto it = bookings.find(dateStr);
    if (it != bookings.end()) return it->second;
    return {};
}

bool TheatreManager::isAvailable(const std::string& dateStr, const std::string& theatreId) const {
    auto it = bookings.find(dateStr);
    if (it != bookings.end()) {
        for (const auto& id : it->second) {
            if (id == theatreId) return false;
        }
    }
    return true;
}
