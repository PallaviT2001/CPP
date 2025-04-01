#include "RentalFileOperation.h"
#include <fstream>
RentalFileOperation::RentalFileOperation()
{
    cout<<"FileOperations Constructor Called"<<endl;
}

RentalFileOperation::~RentalFileOperation()
{
    cout<<"FileOperations Destructor Called"<<endl;
}

list<RentalBikeDetails*> RentalFileOperation::readBikeData()
{
    list<RentalBikeDetails*> bikeData;

    ifstream file("BikesList.csv");
    if (!file)
    {
        cout << "unable to open Bike Data file for reading" << endl;
        return bikeData;
    }

    string brand,model,number, status;
    int id,duration;
    float cost;

    while(file >>id && file.ignore() && getline(file,brand,',') && getline(file,model,',')&& getline(file,number,',') && file>>cost && file.ignore() && getline(file,status,',') && file>>duration && file.ignore() )
    {
        bikeData.push_back(new RentalBikeDetails (id,brand,model,number,cost,status,duration));
    }

    file.close();
    return bikeData;
}

list<RentalCarDetails *> RentalFileOperation::readCarData()
{
    list<RentalCarDetails*> carData;

    ifstream file("CarsList.csv");
    if (!file)
    {
        cout << "unable to open file  Car Data file for reading" << endl;
        return carData;
    }

    string brand,model,number, status;
    int id,duration;
    float cost;

    while(file >>id && file.ignore()&& getline(file,brand,',') && getline(file,model,',') && getline(file,number,',')&& file>>cost && file.ignore() && getline(file,status,',') && file>>duration && file.ignore() )
    {
        carData.push_back(new RentalCarDetails (id,brand,model,number,cost,status,duration));
    }

    file.close();
    return carData;
}
list<RentalDetails *> RentalFileOperation::readRentalData()
{

    list<RentalDetails*> rentData;

    ifstream file("RentalList.csv");
    if (!file)
    {
        cout << "unable to open Rental Data file for reading" << endl;
        return rentData;
    }

    string name,mobile,brand,model,status,vehicalType,paymentType,upiId,paymentStatus,number;
    int age,bookingId,id,duration,transactionId;
    float cost,amount,balance;
    while((getline(file,name,',') && getline(file,mobile,',') && file >> age && file.ignore() && file>> bookingId && file.ignore()  && getline(file,vehicalType,',') && getline(file,paymentType,',') && file>>id && file.ignore() && getline(file,brand,',') && getline(file,model,',') && getline(file,number,',')&& file>> cost && file.ignore() && getline(file,status,',') && file>>duration && file.ignore() && getline(file,upiId,',') && file>> amount  && file.ignore() && file >> balance && file.ignore() && getline(file,paymentStatus,',')&& file >> transactionId && file.ignore()))
    {
        if (vehicalType == "Car" && paymentType == "Online")
        {
            RentalCarDetails *car = new RentalCarDetails(id,brand,model,number,cost,status,duration);
            OnlinePayment *online = new OnlinePayment(upiId,amount,balance,paymentStatus,transactionId);
            rentData.push_back(new RentalDetails(name,mobile,age,bookingId,vehicalType,paymentType,car,online));
        }
        if(vehicalType == "Car" && paymentType == "Cash")
        {
            RentalCarDetails *car = new RentalCarDetails(id,brand,model,number,cost,status,duration);
            CashPayment *cash = new CashPayment(upiId,amount,balance,paymentStatus,transactionId);
            rentData.push_back(new RentalDetails(name,mobile,age,bookingId,vehicalType,paymentType,car,cash));
        }
        if (vehicalType == "Bike" && paymentType == "Online")
        {
            RentalBikeDetails *bike = new RentalBikeDetails(id,brand,model,number,cost,status,duration);
            OnlinePayment *online = new OnlinePayment(upiId,amount,balance,paymentStatus,transactionId);
            rentData.push_back(new RentalDetails(name,mobile,age,bookingId,vehicalType,paymentType,bike,online));
        }
        if(vehicalType == "Bike" && paymentType == "Cash")
        {
            RentalBikeDetails *bike = new RentalBikeDetails(id,brand,model,number,cost,status,duration);
            CashPayment *cash = new CashPayment(upiId,amount,balance,paymentStatus,transactionId);
            rentData.push_back(new RentalDetails(name,mobile,age,bookingId,vehicalType,paymentType,bike,cash));
        }
    }

    file.close();
    return rentData;
}

void RentalFileOperation::writeBikeData(list<RentalBikeDetails *> &bike)
{
    ofstream file("BikesList.csv");

    if (!file)
    {
        cout << "unable to open CSV file for writing Bike Data" << endl;
        return;
    }
    for(auto bikeList :bike)
    {
        file << bikeList->getId()<< "," <<bikeList->getBrand()<<","<< bikeList->getModel() <<","<<bikeList->getVehicalNumber()<< "," << bikeList->getCost() <<"," << bikeList->getStatus() << ","<< bikeList->getDuration()<<endl;
    }

    file.close();
    cout << "Bike Data written to CSV file" << endl;
}

void RentalFileOperation::writeCarData(list<RentalCarDetails *> &car)
{
    ofstream file("CarsList.csv");

    if (!file)
    {
        cout << "unable to open CSV file for writing Car Data" << endl;
        return;
    }
    for(auto carList :car)
    {
        file << carList->getId()<< "," <<carList->getBrand()<< "," << carList->getModel() << "," <<carList->getVehicalNumber()<< "," << carList->getCost() <<"," << carList->getStatus() << ","<< carList->getDuration()<<endl;
    }

    file.close();
    cout << "Car Data written to CSV file" << endl;
}

void RentalFileOperation::writeRentalData(list<RentalDetails*> &rent)
{
    ofstream file("RentalList.csv");

    if(!file)
    {
        cout << "unable to open CSV file for writing Rental Data" << endl;
        return;
    }
    for(auto rentList :rent)
    {
        file<< rentList->getName() <<"," <<rentList->getMobile()<<","<<rentList->getAge()<<","<<rentList->getBookingId()<<","<<rentList->getVehicalType()<<","<<rentList->getPaymentType()<<","<< rentList->getId()<<","<<rentList->getBrand()<<","<<rentList->getModel()<<","<<rentList->getVehicalNumber()<<","<<rentList->getCost()<<","<<rentList->getStatus()<<","<<rentList->getDuration()<<","<<rentList->getUPIid()<<","<<rentList->getAmount()<<","<<rentList->getBalance()<<","<<rentList->getPaymentStatus()<<","<<rentList->getTransactionId()<<","<<endl;
    }

    file.close();
    cout << "Rental Data written to CSV file" << endl;
}

void RentalFileOperation::writeAdminData(std::list<Admins*> adminList)
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

std::list<Admins*> RentalFileOperation::readAdminData()
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

void RentalFileOperation::writeUserData(std::list<Users*> userList)
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

std::list<Users*> RentalFileOperation::readUserData()
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










































































































































