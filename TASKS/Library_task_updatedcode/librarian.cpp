#include "librarian.h"

Librarian::Librarian()
{
    cout<<"library constructor called"<<endl;
}

Librarian::~Librarian()
{
    cout<<"library destructor called"<<endl;
}

void Librarian::addBook(const string& title)
{
    books.push_back(Book(title));
}

bool Librarian::hasBook(string& title)
{
    for (auto& book : books)
    {
        if (book.gettitle()== title)
        {
            return true;
        }
    }
    return false;
}

bool Librarian::issueBook(const string& title)
{
    for (auto i= books.begin(); i!= books.end(); i++)
    {
        if (i->gettitle()== title)
        {
            books.erase(i);
            return true;
        }
    }
    return false;
}

void Librarian::showAvailableBooks()
{
    cout<<endl;
    cout<<"Books currently available in the library"<<endl;
    cout<<endl;

    for (auto &book : books)
    {
        cout<<"- " <<book.gettitle()<<endl;
        cout<<endl;
    }
    if (books.empty())
    {
        cout<<"books not available"<<endl;
        return;
    }
}



