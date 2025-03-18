#include "vehiclemanager.h"
#include <iostream>
using namespace std;

VehicleManager::VehicleManager()
{
    std::cout<<"VehicalManager Constructor Called"<<std::endl;
}

VehicleManager::~VehicleManager()
{
    std::cout<<"VehicalManager Destructor Called"<<std::endl;
}

void VehicleManager::addBike()
{
    std::cout<<"\nAdd Bike Function Called"<<std::endl;

    float rentPrice;
    std::string brand, model, vehicleNumber,status;

    std::cout<<"Enter Bike Brand: ";
    std::cin>>brand;
    std::cout<<"Enter Bike Model: ";
    std::cin>>model;
    std::cout<<"Enter Bike Number: ";
    std::cin>>vehicleNumber;
    std::cout<<"Enter Bike Rent Price: ";
    std::cin>>rentPrice;
    std::cout<<"Enter Bike Status: ";
    std::cin>>status;

    m_bikeList.push_back(Bike(brand,model,vehicleNumber,rentPrice,status));
    fileoperation.writeBikeData(m_bikeList);
}

void VehicleManager::addCar()
{
    std::cout<<"\nAdd Car Function Called"<<std::endl;

    float rentPrice;
    std::string brand, model, vehicleNumber,status;

    std::cout<<"Enter Car Brand: ";
    std::cin>>brand;
    std::cout<<"Enter Car Model: ";
    std::cin>>model;
    std::cout<<"Enter Car Number: ";
    std::cin>>vehicleNumber;
    std::cout<<"Enter Car Rent Price: ";
    std::cin>>rentPrice;
    std::cout<<"Enter Car Status: ";
    std::cin>>status;

    m_carList.push_back(Car(brand,model,vehicleNumber,rentPrice,status));
    fileoperation.writeCarData(m_carList);
}

void VehicleManager::displayListOfBikes()
{
    m_bikeList = fileoperation.readBikeData();
    std::cout<<"\nBike Display Function Called"<<std::endl;

    for(auto i = m_bikeList.begin(); i != m_bikeList.end(); i++)
    {
        std::cout << "\nBikeBrand: " << i->getBrand() <<" | ";
        std::cout << "BikeModel: " << i->getModel() <<" | ";
        std::cout << "BikeNumber: " << i->getVehicleNumber() <<" | ";
        std::cout << "BikeRentPrice: " << i->getRentPrice() <<" | ";
        std::cout << "BikeStatus: " << i->getStatus() <<std::endl;
    }
}

void VehicleManager::displayListOfCars()
{
    m_carList = fileoperation.readCarData();
    std::cout<<"\nCar Display Function Called"<<std::endl;

    for(auto i = m_carList.begin(); i != m_carList.end(); i++)
    {
        std::cout << "\nCar rand: " << i->getBrand() <<" | ";
        std::cout << "CarModel: " << i->getModel() <<" | ";
        std::cout << "CarNumber: " << i->getVehicleNumber() <<" | ";
        std::cout << "CarRentPrice: " << i->getRentPrice() <<" | ";
        std::cout << "CarStatus: " << i->getStatus() <<std::endl;
    }
}

void VehicleManager::updateBikePrice()
{
    m_bikeList = fileoperation.readBikeData();
    std::cout << "Update Bike Price Function Called" << std::endl;

    std::string vehicleNumber;
    float newRentPrice;

    std::cout << "Enter Bike Number: ";
    std::cin >> vehicleNumber;

    for (auto i = m_bikeList.begin(); i != m_bikeList.end(); i++)
    {
        if (i->getVehicleNumber() == vehicleNumber)
        {
            std::cout << "Enter Updated Rent Price: ";
            std::cin >> newRentPrice;
            i->setRentPrice(newRentPrice);
            fileoperation.writeBikeData(m_bikeList);
            std::cout << "Bike rent price updated successfully" << std::endl;
            return;
        }
    }
    std::cout << "Bike with number " << vehicleNumber << " not found" << std::endl;
}

