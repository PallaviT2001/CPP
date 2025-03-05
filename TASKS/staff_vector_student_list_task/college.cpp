#ifndef COLLEGE_H
#define COLLEGE_H
using namespace std;
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include "student.h"
#include "faculty.h"

class College
{
private:
    list<Student> m_students;
    vector<Faculty> m_faculties;
public:
    College();
    ~College();
};

#endif

#ifndef COLLEGE_MANAGEMENT_H
#define COLLEGE_MANAGEMENT_H
#include <iostream>
#include <list>
#include <vector>
using namespace std;
#include "personaldetails.h"

class College_management:public Personaldetails
{
public:
    College_management();
    ~College_management();

    void addStudent(int id,string name,int age,int contactnumber,string branch);
    void deleteStudent(int id);
    void updateStudent(int id);
    void displayStudents() const;
    void findstudent(int id)const;

    void addFaculty(int id,string name,int age,int contactnumber,string department);
    void deleteFaculty(int id);
    void updateFaculty(int id);
    void displayFaculties() const;
    void findfaculty(int id) const;
};

#endif

#ifndef FACULTY_H
#define FACULTY_H
#include "personaldetails.h"
#include <vector>

class Faculty:public Personaldetails
{
private:
    string m_department;
    vector<Faculty> m_faculties;
public:
    Faculty();
    ~Faculty();
    Faculty(int id,string name,int age,int contactnumber,string department);
    int getId()const;
    void setDetails(string department);
    void display() const;
};
#endif

#ifndef PERSONALDETAILS_H
#define PERSONALDETAILS_H
#include <iostream>
using namespace std;

class Personaldetails
{
private:
    int m_id;
    string m_name;
    int m_age;
    int m_contactnumber();
public:
    Personaldetails();
    ~Personaldetails();
    Personaldetails(int id,string name,int age,int contactnumber);
    int getId() const;
    void setDetails(int id,string name,int age,int contactnumber);
};

#endif

#ifndef STUDENT_H
#define STUDENT_H
#include "personaldetails.h"
#include <list>

class Student:public Personaldetails
{
private:
    string m_branch;
    list<Student> m_students;
public:
    Student();
    ~Student();
    Student(int id, string name,int age,int contactnumber,string branch);
    int getId() const;
    void setDetails(string branch);
    void display() const;
};

#endif



























#include "college.h"

College::College()
{
    cout<<"college constructor called"<<endl;
}

College::~College()
{
    cout<<"college destructor called"<<endl;
}

#include "college_management.h"

College_management::College_management()
{
    cout<<"college constructor called"<<endl;
}

College_management::~College_management()
{
    cout<<"College management destructor called"<<endl;
}

void College_management::addStudent(int id, string name,int age,int contactnumber,string branch)
{
    m_students.emplace_back(id, name,age,contactnumber,branch);
}


void College_management::deleteStudent(int id)
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


void College_management::updateStudent(int id)
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


void College_management::displayStudents() const
{
    for (const auto &student : m_students)
    {
        student.display();
    }
}

void College::addFaculty(int id, string name,int age,int contactnumber,string department)
{
    m_faculties.emplace_back(id, name,age,contactnumber,department);
}


void College_management::deleteFaculty(int id)
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


void College_management::updateFaculty(int id)
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
            faculty.setDetails(name, dept);
            cout << "Faculty details updated.\n";
            return;
        }
    }
    cout << "Faculty with ID " << id << " not found!\n";
}


void College_management::displayFaculties() const
{
    for (const auto &faculty : m_faculties)
    {
        faculty.display();
    }
}

void College_management::findstudent(int id) const
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



void College_management::findfaculty(int id) const
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


#include "college.h"
using namespace std;
#include <iostream>

Faculty::Faculty()
{
    cout<<"faculty constructor called"<<endl;
}

Faculty::~Faculty()
{
    cout<<"Faculty destructor called"<<endl;
}

Faculty::Faculty(int id,string name,int age,int contactnumber,string department):m_id(id),m_name(name),m_age(age),m_contactnumber(contactnumber)
{
    department=m_department;
}

int Faculty::getId() const
{
    return m_id;
}

void Faculty::setDetails(string department)
{

    m_department = department;
}


void Faculty::display() const
{
    cout<<m_department<<endl;
}

