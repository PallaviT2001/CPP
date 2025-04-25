#ifndef THEATERMANAGER_H
#define THEATERMANAGER_H
#include <vector>
#include <string>
#include <unordered_map>

class TheaterManager {
public:
    void bookTheater(const std::string& date, const std::string& theaterId);
    bool isAvailable(const std::string& date, const std::string& theaterId);
    std::vector<std::string> getBookedTheatres(const std::string& date) const;

private:
    std::unordered_map<std::string, std::vector<std::string>> bookedTheaters;
};

#endif // THEATERMANAGER_H
