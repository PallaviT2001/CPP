#include "userdetails.h"

UserDetails::UserDetails()
{
    cout<<"User Details Constructor Called"<<endl;
}

UserDetails::UserDetails(string name, int id, int password, int status)
{
    cout<<"User Details  Parameterized Constructor Called"<<endl;

    m_loginName = name;
    m_loginId = id;
    m_loginPassword = password;
    m_status = status;
}

UserDetails::~UserDetails()
{
    cout<<"User Details Destructor Called"<<endl;
}

int UserDetails::getLoginId()
{
    return m_loginId;
}

string UserDetails::getLoginName()
{
    return m_loginName;
}

int UserDetails::getLoginPassword()
{
    return m_loginPassword;
}

int UserDetails::getStatus()
{
    return m_status;
}

void UserDetails::setStatus(int status)
{
    m_status = status;
}
