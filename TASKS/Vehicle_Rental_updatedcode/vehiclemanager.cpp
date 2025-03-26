#include "vehiclemanager.h"
#include "customer.h"
#include <iostream>
#include <fstream>

using namespace std;

VehicleManager::VehicleManager()
{
    std::cout<<"VehicalManager Constructor Called"<<std::endl;
    fileoperation = new FileOperation;
    m_bikeList = fileoperation->readBikeData();
    m_carList = fileoperation->readCarData();
    m_Customerlist = fileoperation->readcustomerdata();
    //m_Customerlist = fileoperation->readcustomerdatacar();
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

    m_bikeList.push_back(new Rentalbike(brand,model,vehicleNumber,rentPrice,status));
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

    m_carList.push_back(new Rentalcar(brand,model,vehicleNumber,rentPrice,status));
}

void VehicleManager::displayListOfBikes()
{

    std::cout<<"\nBike Display Function Called"<<std::endl;
    for (auto i:m_bikeList)
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

    std::cout<<"\nCar Display Function Called"<<std::endl;

    for (auto i:m_carList)
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

    std::cout << "Update Bike Price Function Called" << std::endl;

    std::string vehicleNumber;
    float newRentPrice;

    std::cout << "Enter Bike Number: ";
    std::cin >> vehicleNumber;

    for (auto i:m_bikeList)
    {
        if (i->getVehicleNumber() == vehicleNumber)
        {
            std::cout << "Enter Updated Rent Price: ";
            std::cin >> newRentPrice;
            i->setRentPrice(newRentPrice);
            std::cout << "Bike rent price updated successfully" << std::endl;
            return;
        }
    }
    std::cout << "Bike with number " << vehicleNumber << " not found" << std::endl;
}

void VehicleManager::updateCarPrice()
{

    std::cout << "Update Car Price Function Called" << std::endl;

    std::string vehicleNumber;
    float newRentPrice;

    std::cout << "Enter Car Number: ";
    std::cin >> vehicleNumber;

    for (auto i:m_carList)

    {
        if (i->getVehicleNumber() == vehicleNumber)
        {
            std::cout << "Enter Updated Rent Price: ";
            std::cin >> newRentPrice;
            i->setRentPrice(newRentPrice);
            std::cout << "Car rent price updated successfully" << std::endl;
            return;
        }
    }
    std::cout << "Car with number " << vehicleNumber << " not found" << std::endl;
}

void VehicleManager::returnbike()
{

    cout<<"Bike return function called"<<endl;

    string vehicleNumber;
    string newstatus;

    cout<<"enter bike number to return"<<endl;
    cin>>vehicleNumber;

    for (auto i:m_bikeList)
    {
        if(i->getVehicleNumber()==vehicleNumber && i->getStatus()=="booked")
        {
            i->setStatus("available");
            cout<<"bike returned successfully from the customer"<<endl;
            return;
        }
    }
    std::cout << "Bike with number " << vehicleNumber << " not booked" << std::endl;
}

void VehicleManager::returncar()
{

    cout<<"car return function called"<<endl;

    string vehicleNumber;
    string newstatus;

    cout<<"enter car number to return"<<endl;
    cin>>vehicleNumber;

    for (auto i:m_carList)
    {
        if(i->getVehicleNumber()==vehicleNumber && i->getStatus()=="booked")
        {
            i->setStatus("available");
            cout<<"car returned successfully from the customer"<<endl;
            return;
        }
    }
    std::cout << "Bike with number " << vehicleNumber << " not booked" << std::endl;
}

void VehicleManager::deletebike()
{

    cout<<"Delete bike function called"<<endl;

    string vehicleNumber;

    cout<<"enter bike number to delete"<<endl;
    cin>>vehicleNumber;
    for (auto i:m_bikeList)
    {
        if (i->getVehicleNumber() == vehicleNumber)
        {
            i->setStatus("Deleted");
            cout<<"Bike deleted successfully"<<" Bike number "<<vehicleNumber<<endl;
            return;
        }
        cout<<"bike number not found to delete"<<endl;
    }
}

void VehicleManager::deletecar()
{

    cout<<"Delete car function called"<<endl;

    string vehicleNumber;

    cout<<"enter car number to delete"<<endl;
    cin>>vehicleNumber;

    for (auto i:m_carList)
    {
        if (i->getVehicleNumber() == vehicleNumber)
        {
            i->setStatus("Deleted");
            cout<<"Car deleted successfully"<<" car number "<<vehicleNumber<<endl;
            return;
        }
    }
}

