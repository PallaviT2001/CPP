#include "college_management.h"
#include "college.h"
#include "student.h"
#include <list>
#include <vector>

College_management::College_management()
{
    cout<<"college managemnet constructor called"<<endl;
}

College_management::~College_management()
{
    cout<<"college destructor called"<<endl;
}

void College_management::addStudent(int id, string name,int age)
{
    m_students->emplace_back(id, name,age);
    cout<<"Student Added"<<endl;
}

void College_management::deleteStudent(int id)
{
    for (auto it = m_students->begin(); it != m_students->end(); ++it)
    {
        if (it->getId() == id)
        {
            m_students->erase(it);
            cout << "Student with ID " << id << " has been removed.\n";
            return;
        }
    }
    cout << "Student with ID " << id << " not found!\n";
}


void College_management::updateStudent(int id)
{
    for (auto &student : *m_students)
    {
        if (student.getId() == id)
        {
            cout<<"before age"<<student.getage();
            string name;
            int age;
            cout<<"enter new name"<<endl;
            cin>>name;
            cout<<"enter new branch"<<endl;
            cin>>age;
            student.setDetails(name,age);
            cout << "Student details updated.\n";
            return;
        }
    }
    cout << "Student with ID " << id << " not found!\n";
}


void College_management::displayStudents()
{
    for(auto i= m_students->begin();i!= m_students->end();i++)
    {
        cout<<"Id:" <<i->getId();
        cout<<"Name:" <<i->getname();
        cout<<"age:"<<i->getage();
    }
}

void College_management::addFaculty(int id, string name,int age)
{
    m_faculties->emplace_back(id, name, age);
}


void College_management::deleteFaculty(int id)
{
    for (auto it = m_faculties->begin(); it != m_faculties->end(); ++it)
    {
        if (it->getId() == id)
        {
            m_faculties->erase(it);
            cout << "Faculty with ID " << id << " has been removed.\n";
            return;
        }
    }
    cout << "Faculty with ID " << id << " not found!\n";
}


void College_management::updateFaculty(int id)
{
    for (auto &faculty : *m_faculties)
    {
        if (faculty.getId() == id)
        {
            string name;
            int age;
            cout<<"enter new name"<<endl;
            cin>>name;
            cout<<"enter new branch"<<endl;
            cin>>age;
            faculty.setDetails(name,age);
            cout << "Faculty details updated.\n";
            return;
        }
    }
    cout << "Faculty with ID " << id << " not found!\n";
}


void College_management::displayFaculties()
{
    for (auto &faculty : *m_faculties)
    {
        faculty.display();
    }
}

