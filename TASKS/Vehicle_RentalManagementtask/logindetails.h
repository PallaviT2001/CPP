#ifndef LOGINDETAILS_H
#define LOGINDETAILS_H
#include <iostream>
using namespace std;

class LoginDetails
{
public:
    LoginDetails();
    ~LoginDetails();

    virtual int getLoginId() = 0;
    virtual string getLoginName() = 0;
    virtual int getLoginPassword() = 0;
    virtual int getStatus() = 0;
    virtual void setStatus(int status) = 0;

protected:
    int m_loginId;
    string m_loginName;
    int m_loginPassword;
    int m_status;
};

#endif // LOGINDETAILS_H
