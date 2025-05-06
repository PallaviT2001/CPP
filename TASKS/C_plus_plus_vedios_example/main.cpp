#include <iostream>
using namespace std;

/*int main()
{
    float variable=5.5f;
    double var=5.5;
    bool variable1=true;
    cout<<variable<<endl;
    cout<<var<<endl;
    cout<<variable1<<endl;
    cout<<"boolean size: "<<sizeof(bool)<<endl;
    cout<<"double size: "<<sizeof(double)<<endl;
    return 0;
}*/

/*int main()
{
    char a=65;
    cout<<a<<endl;
}*/


/*int multiply(int a,int b)
{
    return a*b;
}

/*static int multiply(int a,int b)
{
    return a*b;
}

int main()
{
    cout<<multiply(5,9)<<endl;
    return 0;
}*/

/*int main()
{
    int result=multiply(3,2);
    cout<<result<<endl;
}*/

/*void Log(const char* message)
{
    cout<<message<<endl;
}

int main()
{
    Log("Hlo pallavi");
}*/

/*int main()
{
    int a=8;
    a++;
    const char* string="hello";

    for(int i=0;i<5;i++)
    {
        const char c=string[i];
        cout<<c<<endl;
    }
    cout<<"Hello world"<<endl;
}*/

/*int main()
{
    int x=6;
    bool comparisionresult= x==6;
    if(comparisionresult)
    {
        cout<<("hello world")<<endl;
    }
}*/

/*int main()
{
    const char* ptr="hello";
    if(ptr)
        cout<<ptr<<endl;
}*/

/*int main()
{
    const char* ptr=nullptr;
    if(ptr)
        cout<<ptr<<endl;
}*/

/*int main()
{
    for(int i=0;i<5;i++)
    {
        cout<<"Hlo world"<<endl;
    }
    return 0;
}*/

/*int main()
{
    int i=0;
    bool condition=true;
    for(;condition;)
    {
        cout<<"hlo world"<<endl;
        i++;
        if(!(i<5))
        {
            condition=false;
        }
    }
}*/

/*int main()
{
    for(int i=0;i<5;i++)
    {
        if((i+1)%2==0)
            return 0;
        cout<<"hello"<<endl;
        cout<<i<<endl;
    }
    return 0;
}*/

/*int main()
{
    int var=8;
    int *ptr=&var;
    *ptr=10;
    cout<<*ptr<<endl;
}*/

/*int main()
{
    char* buffer=new char[8];
    memset(buffer,0,8);
    char** ptr=&buffer;
    delete[] buffer;

}*/

int main()
{
    int a=5;
    int &ref=a;
    ref=2;
    cout<<a<<endl;
}