void VehicleManager::updateCarPrice()
{
    m_carList = fileoperation.readCarData();
    std::cout << "Update Car Price Function Called" << std::endl;

    std::string vehicleNumber;
    float newRentPrice;

    std::cout << "Enter Car Number: ";
    std::cin >> vehicleNumber;

    for (auto i = m_carList.begin(); i != m_carList.end(); i++)
    {
        if (i->getVehicleNumber() == vehicleNumber)
        {
            std::cout << "Enter Updated Rent Price: ";
            std::cin >> newRentPrice;
            i->setRentPrice(newRentPrice);
            fileoperation.writeCarData(m_carList);
            std::cout << "Car rent price updated successfully" << std::endl;
            return;
        }
    }
    std::cout << "Car with number " << vehicleNumber << " not found" << std::endl;
}

/*void VehicleManager::Bookbike()
{
    m_bikeList=fileoperation.readBikeData();
    cout<<"Bike book function called"<<endl;

    string vehicleNumber;
    string newstatus;

    cout<<"enter bike number to book"<<endl;
    cin>>vehicleNumber;

    for (auto i = m_bikeList.begin(); i != m_bikeList.end(); i++)
    {
        if (i->getVehicleNumber() == vehicleNumber && i->getStatus() == "available")
        {
            i->setStatus("booked");
            fileoperation.writeBikeData(m_bikeList);
            cout<<"Bike booked successfully refno: "<<vehicleNumber<<endl;
            return;
        }
    }
    std::cout << "Bike with number " << vehicleNumber << " not found" << std::endl;

}*/

void VehicleManager::Bookcar()
{
    m_carList=fileoperation.readCarData();
    cout<<"car book function called"<<endl;

    string vehicleNumber;
    string newstatus;

    cout<<"enter car number to book"<<endl;
    cin>>vehicleNumber;

    for(auto i=m_carList.begin();i!=m_carList.end();i++)
    {
        if(i->getVehicleNumber()==vehicleNumber && i->getStatus()=="available")
        {
            i->setStatus("booked");
            fileoperation.writeCarData(m_carList);
            cout<<"car booked successfully refno: "<<vehicleNumber<<endl;
            return;
        }
    }
    std::cout << "car with number " << vehicleNumber << " not found" << std::endl;
}

void VehicleManager::returnbike()
{
    m_bikeList=fileoperation.readBikeData();
    cout<<"Bike return function called"<<endl;

    string vehicleNumber;
    string newstatus;

    cout<<"enter bike number to return"<<endl;
    cin>>vehicleNumber;

    for(auto i=m_bikeList.begin();i!=m_bikeList.end();i++)
    {
        if(i->getVehicleNumber()==vehicleNumber && i->getStatus()=="booked")
        {
        i->setStatus("available");
        fileoperation.writeBikeData(m_bikeList);
        cout<<"bike returned successfully from the customer"<<endl;
        return;
        }
    }
    std::cout << "Bike with number " << vehicleNumber << " not booked" << std::endl;
}

void VehicleManager::returncar()
{
    m_carList=fileoperation.readCarData();
    cout<<"car return function called"<<endl;

    string vehicleNumber;
    string newstatus;

    cout<<"enter car number to return"<<endl;
    cin>>vehicleNumber;

    for(auto i=m_carList.begin();i!=m_carList.end();i++)
    {
        if(i->getVehicleNumber()==vehicleNumber && i->getStatus()=="booked")
        {
            i->setStatus("available");
            fileoperation.writeCarData(m_carList);
            cout<<"car returned successfully from the customer"<<endl;
            return;
        }
    }
    std::cout << "Bike with number " << vehicleNumber << " not booked" << std::endl;
}

void VehicleManager::Bookbike()
{
    m_bikeList=fileoperation.readBikeData();
    cout<<"Bike book function called"<<endl;

    string vehicleNumber;
    string newstatus;

    string customername;
    string dlno;
    string address;

    cout<<"enter bike number to book"<<endl;
    cin>>vehicleNumber;
    cout<<"enter customer details to book a bike"<<endl;
    cout<<"Customer name"<<endl;
    cin>>customername;
    cout<<"customer dlno"<<endl;
    cin>>dlno;
    cout<<"Customer address"<<endl;
    cin>>address;

    for (auto i = m_bikeList.begin(); i != m_bikeList.end(); i++)
    {
        if (i->getVehicleNumber() == vehicleNumber && i->getStatus() == "available")
        {
            i->setStatus("booked");
            fileoperation.writeBikeData(m_bikeList);
            cout<<"Bike booked successfully refno: "<<vehicleNumber<<endl;
            return;
        }
    }
    std::cout << "Bike with number " << vehicleNumber << " not found" << std::endl;

}