void VehicleManager::searchbike()
{
    cout<<"Search bike function called"<<endl;
    string vehicleNumber;
    cout<<"enter bike number to search"<<endl;
    cin>>vehicleNumber;
    for (auto i:m_bikeList)
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

    cout<<"search car function called"<<endl;

    string vehicleNumber;
    cout<<"enter car number to search"<<endl;
    cin>>vehicleNumber;
    for (auto i:m_carList)

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

    cout<<"\nAvailable Bike List"<<endl;
    for(auto& i:m_bikeList)
    {
        if(i->getStatus()=="available")
        {
            cout<<i->getBrand()<<" "<<i->getModel()<<" "<<i->getVehicleNumber()<<" "<<i->getRentPrice()<<" "<<i->getStatus()<<endl;
        }
    }

    cout<<"\nBooked Bike List"<<endl;
    for(auto& i:m_bikeList)
    {
        if(i->getStatus()=="booked")
        {
            cout<<i->getBrand()<<" "<<i->getModel()<<" "<<i->getVehicleNumber()<<" "<<i->getRentPrice()<<" "<<i->getStatus()<<endl;
        }
    }
}

void VehicleManager::sortcarbyStatus()
{

    cout<<"\nAvailable car list"<<endl;
    for(auto &i:m_carList)
    {
        if(i->getStatus()=="available")
        {
            cout<<i->getBrand()<<" "<<i->getModel()<<" "<<i->getVehicleNumber()<<" "<<i->getRentPrice()<<" "<<i->getStatus()<<endl;
        }
    }

    cout<<"\nBooked car list"<<endl;
    for(auto &i:m_carList)
    {
        if(i->getStatus()=="booked")
        {
            cout<<i->getBrand()<<" "<<i->getModel()<<" "<<i->getVehicleNumber()<<" "<<i->getRentPrice()<<" "<<i->getStatus()<<endl;
        }
    }
}

void VehicleManager::sortbikebyPrice()
{

    cout<<"Bike price sorted function called"<<endl;

    for(auto &i:m_bikeList)
    {
        for(auto &j:m_bikeList)
        {
            if(i->getRentPrice() < j->getRentPrice())
            {
                iter_swap(&i,&j);
            }
        }
    }
    displayListOfBikes();
}

void VehicleManager::sortcarbyPrice()
{

    cout<<"Car price sorted function called"<<endl;

    for(auto &i:m_carList)
    {
        for(auto &j:m_carList)
        {
            if(i->getRentPrice() < j->getRentPrice())
            {
                iter_swap(&i,&j);
            }
        }
    }

    displayListOfCars();
}

void VehicleManager::displaycustomerdetailsbike()
{
    std::cout<<"\nBike Customer details Display Function Called"<<std::endl;
    cout<<"customername     customerdlno  customeraddress   customerbookingid"<<endl;
    for (auto i:m_Customerlist)
    {
        cout.width(10);
        std::cout <<i->getname();
        cout.width(15);
        std::cout <<i->getdlno();
        cout.width(15);
        std::cout <<i->getaddress();
        cout.width(15);
        std::cout <<i->getbookingid()<<endl;
    }
}

void VehicleManager::displaycustomerdetailscar()
{

    std::cout<<"\nCar Customer details Display Function Called"<<std::endl;
    cout<<"customername     customerdlno  customeraddress   customerbookingid"<<endl;
    for (auto i:m_Customerlist)
    {
        cout.width(10);
        std::cout <<i->getname();
        cout.width(15);
        std::cout <<i->getdlno();
        cout.width(15);
        std::cout <<i->getaddress();
        cout.width(15);
        std::cout <<i->getbookingid()<<endl;
    }
}

