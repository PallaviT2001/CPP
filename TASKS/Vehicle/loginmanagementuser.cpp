#include "loginmanagementuser.h"

LoginManagementUser::LoginManagementUser()
{
    cout<<"Login Management User Constructor Called"<<endl;
    m_fileOperations = new RentalFileOperation;
    m_adminList = m_fileOperations->readAdminData();
    m_userList = m_fileOperations->readUserDetails();
}

LoginManagementUser::~LoginManagementUser()
{
    cout<<"Login Management User Destructor Called"<<endl;
    delete m_fileOperations;
    for (auto adminList : m_adminList)
    {
        delete adminList;
    }
    for (auto userList : m_userList)
    {
        delete userList;
    }
    delete m_rentalVehicalManagement;

}

void LoginManagementUser::addAdmin()
{
    while(true)
    {
        int loginId = 12345;
        int loginPassword = 12345;
        cout<<endl<<"Enter Management login Id: ";
        int id;
        cin>>id;
        cout<<"Enter Management Login Password: ";
        int password;
        cin>>password;
        int exit = 0;
        if(loginId == id && loginPassword == password)
        {
            string adminName;
            int adminCount = 1;
            int adminId,adminPassword;
            cout<<endl<<"Adding New Admin"<<endl;
            for(auto adminList  : m_adminList)
            {
                adminCount++;
            }
            adminId = adminCount;

            cout<<" Admin Id : "<<adminId<<endl;

            cout<<"Enter Admin Name : ";
            cin>>adminName;
            cout<<"Enter Admin Password : ";
            cin>>adminPassword;

            int  status = 1;
            cout<<"Status : " <<status<<endl;
            cout<<"Added New Admin :"<<adminName<<endl;

            m_adminList.push_back((new AdminDetails(adminName,adminId,adminPassword,status)));
            break;
        }
        else
        {
            cout<<endl<<"InCorrect Login Details"<<endl;
            cout<<"Enter 1 to try again and 0 to exit : ";
            cin>>exit;
        }
        if(exit == 0)
        {
            return;
        }
    }
}

void LoginManagementUser::userRegistration()
{
    int userId,userPassword;
    string userName;
    cout<<"Enter User Id: ";
    cin>>userId;
    cout<<"Enter User Name : ";
    cin>>userName;
    cout<<"Enter User Password : ";
    cin>>userPassword;

    int status = 1;
    cout<<"Status : " <<status<<endl;

    cout<<"Registration Successfully Done "<<userName<<" ,now you can Login";
    m_userList.push_back(new UserDetails(userName,userId,userPassword,status));
}

