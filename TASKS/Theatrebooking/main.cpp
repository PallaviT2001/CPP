#include "TheatreManager.h"
#include <iostream>
using namespace std;

int main() {
    TheatreManager manager;
    int choice;

    do {
        cout << "\nTheatre Management System\n";
        cout << "1. Book a Theatre\n";
        cout << "2. View Bookings on Date\n";
        cout << "3. Show Available Theatres\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        string dateInput;
        if (choice == 1 || choice == 2 || choice == 3) {
            cout << "Enter date (DD-MM-YYYY): ";
            cin >> dateInput;

            if (!Date::isValidFormat(dateInput)) {
                cout << "Invalid date format or value. Please try again.\n";
                continue;
            }

            Date date = Date::fromString(dateInput);

            if (choice == 1) {
                int id;
                cout << "Enter Theatre ID (1-10): ";
                cin >> id;
                if (id < 1 || id > 10) {
                    cout << "Invalid Theatre ID.\n";
                    continue;
                }
                manager.bookTheater(id, date);
            } else if (choice == 2) {
                manager.showBookings(date);
            } else if (choice == 3) {
                manager.printAvailableTheaters(date);
            }
        } else if (choice != 4) {
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
