#include "TheatreManager.h"
#include <iostream>
#include <string>

int main()
{
    //Calender calender;
    //calender.displayAprilCalendar();
    //calender.displayCurrentDate();

    Calendar calendar;
    calendar.run();

    TheatreManager manager;
    int choice;

    do {
        std::cout << "\nTheater Management System\n";
        std::cout << "1. Book a Theater\n";
        std::cout << "2. View Bookings on Date\n";
        std::cout << "3. Show Available Theaters\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        std::string dateInput;
        if (choice == 1)
        {
            calendar.displayCurrentDate();
            std::cout << "Enter date (DD-MM-YYYY): ";
            std::cin >> dateInput;
            int id;
            std::cout << "Enter Theater ID (1-10): ";
            std::cin >> id;
            Date date = Date::fromString(dateInput);
            manager.bookTheater(id, date);
        }
        else if (choice == 2)
        {
            std::cout << "Enter date (DD-MM-YYYY): ";
            std::cin >> dateInput;
            manager.showBookings(Date::fromString(dateInput));
        }
        else if (choice == 3)
        {
            std::cout << "Enter date (DD-MM-YYYY): ";
            std::cin >> dateInput;
            manager.printAvailableTheaters(Date::fromString(dateInput));
        }
        else if (choice != 4)
        {
            std::cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