void LoginManagementUser::userLogin()
{

    int userId,userPassword;
    int exit =0;

    while(true)
    {
        cout<<endl<<"___________User Login Page___________"<<endl;
        cout<<endl<<"Enter User ID: ";
        cin>>userId;
        cout<<"Enter User Password : ";
        cin>>userPassword;
        int userFound = 0;
        for(auto userList : m_userList)
        {
            if(userList->getLoginId() == userId && userList->getLoginPassword() == userPassword && userList->getStatus() == 1)
            {
                m_rentalVehicalManagement = new RentalVehicalManagement;
                cout<<endl<<"******Login Successfull******"<<endl<<endl;

                while(true)
                {
                    userFound = 1;
                    cout<<endl<<"1.Display Vehicals"<<endl<<"2.Book Vehical"<<endl<<"3.Sort Vehical"<<endl<<"4.Search Vehical"<<endl<<"5.Display History"<<endl<<"6.Exit"<<endl;
                    cout<<endl<<"Enter your choice : ";
                    int userChoice;
                    cin>>userChoice;

                    switch(userChoice)
                    {
                    case display:
                    {
                        cout<<endl<<"1.Display Bike"<<endl<<"2.Display Car"<<endl<<"3.Exit"<<endl;
                        cout<<endl<<"Enter your choice : ";
                        int vehical;
                        cin>>vehical;
                        switch(vehical)
                        {
                        case Bike:
                        {
                            m_rentalVehicalManagement->displayBike();
                            break;
                        }
                        case Car:
                        {
                            m_rentalVehicalManagement->displayCar();
                            break;
                        }
                        case exitVehical:
                            break;

                        }
                        break;
                    }

                    case book:
                    {
                        cout<<endl<<"1.Book Bike"<<endl<<"2. Book Car"<<endl;
                        cout<<endl<<"Enter your choice : ";
                        int vehical;
                        cin>>vehical;
                        switch(vehical)
                        {
                        case Bike:
                        {
                            m_rentalVehicalManagement->bookBike();
                            break;
                        }
                        case Car:
                        {
                            m_rentalVehicalManagement->bookCar();
                            break;
                        }
                        }
                        break;
                    }
                    case Sort:
                    {
                        cout<<endl<<"1.Sort Bike"<<endl<<"2. Sort Car"<<endl;
                        cout<<endl<<"Enter your choice : ";
                        int vehical;
                        cin>>vehical;
                        switch(vehical)
                        {
                        case Bike:
                        {
                            m_rentalVehicalManagement->sortBike();
                            break;
                        }
                        case Car:
                        {
                            m_rentalVehicalManagement->sortCar();
                            break;
                        }
                        }
                        break;
                    }
                    case search:
                    {
                        cout<<endl<<"1.Search Bike"<<endl<<"2. Search Car"<<endl;
                        cout<<endl<<"Enter your choice : ";
                        int vehical;
                        cin>>vehical;
                        switch(vehical)
                        {
                        case Bike:
                        {
                            m_rentalVehicalManagement->searchBike();
                            break;
                        }
                        case Car:
                        {
                            m_rentalVehicalManagement->searchCar();
                            break;
                        }
                        }
                        break;
                    }
                    case History:
                    {
                        for(auto userList: m_userList)
                        {
                            for(auto rentalList :  m_rentalVehicalManagement->getRentalList() )
                            {
                                if(userList->getLoginName() == rentalList->getName())
                                {
                                    cout<<endl<<"****************************************Displaying History*************************************************"<<endl <<endl;
                                    cout<< endl<<setw(20)<<"Customer_Name"<<setw(20)<<"Customer_Mobile "<<setw(20)<<"Customer_Age "<<setw(20)<<"Customer_Booking_Id"<<setw(20)<<"Vehical_Type"<<setw(20)<<"Payment_Type"<<setw(20)<<"Vehical_Id"<<setw(20)<<"Vehical_Brand"<<setw(20)<<"Vehical_Model"<<setw(20)<<"vehical_Number"<<setw(20)<<"Vehical_Cost"<<setw(20)<<"Vehical_Status"<<setw(20)<<"Vehical Duration"<<setw(20)<<"UPI_Id"<<setw(20)<<"Amount_Paid"<<setw(20)<<"Balance_Amount"<<setw(20)<<"Payment_Status"<<setw(20)<<"Transaction_ID"<<endl<<endl;
                                    cout<<setw(20)<<rentalList->getName() <<setw(15)<<rentalList->getMobile()<<setw(20)<<rentalList->getAge()<<setw(20)<<rentalList->getBookingId()<<setw(20)<<rentalList->getVehicalType()<<setw(25)<<rentalList->getPaymentType()<<setw(20)<<rentalList->getId()<<setw(20)<<rentalList->getBrand()<< setw(20)<<rentalList->getModel()<<setw(15)<<rentalList->getVehicalNumber() << setw(20)<<rentalList->getCost()<<setw(20)<< rentalList->getStatus()<<setw(15)<<rentalList->getDuration()<<"  day"<<setw(20)<<rentalList->getUPIid()<<setw(20)<<rentalList->getAmount()<<setw(20)<<rentalList->getBalance()<<setw(20)<<rentalList->getPaymentStatus()<<setw(20)<<rentalList->getTransactionId()<<setw(20)<<endl<<endl;
                                }
                            }
                        }
                        break;
                    }
                    case ExitChoice:
                    {
                        m_rentalVehicalManagement->saveData();
                        break;
                    }

                    }
                    return;
                }
            }
        }

        if(userFound == 0)
        {
            cout<<"Incorrect User Login Credentials ,try again"<<endl;
            cout<<endl<<"Enter 1 to exit and 0 to continue : ";
            cin>>exit;
        }
        if(exit == 1)
        {
            return;
        }
    }
}

