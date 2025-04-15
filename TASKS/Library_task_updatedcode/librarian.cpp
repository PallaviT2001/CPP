#include "Librarian.h"

Librarian::Librarian()
{
    cout<<"Librarian constructor called"<<endl;
}

Librarian::~Librarian()
{
    cout<<"Librarian destructor called"<<endl;
}

Librarian::Librarian(string name):m_name(name)
{
    cout<<"Librarian parameterized constructor called"<<endl;
}

void Librarian::addBook(Book *book)
{
    books.push_back(book);
    cout<<"Book added to library successfully: "<<book->gettitle()<<endl;
}

void Librarian::displayBooks()
{
    cout<<endl;
    cout<<"Available books in library"<<endl;
    cout<<endl;
    for (auto& book : books)
    {
        book->display();
    }
    cout<<endl;
}