#include "college.h"
#include "student.h"
#include "faculty.h"
#include "College_management.h";
#include "personaldetails.h"
using namespace std;

int main() {
    College college;
    int choice, id,age,contactnumber;
    string name, department, branch;

    while (true) {
        cout << "\n===== College Management System =====\n";
        cout << "1. Add Faculty\n2. Delete Faculty\n3. Update Faculty\n4. Display Faculties\n";
        cout << "5. Add Student\n6. Delete Student\n7. Update Student\n8. Display Students\n";
        cout << "9. find student\n10. find faculty\n11. exit\n";

        cout << "Enter your choice:";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Faculty ID, Name, Department: ";
            cin >> id >> name >> age >> contactnumber>> department<<endl;
            college.addFaculty(id, name ,age ,contactnumber,department);
            break;

        case 2:
            cout << "Enter Faculty ID to Delete: ";
            cin >> id;
            college.deleteFaculty(id);
            break;

        case 3:
            cout << "Enter Faculty ID to update fields";
            cin >> id;
            college.updateFaculty(id);
            break;

        case 4:
            college.displayFaculties();
            break;

        case 5:
            cout << "Enter Student ID, Name,age, contactnumber,branch<<endl;
            cin >> id >> name >> age >> contactnumber>> department<<endl;
            college.addFaculty(id, name ,age ,contactnumber,department);
            break;

        case 6:
            cout << "Enter Student ID to Delete: ";
            cin >> id;
            college.deleteStudent(id);
            break;

        case 7:
            cout << "Enter Student ID to update fields ";
            cin >> id;
            college.updateStudent(id);
            break;

        case 8:
            college.displayStudents();
            break;

        case 9:
            cout<<"enter student id to find details"<<endl;
            cin>>id;
            college.findstudent(id);
            break;

        case 10:
            cout<<"enter faculty id to find details"<<endl;
            cin>>id;
            college.findfaculty(id);
            break;

        case 11:
            cout << "Exiting...\n";
            return 0;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}

#include "personaldetails.h"
#include <iostream>
using namespace std;

Personaldetails::Personaldetails()
{
    cout<<"personal details constructor called"<<endl;
}

Personaldetails::~Personaldetails()
{
    cout<<"personal details destructor called"<<endl;
}

Personaldetails::Personaldetails(int id, string name, int age, int contactnumber)
{
    m_id=id;
    m_name=name;
    m_age=age;
    m_contactnumber=contactnumber;
}

int Personaldetails::getId() const
{
    return m_id;
}

void Personaldetails::setDetails(int id,string name,int age,int contactnumber)
{
    m_id=id;
    m_name = name;
    m_age=age;
    m_contactnumber=contactnumber;
}

#include "college.h"
using namespace std;

Student::Student()
{
    cout<<"student constructor called"<<endl;
}

Student::~Student()
{
    cout<<"student destructor called"<<endl;
}

Student::Student(int id, string name,int age,int contactnumber,string branch):m_id(id), m_name(name), m_age(age),m_contactnumber(contactnumber)
{
    cout<<"student parameterized constructor called"<<endl;
}

int Student::getId() const
{
    return m_id;
}

void Student::setDetails(string branch)
{
    m_branch = branch;
}

void Student::display() const
{
    cout<<m_branch<<endl;
}

D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college.h:3: warning: using directive refers to implicitly-defined namespace 'std'
In file included from D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/faculty.cpp:1:
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college.h:3:17: warning: using directive refers to implicitly-defined namespace 'std'
    3 | using namespace std;
      |                 ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\faculty.cpp:15: error: member initializer 'm_id' does not name a non-static data member or base class
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/faculty.cpp:15:82: error: member initializer 'm_id' does not name a non-static data member or base class
   15 | Faculty::Faculty(int id,string name,int age,int contactnumber,string department):m_id(id),m_name(name),m_age(age),m_contactnumber(contactnumber)
      |                                                                                  ^~~~~~~~
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\faculty.cpp:15: error: member initializer 'm_name' does not name a non-static data member or base class
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/faculty.cpp:15:91: error: member initializer 'm_name' does not name a non-static data member or base class
   15 | Faculty::Faculty(int id,string name,int age,int contactnumber,string department):m_id(id),m_name(name),m_age(age),m_contactnumber(contactnumber)
      |                                                                                           ^~~~~~~~~~~~
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\faculty.cpp:15: error: member initializer 'm_age' does not name a non-static data member or base class
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/faculty.cpp:15:104: error: member initializer 'm_age' does not name a non-static data member or base class
   15 | Faculty::Faculty(int id,string name,int age,int contactnumber,string department):m_id(id),m_name(name),m_age(age),m_contactnumber(contactnumber)
      |                                                                                                        ^~~~~~~~~~
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\faculty.cpp:15: error: member initializer 'm_contactnumber' does not name a non-static data member or base class
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/faculty.cpp:15:115: error: member initializer 'm_contactnumber' does not name a non-static data member or base class
   15 | Faculty::Faculty(int id,string name,int age,int contactnumber,string department):m_id(id),m_name(name),m_age(age),m_contactnumber(contactnumber)
      |                                                                                                                   ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\faculty.cpp:22: error: 'm_id' is a private member of 'Personaldetails'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/faculty.cpp:22:12: error: 'm_id' is a private member of 'Personaldetails'
   22 |     return m_id;
      |            ^
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/personaldetails.h:9:9: note: declared private here
    9 |     int m_id;
      |         ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\personaldetails.cpp:20: error: reference to non-static member function must be called; did you mean to call it with no arguments?
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/personaldetails.cpp:20:5: error: reference to non-static member function must be called; did you mean to call it with no arguments?
   20 |     m_contactnumber=contactnumber;
      |     ^~~~~~~~~~~~~~~
      |                    ()
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\personaldetails.cpp:20: error: expression is not assignable
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/personaldetails.cpp:20:20: error: expression is not assignable
   20 |     m_contactnumber=contactnumber;
      |     ~~~~~~~~~~~~~~~^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\personaldetails.cpp:33: error: reference to non-static member function must be called; did you mean to call it with no arguments?
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/personaldetails.cpp:33:5: error: reference to non-static member function must be called; did you mean to call it with no arguments?
   33 |     m_contactnumber=contactnumber;
      |     ^~~~~~~~~~~~~~~
      |                    ()
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\personaldetails.cpp:33: error: expression is not assignable
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/personaldetails.cpp:33:20: error: expression is not assignable
   33 |     m_contactnumber=contactnumber;
      |     ~~~~~~~~~~~~~~~^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college.h:3: warning: using directive refers to implicitly-defined namespace 'std'
In file included from D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/student.cpp:1:
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college.h:3:17: warning: using directive refers to implicitly-defined namespace 'std'
    3 | using namespace std;
      |                 ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\student.cpp:14: error: member initializer 'm_id' does not name a non-static data member or base class
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/student.cpp:14:79: error: member initializer 'm_id' does not name a non-static data member or base class
   14 | Student::Student(int id, string name,int age,int contactnumber,string branch):m_id(id), m_name(name), m_age(age),m_contactnumber(contactnumber)
      |                                                                               ^~~~~~~~
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\student.cpp:14: error: member initializer 'm_name' does not name a non-static data member or base class
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/student.cpp:14:89: error: member initializer 'm_name' does not name a non-static data member or base class
   14 | Student::Student(int id, string name,int age,int contactnumber,string branch):m_id(id), m_name(name), m_age(age),m_contactnumber(contactnumber)
      |                                                                                         ^~~~~~~~~~~~
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\student.cpp:14: error: member initializer 'm_age' does not name a non-static data member or base class
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/student.cpp:14:103: error: member initializer 'm_age' does not name a non-static data member or base class
   14 | Student::Student(int id, string name,int age,int contactnumber,string branch):m_id(id), m_name(name), m_age(age),m_contactnumber(contactnumber)
      |                                                                                                       ^~~~~~~~~~
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\student.cpp:14: error: member initializer 'm_contactnumber' does not name a non-static data member or base class
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/student.cpp:14:114: error: member initializer 'm_contactnumber' does not name a non-static data member or base class
   14 | Student::Student(int id, string name,int age,int contactnumber,string branch):m_id(id), m_name(name), m_age(age),m_contactnumber(contactnumber)
      |                                                                                                                  ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\student.cpp:21: error: 'm_id' is a private member of 'Personaldetails'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/student.cpp:21:12: error: 'm_id' is a private member of 'Personaldetails'
   21 |     return m_id;
      |            ^
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/personaldetails.h:9:9: note: declared private here
    9 |     int m_id;
      |         ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college_management.cpp:15: error: use of undeclared identifier 'm_students'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:15:5: error: use of undeclared identifier 'm_students'
   15 |     m_students.emplace_back(id, name,age,contactnumber,branch);
      |     ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college_management.cpp:21: error: use of undeclared identifier 'm_students'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:21:20: error: use of undeclared identifier 'm_students'
   21 |     for (auto it = m_students.begin(); it != m_students.end(); ++it)
      |                    ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college_management.cpp:21: error: use of undeclared identifier 'm_students'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:21:46: error: use of undeclared identifier 'm_students'
   21 |     for (auto it = m_students.begin(); it != m_students.end(); ++it)
      |                                              ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college_management.cpp:25: error: use of undeclared identifier 'm_students'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:25:13: error: use of undeclared identifier 'm_students'
   25 |             m_students.erase(it);
      |             ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college_management.cpp:36: error: use of undeclared identifier 'm_students'; did you mean 'student'?
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:36:26: error: use of undeclared identifier 'm_students'; did you mean 'student'?
   36 |     for (auto &student : m_students)
      |                          ^~~~~~~~~~
      |                          student
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:36:16: note: 'student' declared here
   36 |     for (auto &student : m_students)
      |                ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college_management.cpp:36: error: invalid range expression of type 'auto'; no viable 'begin' function available
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:36:24: error: invalid range expression of type 'auto'; no viable 'begin' function available
   36 |     for (auto &student : m_students)
      |                        ^ ~~~~~~~~~~
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college_management.cpp:56: error: use of undeclared identifier 'm_students'; did you mean 'student'?
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:56:32: error: use of undeclared identifier 'm_students'; did you mean 'student'?
   56 |     for (const auto &student : m_students)
      |                                ^~~~~~~~~~
      |                                student
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:56:22: note: 'student' declared here
   56 |     for (const auto &student : m_students)
      |                      ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college_management.cpp:56: error: invalid range expression of type 'const auto'; no viable 'begin' function available
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:56:30: error: invalid range expression of type 'const auto'; no viable 'begin' function available
   56 |     for (const auto &student : m_students)
      |                              ^ ~~~~~~~~~~
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college_management.cpp:62: error: use of undeclared identifier 'College'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:62:6: error: use of undeclared identifier 'College'
   62 | void College::addFaculty(int id, string name,int age,int contactnumber,string department)
      |      ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college_management.cpp:70: error: use of undeclared identifier 'm_faculties'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:70:20: error: use of undeclared identifier 'm_faculties'
   70 |     for (auto it = m_faculties.begin(); it != m_faculties.end(); ++it)
      |                    ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college_management.cpp:70: error: use of undeclared identifier 'm_faculties'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:70:47: error: use of undeclared identifier 'm_faculties'
   70 |     for (auto it = m_faculties.begin(); it != m_faculties.end(); ++it)
      |                                               ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college_management.cpp:74: error: use of undeclared identifier 'm_faculties'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:74:13: error: use of undeclared identifier 'm_faculties'
   74 |             m_faculties.erase(it);
      |             ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college_management.cpp:85: error: use of undeclared identifier 'm_faculties'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:85:26: error: use of undeclared identifier 'm_faculties'
   85 |     for (auto &faculty : m_faculties)
      |                          ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college_management.cpp:105: error: use of undeclared identifier 'm_faculties'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:105:32: error: use of undeclared identifier 'm_faculties'
  105 |     for (const auto &faculty : m_faculties)
      |                                ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college_management.cpp:113: error: use of undeclared identifier 'm_students'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:113:20: error: use of undeclared identifier 'm_students'
  113 |     for (auto it = m_students.begin(); it != m_students.end(); ++it)
      |                    ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college_management.cpp:113: error: use of undeclared identifier 'm_students'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:113:46: error: use of undeclared identifier 'm_students'
  113 |     for (auto it = m_students.begin(); it != m_students.end(); ++it)
      |                                              ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college_management.cpp:129: error: use of undeclared identifier 'm_faculties'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:129:20: error: use of undeclared identifier 'm_faculties'
  129 |     for (auto it = m_faculties.begin(); it != m_faculties.end(); ++it)
      |                    ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college_management.cpp:129: error: use of undeclared identifier 'm_faculties'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college_management.cpp:129:47: error: use of undeclared identifier 'm_faculties'
  129 |     for (auto it = m_faculties.begin(); it != m_faculties.end(); ++it)
      |                                               ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\college.h:3: warning: using directive refers to implicitly-defined namespace 'std'
In file included from D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/main.cpp:1:
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/college.h:3:17: warning: using directive refers to implicitly-defined namespace 'std'
    3 | using namespace std;
      |                 ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\main.cpp:4: warning: extra tokens at end of #include directive [-Wextra-tokens]
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/main.cpp:4:32: warning: extra tokens at end of #include directive [-Wextra-tokens]
    4 | #include "College_management.h";
      |                                ^
      |                                //
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\main.cpp:4: warning: non-portable path to file '"college_management.h"'; specified path differs in case from file name on disk [-Wnonportable-include-path]
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/main.cpp:4:10: warning: non-portable path to file '"college_management.h"'; specified path differs in case from file name on disk [-Wnonportable-include-path]
    4 | #include "College_management.h";
      |          ^~~~~~~~~~~~~~~~~~~~~~
      |          "college_management.h"
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\main.cpp:25: error: reference to overloaded function could not be resolved; did you mean to call it?
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/main.cpp:25:69: error: reference to overloaded function could not be resolved; did you mean to call it?
   25 |             cin >> id >> name >> age >> contactnumber>> department<<endl;
      |                                                                     ^~~~
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/ostream:1044:1: note: possible target for call
 1044 | endl(basic_ostream<_CharT, _Traits>& __os)
      | ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/cstddef:125:3: note: candidate template ignored: couldn't infer template argument '_Integer'
  125 |   operator<< (byte  __lhs, _Integer __shift) noexcept
      |   ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/ostream:1082:11: note: candidate template ignored: couldn't infer template argument '_Tp'
 1082 | _Stream&& operator<<(_Stream&& __os, const _Tp& __x)
      |           ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/__random/uniform_int_distribution.h:261:1: note: candidate template ignored: could not match 'basic_ostream' against 'basic_istream'
  261 | operator<<(basic_ostream<_CharT, _Traits>& __os,
      | ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/ostream:793:1: note: candidate template ignored: could not match 'basic_ostream' against 'basic_istream'
  793 | operator<<(basic_ostream<_CharT, _Traits>& __os, _CharT __c)
      | ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/ostream:800:1: note: candidate template ignored: could not match 'basic_ostream' against 'basic_istream'
  800 | operator<<(basic_ostream<_CharT, _Traits>& __os, char __cn)
      | ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/ostream:833:1: note: candidate template ignored: could not match 'basic_ostream' against 'basic_istream'
  833 | operator<<(basic_ostream<char, _Traits>& __os, char __c)
      | ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/ostream:840:1: note: candidate template ignored: could not match 'basic_ostream' against 'basic_istream'
  840 | operator<<(basic_ostream<char, _Traits>& __os, signed char __c)
      | ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/ostream:847:1: note: candidate template ignored: could not match 'basic_ostream' against 'basic_istream'
  847 | operator<<(basic_ostream<char, _Traits>& __os, unsigned char __c)
      | ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/ostream:854:1: note: candidate template ignored: could not match 'basic_ostream' against 'basic_istream'
  854 | operator<<(basic_ostream<_CharT, _Traits>& __os, const _CharT* __str)
      | ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/ostream:861:1: note: candidate template ignored: could not match 'basic_ostream' against 'basic_istream'
  861 | operator<<(basic_ostream<_CharT, _Traits>& __os, const char* __strn)
      | ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/ostream:907:1: note: candidate template ignored: could not match 'basic_ostream' against 'basic_istream'
  907 | operator<<(basic_ostream<char, _Traits>& __os, const char* __str)
      | ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/ostream:914:1: note: candidate template ignored: could not match 'basic_ostream' against 'basic_istream'
  914 | operator<<(basic_ostream<char, _Traits>& __os, const signed char* __str)
      | ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/ostream:922:1: note: candidate template ignored: could not match 'basic_ostream' against 'basic_istream'
  922 | operator<<(basic_ostream<char, _Traits>& __os, const unsigned char* __str)
      | ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/ostream:1090:1: note: candidate template ignored: could not match 'basic_ostream' against 'basic_istream'
 1090 | operator<<(basic_ostream<_CharT, _Traits>& __os,
      | ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/ostream:1098:1: note: candidate template ignored: could not match 'basic_ostream' against 'basic_istream'
 1098 | operator<<(basic_ostream<_CharT, _Traits>& __os,
      | ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/ostream:1107:1: note: candidate template ignored: could not match 'basic_ostream' against 'basic_istream'
 1107 | operator<<(basic_ostream<_CharT, _Traits>& __os, const error_code& __ec)
      | ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/ostream:1115:1: note: candidate template ignored: could not match 'basic_ostream' against 'basic_istream'
 1115 | operator<<(basic_ostream<_CharT, _Traits>& __os, shared_ptr<_Yp> const& __p)
      | ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/ostream:1127:1: note: candidate template ignored: could not match 'basic_ostream' against 'basic_istream'
 1127 | operator<<(basic_ostream<_CharT, _Traits>& __os, unique_ptr<_Yp, _Dp> const& __p)
      | ^
C:/Qt/Tools/llvm-mingw1706_64/include/c++/v1/ostream:1134:1: note: candidate template ignored: could not match 'basic_ostream' against 'basic_istream'
 1134 | operator<<(basic_ostream<_CharT, _Traits>& __os, const bitset<_Size>& __x)
      | ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\main.cpp:26: error: no member named 'addFaculty' in 'College'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/main.cpp:26:21: error: no member named 'addFaculty' in 'College'
   26 |             college.addFaculty(id, name ,age ,contactnumber,department);
      |             ~~~~~~~ ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\main.cpp:32: error: no member named 'deleteFaculty' in 'College'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/main.cpp:32:21: error: no member named 'deleteFaculty' in 'College'
   32 |             college.deleteFaculty(id);
      |             ~~~~~~~ ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\main.cpp:38: error: no member named 'updateFaculty' in 'College'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/main.cpp:38:21: error: no member named 'updateFaculty' in 'College'
   38 |             college.updateFaculty(id);
      |             ~~~~~~~ ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\main.cpp:42: error: no member named 'displayFaculties' in 'College'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/main.cpp:42:21: error: no member named 'displayFaculties' in 'College'
   42 |             college.displayFaculties();
      |             ~~~~~~~ ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\main.cpp:46: warning: missing terminating '"' character [-Winvalid-pp-token]
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/main.cpp:46:21: warning: missing terminating '"' character [-Winvalid-pp-token]
   46 |             cout << "Enter Student ID, Name,age, contactnumber,branch<<endl;
      |                     ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\main.cpp:46: error: expected expression
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\main.cpp:48: error: no member named 'addFaculty' in 'College'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/main.cpp:48:21: error: no member named 'addFaculty' in 'College'
   48 |             college.addFaculty(id, name ,age ,contactnumber,department);
      |             ~~~~~~~ ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\main.cpp:54: error: no member named 'deleteStudent' in 'College'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/main.cpp:54:21: error: no member named 'deleteStudent' in 'College'
   54 |             college.deleteStudent(id);
      |             ~~~~~~~ ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\main.cpp:60: error: no member named 'updateStudent' in 'College'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/main.cpp:60:21: error: no member named 'updateStudent' in 'College'
   60 |             college.updateStudent(id);
      |             ~~~~~~~ ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\main.cpp:64: error: no member named 'displayStudents' in 'College'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/main.cpp:64:21: error: no member named 'displayStudents' in 'College'
   64 |             college.displayStudents();
      |             ~~~~~~~ ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\main.cpp:70: error: no member named 'findstudent' in 'College'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/main.cpp:70:21: error: no member named 'findstudent' in 'College'
   70 |             college.findstudent(id);
      |             ~~~~~~~ ^
D:\QT PROGRAMS\C++\TASKS\college_studentlist_facultyvector\main.cpp:76: error: no member named 'findfaculty' in 'College'
D:/QT PROGRAMS/C++/TASKS/college_studentlist_facultyvector/main.cpp:76:21: error: no member named 'findfaculty' in 'College'
   76 |             college.findfaculty(id);
      |             ~~~~~~~ ^
:-1: error: ninja: build stopped: subcommand failed.
Error while building\deploying project college_studentlist_facultyvector (kit:-1: Desktop Qt 6.8.0 llvm-mingw 64-bit)








