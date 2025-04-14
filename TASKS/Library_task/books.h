#ifndef BOOKS_H
#define BOOKS_H
#include <iostream>
using namespace std;

class Books
{
private:
    int bookid;
    string bookname;
public:
    Books();
    ~Books();
    Books(int bookid,string bookname);

    int getbookid();
    string getbookname();
};

#endif
