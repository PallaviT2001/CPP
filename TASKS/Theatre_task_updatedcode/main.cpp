#include <iostream>
#include <regex>
#include "TheatreManager.h"
#include "calender.h"

bool isValidDateFormat(const std::string& dateStr) {
    std::regex datePattern(R"(\d{2}-\d{2}-\d{4})");
    return std::regex_match(dateStr, datePattern);
}

int main() {
    TheaterManager manager;
    Calendar calendar(&manager);
    calendar.showCalendar();
    std::string input;

    int choice, day, month, year;
    std::string theaterName;
    std::string dateStr, theatreId;

    while (true) {
        std::cout << "\nMenu:\n1. Show Calendar\n2. Book Theatre\n3. Check Bookings\n4. <- Previous Month\n5. -> Next Month\n6. Exit\nEnter choice: ";
        std::cin >> input;

        if (input == "1") {
            calendar.showCalendar();
        } else if (input == "2") {
            std::cout << "Enter date (DD-MM-YYYY): ";
            std::cin >> dateStr;
            if (!isValidDateFormat(dateStr)) {
                std::cout << "Invalid date format.\n";
                continue;
            }

            int d = std::stoi(dateStr.substr(0, 2));
            int m = std::stoi(dateStr.substr(3, 2));
            int y = std::stoi(dateStr.substr(6, 4));
            Date date(d, m, y);

            if (!date.isValid() || date.isPast()) {
                std::cout << "Invalid or past date.\n";
                continue;
            }

            std::cout << "Enter theatre ID: ";
            std::cin >> theatreId;
            if (!manager.isAvailable(dateStr, theatreId)) {
                std::cout << "Theatre already booked.\n";
            } else {
                manager.bookTheater(dateStr, theatreId);
                std::cout << "Booking successful!\n";
            }
        } else if (input == "3") {
            std::cout << "Enter date (DD-MM-YYYY): ";
            std::cin >> dateStr;
            auto booked = manager.getBookedTheatres(dateStr);
            std::cout << "Booked theatres on " << dateStr << ":\n";
            for (const auto& t : booked) {
                std::cout << "- " << t << "\n";
            }
        } else if (input == "4") {
            calendar.prevMonth();
        } else if (input == "5") {
            calendar.nextMonth();
        } else if (input == "6") {
            std::cout << "Exiting...\n";
            break;
        } else {
            std::cout << "Invalid input.\n";
        }
    }

    return 0;
}
