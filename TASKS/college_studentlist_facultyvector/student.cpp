#include "college.h"
using namespace std;


Student::Student(int id, string name, string branch) : m_id(id), m_name(name), m_branch(branch)
{
    cout<<"student parameterized constructor called"<<endl;
}

int Student::getId() const
{
    return m_id;
}

void Student::setDetails(string name, string branch)
{
    m_name = name;
    m_branch = branch;
}

void Student::display() const
{
    cout << "ID: " << m_id << ", Name: " << m_name << ", Branch: " << m_branch << endl;
}

