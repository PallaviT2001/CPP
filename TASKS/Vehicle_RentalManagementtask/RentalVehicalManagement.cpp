#include "RentalVehicalManagement.h"
#include <fstream>
#include <iomanip>
#include <string>

RentalVehicalManagement::RentalVehicalManagement()
{
    cout<<"vehical Management Constructor Called"<<endl;
    m_fileoperations = new RentalFileOperation;
    m_bikeList = m_fileoperations->readBikeData();
    m_carList = m_fileoperations->readCarData();
    m_rentalList = m_fileoperations->readRentalData();


}

RentalVehicalManagement::~RentalVehicalManagement()
{
    cout<<"vehical Management Destructor Called"<<endl;
    delete m_fileoperations;
    for(auto bikeList :m_bikeList)
    {
        delete bikeList;
    }
    for(auto carList :m_carList)
    {
        delete carList;
    }
    for(auto rentalList :m_rentalList)
    {
        delete rentalList;
    }

}

/*RentalVehicalManagement::RentalVehicalManagement(RentalVehicalManagement &management)
{
    cout<<"Rentalvehical management copy constructor called"<<endl;
}*/

void RentalVehicalManagement::menu()
{
    while(true)
    {


        cout<<"Vehicle Rental Management system Application"<<endl<<endl;
        cout<<"1. Add Vehicle"<<endl;
        cout<<"2. Book Vehicles"<<endl;
        cout<<"3. Return Vehicles"<<endl;
        cout<<"4. Display Vehicles"<<endl;
        cout<<"5. Update Vehicles Rent"<<endl;
        cout<<"6. Display Rental History"<<endl;
        cout<<"7. Delete Vehicles"<<endl;
        cout<<"8. Search Vehicles"<<endl;
        cout<<"9. Sort Vehicles"<<endl;
        cout<<"10.Save the Data to file and exit"<<endl;

        cout<<"Enter Your Choice ";
        int option;
        cin>>option;
        switch(option)
        {
        case AddVehical:
        {
            cout<<"1.Bike"<<endl;
            cout<<"2.Car"<<endl;
            cout<<"3.Exit"<<endl;

            cout<<endl<<"Select your Choice :";
            int select;
            cin>>select;

            switch(select)
            {
            case BIKE:
                this->addBike();
                break;
            case CAR:
                this->addCar();
                break;
            case ExitVehical:
                break;
            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;
        }
        case BookVehical:
        {
            cout<<"1.Bike"<<endl;
            cout<<"2.Car"<<endl;
            cout<<"3.Exit"<<endl;

            cout<<endl<<"Select your Choice: ";
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                this->bookBike();
                break;

            case CAR:
                this->bookCar();
                break;
            case ExitVehical:
                break;

            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;
        }
        case ReturnVehical:
        {
            cout<<endl<<"1.Bike"<<endl<<"2.Car"<<endl<<"3.Exit"<<endl;
            cout<<endl<<"Select your choice: ";
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                this->returnBike();
                break;

            case CAR:
                this->returnCar();
                break;

            case ExitVehical:
                break;

            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;
        }
        case DisplayVehical:
        {

            cout<<endl<<"1.Bike"<<endl<<"2.Car"<<endl<<"3.Exit"<<endl;
            cout<<endl<<"Select your Choice:";
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                this->displayBike();
                break;
            case CAR:
                this->displayCar();
                break;
            case ExitVehical:
                break;
            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;

        }
        case UpdateVehicalRent:
        {
            cout<<endl<<"1.Bike"<<endl<<"2.Car"<<endl<<"3.Exit"<<endl;
            cout<<endl<<"Select your Choice: ";
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                this->updateBikeRent();
                break;

            case CAR:
                this->updateCarRent();
                break;

            case ExitVehical:
                break;

            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;
        }


        case DisplayHistory:
            this->rentalHistory();
            break;


        case DeleteVehical:
        {
            cout<<endl<<"1.Bike"<<endl<<"2.Car"<<endl<<"3.Exit"<<endl;
            cout<<endl<<"Select your Choice:";
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                this->deleteBike();
                break;

            case CAR:
                this->deleteCar();
                break;

            case ExitVehical:
                break;

            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;
        }
        case SearchVehical:
        {
            cout<<endl<<"1.Bike"<<endl<<"2.Car"<<endl<<"3.Exit"<<endl;
            cout<<endl<<"Select your Choice: ";
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                this->searchBike();
                break;

            case CAR:
                this->searchCar();
                break;

            case ExitVehical:
                break;
            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;
        }
        case SortVehical:
        {
            cout<<endl<<"1.Bike"<<endl<<"2.Car"<<endl<<"3.Exit"<<endl;
            cout<<endl<<"Select your Choice: ";
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                this->sortBike();
                break;
            case CAR:
                this->sortCar();
                break;
            case ExitVehical:
                break;
            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;
        }

        case EXIT:
        {
            this->saveData();
            cout<<" saved to file and Exiting "<<endl;
            return;
        }
        default:
            cout<<"Invalid Choice"<<endl;
            break;
        }
    }
}

void RentalVehicalManagement::bookCar()
{
    cout<<endl<<"Booking Car"<<endl;
    cout<<endl<<"Enter Car Id:"<<endl;
    int carId;
    cin>>carId;
    int carFound =0;
    for(auto carList : m_carList)
    {
        if(carList->getId() == carId && carList->getStatus() == "Booked")
        {
            carFound = 1;
            cout<<"Entered Car ID : "<<carId<<" is already booked"<<endl;
        }
        if(carList->getId() == carId && carList->getStatus() == "Available")
        {
            carFound = 1;
            cout<<"Entered car Id: "<<carId<<" is Available for rent"<<endl;
            cout<<endl<<"Car Details"<<endl;

            cout<<endl<<" Car Brand :"<<carList->getBrand()<<endl;
            cout<<" Car Model :"<<carList->getModel()<<endl;
            cout<<" Car Number :"<<carList->getVehicalNumber()<<endl;
            cout<<" Car Rent :"<<carList->getCost()<<endl;
            cout<<" Car Duration :"<<carList->getDuration()<<" Day"<<endl;

            cout<<endl<<"Want to book it ?"<<endl;
            cout<<"Enter"<<endl<< "1.book the Car"<<endl;
            cout<<"2. Exit"<<endl;
            int choice;
            cin>>choice;
            switch(choice)
            {
            case Book:
            {
                string name,mobile,vehicalType,paymentStatus;
                int age,bookingid;
                cout<<"Enter Name : ";
                cin>>name;
                while(true)
                {
                    cout<<"Enter Mobile number(10 digits): ";
                    cin>>mobile;
                    if(mobile.length()==10)
                    {
                        break;
                    }
                    else
                    {
                        cout<<"Invalid Number,try again"<<endl;
                    }
                }

                while(true)
                {
                    cout<<"Enter Age : ";
                    cin>>age;
                    if(age>=18 && age<= 90)
                    {
                        break;
                    }
                    else
                    {
                        cout<<"Invalid Age,age must be positive and in between 17-90,try again"<<endl;
                    }
                }
                int count =1;

                for(auto rentalList = m_rentalList.begin();rentalList != m_rentalList.end();rentalList++)
                {
                    count++;
                }
                bookingid = count;
                cout<<endl<<"Booking Id : "<<count<<endl;


                vehicalType = "Car";
                cout << "Vehical Type :"<<vehicalType<<endl;

                cout<<endl<<"Available Payment Modes"<<endl;
                cout<<endl<<"1.online"<<endl<<"2.Cash"<<endl<<"3.Exit"<<endl;

                cout<<endl<<"Select PaymentMode : " ;
                int paymentmode;
                cin>>paymentmode;
                switch(paymentmode)
                {
                case ONLINE:
                {
                    string paymentType = "Online";
                    cout<<endl<<"Payment Type :" <<paymentType<<endl;

                    cout<<endl<<"Enter UPI id : ";
                    string upiId;
                    cin>>upiId;
                    float rent = carList->getCost();
                    float balance = rent;
                    cout<<endl<<"Rent of the Bike: "<<rent<<endl;
                    cout<<"Enter Amount:"<<endl;
                    int amount;
                    cin>>amount;
                    if(amount <=0)
                    {
                        paymentStatus = "Failure";
                    }
                    if(amount > 0)
                    {
                        balance = rent - amount;

                        paymentStatus = "Successfull";
                    }

                    int transactionId;
                    int transactioncount = 1;
                    for(auto rentalList = m_rentalList.begin();rentalList != m_rentalList.end();rentalList++)
                    {
                        transactioncount++;
                    }
                    transactionId = transactioncount + 10000;
                    cout<<"transaction Id : "<<transactionId <<endl;

                    cout<<"Payment Status : "<<paymentStatus<<endl;

                    cout<<endl<<"You booked " <<carList->getModel()<<" Car and Completed Payment through Upi : "<<upiId<<" and your transaction Number is : "<<transactionId<<endl;
                    carList->setStatus("Booked");
                    int id = carList->getId();
                    string brand = carList->getBrand();
                    string model = carList->getModel();
                    string vehicalNumber = carList->getVehicalNumber();
                    float cost = carList->getCost();
                    string status = carList->getStatus();
                    int duration  = carList->getDuration();


                    RentalCarDetails *car = new RentalCarDetails(id, brand, model, vehicalNumber,cost, status, duration);
                    OnlinePayment *online = new OnlinePayment(upiId,amount,balance,paymentStatus,transactionId);
                    m_rentalList.push_back(new RentalDetails(name,mobile,age,bookingid,vehicalType,paymentType,car,online));



                    break;
                }
                case CASH:
                {
                    string paymentType = "Cash";
                    cout<<endl<<"Payment Type :" <<paymentType<<endl;
                    cout<<" Cash Recived"<<endl;
                    string upiId = "Nill";
                    float rent = carList->getCost();
                    float balance = rent;
                    cout<<endl<<"Rent of the Bike: "<<rent<<endl;
                    cout<<"Enter Amount:"<<endl;
                    int amount;
                    cin>>amount;
                    if(amount <=0)
                    {
                        paymentStatus = "Failure";
                    }
                    if(amount > 0)
                    {
                        balance = rent - amount;
                        paymentStatus = "Successfull";
                    }

                    int transactionId = 0;

                    cout<<"Payment Status : "<<paymentStatus<<endl;
                    cout<<endl<<"You booked " <<carList->getModel()<<" Car and Completed Payment through Cash"<<endl;
                    carList->setStatus("Booked");
                    int id = carList->getId();
                    string brand = carList->getBrand();
                    string model = carList->getModel();
                    string vehicalNumber = carList->getVehicalNumber();
                    float cost = carList->getCost();
                    string status = carList->getStatus();
                    int duration  = carList->getDuration();


                    RentalCarDetails *car = new RentalCarDetails(id, brand, model, vehicalNumber,cost, status, duration);
                    CashPayment *cash = new CashPayment(upiId,amount,balance,paymentStatus,transactionId);
                    m_rentalList.push_back(new RentalDetails(name,mobile,age,bookingid,vehicalType,paymentType,car,cash));

                    break;
                }
                case ExitPayment:
                    return;
                }
                break;
            }
            case Exit:
            {
                cout<<"exiting"<<endl;
                return;
            }
            default:
                cout<<"Invalid Option"<<endl;
            }
        }
    }
    if(carFound == 0)
    {
        cout<<"Entered Car ID :"<<carId<<" is not available"<<endl;
    }
}

void RentalVehicalManagement::returnBike()
{
    cout<<endl<<"Enter Bike Id:"<<endl;
    int bikeId;
    cin>>bikeId;
    int bikeFound =0;
    for(auto bikeList : m_bikeList)
    {
        if(bikeList->getId() == bikeId && bikeList->getStatus() == "Available")
        {
            bikeFound =1;
            cout<<"Entered Bike Id: "<<bikeId<<"  not yet Booked"<<endl;
        }
        if(bikeList->getId() == bikeId && bikeList->getStatus() == "Booked")
        {
            bikeFound =1;
            cout<<endl<<"Bike Details"<<endl;
            cout<<"Bike Brand :"<<bikeList->getBrand()<<endl;
            cout<<"Bike Model :"<<bikeList->getModel()<<endl;
            cout<<"Bike Number :"<<bikeList->getVehicalNumber()<<endl;
            cout<<"Bike Rent :"<<bikeList->getCost()<<endl;
            cout<<"Bike Duration :"<<bikeList->getDuration()<<endl;

            cout<<endl<<"Want to return it ?"<<endl;
            cout<<"Enter"<<endl<< "1.return the Bike"<<endl;
            cout<<"2. Exit"<<endl;
            int returnVehical;
            cin>>returnVehical;
            switch(returnVehical)
            {
            case Return:
            {

                for(auto rentalList:m_rentalList)
                {
                    if(bikeList->getId() == rentalList->getId() && rentalList->getVehicalType() == "Bike")
                    {
                        if(rentalList->getBalance() !=0)
                        {
                            cout<<"Pay the pending amount: " <<rentalList->getBalance()<<endl;
                            cout<<"1.Online"<<endl<<"2.Cash"<<endl;
                            int paymentMode;
                            cin>>paymentMode;
                            switch(paymentMode)
                            {
                            case ONLINE:
                            {
                                {
                                    float amount = rentalList->getBalance();

                                    cout<<"you are Paying "<<amount <<" Rs"<<endl;

                                    cout<<endl<<"Enter UPI id : ";
                                    string upiId;
                                    cin>>upiId;
                                    float rent = bikeList->getCost();

                                    int balance = 0;
                                    rentalList->setBalance(balance);
                                    rentalList->setAmount(rent);
                                    rentalList->setStatus("Returned");
                                    cout<<"Amount Paid"<<endl;
                                }
                                break;
                            }

                            case CASH:
                            {
                                {
                                    float rent = bikeList->getCost();
                                    float amount = rentalList->getBalance();
                                    cout<<"you are Paying "<<amount <<" Rs"<<endl;
                                    int balance = 0;
                                    rentalList->setBalance(balance);
                                    rentalList->setAmount(rent);
                                    rentalList->setStatus("Returned");
                                    cout<<"Amount Paid"<<endl;
                                }
                                break;
                            }
                            }

                            cout<<endl<<"Your "<<bikeList->getModel()<<" bike is Returned"<<endl;
                            bikeList->setStatus("Available");
                            rentalList->setStatus("Returned");
                        }
                        else
                        {
                            cout<<endl<<"Your "<<bikeList->getModel()<<" bike is Returned"<<endl;
                            bikeList->setStatus("Available");
                            rentalList->setStatus("Returned");
                        }
                    }
                }
                break;
            }
            case exiT:
            {
                cout<<"exiting"<<endl;
                return;
            }
            default:
                cout<<"Invalid Option"<<endl;
            }
        }
    }
    if(bikeFound ==0)
    {
        cout<<"Entered Bike Id: "<<bikeId<<" is not Available"<<endl;
    }
}

void RentalVehicalManagement::returnCar()
{
    cout<<endl<<"Enter Car Id:"<<endl;
    int carId;
    cin>>carId;
    int carFound = 0;
    for(auto carList : m_carList)
    {
        if(carList->getId() == carId && carList->getStatus() == "Available")
        {
            carFound =1;
            cout<<"Entered Car Id: "<<carId<<"  not yet Booked"<<endl;
        }
        if(carList->getId() == carId && carList->getStatus() == "Booked")
        {
            carFound =1;
            cout<<endl<<"Car Details"<<endl;
            cout<<"Car Brand :"<<carList->getBrand()<<endl;
            cout<<"Car Model :"<<carList->getModel()<<endl;
            cout<<"Car Number : "<<carList->getVehicalNumber()<<endl;
            cout<<"Car Rent :"<<carList->getCost()<<endl;
            cout<<"Car Duration :"<<carList->getDuration()<<endl;

            cout<<endl<<"Want to return it ?"<<endl;
            cout<<"Enter"<<endl<< "1.return the Car"<<endl;
            cout<<"2. Exit"<<endl;
            int returnVehical;
            cin>>returnVehical;
            switch(returnVehical)
            {
            case Return:
            {
                for(auto rentalList:m_rentalList)
                {
                    if(carList->getId() == rentalList->getId() && rentalList->getVehicalType() == "Car")
                    {
                        if(rentalList->getBalance() !=0)
                        {
                            cout<<"Pay the pending amount: " <<rentalList->getBalance()<<endl;
                            cout<<"1.Online"<<endl<<"2.Cash"<<endl;
                            int paymentMode;
                            cin>>paymentMode;
                            switch(paymentMode)
                            {
                            case ONLINE:
                            {
                                {
                                    float amount = rentalList->getBalance();

                                    cout<<"you are Paying "<<amount <<" Rs"<<endl;

                                    cout<<endl<<"Enter UPI id : ";
                                    string upiId;
                                    cin>>upiId;
                                    float rent = carList->getCost();

                                    int balance = 0;
                                    rentalList->setBalance(balance);
                                    rentalList->setAmount(rent);
                                    rentalList->setStatus("Returned");
                                    cout<<"Amount Paid"<<endl;
                                }
                                break;
                            }

                            case CASH:
                            {
                                {
                                    float rent = carList->getCost();
                                    float amount = rentalList->getBalance();
                                    cout<<"you are Paying "<<amount <<" Rs"<<endl;
                                    int balance = 0;
                                    rentalList->setBalance(balance);
                                    rentalList->setAmount(rent);
                                    rentalList->setStatus("Returned");
                                    cout<<"Amount Paid"<<endl;
                                }
                                break;
                            }
                            }

                            cout<<endl<<"Your "<<carList->getModel()<<" bike is Returned"<<endl;
                            carList->setStatus("Available");
                            rentalList->setStatus("Returned");
                        }
                        else
                        {
                            cout<<endl<<"Your "<<carList->getModel()<<" bike is Returned"<<endl;
                            carList->setStatus("Available");
                            rentalList->setStatus("Returned");
                        }

                        rentalList->setStatus("Returned");
                    }
                }
                break;
            }
            case exiT:
            {
                cout<<"exiting"<<endl;
                return;
            }
            default:
                cout<<"Invalid Option"<<endl;
            }
        }
    }
    if(carFound ==0)
    {
        cout<<"Entered Car Id: "<<carId<<" is not available"<<endl;
    }
}

void RentalVehicalManagement::displayBike()
{
    cout<<endl<<"Available Bike Details"<<endl <<endl;

    cout<< endl<<setw(15)<<"Bike Id "<<setw(15)<<"Bike Brand "<<setw(15)<<"Bike Model "<<setw(15)<<"Bike Number"<<setw(15)<<"Bike Cost "<<setw(15)<<"Bike Status"<<setw(25)<<"Bike Duration"<<endl<<endl;

    for(auto bikeList : m_bikeList)
    {
        if(bikeList->getStatus() != "Deleted")
        {
            cout<<setw(15)<<bikeList->getId()<<setw(15)<<bikeList->getBrand()<<setw(15)<<bikeList->getModel()<<setw(15)<<bikeList->getVehicalNumber()<<setw(15)<<bikeList->getCost()<<setw(15)<<bikeList->getStatus()<<setw(15)<<bikeList->getDuration()<<" Day"<<endl;
        }
    }
}

void RentalVehicalManagement::displayCar()
{
    cout<<endl<<"Available Car Details"<<endl <<endl;

    cout<< endl<<setw(15)<<"Car Id "<<setw(15)<<"Car Brand"<<setw(15)<<"Car Model "<<setw(15)<<"Car Number"<<setw(15)<<"Car Cost "<<setw(15)<<"Car Status"<<setw(25)<<"Car Duration"<<endl<<endl;

    for(auto carList : m_carList)

    {
        if(carList->getStatus() != "Deleted")
        {
            cout<<setw(15)<<carList->getId()<<setw(15)<<carList->getBrand()<<setw(15)<<carList->getModel()<<setw(15)<<carList->getVehicalNumber()<<setw(15)<<carList->getCost()<<setw(15)<<carList->getStatus()<<setw(15)<<carList->getDuration()<< " Day"<<endl;
        }
    }
}


void RentalVehicalManagement::rentalHistory()
{
    cout<<endl<<"Rental History of the Previous Customers"<<endl <<endl;

    for(auto rentalList : m_rentalList)
    {
    cout<<"Customer Name: "<<rentalList->getName()<<endl;
    cout<<"Customer contact number: "<<rentalList->getMobile()<<endl;
    cout<<"Customer age: "<<rentalList->getAge()<<endl;
    cout<<"Customer Booking id: "<<rentalList->getBookingId()<<endl;
    cout<<"Vehical type: "<<rentalList->getVehicalType()<<endl;
    cout<<"payment type: "<<rentalList->getPaymentType()<<endl;
    cout<<"vehicle id: "<<rentalList->getId()<<endl;
    cout<<"vehicle brand: "<<rentalList->getBrand()<<endl;
    cout<<"vehicle model: "<<rentalList->getModel()<<endl;
    cout<<"vehicle number: "<<rentalList->getVehicalNumber()<<endl;
    cout<<"vehicle cost: "<<rentalList->getCost()<<endl;
    cout<<"vehicle status: "<<rentalList->getStatus()<<endl;
    cout<<"vehicle duration(in days): "<<rentalList->getDuration()<<endl;
    cout<<"upi id: "<<rentalList->getUPIid()<<endl;
    cout<<"paid amount: "<<rentalList->getAmount()<<endl;
    cout<<"Balance amount: "<<rentalList->getBalance()<<endl;
    cout<<"Payment status: "<<rentalList->getPaymentStatus()<<endl;
    cout<<"Transaction id: "<<rentalList->getTransactionId()<<endl;
    }
}

void RentalVehicalManagement::addBike()
{
    cout<<"Addddddd"<<endl;
    int id,duration;
    string  brand,model,bikeNumber,status;
    float cost;
    int bikeCount = 1;
    for(auto bikeList :m_bikeList)
    {
        bikeCount++;

    }
    id = bikeCount;
    cout<<"Bike Id: "<<id<<endl;
    cout<<"Enter Bike Brand : ";
    cin>>brand;
    cout<<"Enter Bike Model :";
    cin>>model;
    cout<<"Enter Bike Number :";
    cin>>bikeNumber;
    cout<<"Enter Bike cost :";
    cin>>cost;
    cout<<"Enter Bike status :";
    cin>>status;
    cout<<"Enter Bike Duration :";
    cin>>duration;
    m_bikeList.push_back(new RentalBikeDetails(id, brand, model, bikeNumber,cost, status, duration));
}

void RentalVehicalManagement::addCar()
{
    int id,duration;
    string  brand,model,carNumber,status;
    float cost;

    int carCount = 1;
    for(auto carList : m_carList)
    {
        carCount++;
    }

    id = carCount;

    cout<<"Car Id: "<<id<<endl;
    cout<<"Enter Car Brand :";
    cin>>brand;
    cout<<"Enter Car Model :";
    cin>>model;
    cout<<"Enter Car Number :";
    cin>>carNumber;
    cout<<"Enter Car cost :";
    cin>>cost;
    cout<<"Enter Car status :";
    cin>>status;
    cout<<"Enter Car Duration :";
    cin>>duration;
    m_carList.push_back(new RentalCarDetails(id,brand,model,carNumber,cost,status,duration));
}

void RentalVehicalManagement::updateBikeRent()
{
    this->displayBike();
    int id;
    cout<<"Enter the Bike Id to Update Rent : ";
    cin>>id;
    int bikeFound =0;
    for(auto bikeList :m_bikeList)
    {
        if(bikeList->getId() == id)
        {
            bikeFound =1;
            float cost;
            cout<<"Enter New Bike Rent :";
            cin>>cost;
            bikeList->setCost(cost);
        }
    }
    if(bikeFound ==0 )
    {
        cout<<endl<<"Entered Bike ID "<< id <<" not found"<<endl;
    }
}


void RentalVehicalManagement::updateCarRent()
{

    this->displayCar();
    int id;
    cout<<"Enter  Car Id to Update Rent : ";
    cin>>id;
    int carFound = 0;
    for(auto carList :m_carList)
    {
        if(carList->getId() == id)
        {
            carFound =1;
            float cost;
            cout<<"Enter New Car Rent :";
            cin>>cost;
            carList->setCost(cost);
        }
    }
    if(carFound ==0)
    {
        cout<<endl<<"Entered Car ID "<< id <<" not found"<<endl;

    }
}



void RentalVehicalManagement::deleteBike()
{
    this->displayBike();
    int id;
    cout<<"Enter Bike Id to Delete : ";
    cin>>id;
    int bikeFound = 0;

    for(auto bikeList : m_bikeList)
    {
        if(bikeList->getId() == id)
        {
            bikeFound =1;
            bikeList->setStatus("Deleted");
            cout<<"Entered Bike ID: "<<id <<" Deleted"<<endl;
        }
    }
    if(bikeFound == 0)
    {
        cout<<endl<<"Entered Bike ID "<< id <<" not found"<<endl;
    }
}

void RentalVehicalManagement::deleteCar()
{
    this->displayCar();
    int id;
    cout<<"Enter Car Id to Delete : ";
    cin>>id;
    int carFound = 0;

    for(auto carList : m_carList)
    {
        if(carList->getId() == id)
        {
            carFound =1;
            carList->setStatus("Deleted");
            cout<<"Entered Car ID: "<<id <<" Deleted"<<endl;
        }
    }
    if(carFound == 0)
    {
        cout<<endl<<"Entered car ID "<< id <<" not found"<<endl;
    }
}

void RentalVehicalManagement::searchBike()
{

    int id;
    cout<<"Enter Bike Id to Search : ";
    cin>>id;
    int bikeFound = 0;

    for(auto bikeList : m_bikeList)
    {
        if(bikeList->getId() == id)
        {
            bikeFound =1;
            cout<<endl<<"Entered Bike ID: "<<id <<" Found"<<endl;
            cout<<endl<<"Bike Details"<<endl;
            cout<<endl<<"Bike Id :"<<bikeList->getId()<<endl;
            cout<<"Bike Brand :"<<bikeList->getBrand()<<endl;
            cout<<"Bike Model :"<<bikeList->getModel()<<endl;
            cout<<"Bike Number :"<<bikeList->getVehicalNumber()<<endl;
            cout<<"Bike Rent :"<<bikeList->getCost()<<endl;
            cout<<"Bike Status :"<<bikeList->getStatus()<<endl;
            cout<<"Bike Duration :"<<bikeList->getDuration()<<" Day"<<endl;
        }
    }
    if(bikeFound == 0)
    {
        cout<<endl<<"Entered Bike ID "<< id <<" not found"<<endl;
    }
}

void RentalVehicalManagement::searchCar()
{
    int id;
    cout<<"Enter Car Id to Delete : ";
    cin>>id;
    int carFound = 0;

    for(auto carList : m_carList)
    {
        if(carList->getId() == id)
        {
            carFound =1;
            cout<<endl<<"Entered Car ID: "<<id <<" Found"<<endl;

            cout<<endl<<"Car Details"<<endl;
            cout<<endl<<"Car Id :"<<carList->getId()<<endl;
            cout<<"Car Brand :"<<carList->getBrand()<<endl;
            cout<<"Car Model :"<<carList->getModel()<<endl;
            cout<<"Car Number :"<<carList->getVehicalNumber()<<endl;
            cout<<"Car Rent :"<<carList->getCost()<<endl;
            cout<<"Car Status :"<<carList->getStatus()<<endl;
            cout<<"Car Duration :"<<carList->getDuration()<<"Day"<<endl;;
        }
    }
    if(carFound == 0)
    {
        cout<<endl<<"Entered car ID "<< id <<" not found"<<endl;
    }
}

void RentalVehicalManagement::sortBike()
{
    cout<<endl<<"Available Sorting Types"<<endl;
    cout<<endl<<"1.Sort By Vehical Status"<<endl<<"2.Sort By Vehical Price"<<endl<<"3.Sort By Vehical Brand"<<endl;
    cout<<endl<<"Enter Required Sorting Type : ";
    int sort;
    cin>>sort;
    switch(sort)
    {
    case VehicalStatus:
    {
        this->sortBikeByStatus();
        break;
    }
    case VehicalRent:
    {
        this->sortBikeByPrice();

        break;
    }
    case VehicalBrand:
    {
        this->sortBikeByBrand();
        break;
    }
    }
    this->displayBike();

}

void RentalVehicalManagement::sortBikeByStatus()
{
    for(auto i :  m_bikeList)
    {
        for(auto j :  m_bikeList)
        {
            if(i->getStatus() == "Available" && j->getStatus() != "Available")
            {
                iter_swap(i,j);
            }
            if(i->getStatus() == "Available" && j->getStatus() == "Booked")
            {
                iter_swap(i,j);
            }
        }
    }


}

void RentalVehicalManagement::sortBikeByPrice()
{
    for(auto i: m_bikeList)
    {
        for(auto j  : m_bikeList)
        {
            if (i->getCost() < j->getCost())
            {
                iter_swap(i,j);
            }
        }
    }
}

void RentalVehicalManagement::sortBikeByBrand()
{

    for(auto i : m_bikeList)
    {
        for(auto j : m_bikeList)
        {
            if(i->getBrand() < j->getBrand())
            {
                iter_swap(i,j);
            }
        }

    }
}

/*void RentalVehicalManagement::sortBikeByStatus()
{
    m_bikeList.sort([] (RentalBikeDetails *a, RentalBikeDetails *b)
                    {
                       return a->getStatus(),b->getStatus();
                    });
}

void RentalVehicalManagement::sortBikeByPrice()
{
    m_bikeList.sort([] (RentalBikeDetails *a, RentalBikeDetails *b)
                    {
                        return a->getCost(),b->getCost();
                    });
}

void RentalVehicalManagement::sortBikeByBrand()
{
    m_bikeList.sort([] (RentalBikeDetails *a, RentalBikeDetails *b)
                    {
                        return a->getBrand(),b->getBrand();
                    });
}*/


void RentalVehicalManagement::sortCar()
{
    cout<<endl<<"Available Sorting Types"<<endl;
    cout<<endl<<"1.Sort By Vehical Status"<<endl<<"2.Sort By Vehical Price"<<endl<<"3.Sort By Vehical Brand"<<endl;
    cout<<endl<<"Enter Required Sorting Type : ";
    int sort;
    cin>>sort;
    switch(sort)
    {
    case VehicalStatus:
    {
        this->sortCarByStatus();
        break;
    }
    case VehicalRent:
    {
        this->sortCarByPrice();
        break;
    }
    case VehicalBrand:
    {
        this->sortCarByBrand();
        break;
    }
    }
    this->displayCar();

}

void RentalVehicalManagement::sortCarByStatus()
{
    for(auto i : m_carList)
    {
        for(auto j : m_carList)
        {
            if(i->getStatus() == "Available" && j->getStatus() != "Available")
            {
                iter_swap(i,j);
            }
            if(i->getStatus() == "Available" && j->getStatus() == "Booked")
            {
                iter_swap(i,j);
            }
        }
    }
}

void RentalVehicalManagement::sortCarByPrice()
{

    for(auto i : m_carList)
    {
        for(auto j : m_carList)
        {
            if (i->getCost() < j->getCost())
            {
                iter_swap(i,j);
            }
        }
    }
}

void RentalVehicalManagement::sortCarByBrand()
{
    for(auto i : m_carList)
    {
        for(auto j : m_carList)
        {
            if(i->getBrand() < j->getBrand())
            {
                iter_swap(i,j);
            }
        }

    }
}


/*void RentalVehicalManagement::sortCarByStatus()
{
    m_carList.sort([] (RentalCarDetails *a, RentalCarDetails *b)
                    {
                        return a->getStatus(),b->getStatus();
                    });
}

void RentalVehicalManagement::sortCarByPrice()
{
    m_carList.sort([] (RentalCarDetails *a, RentalCarDetails *b)
                    {
                        return a->getCost(),b->getCost();
                    });
}

void RentalVehicalManagement::sortCarByBrand()
{
    m_carList.sort([] (RentalCarDetails *a, RentalCarDetails *b)
                    {
                        return a->getBrand(),b->getBrand();
                    });
}*/




list<RentalDetails *> RentalVehicalManagement::getRentalList()
{
    return m_rentalList;
}

void RentalVehicalManagement::saveData()
{
    m_fileoperations->writeBikeData(m_bikeList);
    m_fileoperations->writeCarData(m_carList);
    m_fileoperations->writeRentalData(m_rentalList);
}

void RentalVehicalManagement::bookBike()
{
    cout<<endl<<"Booking Bike"<<endl;
    cout<<endl<<"Enter Bike Id:"<<endl;
    int bikeId;
    cin>>bikeId;
    int bikeFound =0;
    for(auto bikeList : m_bikeList)
    {
        if(bikeList->getId() == bikeId && bikeList->getStatus() == "Booked")
        {
            bikeFound =1;
            cout<<"Entered Bike ID : "<<bikeId<<" is already booked"<<endl;
        }
        if(bikeList->getId() == bikeId && bikeList->getStatus() == "Available")
        {
            bikeFound =1;
            cout<<"Entered Bike Id: "<<bikeId<<" is Available for rent"<<endl;
            cout<<endl<<"Bike Details"<<endl;
            cout<<endl<<" Bike Brand :"<<bikeList->getBrand()<<endl;
            cout<<" Bike Model :"<<bikeList->getModel()<<endl;
            cout<<" Bike Number :"<<bikeList->getVehicalNumber()<<endl;
            cout<<" Bike Rent :"<<bikeList->getCost()<<endl;
            cout<<" Bike Duration :"<<bikeList->getDuration()<<" Day"<<endl;

            cout<<endl<<"Want to book it ?"<<endl;
            cout<<"Enter"<<endl<< "1.book the Bike"<<endl;
            cout<<"2. Exit"<<endl;
            int choice;
            cin>>choice;
            switch(choice)
            {
            case Book:
            {
                string name,mobile,vehicalType,paymentStatus;
                int age,bookingid;
                cout<<"Enter Name : ";
                cin>>name;


                while(true)
                {
                    cout<<"Enter Mobile Number: ";
                    cin>>mobile;
                    if(mobile.length()==10)
                    {
                        break;
                    }
                    else
                    {
                        cout<<"Invalid number,try again"<<endl;
                    }
                }

                while(true)
                {
                    cout<<"Enter Age : ";
                    cin>>age;
                    if(age >=18 && age < 90)
                    {
                        break;
                    }
                    else
                    {
                        cout<<"Invalid Age,age must be positive and in between 17-90,try again"<<endl;
                    }
                }

                int count =1;
                for(auto rentalList = m_rentalList.begin();rentalList != m_rentalList.end();rentalList++)
                {
                    count++;
                }

                bookingid = count;
                cout<<endl<<"Booking Id : "<<count<<endl;
                vehicalType = "Bike";
                cout<<"vehical Type :"<<vehicalType<<endl;


                cout<<endl<<"Available Payment Modes"<<endl;
                cout<<endl<<"1.online"<<endl<<"2.Cash"<<endl;

                cout<<endl<<"Select PaymentMode : " ;
                int paymentmode;
                cin>>paymentmode;
                switch(paymentmode)
                {
                case ONLINE:
                {
                    string paymentType = "Online";
                    cout<<endl<<"Payment Type :" <<paymentType<<endl;

                    cout<<endl<<"Enter UPI id : ";
                    string upiId;
                    cin>>upiId;
                    float rent = bikeList->getCost();
                    float balance = rent;
                    cout<<endl<<"Rent of the Bike: "<<rent<<endl;
                    cout<<"Enter Amount:"<<endl;
                    int amount;
                    cin>>amount;
                    if(amount <= 0)
                    {
                        paymentStatus = "Failure";
                    }
                    if(amount > 0)
                    {
                        paymentStatus = "SucessFull";
                        balance = rent - amount;

                    }

                    int transactionId;
                    int transactioncount = 1;
                    for(auto rentalList = m_rentalList.begin();rentalList != m_rentalList.end();rentalList++)
                    {
                        transactioncount++;
                    }
                    transactionId = transactioncount + 10000;
                    cout<<"transaction Id : "<<transactionId <<endl;

                    cout<<endl<<"Your "<<bikeList->getModel()<<" bike is booked and Completed Payment through Upi : "<<upiId<<" and your transaction Number is : "<<transactionId<<endl;
                    bikeList->setStatus("Booked");
                    int id = bikeList->getId();
                    string brand = bikeList->getBrand();
                    string model = bikeList->getModel();
                    string vehicalNumber = bikeList->getVehicalNumber();
                    float cost = bikeList->getCost();
                    string status = bikeList->getStatus();
                    int duration  =bikeList->getDuration();


                    RentalBikeDetails *bike = new RentalBikeDetails(id, brand, model, vehicalNumber,cost, status, duration);
                    OnlinePayment *online = new OnlinePayment(upiId,amount,balance,paymentStatus,transactionId);
                    m_rentalList.push_back(new RentalDetails(name,mobile,age,bookingid,vehicalType,paymentType,bike,online));
                    break;
                }

                case CASH:
                {
                    string paymentType = "Cash";
                    cout<<endl<<"Payment type :" <<paymentType<<endl;
                    cout<<" Cash Recived"<<endl;
                    string upiId = "Nill";
                    float rent = bikeList->getCost();
                    float balance = rent;
                    cout<<endl<<"Rent of the Bike: "<<rent<<endl;
                    cout<<"Enter Amount:"<<endl;
                    int amount;
                    cin>>amount;
                    if(amount <=0)
                    {
                        paymentStatus = "Failure";
                    }
                    if(amount > 0)
                    {
                        balance = rent - amount;
                        paymentStatus = "Sucessfull";
                    }

                    int transactionId = 0;

                    cout<<"Payment Status : "<<paymentStatus<<endl;

                    cout<<endl<<"You booked " <<bikeList->getModel()<<" Bike and Completed Payment through Cash"<<endl;

                    bikeList->setStatus("Booked");


                    int id = bikeList->getId();
                    string brand = bikeList->getBrand();
                    string model = bikeList->getModel();
                    string vehicalNumber = bikeList->getVehicalNumber();
                    float cost = bikeList->getCost();
                    string status = bikeList->getStatus();
                    int duration  =bikeList->getDuration();

                    RentalBikeDetails *bike = new RentalBikeDetails(id, brand, model, vehicalNumber,cost, status, duration);
                    CashPayment *cash = new CashPayment(upiId,amount,balance,paymentStatus,transactionId);

                    m_rentalList.push_back(new RentalDetails(name,mobile,age,bookingid,vehicalType,paymentType,bike,cash));
                    break;
                }

                }
                break;
            }
            case Exit:
            {
                cout<<"exiting"<<endl;
                return;
            }
            default:
                cout<<"Invalid Option"<<endl;
            }
        }
    }
    if(bikeFound ==0 )
    {
        cout<<"Entered Bike ID :"<<bikeId<<" is not available"<<endl;
    }
}

