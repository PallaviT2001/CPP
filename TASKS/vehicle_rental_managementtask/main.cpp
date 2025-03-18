#include "vehiclemanager.h"
#include <iostream>
using namespace std;

enum choice {Add_vehicles_tolist=1,Display_vehiclesdetails,Update_vehicles_dailyrentprice,Book_vehicles,Return_vehicles};

int main()
{
    VehicleManager manager;
    int choice;

    while (true) {
        std::cout << "\nVehicle Rental Application\n" << std::endl;;
        cout<<"1.Add vehicles to list"<<endl;
        cout<<"2.Display vehicles details"<<endl;
        cout<<"3.update vehicles dailyrentprice"<<endl;
        cout<<"4.book vehicle"<<endl;
        cout<<"5.return vehicle\n"<<endl;


        /*std::cout << "\n 1. Add Bikes" << std::endl;
        std::cout << " 2. Add Cars" << std::endl;
        std::cout << " 3. Display Bikes" << std::endl;
        std::cout << " 4. Display Cars" << std::endl;
        std::cout << " 5. Update Car Rent Price" << std::endl;
        std::cout << " 6. Update Bike Rent Price" << std::endl;
        std::cout << " 7. Book Bike"<<endl;
        std::cout << " 8. Book car"<<endl;
        std::cout << " 9. Return Bike"<<endl;
        std::cout << " 10.Return car"<<endl;*/

        std::cout <<"Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case Add_vehicles_tolist:
            cout<<"which type of vehicle u want to add add press 1 for add bike and press 2 for add car"<<endl;
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
            cout<<"which type of vehicle u want to display press 1 for display bikes and press 2 for display cars"<<endl;
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
        case  Update_vehicles_dailyrentprice:
            cout<<"press 1 for changing bike daily rentprice and press 2 for changing"<<endl;
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
            cout<<"press 1 to book bike and press 2 to book car"<<endl;
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
            cout<<"press 1 to return bike and press 2 to return car"<<endl;
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
            default:
            std::cout<<"Invalid Choice" << std::endl;
            break;
        }
    }
    return 0;
}
