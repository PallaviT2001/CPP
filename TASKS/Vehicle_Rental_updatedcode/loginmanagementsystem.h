#ifndef LOGINMANAGEMENTSYSTEM_H
#define LOGINMANAGEMENTSYSTEM_H
#include "admins.h"
#include "users.h"
#include "vehiclemanager.h"
#include <list>

class LoginManagementSystem
{
public:
    LoginManagementSystem();
    ~LoginManagementSystem();

    void adminMenu();
    void userMenu();

    void adminLoginMenu();
    void userLoginMenu();

    void adminLogin();
    void userLogin();

    void addAdmins();
    void addUsers();

    void applicationManager();

    void addBike();
    void addCar();

    void displayListOfBikes();
    void displayListOfCars();

    void updateBikePrice();
    void updateCarPrice();

    void Bookbike();
    void Bookcar();

    void returnbike();
    void returncar();

    void functionalities();

    void deletebike();
    void deletecar();

    void displaycustomerdetailsbike();
    void displaycustomerdetailscar();

    void searchbike();
    void searchcar();

    void sortbikeStatus();
    void sortcarbyStatus();

    void sortbikebyPrice();
    void sortcarbyPrice();

private:
    FileOperation* m_fileoperation;
    VehicleManager* vehicle;

    std::list<Admins*> m_adminList;
    std::list<Users*> m_userList;
};

#endif // LOGINMANAGEMENTSYSTEM_H
