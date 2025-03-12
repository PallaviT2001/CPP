#include <iostream>
#include <list>
#include "wifi.h"
using namespace std;
#include "fileoperation.h"
#include "wifimanager.h"

enum choice {display=1,sorting,connection};

int main()
{
    int choice;
    Wifimanager wifimanobj;
    Fileoperation fobj;

    cout << "Enter the choice" << endl;
    cout << "1. Display available networks" << endl;
    cout << "2. Sorting" << endl;
    cout << "3. Connection" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        wifimanobj.display();
        break;
    case 2:
        wifimanobj.sortwifi();
        wifimanobj.display();
        break;
    case 3:
        wifimanobj.connection();
        break;
    default:
        cout << "Invalid choice" << endl;
    }
    return 0;
}
