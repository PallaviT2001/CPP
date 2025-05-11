#ifndef THEATERMANAGER_H
#define THEATERMANAGER_H

#include <string>
#include <vector>
#include <map>

class TheaterManager {
public:
    // Constructor and Destructor
    TheaterManager() = default;
    ~TheaterManager() = default;

    // Method to book a theatre for a given date
    void bookTheater(const std::string& date, const std::string& theaterId);

    // Method to check if a theatre is available for a given date
    bool isAvailable(const std::string& date, const std::string& theaterId);

    // Method to get the list of booked theatres for a given date
    std::vector<std::string> getBookedTheatres(const std::string& date) const;

private:
    // Map that stores booked theatres for each date
    std::map<std::string, std::vector<std::string>> bookedTheaters;
};

#endif // THEATERMANAGER_H

