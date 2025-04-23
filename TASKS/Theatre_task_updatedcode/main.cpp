#include "TheatreManager.h"
#include <iostream>
#include <string>

/*int main()
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
}*/


/*int main()
{
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
            if (!Date::isValidFormat(dateInput)) {
                std::cout << "Invalid format. Use DD-MM-YYYY.\n";
                continue;
            }
            Date date = Date::fromString(dateInput);
            if (!Date::isValidDate(date.getDay(), date.getMonth(), date.getYear())) {
                std::cout << "Invalid date. Try again.\n";
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
            if (!Date::isValidFormat(dateInput)) {
                std::cout << "Invalid format. Use DD-MM-YYYY.\n";
                continue;
            }
            Date date = Date::fromString(dateInput);
            if (!Date::isValidDate(date.getDay(), date.getMonth(), date.getYear())) {
                std::cout << "Invalid date. Try again.\n";
                continue;
            }
            manager.showBookings(date);
        }
        else if (choice == 3)
        {
            std::cout << "Enter date (DD-MM-YYYY): ";
            std::cin >> dateInput;
            if (!Date::isValidFormat(dateInput)) {
                std::cout << "Invalid format. Use DD-MM-YYYY.\n";
                continue;
            }
            Date date = Date::fromString(dateInput);
            if (!Date::isValidDate(date.getDay(), date.getMonth(), date.getYear())) {
                std::cout << "Invalid date. Try again.\n";
                continue;
            }
            manager.printAvailableTheaters(date);
        }
        else if (choice != 4)
        {
            std::cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}*/

#include <iostream>
#include <string>
#include "Calender.h"
#include "TheatreManager.h"
#include "Date.h"

int main()
{
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

            if (!Date::isValidFormat(dateInput)) {
                std::cout << "Invalid format. Use DD-MM-YYYY.\n";
                continue;
            }

            Date date = Date::fromString(dateInput);
            if (!Date::isValidDate(date.getDay(), date.getMonth(), date.getYear())) {
                std::cout << "Invalid date. Try again.\n";
                continue;
            }

            Date currentDate = Date::getCurrentDate();  // Assuming this returns today's date
            if (date < currentDate) {
                std::cout << "Cannot book for past dates. Please choose today or a future date.\n";
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

            if (!Date::isValidFormat(dateInput)) {
                std::cout << "Invalid format. Use DD-MM-YYYY.\n";
                continue;
            }

            Date date = Date::fromString(dateInput);
            if (!Date::isValidDate(date.getDay(), date.getMonth(), date.getYear())) {
                std::cout << "Invalid date. Try again.\n";
                continue;
            }

            manager.showBookings(date);
        }
        else if (choice == 3)
        {
            std::cout << "Enter date (DD-MM-YYYY): ";
            std::cin >> dateInput;

            if (!Date::isValidFormat(dateInput)) {
                std::cout << "Invalid format. Use DD-MM-YYYY.\n";
                continue;
            }

            Date date = Date::fromString(dateInput);
            if (!Date::isValidDate(date.getDay(), date.getMonth(), date.getYear())) {
                std::cout << "Invalid date. Try again.\n";
                continue;
            }

            manager.printAvailableTheaters(date);
        }
        else if (choice != 4)
        {
            std::cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}








