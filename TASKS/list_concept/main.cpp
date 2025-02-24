#include <iostream>
using namespace std;
#include <list>

int main()
{
    list <int>list1;

    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(7);
    list1.push_front(8);
    list1.push_back(9);
    list1.pop_front();
    list1.pop_back();
    list1.begin();
    list1.end();
    list1.reverse();

    for(int i:list1)
    {
        cout<<i<<endl;
    }
    cout<<"list related operations"<<endl;
    cout<<list1.front()<<endl;
    cout<<list1.back()<<endl;
    cout<<list1.size()<<endl;
    cout<<*list1.begin()<<endl;
    cout<<*list1.end()<<endl;

    return 0;
}
