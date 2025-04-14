#include "student.h"

Student::Student()
{
    cout<<"student constructor called"<<endl;
}

Student::~Student()
{
    cout<<"student destructor called"<<endl;
}

Student::Student(const string& name) : name(name)
{
    cout<<"Student parameterized constructor constructor called"<<endl;
}

string Student::getName()const
{
    return name;
}

void Student::requestBook(const string& bookTitle, Librarian& library)
{
    cout<<endl;
    cout<<name <<" is requesting the book "<< bookTitle <<endl;
    cout<<endl;

    if (library.issueBook(bookTitle))
    {
        cout<<"Book name: "<<bookTitle<<endl;
        cout<<"Student name: "<<name<<endl;
        cout<<"Book issued successfully "<<endl;
    }
    else
    {
        cout<<"Book is not available in the library "<<endl;
    }
}
