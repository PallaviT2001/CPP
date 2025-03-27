#include "admindetails.h"

AdminDetails::AdminDetails()
{
    cout<<"Admin Details Constructor Called"<<endl;
}

AdminDetails::AdminDetails(string name, int id, int password,int status)
{
    cout<<"Admin Details Parameterized Constructor Called"<<endl;

    m_loginName = name;
    m_loginId = id;
    m_loginPassword = password;
    m_status = status;
}

AdminDetails::~AdminDetails()
{
    cout<<"Admin Details Destructor Called"<<endl;
}

int AdminDetails::getLoginId()
{
    return m_loginId;
}

string AdminDetails::getLoginName()
{
    return m_loginName;
}

int AdminDetails::getLoginPassword()
{
    return m_loginPassword;
}
int AdminDetails::getStatus()
{
    return m_status;
}

void AdminDetails::setStatus(int status)
{
    m_status = status;

}
