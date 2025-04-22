#include "student.h"
#include <iostream>

Student::Student(string studentName,int studentID)
{
    cout<<"Student default Constructor called"<<endl;
    m_studentName = studentName;
    m_studentID = studentID;
}

Student::~Student()
{
    cout<<"Student Destructor called"<<endl;
}

void Student::borrowBookfunction(Book* book)
{
    cout<<"Book is borrowed by "<<this->getName()<<" successfully,Book name: "<<book->getName()<<endl;
    m_borrowedBooks.push_back(book);
}

void Student::displayBorrowedBooks()
{
    for(auto book:m_borrowedBooks)
    {
        book->displaybooks();
    }
}

string Student::getName()
{
    return m_studentName;
}

int Student::getID()
{
    return m_studentID;
}

string Student::StudentRequestedBook()
{
    string bookName;
    cout<<"Enter student asked bookname"<<endl;
    cin>>bookName;
    return bookName;
}
