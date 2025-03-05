#include<iostream>
using namespace std;
#include<map>

int main()
{
    string state;
    map<string,string> indiamap;
    indiamap.emplace("karnataka","Bangalur");
    indiamap.emplace("tamilnaadu","chennai");
    indiamap.emplace("andrapradesh", "Amaravathi");
    indiamap.emplace("telangana","hyderabad");

    for (auto i=indiamap.begin();i!=indiamap.end();i++)
    {
        cout<<"state and capital "<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}

/*int main()
{
    map <int,string> mymap {{1,"geeks"},{2,"for"},{3,"geeks"}};
    for(auto &mapvalues:mymap)
    {
        cout<<mapvalues.first<<" "<<mapvalues.second<<endl;
    }
    return 0;
}*/

/*int main()
{
    map<int,float>mymap {{1,1.1},{2,2.2},{3,4.4}};
    for(auto &mapvalues:mymap)
    {
        cout<<mapvalues.first<<" "<<mapvalues.second<<endl;
    }
    return 0;
}*/

/*#include <iostream>
using namespace std;
#include "student.h"

int main()
{
    Student s(1,"pallavi",23);
    cout<<s.getid()<<endl;
    cout<<s.getname()<<endl;
    cout<<s.getage()<<endl;
    return 0;
}*/

/*UNORDERED MAP*/

/*#include <iostream>
using namespace std;
#include <string>
#include <unordered_map>

template <typename K, typename V>

class MyUnorderedMap
{
private:
    unordered_map<K, V> data;
public:
    void add(const K &key, const V &value)
    {
        data[key] = value;
    }

    friend ostream& operator<<(ostream &os, const MyUnorderedMap<K, V> &obj) {
        for (const auto &pair : obj.data)
        {
            os << "{" << pair.first << ": " << pair.second << "} ";
        }
        return os;
    }
};*/

/*int main() {
    map<string,string> indiamap;
    indiamap.emplace("1", "one");
    indiamap.emplace("2", "two");
    indiamap.emplace("3", "three");

    /*MyUnorderedMap<float,string> floatStringMap;
    floatStringMap.add(1.1f, "one point one");
    floatStringMap.add(2.2f, "two point two");
    floatStringMap.add(3.3f, "three point three");

    MyUnorderedMap<string, int> stringIntMap;
    stringIntMap.add("hello", 1);
    stringIntMap.add("world", 2);

    cout << "Int-String Map: " << intStringMap<<endl;
    cout << "Float-String Map: " << floatStringMap<<endl;
    cout << "String-Int Map: " << stringIntMap<<endl;*/

    //return 0;
//}*/

/*SET*/

/*#include <iostream>
using namespace std;
#include <string>
#include <set>

template <typename T>

class MySet
{
private:
    set<T> data;
public:
    void add(const T &value)
    {
        data.insert(value);
    }

    friend ostream& operator<<(ostream& os, const MySet<T>& obj)
    {
        for (const auto &value : obj.data)
        {
            os << value << " ";
        }
        return os;
    }
};

int main() {
    MySet<int> intSet;
    intSet.add(1);
    intSet.add(2);
    intSet.add(3);

    MySet<float> floatSet;
    floatSet.add(1.1f);
    floatSet.add(2.2f);
    floatSet.add(3.3f);

    MySet<std::string> stringSet;
    stringSet.add("hello");
    stringSet.add("world");

    cout << "Int Set: " << intSet <<endl;
    cout << "Float Set: " << floatSet <<endl;
    cout << "String Set: " << stringSet <<endl;

    return 0;
}*/

/*UNORDERED SET*/

/*#include <iostream>
using namespace std;
#include <unordered_set>
#include <string>

template <typename T>

class MyUnorderedSet
{
private:
    unordered_set<T> data;
public:
    void add(const T &value)
    {
        data.insert(value);
    }

    friend ostream &operator<<(ostream& os, const MyUnorderedSet<T> &obj)
    {
        for (const auto &value : obj.data)
        {
            os << value << " ";
        }
        return os;
    }
};

int main() {
    MyUnorderedSet<int>intSet;
    intSet.add(1);
    intSet.add(2);
    intSet.add(3);

    MyUnorderedSet<float>floatSet;
    floatSet.add(1.1f);
    floatSet.add(2.2f);
    floatSet.add(3.3f);

    MyUnorderedSet<string>stringSet;
    stringSet.add("hello");
    stringSet.add("world");

    cout << "Int Set: " <<intSet<<endl;
    cout << "Float Set: " <<floatSet<<endl;
    cout << "String Set: " <<stringSet<<endl;

    return 0;
}*/


