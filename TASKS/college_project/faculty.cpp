#include "faculty.h"
#include <iostream>
using namespace std;

Faculty::Faculty()
{
    cout<<"faculty constructor called"<<endl;
}

Faculty::~Faculty()
{
    cout<<"Faculty destructor called"<<endl;
}

Faculty::Faculty(int id, string name,string department)
{
    this->id=id;
    this->name=name;
    this->department=department;
    cout<<"faculty details are"<<id<<" "<<name<<" "<<department<<" "<<endl;
}
void Faculty::display() const
{
    cout<<id<<" "<<name<<" "<<department<<endl;
}

void Faculty::displayfaculty() const
{
    for(const auto &faculty:facultylist)
    {
        faculty.display();
    }
}
void Faculty::addfaculty(int id, string name,string department)
{
    facultylist.push_back(Faculty(id,name,department));
}

void Faculty::deletefaculty(int id)
{
    for(auto i=facultylist.begin();i!=facultylist.end();++i)
    {
        if(i->getid()==id)
        {
            facultylist.erase(i);
            cout<<"faculty with id"<< i->getid()<<"removed"<<endl;
            return;
        }
    }
    cout<<"faculty with id not found"<<endl;
}

void Faculty::updatefaculty(int id)
{
    for(auto &faculty:facultylist)
    {
        if(faculty.getid()==id)
        {
            string name;
            string department;
            cout<<"enter new name"<<endl;
            cin>>name;
            cout<<"enter new department"<<endl;
            cin>>department;
            faculty.setdetails(name,department);
            cout<<"faculty details upadted"<<endl;
            return;
        }
    }
    cout<<"faculty id not found to update"<<endl;
}

void Faculty::findfaculty(int id)
{
    for(auto i=facultylist.begin();i!=facultylist.end();++i)
    {
        if(i->getid()==id)
        {
            cout<<"faculty found"<<endl;
            return;
        }
    }
    cout<<"faculty not found"<<endl;
}

int Faculty::getid()
{
    return id;
}
void Faculty::setdetails(string name,string department)
{
    this->name=name;
    this->department=department;
}

