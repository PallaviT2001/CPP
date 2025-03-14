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

    // Fileoperation fobj;
    Wifimanager wifimanobj;
    while(true)
    {
    cout<<"enter the choice"<<endl;
    cout<<"1.Available Networks"<<endl;
    cout<<"2.Sorting the networks"<<endl;
    cout<<"3.Connection"<<endl;
    cin>>choice;
    switch(choice)
    {
    case display:
    {
        // wifimanobj.writeData();
        wifimanobj.display();
        break;
    }

    case sorting:
    {
        //wifilist=wifimanobj.readData();
        wifimanobj.sortwifi();
        wifimanobj.display();
        break;
    }
    case connection:
    {
        // wifilist=wifimanobj.readData();
        wifimanobj.connection();
        wifimanobj.sortwifi();
        wifimanobj.display();
    }
    default:
        cout<<"invalid choice"<<endl;
    }

    }
    return 0;
}
