#include "vehiclemanager.h"
#include "customerdetails.h"
#include <iostream>
#include <fstream>

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

void VehicleManager::deletebike()
{
    m_bikeList=fileoperation.readBikeData();
    cout<<"Delete bike function called"<<endl;

    string vehicleNumber;

    cout<<"enter bike number to delete"<<endl;
    cin>>vehicleNumber;
    for (auto i = m_bikeList.begin(); i != m_bikeList.end(); i++)
    {
        if (i->getVehicleNumber() == vehicleNumber && i->getStatus() == "available")
        {
            m_bikeList.erase(i);
            fileoperation.writeBikeData(m_bikeList);
            cout<<"Bike deleted successfully"<<" Bike number "<<vehicleNumber<<endl;
            return;
        }
        //cout<<"bike number not found to delete"<<endl;
    }
}

void VehicleManager::deletecar()
{
    m_carList=fileoperation.readCarData();
    cout<<"Delete car function called"<<endl;

    string vehicleNumber;

    cout<<"enter car number to delete"<<endl;
    cin>>vehicleNumber;

    for(auto i=m_carList.begin(); i!= m_carList.end();i++)
    {
        if (i->getVehicleNumber() == vehicleNumber && i->getStatus() == "available")
        {
            m_carList.erase(i);
            fileoperation.writeCarData(m_carList);
            cout<<"Car deleted successfully"<<" car number "<<vehicleNumber<<endl;
            return;
        }
    }
}

void VehicleManager::searchbike()

{
    m_bikeList=fileoperation.readBikeData();
    cout<<"Search bike function called"<<endl;

    string vehicleNumber;

    cout<<"enter bike number to search"<<endl;
    cin>>vehicleNumber;
    for (auto i = m_bikeList.begin(); i != m_bikeList.end(); i++)
    {
        if (i->getVehicleNumber() == vehicleNumber)
        {
            cout<<"Bike found successfully"<<" Bike number "<<vehicleNumber<<endl;
            return;
        }
    }
    cout<<"Bike not found"<<endl;
}

void VehicleManager::searchcar()
{
    m_carList=fileoperation.readCarData();
    cout<<"search car function called"<<endl;

    string vehicleNumber;

    cout<<"enter car number to search"<<endl;
    cin>>vehicleNumber;

    for(auto i=m_carList.begin(); i!= m_carList.end();i++)
    {
        if (i->getVehicleNumber() == vehicleNumber && i->getStatus() == "available")
        {
            cout<<"Car found successfully"<<" car number "<<vehicleNumber<<endl;
            return;
        }
    }
    cout<<"car not found, car number is: "<<vehicleNumber<<endl;
}

void VehicleManager::sortbikeStatus()
{
    m_bikeList = fileoperation.readBikeData();
    cout<<"\nAvailable Bike List"<<endl;
    for(auto& i:m_bikeList)
    {
        if(i.getStatus()=="available")
        {
            cout<<i.getBrand()<<" "<<i.getModel()<<" "<<i.getVehicleNumber()<<" "<<i.getRentPrice()<<" "<<i.getStatus()<<endl;
        }
    }

    cout<<"\nBooked Bike List"<<endl;
    for(auto& i:m_bikeList)
    {
        if(i.getStatus()=="booked")
        {
            cout<<i.getBrand()<<" "<<i.getModel()<<" "<<i.getVehicleNumber()<<" "<<i.getRentPrice()<<" "<<i.getStatus()<<endl;
        }
    }
}

void VehicleManager::sortcarbyStatus()
{
    m_carList=fileoperation.readCarData();
    cout<<"\nAvailable car list"<<endl;
    for(auto &i:m_carList)
    {
        if(i.getStatus()=="available")
        {
            cout<<i.getBrand()<<" "<<i.getModel()<<" "<<i.getVehicleNumber()<<" "<<i.getRentPrice()<<" "<<i.getStatus()<<endl;
        }
    }

    cout<<"\nBooked car list"<<endl;
    for(auto &i:m_carList)
    {
        if(i.getStatus()=="booked")
        {
            cout<<i.getBrand()<<" "<<i.getModel()<<" "<<i.getVehicleNumber()<<" "<<i.getRentPrice()<<" "<<i.getStatus()<<endl;
        }
    }
}

