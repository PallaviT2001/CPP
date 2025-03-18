

#ifndef BIKE_H
#define BIKE_H
#include "vehicle.h"
#include <iostream>
using namespace std;

class Bike:public Vehicle
{
public:
    Bike();
    ~Bike();
    Bike(string vehiclename,int vehicleid,float cost,bool available,int duration);

};

#endif

#ifndef CAR_H
#define CAR_H
#include "vehicle.h"
#include <iostream>
using namespace std;

class Car:public Vehicle
{
public:
    Car();
    ~Car();
    Car(string vehiclename,int vehicleid,float cost,bool available,int duration);
};

#endif

#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string m_vehiclename;
    int m_vehicleid;
    float m_cost;
    bool m_available;
    int m_duration ;

public:
    Vehicle();
    ~Vehicle();
    Vehicle(string vehiclename,int vehicleid,float cost,bool available,int duration);

    string getvehiclename();
    float getcost();
    bool getavailable();
    int getduration();
    int getvehicleid();

    void updateAvailability(bool avail);

    virtual string toCSV();


};
#endif

#ifndef VEHICLEMANAGER_H
#define VEHICLEMANAGER_H
#include <vector>
#include "car.h"
#include "bike.h"

class Vehiclemanager
{
private:
private:
    vector<Car> carList;
    vector<Bike> bikeList;
public:
    Vehiclemanager();
    ~Vehiclemanager();

    void addcar(string vehiclename,int vehicleid,float cost,bool available,int duration);
    void addbike(string vehiclename,int vehicleid,float cost,bool available,int duration);
    void bookVehicle(int vehicleId, string type);
    void returnVehicle(int vehicleId, string type);
    void savedata();


};
#endif

#include "bike.h"

Bike::Bike()
{
    cout<<"bike constructor called"<<endl;
}

Bike::~Bike()
{
    cout<<"bike destructor called"<<endl;
}

Bike::Bike(string vehiclename,int vehicleid,float cost,bool available,int duration)
    :Vehicle(vehiclename,vehicleid,cost,available,duration)
{
    cout<<"bike parameterized constructor called"<<endl;
}

#include "car.h"

Car::Car()
{
    cout<<"car constructor called"<<endl;
}

Car::~Car()
{
    cout<<"car destructor called"<<endl;
}

Car::Car(string vehiclename,int vehicleid,float cost,bool available,int duration)
    :Vehicle(vehiclename,vehicleid,cost,available,duration)
{
    cout<<"car parameterized constructor called"<<endl;
}

#include <iostream>
using namespace std;
#include "vehiclemanager.h"

int main() {

    Vehiclemanager vm;
    int choice;

    while (true) {
        cout << "Vehicle Rental Management System"<<endl;
        cout << "1. Add Vehicle (Car/Bike)"<<endl;
        cout << "2. Book a Vehicle"<<endl;
        cout << "3. Return a Vehicle"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            string type;
            string vehiclename;
            int vehicleid;
            float cost;
            bool available;
            int duration;

            cout << "Enter Type of vehicle either (Car/Bike), Name, ID, Available (1/0), Cost: ";
            cin >> type >> vehiclename >> vehicleid >> cost >> available>>duration;
            if (type == "Car")
            {
                vm.addcar(vehiclename,vehicleid,cost,available,duration);
            }
            else if (type == "Bike")
            {
                vm.addbike(vehiclename,vehicleid,cost,available,duration);
            }
            else
            {
                cout <<"Invalid option";
            }
        }
        else if (choice == 2)
        {
            string type;
            int id;
            cout << "Enter Vehicle ID and Type (Car/Bike) to book: ";
            cin >> id >> type;
            vm.bookVehicle(id, type);
        }
        else if (choice == 3)
        {
            string type;
            int id;
            cout << "Enter Vehicle ID and Type (Car/Bike) to return: ";
            cin >> id >> type;
            vm.returnVehicle(id, type);
        }
        else if (choice == 4)
        {
            break;
        }
        else
        {
            cout << "Invalid choice"<<endl;
        }
    }

    return 0;
}


#include "vehicle.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

Vehicle::Vehicle()
{
    cout<<"vehicle constructor called"<<endl;
}

Vehicle::~Vehicle()
{
    cout<<"vehicle destructor called"<<endl;
}

Vehicle::Vehicle(string name,int vehicleid, float cost, bool available, int duration)
{
    m_vehiclename=name;
    m_vehicleid=vehicleid;
    m_cost=cost;
    m_available=available;
    m_duration=duration;
}

string Vehicle::getvehiclename()
{
    return m_vehiclename;
}

float Vehicle::getcost()
{
    return m_cost;
}

int Vehicle::getduration()
{
    return m_duration;
}

bool Vehicle::getavailable()
{
    return m_available;
}

int Vehicle::getvehicleid()
{
    return m_vehicleid;
}

void Vehicle::updateAvailability(bool avail)
{
    m_available=avail;
}

string Vehicle::toCSV()
{
    string vehiclename;
    int vehicleid;
    float cost;
    bool available;
    int duration;

    //file <<"vehiclename,vehicleid,cost,available,duration"<<endl;
    return vehiclename+","+to_string(vehicleid)+","+to_string(cost)+","+(available? "1":"0")+","+to_string(duration);
    //return name + "," + to_string(id) + "," + (available ? "1" : "0") + "," + to_string(dailyCost);

}