void VehicleManager::functionalities()
{
    enum choice {Add_vehicle=1,Display_vehiclesdetails,customerDetails,
                  Update_vehicles_dailyrentprice,Book_vehicles,Return_vehicles,
                  deletevehicle,search_vehicle,sort_vehiclebystatus,
                  sort_vehiclebyprice,save_and_exit};


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
        cout<<"10.Sort vehicle by price"<<endl;
        cout<<"11.save to file and exit\n"<<endl;

        std::cout <<"Enter your choice: ";
        int select;
        std::cin >> select;

        switch (select)
        {
        case Add_vehicle:
        {
            cout<<"1. Add bike"<<endl;
            cout<<"2. Add car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                this->addBike();
                break;
            case 2:
                this->addCar();
                break;
            default:
                std::cout <<"Invalid Choice"<< std::endl;
                break;
            }
            break;
        }
        case Display_vehiclesdetails:
        {
            cout<<"1. Display bikes"<<endl;
            cout<<"2. Display cars"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                this->displayListOfBikes();
                break;
            case 2:
                this->displayListOfCars();
                break;
            default:
                std::cout <<"Invalid Choice"<< std::endl;
                break;
            }
            break;
        }
        case customerDetails:
        {
            cout<<"1. Bike"<<endl;
            cout<<"2. Car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                this->displaycustomerdetailsbike();
                break;
            case 2:
                this->displaycustomerdetailscar();
                break;
            default:
                std::cout <<"Invalid Choice"<< std::endl;
                break;
            }
            break;
        }
        case Update_vehicles_dailyrentprice:
        {
            cout<<"1. Bike"<<endl;
            cout<<"2. Car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                this->updateBikePrice();
                break;
            case 2:
                this->updateCarPrice();
                break;
            default:
                std::cout <<"Invalid Choice"<< std::endl;
                break;
            }
            break;
        }
        case Book_vehicles:
        {
            cout<<"1. Bike"<<endl;
            cout<<"2. Car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                this->Bookbike();
                break;
            case 2:
                this->Bookcar();
                break;
            default:
                std::cout <<"Invalid Choice"<< std::endl;
                break;
            }
            break;
        }
        case Return_vehicles:
        {
            cout<<"1. Bike"<<endl;
            cout<<"2. Car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                this->returnbike();
                break;
            case 2:
                this->returncar();
                break;
            default:
                std::cout<<"Invalid Choice"<< std::endl;
                break;
            }
            break;
        }
        case deletevehicle:
        {
            cout<<"1.Bike"<<endl;
            cout<<"2.Car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                this->deletebike();
                break;
            case 2:
                this->deletecar();
                break;
            default:
                std::cout<<"Invalid Choice"<< std::endl;
                break;
            }
            break;
        }
        case search_vehicle:
        {
            cout<<"1. Bike"<<endl;
            cout<<"2. Car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                this->searchbike();
                break;
            case 2:
                this->searchcar();
                break;
            default:
                std::cout<<"Invalid Choice"<< std::endl;
                break;
            }
            break;
        }
        case sort_vehiclebystatus:
        {
            cout<<"1.Bike"<<endl;
            cout<<"2.Car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                this->sortbikeStatus();
                break;
            case 2:
                this->sortcarbyStatus();
                break;
            default:
                cout<<"Invalid choice"<<endl;
                break;
            }
            break;
        }
        case sort_vehiclebyprice:
        {
            cout<<"1.Bike"<<endl;
            cout<<"2.Car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                this->sortbikebyPrice();
                break;
            case 2:
                this->sortcarbyPrice();
                break;
            default:
                cout<<"Invalid choice"<<endl;
                break;
            }
            break;
        }
        case save_and_exit:
        {
            fileoperation->writeBikeData(m_bikeList);
            fileoperation->writeCarData(m_carList);
            fileoperation->writecustomerdata(m_Customerlist);
            //fileoperation->writecustomerdatacar(m_Customerlist);
            return;
        }
        default:
            std::cout<<"Invalid Choice" << std::endl;
            break;
        }
    }
}

void VehicleManager::Bookbike()
{

    cout<<"Bike book function called"<<endl;

    string vehicleNumber;
    string newstatus;
    string customername;
    string dlno;
    string address;
    string bookingid;
    int choice;

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
    for(auto i: m_bikeList)

    {
        if (i->getVehicleNumber() == vehicleNumber && i->getStatus() == "available")
        {
            string upiid;
            string creditcardnumber;
            string debitcardnumber;
            int transactionid=rand();
            cout<<"enter payment mode to process further"<<endl;
            cout<<"The rent cost of the vehicle is "<<i->getRentPrice()<<endl;
            cout<<"select the payment mode"<<endl;
            cout<<"1.cash payment"<<endl;
            cout<<"2.phonepay"<<endl;
            cout<<"3.googlepay"<<endl;
            cout<<"4.Credit card payment"<<endl;
            cout<<"5.debit card payment"<<endl;
            cout<<"enter the choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                cout<<"cash collected from the customer"<<endl;
                break;
            case 2:
                cout<<"enter the upiid"<<endl;
                cin>>upiid;
                cout<<"amount received by phonepay Reference upiid is "<<upiid<<endl;
                break;
            case 3:
                cout<<"enter the upiid to proceed"<<endl;
                cin>>upiid;
                cout<<"amount received by googlepay reference upiid is "<<upiid<<endl;
                break;
            case 4:
                cout<<"enter creditcard number to process payment"<<endl;
                cin>>creditcardnumber;
                cout<<"amount received by creditcard,credit card number "<<creditcardnumber<<endl;
                break;
            case 5:
                cout<<"enter debitcard number to process payment"<<endl;
                cin>>debitcardnumber;
                cout<<"amount received by debit card, debit card number "<<debitcardnumber<<endl;
                break;
            default:
                cout<<"enter the valid payment method"<<endl;
                break;
            }
            i->setStatus("booked");
            cout<<"Transaction id of the given payment is"<<transactionid<<endl;

            m_Customerlist.push_back(new Customer(customername,dlno,address,bookingid));

            cout<<"Bike booked successfully Bike no: "<<vehicleNumber<<endl;
            return;
        }
    }
    std::cout << "Bike with number " << vehicleNumber << " not found" << std::endl;
}

