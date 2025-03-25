#include "loginmanagementsystem.h"
#include <iostream>

LoginManagementSystem::LoginManagementSystem()
{
    std::cout<<"LoginManagementSystem Constructor Called"<<std::endl;
    vehicle = new VehicleManager;
    m_fileoperation = new FileOperation;

    m_adminList = m_fileoperation->readAdminData();
    m_userList = m_fileoperation->readUserData();
    for(auto& i : m_userList)
    {
        std::cout<<i->getEmailId()<<" "<<i->getPassword()<<std::endl;;
    }
}

LoginManagementSystem::~LoginManagementSystem()
{
    std::cout<<"LoginManagementSystem Destructor Called"<<std::endl;

    m_fileoperation->writeAdminData(m_adminList);
    m_fileoperation->writeUserData(m_userList);

    for(auto admin : m_adminList)
    {
        delete admin;
    }

    for(auto user : m_userList)
    {
        delete user;
    }

    delete m_fileoperation;
    delete vehicle;
}

void LoginManagementSystem::userLogin() {
    std::string Id, password;
    std::cout << "Enter Email ID: ";
    std::cin >> Id;
    std::cout << "Enter Password: ";
    std::cin >> password;

    for (auto& user : m_userList)
    {
        if (user->getEmailId() == Id && user->getPassword() == password)
        {
            std::cout << "User Login Successful" << std::endl;
            userMenu();
            return;
        }
    }
    std::cout << "Invalid ID or Password" << std::endl;
}


void LoginManagementSystem::userLoginMenu()
{
    std::cout<<"User Login Menu Function Called"<<std::endl;

    int choice;
    while(true)
    {
        std::cout<<"\nLogin Menu"<<std::endl;
        std::cout<<" 1.User SignIn"<<std::endl;
        std::cout<<" 2.User SignUp"<<std::endl;
        std::cout<<" 3.Exit Login Menu"<<std::endl;
        std::cout<<" Enter Your Choice:";
        std::cin>>choice;

        switch (choice)
        {
        case 1:
            addUsers();
            break;
        case 2:
            userLogin();
            break;
        case 3:
            std::cout<<"Exit From User Login Menu"<<std::endl;
            return;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
}

void LoginManagementSystem::addUsers()
{
    std::cout<<"Add User Function Called"<<std::endl;

    std::string name,password,contactNumber,emailId;

    std::cout<<"Enter Name: ";
    std::cin>>name;
    std::cout<<"Enter ContactNumber: ";
    std::cin>>contactNumber;
    std::cout<<"Enter Email Id: ";
    std::cin>>emailId;
    std::cout<<"Enter Password: ";
    std::cin>>password;

    m_userList.push_back(new Users(name,password,contactNumber,emailId));
}

void LoginManagementSystem::addAdmins()
{
    std::cout<<"Add Admin Function Called"<<std::endl;

    std::string Id,password,adminName;

    std::cout<<"Enter Name: ";
    std::cin>>adminName;
    std::cout<<"Enter ID: ";
    std::cin>>Id;
    std::cout<<"Enter Password: ";
    std::cin>>password;

    m_adminList.push_back(new Admins(Id, password, adminName));
}



void LoginManagementSystem::userMenu()
{
    std::cout<<"User Menu Function Called"<<std::endl;

    int choice;
    while(true)
    {
        std::cout<<"\nUser Menu"<<std::endl;
        std::cout<<" 1.Display Bikes"<<std::endl;
        std::cout<<" 2.Display Cars"<<std::endl;
        std::cout<<" 3.Bookbike"<<std::endl;
        std::cout<<" 4.Bookcar"<<std::endl;
        std::cout<<" 5.Search bike"<<std::endl;
        std::cout<<" 6.Search car"<<endl;
        std::cout<<" Enter Your Choice:";
        std::cin>>choice;

        switch (choice)
        {
        case 1:
            vehicle->displayListOfBikes();
            break;
        case 2:
            vehicle->displayListOfCars();
            break;
        case 3:
            vehicle->Bookbike();
            break;
        case 4:
            vehicle->Bookcar();
            break;
        case 5:
            vehicle->searchbike();
            break;
        case 6:
            vehicle->searchcar();
            break;
        case 7:
            std::cout<<"Logout From User"<<std::endl;
            return;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
}

void LoginManagementSystem::adminLogin()
{
    std::cout<<"Admin Login Function Called"<<std::endl;

    std::string Id,password;

    std::cout<<"Enter Admin ID: ";
    std::cin>>Id;
    std::cout<<"Enter Admin Password: ";
    std::cin>>password;
    for(auto& admin : m_adminList)
    {
        if(admin->getId() == Id && admin->getPassword() == password)
        {
            vehicle->functionalities();
            std::cout<<"Admin Login SuccessFull"<<std::endl;
        }
        else
        {
            std::cout<<"Invalid ID or Password"<<std::endl;
            return;
        }
    }
}


void LoginManagementSystem::adminLoginMenu()
{
    std::cout<<"Admin Login Menu Function Called"<<std::endl;

    int choice;
    while(true)
    {
        std::cout<<"\nLogin Menu"<<std::endl;
        std::cout<<" 1.Admin SignIn"<<std::endl;
        std::cout<<" 2.Admin SignUp"<<std::endl;
        std::cout<<" 3.Exit Login Menu"<<std::endl;
        std::cout<<" Enter Your Choice:";
        std::cin>>choice;

        switch (choice)
        {
        case 1:
            addAdmins();
            break;
        case 2:
            adminLogin();
            break;
        case 3:
            std::cout<<"Exit From Admin Login Menu"<<std::endl;
            return;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
}


void LoginManagementSystem::applicationManager()
{
    std::cout<<"Rental Application Function Called"<<std::endl;

    int choice;
    while (true)
    {
        std::cout<<"\nWellcome to Rental Application"<<std::endl;
        std::cout<<" 1.Admin"<<std::endl;
        std::cout<<" 2.User"<<std::endl;
        std::cout<<" 3.Exit Application"<<std::endl;
        std::cout<<" Enter Your Choice: ";
        std::cin>>choice;

        switch (choice)
        {
        case 1:
            adminLoginMenu();
            break;
        case 2:
            userLoginMenu();
            break;
        case 3:
            std::cout<<"Application Closed"<<std::endl;
            return;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
}