void VehicleManager::sortbikebyPrice()
{
    m_bikeList=fileoperation.readBikeData();
    cout<<"Bike price sorted function called"<<endl;

    for(auto &i:m_bikeList)
    {
        for(auto &j:m_bikeList)
        {
            if(i.getRentPrice() < j.getRentPrice())
            {
                iter_swap(&i,&j);
            }
        }
    }
    fileoperation.writeBikeData(m_bikeList);
    displayListOfBikes();
}

void VehicleManager::sortcarbyPrice()
{
    m_carList = fileoperation.readCarData();
    cout<<"Car price sorted function called"<<endl;

    for(auto &i:m_carList)
    {
        for(auto &j:m_carList)
        {
            if(i.getRentPrice() < j.getRentPrice())
            {
                iter_swap(&i,&j);
            }
        }
    }
    fileoperation.writeCarData(m_carList);
    displayListOfCars();
}

void VehicleManager::functionalities()
{
    enum choice {Add_vehicle=1,Display_vehiclesdetails,customerDetails,
                  Update_vehicles_dailyrentprice,Book_vehicles,Return_vehicles,
                  deletevehicle,search_vehicle,sort_vehiclebystatus,sort_vehiclebyprice};


    VehicleManager manager;
    int choice;

    while (true) {
        std::cout << "\nVehicle Rental Application\n" << std::endl;;
        cout<<"1. Add vehicles"<<endl;
        cout<<"2. Display vehicles details"<<endl;
        cout<<"3. Display customer deatils"<<endl;
        cout<<"4. Update vehicles daily rentprice"<<endl;
        cout<<"5. Book vehicle"<<endl;
        cout<<"6. Return vehicle"<<endl;
        cout<<"7. Delete vehicle"<<endl;
        cout<<"8. Search vehicle"<<endl;
        cout<<"9. Sort vehicle by status"<<endl;
        cout<<"10.Sort vehicle by price\n"<<endl;

        std::cout <<"Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case Add_vehicle:
            cout<<"1. Add bike"<<endl;
            cout<<"2. Add car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                manager.addBike();
                break;
            case 2:
                manager.addCar();
                break;
            default:
                std::cout <<"Invalid Choice"<< std::endl;
                break;
            }
            break;
        case Display_vehiclesdetails:
            cout<<"1. Display bikes"<<endl;
            cout<<"2. Display cars"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                manager.displayListOfBikes();
                break;
            case 2:
                manager.displayListOfCars();
                break;
            default:
                std::cout <<"Invalid Choice"<< std::endl;
                break;
            }
            break;
        case customerDetails:
            cout<<"1. Bike"<<endl;
            cout<<"2. Car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                manager.displaycustomerdetailsbike();
                break;
            case 2:
                manager.displaycustomerdetailscar();
                break;
            default:
                std::cout <<"Invalid Choice"<< std::endl;
                break;
            }
            break;
        case Update_vehicles_dailyrentprice:
            cout<<"1. Bike"<<endl;
            cout<<"2. Car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                manager.updateBikePrice();
                break;
            case 2:
                manager.updateCarPrice();
                break;
            default:
                std::cout <<"Invalid Choice"<< std::endl;
                break;
            }
            break;
        case Book_vehicles:
            cout<<"1. Bike"<<endl;
            cout<<"2. Car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                manager.Bookbike();
                break;
            case 2:
                manager.Bookcar();
                break;
            default:
                std::cout <<"Invalid Choice"<< std::endl;
                break;
            }
            break;
        case Return_vehicles:
            cout<<"1. Bike"<<endl;
            cout<<"2. Car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                manager.returnbike();
                break;
            case 2:
                manager.returncar();
                break;
            default:
                std::cout<<"Invalid Choice"<< std::endl;
                break;
            }
            break;
        case deletevehicle:
            cout<<"1.Bike"<<endl;
            cout<<"2.Car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                manager.deletebike();
                break;
            case 2:
                manager.deletecar();
                break;
            default:
                std::cout<<"Invalid Choice"<< std::endl;
                break;
            }
            break;
        case search_vehicle:
            cout<<"1. Bike"<<endl;
            cout<<"2. Car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                manager.searchbike();
                break;
            case 2:
                manager.searchcar();
                break;
            default:
                std::cout<<"Invalid Choice"<< std::endl;
                break;
            }
            break;
        case sort_vehiclebystatus:
            cout<<"1.Bike"<<endl;
            cout<<"2.Car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                manager.sortbikeStatus();
                break;
            case 2:
                manager.sortcarbyStatus();
                break;
            default:
                cout<<"Invalid choice"<<endl;
                break;
            }
            break;
        case sort_vehiclebyprice:
            cout<<"1.Bike"<<endl;
            cout<<"2.Car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                manager.sortbikebyPrice();
                break;
            case 2:
                manager.sortcarbyPrice();
                break;
            default:
                cout<<"Invalid choice"<<endl;
                break;
            }
            break;

        default:
            std::cout<<"Invalid Choice" << std::endl;
            break;
        }
    }
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
    string bookingid;

    cout<<"enter bike number to book"<<endl;
    cin>>vehicleNumber;

    cout<<"enter customer name"<<endl;
    cin>>customername;

    cout<<"enter customer dlno"<<endl;
    cin>>dlno;

    cout<<"enter customer address"<<endl;
    cin>>address;

    cout<<"enter booking id"<<endl;
    cin>>bookingid;

    for (auto i = m_bikeList.begin(); i != m_bikeList.end(); i++)
    {
        if (i->getVehicleNumber() == vehicleNumber && i->getStatus() == "available")
        {
            i->setStatus("booked");
            fileoperation.writeBikeData(m_bikeList);
            m_Customerlist.push_back(Customerdetails(customername,dlno,address,bookingid));
            fileoperation.writecustomerdata(m_Customerlist);
            cout<<"Bike booked successfully Bike no: "<<vehicleNumber<<endl;
            return;
        }
    }
    std::cout << "Bike with number " << vehicleNumber << " not found" << std::endl;

}

