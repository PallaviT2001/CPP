#include "librarymanagement.h"

Librarymanagement::Librarymanagement()
{
    cout<<"Library management constructor called"<<endl;
}

Librarymanagement::~Librarymanagement()
{
    cout<<"Library management destructor called"<<endl;
}

void Librarymanagement::addBook(int id, string name)
{
    books.push_back(Books(id, name));
    cout<<"Book added successfully"<<endl;
}

void Librarymanagement::displayBooks()
{
    if (books.empty())
    {
        cout<<"Books not available in library"<<endl;
        return;
    }
    cout <<"Available Bookslist in the library"<<endl;

    for (Books &book : books)
    {
        cout << "ID: " << book.getbookid() << ", Name: " <<book.getbookname() << endl;
    }
}

void Librarymanagement::borrowBook(string bookName)
{
    for (auto i = books.begin(); i!= books.end();i++)
    {
        if (i->getbookname() == bookName)
        {
            int studentid;
            string studentname;
            cout<<"Enter student id"<<endl;
            cin>>studentid;
            cout<<"Enter student name"<<endl;
            cin>>studentname;
            student.push_back(Student(studentid,studentname));
            cout<<"Book Borrowed successfully"<<endl;
            cout<<"Book name: "<<i->getbookname()<<endl;
            cout<<"Book id: "<<i->getbookid()<<endl;
            books.erase(i);
            return;
        }
    }
    cout <<"Student needed book not found "<<bookName << endl;
}

void Librarymanagement::studentlistmaintain(int studentid, string studentname)
{
    student.push_back(Student(studentid,studentname));
}

void Librarymanagement::displaystudent()
{
    for (Student &student : student)
    {
        cout << "ID: " << student.getstudentid() << ", Name: " <<student.getstudentname() << endl;
    }
}
