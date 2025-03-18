#include "fileoperation.h"
#include <iostream>
#include <fstream>
using namespace std;

FileOperation::FileOperation()
{
    std::cout<<"FileOperation Constructor Called"<<std::endl;
}

FileOperation::~FileOperation()
{
    std::cout<<"FileOperation Destructor Called"<<std::endl;
}

void FileOperation::writeCarData(std::list<Car> carList)
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

void FileOperation::writeBikeData(std::list<Bike>bikeList)
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

std::list<Car> FileOperation::readCarData()
{
    std::cout<<"CSV Car ReadData Function Called"<<std::endl;

    std::list<Car> carlist;
    std::ifstream csvCarFile("CarListData.csv");
    float rentPrice;
    std::string brand, model, vehicleNumber,status;

    while(std::getline(csvCarFile,brand,',') && std::getline(csvCarFile,model,',')&& std::getline(csvCarFile,vehicleNumber,',')
           && csvCarFile>>rentPrice && csvCarFile.ignore() && std::getline(csvCarFile,status))
    {
        carlist.push_back(Car(brand, model, vehicleNumber, rentPrice,status));
    }
    csvCarFile.close();
    return carlist;
}


std::list<Bike> FileOperation::readBikeData()
{
    std::cout<<"CSV Bike ReadData Function Called"<<std::endl;

    std::list<Bike> bikeList;
    std::ifstream csvBikeFile("BikeListData.csv");
    float rentPrice;
    std::string brand, model, vehicleNumber,status;

    while(std::getline(csvBikeFile,brand,',') && std::getline(csvBikeFile,model,',')&& std::getline(csvBikeFile,vehicleNumber,',')
           && csvBikeFile>>rentPrice && csvBikeFile.ignore() && std::getline(csvBikeFile,status))
    {
        bikeList.push_back(Bike(brand, model, vehicleNumber, rentPrice,status));
    }
    csvBikeFile.close();
    return bikeList;
}
