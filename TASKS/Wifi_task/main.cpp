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

    /*wifilist.push_back(Wifi("Oppo",60,"connected",1234));
    wifilist.push_back(Wifi("Vivo",70,"active",5678));
    wifilist.push_back(Wifi("Samsung",80,"active",9101));
    wifilist.push_back(Wifi("Moto",50,"saved",3695));
    wifilist.push_back(Wifi("Redme",56,"saved",8965));
    wifilist.push_back(Wifi("Realme",63,"active",7896));
    wifilist.push_back(Wifi("Vivo25",65,"active",1896));*/

    cout<<"enter the choice"<<endl;
    cout<<"1.Display available networks"<<endl;
    cout<<"2.Sorting"<<endl;
    cout<<"3.Connection"<<endl;
    cin>>choice;
    switch(choice)
    {
    case display:
    {
        wifimanobj.writeData();
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

    }
    return 0;
}
