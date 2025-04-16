#include <iostream>
#include <vector>
#include "calender.h"
#include "theatremanager.h"
using namespace std;

int main()
{
    Calender calender;
    calender.displayAprilCalendar();
    calender.displayCurrentDate();

    vector<Theatre> m_theaterlist;
    for(int i = 0; i < 10; ++i)
    {
        m_theaterlist.push_back(Theatre(i));
    }

    TheatreManager manager;
    int choice;
    cout<<endl;
    while(1)
    {
        cout << "Theater Booking Management"<<endl;
        cout << "1. Book"<<endl;
        cout << "2. Status"<<endl;
        cout << "3. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
        case 1:
        {
            int id, day;
            cout << "Enter Theater ID, Range(0- 9): ";
            cin >> id;
            cout << "Enter Date in April, Range(1 - 30): ";
            cin >> day;
            manager.bookTheater(m_theaterlist, id, day);
            break;
        }
        case 2:
        {
            int day;
            cout << "Enter Date in April (1 - 30) to check status: ";
            cin >> day;
            manager.printStatus(m_theaterlist, day);
            break;
        }
        case 3:
        {
            exit(0);
        }
        default:
            cout<<"enter valid choice"<<endl;
        }
    }
    return 0;
}
