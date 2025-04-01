#include "RentalVehicalManagement.h"
#include "loginmanagementsystem.h"
#include <iostream>
using namespace std;

int main()
{
    LoginManagementSystem* loginmanagementsystem = new LoginManagementSystem;
    loginmanagementsystem->applicationManager();
    delete loginmanagementsystem;
    return 0;
}
