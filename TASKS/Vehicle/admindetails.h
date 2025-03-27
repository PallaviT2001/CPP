#ifndef ADMINDETAILS_H
#define ADMINDETAILS_H
#include <iostream>
#include "logindetails.h"

using namespace std;
class AdminDetails:public LoginDetails
{
public:
    AdminDetails();
    AdminDetails(string name , int id, int password, int status);
    ~AdminDetails();


    int getLoginId();
    string getLoginName();
    int getLoginPassword();
    int getStatus();
    void setStatus(int status);
};

#endif // ADMINDETAILS_H
