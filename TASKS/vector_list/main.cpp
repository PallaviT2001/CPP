#include <iostream>
using namespace std;
#include <list>
#include <vector>

int main()
{
    list <int>list1;

    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);

    for(int i:list1)
    {
        cout<<i<<endl;
    }

    vector<string>vector1;

    vector1.push_back("a");
    vector1.push_back("b");

    for(string s:vector1)
    {
        cout<<s<<endl;
    }
    return 0;
}


