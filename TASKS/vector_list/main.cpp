#include <iostream>
using namespace std;
#include <vector>

/*void printme(vector <int> &v)
{

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector <int> v1;
    vector <int> v2={12,22,31,41,55};
    vector <int> v3={5,9};

    printme(v1);
    printme(v2);
    printme(v3);
    return 0;


}*/

/*int main()
{
    vector<string>vector1;

    vector1.push_back("a");
    vector1.push_back("b");
    vector1.push_back("c");

    for(string s:vector1)
    {
        cout<<s<<endl;
    }
}*/

int main()
{
    vector<int>vector1;

    vector1.push_back(1);
    vector1.push_back(2);
    vector1.push_back(3);
    vector1.push_back(4);

    for(int i:vector1)
    {
        cout<<i<<endl;
    }

}


