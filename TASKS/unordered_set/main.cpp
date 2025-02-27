#include <iostream>
using namespace std;
#include "unordered_set"

int main()
{
    unordered_set <string> stringset;
    stringset.insert("c");
    stringset.insert("c++");
    stringset.insert("java");
    stringset.insert("python");
    stringset.insert("cobil");

    string key="cobil";
    if(stringset.find(key)==stringset.end())
    {
        cout<<"key not found "<<key<<endl;
    }
    else
    {
        cout<<"key found "<<key<<endl;
    }

    key="hii";
    if(stringset.find(key)==stringset.end())
    {
        cout<<"key not found "<<key<<endl;
    }
    else
    {
        cout<<"key found "<<key<<endl;
    }

    for(auto i=stringset.begin();i!=stringset.end();++i)
    {
        cout<<*i<<endl;
    }
    return 0;
}
