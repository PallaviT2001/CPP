/*#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s1;
    s1.insert(30);
    s1.insert(40);
    s1.insert(20);
    s1.insert(10);
    s1.insert(50);
    s1.insert(70);


    for (auto i = s1.begin(); i!= s1.end(); ++i)
    {
        cout << *i<< endl;
    }

    return 0;
}*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s1;
    s1.insert(30);
    s1.insert(40);
    s1.insert(20);
    s1.insert(10);
    s1.insert(50);
    s1.insert(70);

    cout<<"s1 set values"<<endl;//to print set values
    for (auto i = s1.begin(); i!= s1.end(); ++i)
    {
        cout << *i<< endl;
    }

    cout<<"s2 set values"<<endl;//assigned s1 set values to s2
    set <int>s2(s1.begin(),s1.end());
    for (auto i=s2.begin();i!=s2.end();++i)
    {
        cout<<*i<<endl;
    }

    cout<<"removed less than 30 values"<<endl;//removed less than 30 elements present in list
    s2.erase(s2.begin(),s2.find(30));
    for(auto i=s2.begin();i!=s2.end();++i)
    {
        cout<<*i<<endl;
    }

    int num,num1;
    num=s2.erase(50);
    num1=s2.erase(30);
    cout<<s2.erase(50)<<endl;
    cout<<s2.erase(30)<<endl;
    cout<<"erased "<<num+num1<<endl;
    for(auto i=s2.begin();i!=s2.end();++i)
    {
        cout<<*i<<endl;
    }

    cout<<"find lower and upper bounds"<<endl;

    cout<<*s1.lower_bound(40)<<endl;
    cout<<*s1.upper_bound(70)<<endl;

    cout<<*s2.lower_bound(40)<<endl;
    cout<<*s2.upper_bound(70)<<endl;


    return 0;
}

