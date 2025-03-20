#include "fileoperation.h"
#include <iostream>
#include <fstream>
using namespace std;

FileOperation::FileOperation()
{
    //std::cout<<"FileOperation Constructor Called"<<std::endl;
}

FileOperation::~FileOperation()
{
    //std::cout<<"FileOperation Destructor Called"<<std::endl;
}

void FileOperation::writeCarData(std::list<Rentalcar> carList)
{
    std::cout<<"CSV Car WriteData Function Called"<<std::endl;
    std::ofstream csvCarFile("CarListData.csv");
    for(auto i = carList.begin();i != carList.end();i++)
    {
        csvCarFile<< i->getBrand()<< ","
                   <<i->getModel()<< ","
                   <<i->getVehicleNumber()<< ","
                   <<i->getRentPrice()<< ","
                   <<i->getStatus()<<std::endl;
    }
    csvCarFile.close();
}

void FileOperation::writeBikeData(std::list<Rentalbike>bikeList)
{
    std::cout<<"CSV Bike WriteData Function Called"<<std::endl;
    std::ofstream csvBikeFile("BikeListData.csv");
    for(auto Bike = bikeList.begin();Bike != bikeList.end();Bike++)
    {
        csvBikeFile<< Bike->getBrand()<< ","
                    <<Bike->getModel()<< ","
                    <<Bike->getVehicleNumber()<< ","
                    <<Bike->getRentPrice()<< ","
                    <<Bike->getStatus()<<std::endl;
    }
    csvBikeFile.close();
}

std::list<Rentalcar> FileOperation::readCarData()
{
    std::cout<<"CSV Car ReadData Function Called"<<std::endl;

    std::list<Rentalcar> carlist;
    std::ifstream csvCarFile("CarListData.csv");
    float rentPrice;
    std::string brand, model, vehicleNumber,status;

    while(std::getline(csvCarFile,brand,',') && std::getline(csvCarFile,model,',')&& std::getline(csvCarFile,vehicleNumber,',')
           && csvCarFile>>rentPrice && csvCarFile.ignore() && std::getline(csvCarFile,status))
    {
        carlist.push_back(Rentalcar(brand, model, vehicleNumber, rentPrice,status));
    }
    csvCarFile.close();
    return carlist;
}


std::list<Rentalbike> FileOperation::readBikeData()
{
    std::cout<<"CSV Bike ReadData Function Called"<<std::endl;

    std::list<Rentalbike> bikeList;
    std::ifstream csvBikeFile("BikeListData.csv");
    float rentPrice;
    std::string brand, model, vehicleNumber,status;

    while(std::getline(csvBikeFile,brand,',') && std::getline(csvBikeFile,model,',')&& std::getline(csvBikeFile,vehicleNumber,',')
           && csvBikeFile>>rentPrice && csvBikeFile.ignore() && std::getline(csvBikeFile,status))
    {
        bikeList.push_back(Rentalbike(brand, model, vehicleNumber, rentPrice,status));
    }
    csvBikeFile.close();
    return bikeList;
}

void FileOperation::writecustomerdata(std::list<Customer> Customerlist)
{
    std::cout<<"CSV Customer WriteData Function Called"<<std::endl;
    std::ofstream csvCustomerFile("CustomerListData.csv");
    for(auto i= Customerlist.begin();i!=Customerlist.end();i++)
    {
        csvCustomerFile<<i->getname()<< ","
                        <<i->getdlno()<< ","
                        <<i->getaddress()<<","
                        <<i->getbookingid()<<endl;
        //<<i->getVehicleNumber()<<endl;

    }
    csvCustomerFile.close();
}

std::list<Customer> FileOperation::readcustomerdata()
{
    std::cout<<"customer data read function called"<<endl;
    std::list<Customer>Customerlist;

    std::ifstream csvCustomerFile("CustomerListData.csv");
    string customername;
    string dlno;
    string address;
    string bookingid;
    string VehicleNumber;

    while(std::getline(csvCustomerFile,customername,',') && std::getline(csvCustomerFile,dlno,',')
           && std::getline(csvCustomerFile,address,',') && std::getline(csvCustomerFile,bookingid))
    //&& std::getline(csvCustomerFile,VehicleNumber))
    {
        Customerlist.push_back(Customer(customername,dlno,address,bookingid));
    }
    csvCustomerFile.close();
    return Customerlist;

}

void FileOperation::writecustomerdatacar(std::list<Customer> Customerlist)
{
    std::cout<<"CSV Customer WriteData Function Called"<<std::endl;
    std::ofstream csvCustomerFile("CustomerListDatacar.csv");
    for(auto i= Customerlist.begin();i!=Customerlist.end();i++)
    {
        csvCustomerFile<<i->getname()<< ","
                        <<i->getdlno()<< ","
                        <<i->getaddress()<<","
                        <<i->getbookingid()<<endl;

    }
    csvCustomerFile.close();
}

std::list<Customer> FileOperation::readcustomerdatacar()
{
    std::cout<<"customer data read function called"<<endl;
    std::list<Customer>Customerlist;

    std::ifstream csvCustomerFile("CustomerListDatacar.csv");
    string customername;
    string dlno;
    string address;
    string bookingid;

    while(std::getline(csvCustomerFile,customername,',') && std::getline(csvCustomerFile,dlno,',')
           && std::getline(csvCustomerFile,address,',') && std::getline(csvCustomerFile,bookingid))
    {
        Customerlist.push_back(Customer(customername,dlno,address,bookingid));
    }
    csvCustomerFile.close();
    return Customerlist;

}



