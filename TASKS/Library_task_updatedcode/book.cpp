#include "book.h"

Book::Book()
{
    cout<<"Book constructor called"<<endl;
}

Book::~Book()
{
    cout<<"Book Destructor called"<<endl;
}

Book::Book(const string& title) : title(title)
{
    cout<<"Book parameterized constructor called"<<endl;
}

string Book::gettitle()
{
    return this->title;
}