#include "vehiclemanager.h"
#include <fstream>

Vehiclemanager::Vehiclemanager()
{
    cout<<"vehicle manager constructor called"<<endl;
}

Vehiclemanager::~Vehiclemanager()
{
    cout<<"vehicle manager destructor called"<<endl;
}

void Vehiclemanager::addcar(string vehiclename, int vehicleid, float cost, bool available, int duration)
{
    carList.push_back(Car(vehiclename, vehicleid,cost, available,duration));
    savedata();
}

void Vehiclemanager::addbike(string vehiclename, int vehicleid, float cost, bool available, int duration)
{
    bikeList.push_back(Bike(vehiclename, vehicleid,cost, available, duration));
    savedata();
}

void Vehiclemanager::bookVehicle(int vehicleId, string type)
{
    if (type == "Car") {
        for (auto &car : carList) {
            if (car.getvehicleid() == vehicleId && car.getavailable()) {
                car.updateAvailability(false);
                savedata();
                cout << "Car " << car.getvehiclename() << " has been booked successfully"<<endl;
                return;
            }
        }
    } else if (type == "Bike") {
        for (auto &bike : bikeList) {
            if (bike.getvehicleid() == vehicleId && bike.getavailable()) {
                bike.updateAvailability(false);
                savedata();
                cout << "Bike " << bike.getvehiclename() << " has been booked successfully"<<endl;
                return;
            }
        }
    }
    cout << "Vehicle not available or not found"<<endl;
}

void Vehiclemanager::returnVehicle(int vehicleId, string type)
{
    if (type == "Car") {
        for (auto &car : carList) {
            if (car.getvehicleid() == vehicleId) {
                car.updateAvailability(true);
                savedata();
                cout << "Car " << car.getvehiclename() << " has been returned successfully"<<endl;
                return;
            }
        }
    } else if (type == "Bike") {
        for (auto &bike : bikeList) {
            if (bike.getvehicleid() == vehicleId) {
                bike.updateAvailability(true);
                savedata();
                cout << "Bike " << bike.getvehiclename() << " has been returned successfully"<<endl;
                return;
            }
        }
    }
    cout << "Vehicle not found"<<endl;
}

void Vehiclemanager::savedata()
{
    ofstream file("data.csv");
    file <<"vehiclename,vehicleid,cost,available,duration"<<endl;

    for (auto &car : carList)
        file << "Car," << car.toCSV() <<endl;

    for (auto &bike : bikeList)
        file << "Bike," << bike.toCSV() <<endl;

    file.close();
}











/*#include <iostream>
using namespace std;*/

/*int main()
{
    int i=0;
    int numbers[4]={10,20,90,5};
    int large=numbers[0];
    int small=numbers[0];
    for(i=0;i<=3;i++)
    {
        if(numbers[i]>large)
        {
            large=numbers[i];
        }
        if(numbers[i]<small)
        {
            small=numbers[i];
        }
    }
    cout<<"largest number "<<large<<endl;
    cout<<"smallest number "<<small<<endl;
}*/

/*int main()
{
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    int lastdigit=0;
    int result=0;
    int largernumber=0;
    int smallernumber=9;

    while(num!=0)
    {
        lastdigit=num%10;
        result=lastdigit+(result*10);
        num=num/10;
        if(lastdigit>largernumber)
        {
            largernumber=lastdigit;
        }
        if(lastdigit<smallernumber)
        {
            smallernumber=lastdigit;
        }
    }
    cout<<"Reversed number is "<<result<<endl;
    cout<<"larger number "<<largernumber<<endl;
    cout<<"smaller number "<<smallernumber<<endl;
    return 0;
}*/

/*#include <map>
int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;

    map<char,int>count;

    for(char ch:input)
    {
        count[ch]++;
    }

    for (char ch : input)
    {
        if (count[ch] != 0)
        {
            cout << ch << "-" <<count[ch] << " ";
            count[ch] = 0;

        }
    }

    return 0;
}*/

/*#include <algorithm>
int arraysize=4;

int main()
{
    int array[]={10,200,5,300};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array,array+arraysize);

    cout<<"output array:"<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<array[i]<<" "<<endl;
    }
    return 0;
}*/

/*template<typename T>

T add(T a,T b);
int main()
{
  auto a=10.5,b=12.5;
  //add<int>(15,10);
  auto sum=add<double>(a,b);
  cout<<"sum value"<<sum<<endl;
  return 0;
}

template<typename T>
T add(T a,T b)
{
    T sum=a+b;
    return sum;
}*/

/*int main() {
    int array[] = {10, 200, 5, 300};
    int arraysize = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < arraysize - 1; i++)
    {
        for (int j = 0; j < arraysize - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }

    cout << "Output array:" << endl;
    for (int i = 0; i < arraysize; i++) {
        cout << array[i] << endl;
    }

    return 0;
}*/

/*int add (int &a)
{
    cout<<a<<endl;
}

int main()
{
    int b=5;
    add(b);
    return 0;
}*/


