#include "rentalfileoperation.h"
#include <fstream>
RentalFileOperation::RentalFileOperation()
{
    cout<<"File Operations Constructor Called"<<endl;
}

RentalFileOperation::~RentalFileOperation()
{
    cout<<"File Operations Destructor Called"<<endl;
}

list<RentalBikeDetails*> RentalFileOperation::readBikeData()
{
    list<RentalBikeDetails*> bikeData;

    ifstream file("BikeData.csv");
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

    ifstream file("CarData.csv");
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

    ifstream file("RentalData.csv");
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

list<AdminDetails *> RentalFileOperation::readAdminData()
{
    list<AdminDetails*>adminData;
    ifstream file("AdminData.csv");
    if (!file)
    {
        cout << "unable to open file  Admin Data file for reading" << endl;
        return adminData;
    }
    string name;
    int id,password,status;
    while( getline(file,name,',') && file>>id && file.ignore() && file>>password && file.ignore() && file>>status && file.ignore())
    {
        adminData.push_back(new AdminDetails(name,id,password,status));
    }
    file.close();
    return adminData;
}

list<UserDetails *> RentalFileOperation::readUserDetails()
{
    list<UserDetails*>userData;
    ifstream file("UserData.csv");
    if (!file)
    {
        cout << "unable to open file  User Data file for reading" << endl;
        return userData;
    }
    string name;
    int id,password,status;
    while( getline(file,name,',') && file>>id && file.ignore() && file>>password && file.ignore()&& file>>status && file.ignore())
    {
        userData.push_back(new UserDetails(name,id,password,status));
    }
    file.close();
    return userData;
}





void RentalFileOperation::writeBikeData(list<RentalBikeDetails *> &bike)
{
    ofstream file("BikeData.csv");

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
    ofstream file("CarData.csv");

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
    ofstream file("RentalData.csv");

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




void RentalFileOperation::writeAdminData(list<AdminDetails *> &admin)
{
    ofstream file("AdminData.csv");
    if (!file)
    {
        cout << "unable to open CSV file for writing Admin Data" << endl;
        return;
    }
    for(auto adminList : admin)
    {
        file<<adminList->getLoginName()<<","<<adminList->getLoginId()<<","<<adminList->getLoginPassword()<<","<<adminList->getStatus()<<endl;
    }
    file.close();
    cout << "Admin Data written to CSV file" << endl;
}

void RentalFileOperation::writeUserData(list<UserDetails *> &user)
{
    ofstream file("UserData.csv");
    if (!file)
    {
        cout << "unable to open CSV file for writing User Data" << endl;
        return;
    }
    for(auto userList : user)
    {
        file<<userList->getLoginName()<<","<<userList->getLoginId()<<","<<userList->getLoginPassword()<<","<<userList->getStatus()<<endl;
    }
    file.close();
    cout << "User Data written to CSV file" << endl;
}





















































































































































































































// void FileOperation::writeOnlineData(list<Online *> &online)
// {
//     ofstream file("OnlinePaymentData.csv");

//     if (!file)
//     {
//         cout << "unable to open CSV file for writing" << endl;
//         return;
//     }
//     for(auto i: online)
//     {
//         file << i->getUPIid()<< "," <<i->getTransactionId()<<endl;
//     }
//     file.close();
//     cout << "Data written to CSV file" << endl;
// }



// void FileOperation::writeCashData(list<Cash *> &cash)
// {
//     ofstream file("CashPaymentData.csv");
//     if (!file)
//     {
//         cout << "unable to open CSV file for writing" << endl;
//         return;
//     }
//     for(auto i: cash)
//     {
//         file << i->getUPIid()<< "," <<i->getTransactionId()<<endl;
//     }
//     file.close();
//     cout << "Data written to CSV file" << endl;
// }

// list<Online *> FileOperation::readOnlineData()
// {
//     list<Online*>onlineData;
//     ifstream file("OnlinePaymentData.csv");
//     if (!file)
//     {
//         cout << "unable to open file  Online Payment Data for reading" << endl;
//         return onlineData;
//     }
//     string upiId;
//     int transactionId;
//     while(getline(file,upiId,',') && file >> transactionId)
//     {
//         onlineData.push_back((new Online(upiId,transactionId)));
//     }

//     file.close();
//     return onlineData;

// }

// list<Cash *> FileOperation::readCashData()
// {

//     list<Cash*>cashData;
//     ifstream file("CashPaymentData.csv");
//     if (!file)
//     {
//         cout << "unable to open file  Online Payment Data for reading" << endl;
//         return cashData;
//     }
//     string upiId;
//     int transactionId;
//     while(getline(file,upiId,',') && file >> transactionId)
//     {
//         cashData.push_back((new Cash(upiId,transactionId)));
//     }

//     file.close();
//     return cashData;
// }
