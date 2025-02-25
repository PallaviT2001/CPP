#include "college.h"

College::College()
{
    cout<<"college parameterized constructor called"<<endl;
}

void College::addStudent(int id, string name, string branch)
{
    m_students.emplace_back(id, name, branch);
}


void College::deleteStudent(int id)
{
    for (auto it = m_students.begin(); it != m_students.end(); ++it)
    {
        if (it->getId() == id)
        {
            m_students.erase(it);
            cout << "Student with ID " << id << " has been removed.\n";
            return;
        }
    }
    cout << "Student with ID " << id << " not found!\n";
}


void College::updateStudent(int id)
{
    for (auto &student : m_students)
    {
        if (student.getId() == id)
        {
            string name,branch;
            cout<<"enter new name"<<endl;
            cin>>name;
            cout<<"enter new branch"<<endl;
            cin>>branch;
            student.setDetails(name, branch);
            cout << "Student details updated.\n";
            return;
        }
    }
    cout << "Student with ID " << id << " not found!\n";
}


void College::displayStudents() const
{
    for (const auto &student : m_students)
    {
        student.display();
    }
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


void College::updateFaculty(int id)
{
    for (auto &faculty : m_faculties)
    {
        if (faculty.getId() == id)
        {
            string name,dept;
            cout<<"enter new name"<<endl;
            cin>>name;
            cout<<"enter new branch"<<endl;
            cin>>dept;
            //faculty.setDetails(name, dept);
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

void College::findstudent(int id) const
{
    for (auto it = m_students.begin(); it != m_students.end(); ++it)
    {
        if (it->getId() == id)
        {
            string name,branch;
            cout << "student with ID found"<<name<<" "<<branch<<endl;
            return;
        }
    }
    cout <<"student with id not found!\n";
}



void College::findfaculty(int id) const
{
    for (auto it = m_faculties.begin(); it != m_faculties.end(); ++it)
    {
        if (it->getId() == id)
        {
            string name,dept;
            cout <<"faculty with id found"<<name<<" "<<dept<<endl;
            return;
        }
    }
    cout <<"faculty with id not found!\n";
}




