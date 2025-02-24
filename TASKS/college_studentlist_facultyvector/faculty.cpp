#include "college.h"
using namespace std;
#include <iostream>


Faculty::Faculty(int id, string name, string dept) : m_id(id), m_name(name), m_dept(dept)
{

}

int Faculty::getId() const
{
    return m_id;
}


void Faculty::setDetails(string name, string dept)
{
    m_name = name;
    m_dept = dept;
}


void Faculty::display() const
{
    cout << "ID: " << m_id << ", Name: " << m_name << ", Dept: " << m_dept << endl;
}


void College::addFaculty(int id, string name, string dept)
{
    m_faculties.emplace_back(id, name, dept);
}


void College::deleteFaculty(int id)
{
    for (auto it = m_faculties.begin(); it != m_faculties.end(); ++it)
    {
        if (it->getId() == id)
        {
            m_faculties.erase(it);
            cout << "Faculty with ID " << id << " has been removed.\n";
            return;
        }
    }
    cout << "Faculty with ID " << id << " not found!\n";
}


void College::updateFaculty(int id, string name, string dept)
{
    for (auto &faculty : m_faculties)
    {
        if (faculty.getId() == id)
        {
            faculty.setDetails(name, dept);
            cout << "Faculty details updated.\n";
            return;
        }
    }
    cout << "Faculty with ID " << id << " not found!\n";
}


void College::displayFaculties() const
{
    for (const auto &faculty : m_faculties)
    {
        faculty.display();
    }
}
