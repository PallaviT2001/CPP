#include <iostream>
using namespace std;

int main()
{
    unordered_set <string> stringset;
    stringset.insert("c");
    stringset.insert("c++");
    stringset.insert("java");
    stringset.insert("python");
    stringset.insert("cobil");

    for(auto i=stringset.begin();i!=stringset.end();++i)
    {
        cout<<*i<<endl;
    }
    return 0;
}
