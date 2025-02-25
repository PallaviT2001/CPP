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
