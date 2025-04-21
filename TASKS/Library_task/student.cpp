#include "student.h"
#include <iostream>

Student::Student(string studentName,int studentID)
{
    cout<<"Student Constructor called"<<endl;
    m_studentName = studentName;
    m_studentID = studentID;
}

Student::~Student()
{
    cout<<"Student Destructor called"<<endl;
}

void Student::borrowBook(Book* book)
{
    cout<<book->getName()<<" book is borrowed by "<<this->getName()<<endl;
    m_borrowedBooks.push_back(book);
}

void Student::displayBorrowedBooks()
{
    for(auto book:m_borrowedBooks)
    {
        book->display();
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

string Student::getRequestedBook()
{
    string bookName;
    cout<<"Enter book name"<<endl;
    cin>>bookName;
    return bookName;
}