void VehicleManager::Bookcar()
{

    cout<<"car book function called"<<endl;

    string vehicleNumber;
    string newstatus;
    string customername;
    string dlno;
    string address;
    string bookingid;
    int choice;

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
    for(auto i: m_carList)

    {
        if (i->getVehicleNumber() == vehicleNumber && i->getStatus() == "available")
        {
            string upiid;
            string creditcardnumber;
            string debitcardnumber;
            int transactionid=rand();
            cout<<"enter payment mode to process further"<<endl;
            cout<<"The rent cost of the vehicle is "<<i->getRentPrice()<<endl;
            cout<<"select the payment mode"<<endl;
            cout<<"1.cash payment"<<endl;
            cout<<"2.phonepay"<<endl;
            cout<<"3.googlepay"<<endl;
            cout<<"4.Credit card payment"<<endl;
            cout<<"5.debit card payment"<<endl;
            cout<<"enter the choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                cout<<"cash collected from the customer"<<endl;
                break;
            case 2:
                cout<<"enter the upiid"<<endl;
                cin>>upiid;
                cout<<"amount received by phonepay Reference upiid is "<<upiid<<endl;
                break;
            case 3:
                cout<<"enter the upiid to proceed"<<endl;
                cin>>upiid;
                cout<<"amount received by googlepay reference upiid is "<<upiid<<endl;
                break;
            case 4:
                cout<<"enter creditcard number to process payment"<<endl;
                cin>>creditcardnumber;
                cout<<"amount received by creditcard,credit card number "<<creditcardnumber<<endl;
                break;
            case 5:
                cout<<"enter debitcard number to process payment"<<endl;
                cin>>debitcardnumber;
                cout<<"amount received by debit card, debit card number "<<debitcardnumber<<endl;
                break;
            default:
                cout<<"enter the valid payment method"<<endl;
                break;
            }
            i->setStatus("booked");
            cout<<"Transaction id of the given payment is"<<transactionid<<endl;
            m_Customerlist.push_back(new Customer(customername,dlno,address,bookingid));
            cout<<"Bike booked successfully Bike no: "<<vehicleNumber<<endl;
            return;
        }
    }
    std::cout << "car with number " << vehicleNumber << " not found" << std::endl;
}



//******************************************************************************************************//

