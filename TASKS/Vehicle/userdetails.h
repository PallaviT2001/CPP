#ifndef USERDETAILS_H
#define USERDETAILS_H
#include <iostream>
using namespace std;
#include "logindetails.h"

class UserDetails:public LoginDetails
{
public:
    UserDetails();
    UserDetails(string name, int id, int password, int  status);
    ~UserDetails();

    int getLoginId();
    string getLoginName();
    int getLoginPassword();
    int getStatus();
    void setStatus(int status);
};

#endif // USERDETAILS_H
