#ifndef LOGINMANAGEMENTUSER_H
#define LOGINMANAGEMENTUSER_H
#include <list>
#include <iomanip>
#include "userdetails.h"
#include "admindetails.h"
#include "logindetails.h"
#include "rentalfileoperation.h"
#include "Rentalvehicalmanagement.h"


class LoginManagementUser
{
public:
    LoginManagementUser();
    ~LoginManagementUser();

    void addAdmin();
    void userRegistration();
    void userLogin();
    void adminLogin();
    void loginMenu();
    void deleteAdmin();

private:
    RentalFileOperation *m_fileOperations;
    RentalVehicalManagement *m_rentalVehicalManagement;
    list<AdminDetails*>m_adminList;
    list<UserDetails*>m_userList;

};



enum userChoice{display =1,book,Sort,search,History,ExitChoice};
enum vehical{Bike =1,Car,exitVehical};
enum login{ Admin = 1,User,ExitLogin};
enum usecase{AdminLogin =1, AddAdmin,DeleteAdmin,AdminExit};
enum user{UserRegistration =1, UserLogin,UserExit};


#endif // LOGINMANAGEMENTUSER_H