/*#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <regex>



bool validateString(const string &input, int maxLength) {
    return !input.empty() && input.length() <= maxLength;
}

bool validateNumber(const string &input, int maxLength) {
    return regex_match(input, regex("^[0-9]+$")) && input.length() <= maxLength;
}

string generateTransactionId() {
    srand(time(0));
    return "TXN" + to_string(rand() % 100000 + 10000);
}

void VehicleManager::Bookbike()
{
    cout<<"Bike book function called"<< endl;
    string vehicleNumber, customername, dlno, address, bookingid;

    cout << "Enter bike number to book: ";
    cin >> vehicleNumber;

    cout << "Enter customer name (max 10 characters): ";
    cin >> customername;
    if (!validateString(customername, 10))
    {
        cout << "Invalid customer name. Must not exceed 10 characters.\n";
        return;
    }

    cout << "Enter customer DL number: ";
    cin >> dlno;

    if (!validateString(dlno, 15))
    {
        cout << "Invalid DL number.\n";
        return;
    }

    cout << "Enter customer address: ";
    cin.ignore();
    getline(cin, address);
    if (address.empty()) {
        cout << "Address cannot be empty.\n";
        return;
    }

    cout << "Enter booking ID: ";
    cin >> bookingid;
    if (!validateString(bookingid, 12)) { // Assuming booking ID max length is 12
        cout << "Invalid booking ID.\n";
        return;
    }

    for (auto i : m_bikeList) {
        if (i->getVehicleNumber() == vehicleNumber && i->getStatus() == "available") {
            int choice;
            string upiid, creditcardnumber, debitcardnumber;
            string transactionid = generateTransactionId();

            cout << "The rent cost of the vehicle is " << i->getRentPrice() << endl;
            cout << "Select the payment mode:\n";
            cout << "1. Cash payment\n2. PhonePe\n3. Google Pay\n4. Credit card\n5. Debit card\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Cash collected from the customer.\n";
                    break;
                case 2:
                case 3:
                    cout << "Enter the UPI ID: ";
                    cin >> upiid;
                    cout << "Amount received via " << (choice == 2 ? "PhonePe" : "Google Pay")
                         << ". Reference UPI ID: " << upiid << endl;
                    break;
                case 4:
                    cout << "Enter credit card number (max 10 digits): ";
                    cin >> creditcardnumber;
                    if (!validateNumber(creditcardnumber, 10)) {
                        cout << "Invalid credit card number.\n";
                        return;
                    }
                    cout << "Amount received via Credit Card: " << creditcardnumber << endl;
                    break;
                case 5:
                    cout << "Enter debit card number (max 10 digits): ";
                    cin >> debitcardnumber;
                    if (!validateNumber(debitcardnumber, 10)) {
                        cout << "Invalid debit card number.\n";
                        return;
                    }
                    cout << "Amount received via Debit Card: " << debitcardnumber << endl;
                    break;
                default:
                    cout << "Invalid payment method.\n";
                    return;
            }

            i->setStatus("booked");
            cout << "Transaction ID: " << transactionid << endl;
            m_Customerlist.push_back(new Customer(customername, dlno, address, bookingid));
            cout << "Bike booked successfully. Bike no: " << vehicleNumber << endl;
            return;
        }
    }

    cout << "Bike with number " << vehicleNumber << " not found.\n";
}

void VehicleManager::Bookcar() {
    cout << "Car book function called" << endl;
    string vehicleNumber, customername, dlno, address, bookingid;

    cout << "Enter car number to book: ";
    cin >> vehicleNumber;

    cout << "Enter customer name (max 10 characters): ";
    cin >> customername;
    if (!validateString(customername, 10)) {
        cout << "Invalid customer name. Must not exceed 10 characters.\n";
        return;
    }

    cout << "Enter customer DL number: ";
    cin >> dlno;
    if (!validateString(dlno, 15)) {
        cout << "Invalid DL number.\n";
        return;
    }

    cout << "Enter customer address: ";
    cin.ignore();
    getline(cin, address);
    if (address.empty()) {
        cout << "Address cannot be empty.\n";
        return;
    }

    cout << "Enter booking ID: ";
    cin >> bookingid;
    if (!validateString(bookingid, 12)) {
        cout << "Invalid booking ID.\n";
        return;
    }

    for (auto i : m_carList) {
        if (i->getVehicleNumber() == vehicleNumber && i->getStatus() == "available") {
            int choice;
            string upiid, creditcardnumber, debitcardnumber;
            string transactionid = generateTransactionId();

            cout << "The rent cost of the vehicle is " << i->getRentPrice() << endl;
            cout << "Select the payment mode:\n";
            cout << "1. Cash payment\n2. PhonePe\n3. Google Pay\n4. Credit card\n5. Debit card\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Cash collected from the customer.\n";
                    break;
                case 2:
                case 3:
                    cout << "Enter the UPI ID: ";
                    cin >> upiid;
                    cout << "Amount received via " << (choice == 2 ? "PhonePe" : "Google Pay")
                         << ". Reference UPI ID: " << upiid << endl;
                    break;
                case 4:
                    cout << "Enter credit card number (max 10 digits): ";
                    cin >> creditcardnumber;
                    if (!validateNumber(creditcardnumber, 10)) {
                        cout << "Invalid credit card number.\n";
                        return;
                    }
                    cout << "Amount received via Credit Card: " << creditcardnumber << endl;
                    break;
                case 5:
                    cout << "Enter debit card number (max 10 digits): ";
                    cin >> debitcardnumber;
                    if (!validateNumber(debitcardnumber, 10)) {
                        cout << "Invalid debit card number.\n";
                        return;
                    }
                    cout << "Amount received via Debit Card: " << debitcardnumber << endl;
                    break;
                default:
                    cout << "Invalid payment method.\n";
                    return;
            }

            i->setStatus("booked");
            cout << "Transaction ID: " << transactionid << endl;
            m_Customerlist.push_back(new Customer(customername, dlno, address, bookingid));
            cout << "Car booked successfully. Car no: " << vehicleNumber << endl;
            return;
        }
    }

    cout << "Car with number " << vehicleNumber << " not found.\n";
}*/


