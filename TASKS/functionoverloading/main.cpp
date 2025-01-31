//parameterized constructor

#include<iostream>
#include <string>
using namespace std;

class Book{
public:
    int book_id;
    string book_name;
    string book_author;
    int no_of_pages;
    int length;
    int breadth;
    int height;
    string color;
    int price;

    Book(int book_id1,string book_name1,string book_author1,int no_of_pages1,int length1,int breadth1,int height1,string color1,int price1)
    {
        book_id=book_id1;
        book_name=book_name1;
        book_author=book_author1;
        no_of_pages=no_of_pages1;
        length=length1;
        breadth=breadth1;
        height=height1;
        color=color1;
        price=price1;
    }

};

int main()
{
    Book b1(1,"C++","Balaguruswamy",180,10,10,12,"red",280);
    cout<<b1.book_id<<" "<<b1.book_name<<" "<<b1.book_author<<" "<<b1.no_of_pages<<" "<<b1.length<<" "<<b1.breadth<<" "<<b1.height<<" "<<b1.color<<" "<<b1.price<<endl;

}

//Initialize values within constructor

#include<iostream>
#include <string>
using namespace std;

class Book
{
public:
    int book_id;
    string book_name;
    string book_author;
    int no_of_pages;
    int length;
    int breadth;
    int height;
    string color;
    int price;

    Book(int book_id1,string book_name1,string book_author1,int no_of_pages1,int length1,int breadth1,int height1,string color1,int price1)
    {
        book_id=1;
        book_name=C++;
        book_author=Pallavi;
        no_of_pages=180;
        length=10;
        breadth=20;
        height=30;
        color=red;
        price=200;
    }

};

int main()
{
    Book b1;
    cout<<b1.book_id<<" "<<b1.book_name<<" "<<b1.book_author<<" "<<b1.no_of_pages<<" "<<b1.length<<" "<<b1.breadth<<" "<<b1.height<<" "<<b1.color<<" "<<b1.price<<endl;
}

//default constructor calling

#include<iostream>
#include <string>
using namespace std;

class Book
{
public:
    int book_id;
    string book_name;
    string book_author;
    int no_of_pages;
    int length;
    int breadth;
    int height;
    string color;
    int price;
};

int main()
{
    Book b1;
    cout<<b1.book_id<<" "<<b1.book_name<<" "<<b1.book_author<<" "<<b1.no_of_pages<<" "<<b1.length<<" "<<b1.breadth<<" "<<b1.height<<" "<<b1.color<<" "<<b1.price<<endl;
}



