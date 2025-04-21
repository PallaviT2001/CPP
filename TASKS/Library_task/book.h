#ifndef BOOK_H
#define BOOK_H
#include<string>
using namespace std;

class Book
{
public:
    Book(string bookName,string bookStatus);
    ~Book();
    string getName();
    string getStatus();
    void setStatus(string bookStatus);
    void display();

private:
    string m_bookName;
    string m_bookStatus;
};

#endif
