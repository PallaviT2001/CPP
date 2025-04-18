#include <iostream>
#include "TheatreManager.h"
#include "date.h"
using namespace std;

int main()
{
    TheatreManager manager;
    int choice;

    while (true)
    {
        cout<<endl;
        cout << "1. Book Theatre"<<endl;
        cout << "2. Show Available Theatres"<<endl;
        cout << "3. Show Booked Theatres"<<endl;
        cout << "4. Exit"<<endl;

        cout << "Enter your choice:"<<endl;
        cin >> choice;

        if (choice == 1)
        {
            int id;
            string dateStr;
            cout << "Enter Theatre ID (0 to 9): ";
            cin >> id;
            cout << "Enter date in format DD-MM-YYYY: ";
            cin >> dateStr;
            Date date(dateStr);
            manager.bookTheatre(id, date);
        }

        else if (choice == 2)
        {
            string dateStr;
            cout << "Enter date in format DD-MM-YYYY: ";
            cin >> dateStr;
            Date date(dateStr);
            manager.showAvailableTheatres(date);
        }

        else if (choice == 3)
        {
            string dateStr;
            cout << "Enter date in format DD-MM-YYYY: ";
            cin >> dateStr;
            Date date(dateStr);
            manager.showBookedTheatres(date);
        }

        else if (choice == 4)
        {
            cout << "Exiting\n";
            break;
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}
