#include "admins.h"
#include <iostream>
using namespace std;

Admins::Admins()
{
    std::cout<<"Admin Constructor Called"<<std::endl;
}

Admins::~Admins()
{
    std::cout<<"Admin Destructor Called"<<std::endl;
}

/*Admins::Admins(Admins &admin)
{
    cout<<"Admin class copy constructor called"<<endl;
}*/

Admins::Admins(std::string Id, std::string password, std::string name)
{
    std::cout<<"Admin Parameterized Constructor Called"<<std::endl;
    this->m_Id = Id;
    this->m_Password = password;
    this->m_adminName = name;
}

std::string Admins::getId()
{
    return m_Id;
}

std::string Admins::getPassword()
{
    return m_Password;
}

std::string Admins::getName()
{
    return m_adminName;
}

void Admins::setId(std::string Id)
{
    this->m_Id = Id;
}

void Admins::setPassword(std::string password)
{
    this->m_Password = password;
}

void Admins::setName(std::string name)
{
    this->m_adminName = name;
}
