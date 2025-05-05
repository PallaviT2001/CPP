#include <iostream>
#include <regex>
#include "TheatreManager.h"
#include "calender.h"
#include <iostream>
using namespace std;

bool isValidDateFormat(const std::string& dateStr) {
    std::regex datePattern(R"(\d{2}-\d{2}-\d{4})");
    return std::regex_match(dateStr, datePattern);
}

int main() {
    TheaterManager manager;
    Calendar calendar(&manager);
    calendar.showCalendar();

    //std::string input;
    //int choice, day, month, year;
    //std::string theaterName;
    int choice;
    std::string dateStr, theatreId;

    while (true)
    {
        cout<<endl;
        cout<<"Select the choice"<<endl;
        cout<<"1. <- Previous month"<<endl;
        cout<<"2. -> Next month"<<endl;
        cout<<"3. Show Calender"<<endl;
        cout<<"4. Book Theatre"<<endl;
        cout<<"5. Check Bookings"<<endl;
        cout<<"6. Exit"<<endl;

        cin >> choice;
        switch(choice)
        {
        case 1:
        {
            calendar.prevMonth();
            break;
        }
        case 2:
        {
            calendar.nextMonth();
            break;
        }
        case 3:
        {
            calendar.showCalendar();
            break;
        }
        case 4:
        {
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
            break;
        }
        case 5:
        {
            std::cout << "Enter date (DD-MM-YYYY): ";
            std::cin >> dateStr;

            if (!isValidDateFormat(dateStr)) {
                std::cout << "Invalid date format.\n";
                continue;
            }

            auto booked = manager.getBookedTheatres(dateStr);
            std::cout << "Booked theatres on " << dateStr << ":\n";
            for (const auto& t : booked)
            {
                std::cout<<"Theatre id: "<<t<<endl;
            }
            break;
        }
        case 6:
        {
            exit(0);
        }
        default:
        {
            cout<<"invalid choice enter valid choice"<<endl;
        }
        }
    }
    return 0;
}