void VehicleManager::Bookcar()
{
    m_carList=fileoperation.readCarData();
    cout<<"car book function called"<<endl;

    string vehicleNumber;
    string newstatus;
    string customername;
    string dlno;
    string address;
    string bookingid;

    cout<<"enter car number to book"<<endl;
    cin>>vehicleNumber;

    cout<<"enter customer name"<<endl;
    cin>>customername;

    cout<<"enter customer dlno"<<endl;
    cin>>dlno;

    cout<<"enter customer address"<<endl;
    cin>>address;

    cout<<"enter booking id"<<endl;
    cin>>bookingid;

    for(auto i=m_carList.begin();i!=m_carList.end();i++)
    {
        if(i->getVehicleNumber()==vehicleNumber && i->getStatus()=="available")
        {
            i->setStatus("booked");
            fileoperation.writeCarData(m_carList);
            m_Customerlist.push_back(Customerdetails(customername,dlno,address,bookingid));
            fileoperation.writecustomerdatacar(m_Customerlist);
            cout<<"car booked successfully car no: "<<vehicleNumber<<endl;
            return;
        }
    }
    std::cout << "car with number " << vehicleNumber << " not found" << std::endl;
}

void VehicleManager::displaycustomerdetailsbike()
{
    m_Customerlist = fileoperation.readcustomerdata();
    std::cout<<"\nCustomer details Display Function Called"<<std::endl;

    for(auto i = m_Customerlist.begin(); i != m_Customerlist.end(); i++)
    {
        std::cout << "\nCustomername " << i->getname()<<endl;
        std::cout << "customer dlno "<<i->getdlno()<<endl;
        std::cout << "customer address "<<i->getaddress()<<endl;
        std::cout << "customer booking id "<<i->getbookingid()<<endl;
    }
}

void VehicleManager::displaycustomerdetailscar()
{
    m_Customerlist = fileoperation.readcustomerdatacar();
    std::cout<<"\nCustomer details Display Function Called"<<std::endl;

    for(auto i = m_Customerlist.begin(); i != m_Customerlist.end(); i++)
    {
        std::cout << "\nCustomername " << i->getname()<<endl;
        std::cout << "customer dlno "<<i->getdlno()<<endl;
        std::cout << "customer address "<<i->getaddress()<<endl;
        std::cout << "customer bookingid "<<i->getbookingid()<<endl;
    }
}

/*void VehicleManager::displaycustomerdetailsbike()
{
    m_Customerlist = fileoperation.readcustomerdata();
    std::cout<<"\nCustomer details Display Function Called"<<std::endl;

    for(auto i = m_Customerlist.begin(); i != m_Customerlist.end(); i++)
    {
        cout.width(20);
        std::cout << "\nCustomername " << i->getname()<<endl;
        std::cout << "customer dlno "<<i->getdlno()<<endl;
        std::cout << "customer address "<<i->getaddress()<<endl;
        std::cout << "customer booking id "<<i->getbookingid()<<endl;
    }
}*/


