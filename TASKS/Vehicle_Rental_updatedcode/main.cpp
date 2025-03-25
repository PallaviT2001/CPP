#include "vehiclemanager.h"
#include "loginmanagementsystem.h"
#include <iostream>
using namespace std;

int main()
{
    //VehicleManager manager;
    // manager.applicationManager();
    //manager.functionalities();
    LoginManagementSystem* loginmanagementsystem = new LoginManagementSystem;
    loginmanagementsystem->applicationManager();
    delete loginmanagementsystem;
    return 0;
}







