#include <iostream>
#include <string>
#include "calender.h"
#include "Theatremanager.h"
#include "date.h"

int main()
{
    Calendar calendar;
    calendar.run();
    calendar.displayCurrentDate();

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
            std::cout << "Enter date (DD-MM-YYYY): ";
            std::cin >> dateInput;

            if (!Date::isValidFormat(dateInput))
            {
                cout<<"Enter a valid Date format. Use DD-MM-YYYY"<<endl;
                continue;
            }

            Date date = Date::fromString(dateInput);
            if (!Date::isValidDate(date.getDay(), date.getMonth(), date.getYear()))
            {
                std::cout << "Invalid date.Give the valid Date";
                continue;
            }

            Date currentDate = Date::getCurrentDate();
            if (date < currentDate)
            {
                cout<<"You cannot able to Booking Theatres for past Dates, Choose Today or a future date"<<endl;
                continue;
            }

            int id;
            std::cout << "Enter Theater ID (1-10): ";
            std::cin >> id;
            manager.bookTheater(id, date);
        }
        else if (choice == 2)
        {
            std::cout << "Enter date (DD-MM-YYYY): ";
            std::cin >> dateInput;

            if (!Date::isValidFormat(dateInput))
            {
                cout<<"Enter a valid Date format. Use DD-MM-YYYY"<<endl;
                continue;
            }

            Date date = Date::fromString(dateInput);
            if (!Date::isValidDate(date.getDay(), date.getMonth(), date.getYear()))
            {
                std::cout << "Invalid date.Give the valid Date";
                continue;
            }

            manager.showBookings(date);
        }
        else if (choice == 3)
        {
            std::cout << "Enter date (DD-MM-YYYY): ";
            std::cin >> dateInput;

            if (!Date::isValidFormat(dateInput))
            {
                cout<<"Enter a valid Date format. Use DD-MM-YYYY"<<endl;
                continue;
            }

            Date date = Date::fromString(dateInput);
            if (!Date::isValidDate(date.getDay(), date.getMonth(), date.getYear()))
            {
                std::cout << "Invalid date.Give the valid Date";
                continue;
            }

            manager.printAvailableTheaters(date);
        }
        else if (choice != 4)
        {
            cout<<"You have entered an invalid choice, enter a valid choice"<<endl;
        }

    } while (choice != 4);

    return 0;
}








