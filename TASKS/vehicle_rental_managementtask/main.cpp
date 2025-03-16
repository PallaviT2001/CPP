#include "vehiclemanager.h"
#include <iostream>

using namespace std;

int main() {
    VehicleManager manager;

    int choice;

    while (true) {
        std::cout << "\nVehicle Rental Application" << std::endl;
        std::cout << "\n 1. Add Bikes" << std::endl;
        std::cout << " 2. Add Cars" << std::endl;
        std::cout << " 3. Display Bikes" << std::endl;
        std::cout << " 4. Display Cars" << std::endl;
        std::cout << " 5. Update Car Rent Price" << std::endl;
        std::cout << " 6. Update Bike Rent Price" << std::endl;
        std::cout << " Enter your choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1:
            manager.addBike();
            break;
        case 2:
            manager.addCar();
            break;
        case 3:
            manager.displayListOfBikes();
            break;
        case 4:
            manager.displayListOfCars();
            break;case 5:
            return 0;
        default:
            std::cout << "Invalid Choice" << std::endl;
            break;
        }
    }
    return 0;
}
