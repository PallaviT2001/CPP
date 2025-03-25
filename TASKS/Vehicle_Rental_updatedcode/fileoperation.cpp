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

std::list<Rentalbike*> FileOperation::readBikeData()
{
    std::cout<<"CSV Bike ReadData Function Called"<<std::endl;

    std::list<Rentalbike*> bikeList;
    std::ifstream csvBikeFile("BikeListData.csv");
    float rentPrice;
    std::string brand, model, vehicleNumber,status;

    while(std::getline(csvBikeFile,brand,',') && std::getline(csvBikeFile,model,',')&& std::getline(csvBikeFile,vehicleNumber,',')
           && csvBikeFile>>rentPrice && csvBikeFile.ignore() && std::getline(csvBikeFile,status))
    {
        bikeList.push_back(new Rentalbike(brand, model, vehicleNumber, rentPrice,status));
    }
    csvBikeFile.close();
    return bikeList;
}

void FileOperation::writeBikeData(std::list<Rentalbike*> bikeList)
{
    std::ofstream csvBikeFile("BikeListData.csv");
    if(!csvBikeFile)
    {
        cout<<"Error"<<endl;
        return;
    }
    for(auto* i : bikeList)
    {
        std::cout<<"CSV Bike WriteData Function Called"<<std::endl;
        csvBikeFile<<i->getBrand()<<","
                    <<i->getModel()<<","
                    <<i->getVehicleNumber()<<","
                    <<i->getRentPrice()<<","
                    <<i->getStatus()<<std::endl;
    }
    cout<<"Data written"<<endl;
    csvBikeFile.close();
}

void FileOperation::writeCarData(std::list<Rentalcar *> carList)
{

    std::ofstream csvCarFile("CarListData.csv");
    for(auto* i:carList)
    {
        std::cout<<"CSV Car WriteData Function Called"<<std::endl;
        csvCarFile<< i->getBrand()<<","
                   <<i->getModel()<<","
                   <<i->getVehicleNumber()<<","
                   <<i->getRentPrice()<<","
                   <<i->getStatus()<<std::endl;
    }
    csvCarFile.close();
}



std::list<Rentalcar*> FileOperation::readCarData()
{
    std::cout<<"CSV Car ReadData Function Called"<<std::endl;

    std::list<Rentalcar*> carlist;
    std::ifstream csvCarFile("CarListData.csv");
    float rentPrice;
    std::string brand, model, vehicleNumber,status;

    while(std::getline(csvCarFile,brand,',') && std::getline(csvCarFile,model,',')&& std::getline(csvCarFile,vehicleNumber,',')
           && csvCarFile>>rentPrice && csvCarFile.ignore() && std::getline(csvCarFile,status))
    {
        carlist.push_back( new Rentalcar(brand, model, vehicleNumber, rentPrice,status));
    }
    csvCarFile.close();
    return carlist;
}




void FileOperation::writecustomerdata(std::list<Customer*> Customerlist)
{

    std::ofstream csvCustomerFile("CustomerListData.csv");
    for (auto i:Customerlist)
    {
        std::cout<<"CSV Customer WriteData Function Called"<<std::endl;
        csvCustomerFile<<i->getname()<< ","
                        <<i->getdlno()<< ","
                        <<i->getaddress()<<","
                        <<i->getbookingid()<<endl;
    }
    csvCustomerFile.close();
}

std::list<Customer*> FileOperation::readcustomerdata()
{
    std::cout<<"customer data read function called"<<endl;
    std::list<Customer*>Customerlist;

    std::ifstream csvCustomerFile("CustomerListData.csv");
    string customername;
    string dlno;
    string address;
    string bookingid;
    string VehicleNumber;

    while(std::getline(csvCustomerFile,customername,',') && std::getline(csvCustomerFile,dlno,',')
           && std::getline(csvCustomerFile,address,',') && std::getline(csvCustomerFile,bookingid))

    {
        Customerlist.push_back(new Customer(customername,dlno,address,bookingid));
    }
    csvCustomerFile.close();
    return Customerlist;

}

void FileOperation::writecustomerdatacar(std::list<Customer*> Customerlist)
{
    std::ofstream csvCustomerFile("CustomerListDatacar.csv");
    for (auto i:Customerlist)
    {
        std::cout<<"CSV Customer WriteData Function Called"<<std::endl;
        csvCustomerFile<<i->getname()<< ","
                        <<i->getdlno()<< ","
                        <<i->getaddress()<<","
                        <<i->getbookingid()<<endl;

    }
    csvCustomerFile.close();
}

std::list<Customer*> FileOperation::readcustomerdatacar()
{
    std::cout<<"customer data read function called"<<endl;
    std::list<Customer*>Customerlist;

    std::ifstream csvCustomerFile("CustomerListDatacar.csv");
    string customername;
    string dlno;
    string address;
    string bookingid;

    while(std::getline(csvCustomerFile,customername,',') && std::getline(csvCustomerFile,dlno,',')
           && std::getline(csvCustomerFile,address,',') && std::getline(csvCustomerFile,bookingid))
    {
        Customerlist.push_back(new Customer(customername,dlno,address,bookingid));
    }
    csvCustomerFile.close();
    return Customerlist;

}

void FileOperation::writeAdminData(std::list<Admins*> adminList)
{
    std::cout<<"CSV Admin WriteData Function Called"<<std::endl;

    std::string Id,password,name;

    std::ofstream csvAdminFile("AdminDataList.csv");

    for(auto& admin : adminList)
    {
        csvAdminFile<<admin->getId()<< ","
                     <<admin->getPassword()<< ","
                     <<admin->getName()<<std::endl;
    }
    csvAdminFile.close();
}

std::list<Admins*> FileOperation::readAdminData()
{
    std::cout<<"CSV Admin ReadData Function Called"<<std::endl;

    std::list<Admins*> adminlist;
    std::ifstream csvAdminFile("AdminDataList.csv");
    std::string Id,password,name;

    while(std::getline(csvAdminFile,Id,',') &&
           std::getline(csvAdminFile,password,',') &&
           std::getline(csvAdminFile,name))
    {
        adminlist.push_back(new Admins(Id,password,name));
    }
    csvAdminFile.close();
    return adminlist;
}

void FileOperation::writeUserData(std::list<Users*> userList)
{
    std::cout<<"CSV User WriteData Function Called"<<std::endl;

    std::string name,password,contactNumber,emailId;

    std::ofstream csvUserFile("UserDataList.csv");

    for(auto& user : userList)
    {
        csvUserFile<<user->getName()<< ","
                    <<user->getPassword()<< ","
                    <<user->getContactNumber()<< ","
                    <<user->getEmailId()<<std::endl;
    }
    csvUserFile.close();
}

std::list<Users*> FileOperation::readUserData()
{
    std::cout<<"CSV User ReadData Function Called"<<std::endl;

    std::list<Users*> userList;
    std::ifstream csvUserFile("UserDataList.csv");
    std::string name,password,contactNumber,emailId;

    while(std::getline(csvUserFile,name,',') &&
           std::getline(csvUserFile,password,',') &&
           std::getline(csvUserFile,contactNumber,',') &&
           std::getline(csvUserFile,emailId))
    {
        userList.push_back(new Users(name,password,contactNumber,emailId));
    }
    csvUserFile.close();
    return userList;
}