void LoginManagementUser::adminLogin()
{

    int userId,userPassword;
    int adminFound = 0;
    int exit = 0;
    while(true)
    {
        cout<<endl<<"___________Admin Login Page___________"<<endl;

        cout<<endl<<"Enter User ID :";
        cin>>userId;
        cin.ignore();

        cout<<"Enter User Password :";
        cin>>userPassword;
        cin.ignore();

        for (auto adminList : m_adminList)
        {
            if(adminList->getLoginId() == userId && adminList->getLoginPassword() == userPassword && adminList->getStatus() == 1)
            {
                m_rentalVehicalManagement = new RentalVehicalManagement;
                cout<<endl<<"******Login Successfull******"<<endl;

                adminFound = 1;
                m_rentalVehicalManagement->menu();
                return;
            }
        }
        if (adminFound == 0)
        {
            cout<<"Incorrect Admin Login Credentials"<<endl;
            cout<<"Enter 1 to try again and 0 to exit: ";
            cin>>exit;
        }
        if(exit == 0)
        {
            return;
        }
    }
}

void LoginManagementUser::loginMenu()
{


    cout<<endl<<"___________________Login Page___________________"<<endl;
    while(true)
    {

        cout<<endl<<endl<<"1.Admin"<<endl<<"2.User"<<endl<<"3.Exit"<<endl;
        cout<<endl<<"Select your Choice : ";

        int login;
        cin>>login;
        switch(login)
        {
        case Admin:
        {
            cout<<endl<<"1. Admin Login"<<endl<<"2. Add Admin"<<endl<<"3. Delete Admin"<<endl<<"4. Exit"<<endl;
            cout<<endl<<"Select your choice :";

            int usecase;
            cin>>usecase;
            switch(usecase)
            {
            case AdminLogin:
            {
                this->adminLogin();
                break;
            }
            case AddAdmin:
            {
                this->addAdmin();
                break;
            }
            case DeleteAdmin:
            {
                this->deleteAdmin();
                break;
            }
            case AdminExit:
                break;
            }

            break;
        }
        case User:
        {
            cout<<endl<<"1.User Registration"<<endl<<"2.User Login"<<endl<<"3.Exit"<<endl;
            cout<<endl<<"Select Choice : ";
            int user;
            cin>>user;
            switch(user)
            {
            case UserRegistration:
            {
                this->userRegistration();
                break;
            }
            case UserLogin:
            {
                this->userLogin();
                break;
            }
            case UserExit:
                break;
            }

            break;
        }
        case ExitLogin:
        {

            m_fileOperations->writeUserData(m_userList);
            m_fileOperations->writeAdminData(m_adminList);
            cout<<"Saved Admin And User Data ,Exiting....."<<endl;
            return;
        }
        }
    }
}

void LoginManagementUser::deleteAdmin()
{

    while(true)
    {
        int loginId = 12345;
        int loginPassword = 12345;
        cout<<endl<<"Enter Management login Id: ";
        int id;
        cin>>id;
        cout<<"Enter Management Login Password: ";
        int password;
        cin>>password;
        int adminIdFound = 0;
        int exitLogin = 0;

        if(loginId == id && loginPassword == password)
        {
            cout<<endl<<"_________Login Successful_________"<<endl;
            while(true)
            {
                int exit = 0;
                int id;
                cout<<endl<<"Enter  Admin Id to delete :";
                cin>>id;
                for(auto adminList : m_adminList)
                {
                    if(adminList->getLoginId() == id && adminList->getStatus() == 1)
                    {
                        adminList->setStatus(0);
                        adminIdFound = 1;
                        return;
                    }
                }
                if(adminIdFound == 0)
                {
                    cout<<"Entered Admin ID : "<<id<< " not found"<<endl;
                    cout<<"Enter 1 to continue and 0 to exit"<<endl;
                    cin>>exit;
                }
                if(exit == 0)
                {
                    return;
                }
            }
        }
        else
        {
            cout<<endl<<"InCorrect Login Details"<<endl;
            cout<<"Enter 1 to continue and 0 to exit"<<endl;
            cin>>exitLogin;
            if(exitLogin == 0)
            {
                return;
            }
        }

    }
}

























