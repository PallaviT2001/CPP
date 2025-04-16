#include <iostream>
#include <vector>
#include "theatres.h"
#include "calender.h"
using namespace std;

int main() {
    Calendar cal;
    vector<Theatres> theatres;

    for (int i = 1; i <= 10; ++i)
    {
        theatres.emplace_back(i);
    }

    int choice;
    do {
        cout << "\nTheatre Booking"<<endl;

        cout << "1. Show April Calendar"<<endl;
        cout << "2. Book Theatre"<<endl;
        cout << "3. Show Theatre Bookings"<<endl;
        cout << "4. Exit"<<endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
        {
            cal.displayAprilCalendar();
            cal.displayCurrentDate();
            break;
        }
        case 2:
        {
            int tId, day;
            cout << "Enter Theatre id to book,within range(1-10)";
            cin >> tId;
            cout << "Enter Day of April to Book (1-30): ";
            cin >> day;

            if (theatres[tId - 1].book(day))
            {
                cout << "Booking successful for Theatre " << tId << " on April " << day <<endl;
            }
            else
            {
                cout <<"Theatre " << tId << " is already booked on April " << day <<endl;
            }
            break;
        }
        case 3:
        {
            for (const Theatres& theatre : theatres)
            {
                theatre.showBookings();
            }
            break;
        }
        case 4:
        {
            cout << "Exiting"<<endl;
            break;
        }

        default:
            cout << "Invalid choice. Try again.\n";
            break;
        }

    } while (choice != 4);

    return 0;
}


/*#include "calender.h"
#include "theatres.h"
#include <iostream>
#include <list>
using namespace std;

int main()
{
    Calendar cal;

    cal.displayAprilCalendar();
    cal.displayCurrentDate();
    return 0;
}*/



