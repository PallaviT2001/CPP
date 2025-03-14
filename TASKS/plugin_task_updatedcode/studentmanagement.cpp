#include "studentmanagement.h"

StudentManagement::StudentManagement() : fileHandler(nullptr)
{}

StudentManagement::~StudentManagement()
{
    cout<<"student management destructor called"<<endl;
    delete fileHandler;
}

void StudentManagement::addStudent()
{
    string name, mobile;
    int age, usn;

    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter USN: ";
    cin >> usn;
    cout << "Enter Mobile Number: ";
    cin >> mobile;

    students.push_back(Student(name, age, usn, mobile));
}

void StudentManagement::saveData(int choice) {
    delete fileHandler;
    if(choice==1)
    {
        fileHandler=new TXT;
    }
    else
    {
        fileHandler=new CSV;
    }
    fileHandler->writeData(students);

}

void StudentManagement::loadData(int choice) {
    delete fileHandler;
    if(choice==1)
    {
        fileHandler = new TXT;

    }
    else
    {
        fileHandler = new CSV();

    }
    students = fileHandler->readData();
}

void StudentManagement::display()
{
    for (const auto& student : students)
    {
        student.display();
    }
}
