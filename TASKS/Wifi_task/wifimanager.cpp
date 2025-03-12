#include "wifimanager.h"
#include "wifi.h"
#include <fstream>

Wifimanager::Wifimanager()
{
    cout<<"wifi manager constructor called"<<endl;

    Wifilist = readData();
}

Wifimanager::~Wifimanager()
{
    cout<<"wifi manager destructor called"<<endl;
    for (auto wifi : Wifilist)
    {
        delete wifi;
    }
}

void Wifimanager::writeData()
{
    ofstream file("wifi.csv",ios::app);
    if (!file)
    {
        cout << "Error opening wifi file for writing!" << endl;
        return;
    }

    for ( auto wifi : Wifilist)
    {
        file << wifi->getwifiname() << "," << wifi->getsignalstrength() << ","<< wifi->getstatus() << "," << wifi->getpassword()<< "\n";
    }

    file.close();
    cout << "Data written to CSV successfully." << endl;
}

list<Wifi*> Wifimanager::readData()
{
    list<Wifi*> wifilist;
    ifstream file("wifi.csv");
    if (!file)
    {
        cout << "Error opening wifi file for reading!" << endl;
        return wifilist;
    }

    string wifiname, status;
    int signalstrength, password;

    while (getline(file, wifiname, ',') && file >> signalstrength && file.ignore() &&
           getline(file,status,',')&& file >> password && file.ignore())
    {
        wifilist.push_back(new Wifi(wifiname,signalstrength, status, password));
    }

    file.close();
    return wifilist;
}

void Wifimanager::display()
{
    for (auto i:Wifilist)
    {
        cout<<"Wifi name:  "<<i->getwifiname()<<","<<" wifi signalstrength:  "<<i->getsignalstrength()
             <<","<<" wifi status:  "<<i->getstatus()<<","<<" wifi password:  "<<i->getpassword()<<endl;
    }
}


void Wifimanager::sortwifi()
{
    for(auto i:Wifilist)
    {

        for(auto j:Wifilist)
        {

            if(i->getstatus()!="connected" && j->getstatus()=="connected")
            {
                iter_swap(i,j);
            }
            if(i->getstatus()=="active" && j->getstatus()=="saved")
            {
                iter_swap(i,j);
            }
            if(i->getstatus()==j->getstatus() && i->getsignalstrength() < j->getsignalstrength())
            {
                iter_swap(i,j);
            }
        }
    }
}

void Wifimanager::connection()
{
    string wifiname,password;
    cout<<"enter wifi name to connect"<<endl;
    cin>>wifiname;

    for (auto i:Wifilist)
    {
        if(i->getstatus()=="connected" && i->getwifiname()==wifiname)
        {
            cout<<endl<<"wifi "<<wifiname<<"is already connected"<<endl;
        }
        if(i->getstatus()=="connected")
        {
            cout<<endl<<" disconnecting from "<<i->getwifiname()<<" and saving it "<<endl;
            i->setstatus("saved");
        }
        if(i->getwifiname()==wifiname)
        {
            if(i->getstatus()=="saved")
            {
                cout<<endl<<" connecting to "<<wifiname<<endl;
                i->setstatus("connected");
                return;
            }
            else if(i->getstatus()=="active")
            {
                int password;
                cout<<endl<<" enter password for  "<<wifiname<<endl;
                cin>>password;
                if(password == i->getpassword())
                {
                    cout<<endl<<"entered password is correct and connecting"<<wifiname<<endl;
                    i->setstatus("connected");
                }
                else
                {
                    cout<<endl<<"incorrect password"<<endl;
                }
                return;
            }
        }
    }
}
