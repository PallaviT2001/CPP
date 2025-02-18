#include <iostream>
using namespace std;
//#include <list>
#include <vector>

/*int main()
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
    cout<<list1.reverse()<<endl;
}*/

int main()
{
    /*vector<string>vector1;

    vector1.push_back("a");
    vector1.push_back("b");
    vector1.push_back("c");

    for(string s:vector1)
    {
        cout<<s<<endl;
    }*/


    vector<int>v1;
    vector <int> v2={1.2,2.2,3.1,4.1,5.5};
    vector <int> v3={5,9};



    void printme(vector<int> &v)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    printme(v1);
    printme(v2);
    printme(v3);



    return 0;

}

void printme(vector <int> &v)
{




}


