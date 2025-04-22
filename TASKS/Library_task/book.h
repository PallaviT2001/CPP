#ifndef BOOK_H
#define BOOK_H
#include<string>
using namespace std;

class Book
{
private:
    string m_bookName;
    string m_bookStatus;
public:
    Book(string bookName,string bookStatus);
    ~Book();

    string getName();
    string getStatus();
    void setStatus(string bookStatus);

    void displaybooks();
};

#endif
