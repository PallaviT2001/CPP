#include <iostream>
using namespace std;
#include <string>

int main()
{
    int product =1;
    for(int i=1;i<=10;i++)
    {
        product=product*i;
    }
    cout<<"product of:"<<product<<endl;

    int sum = 0;
    for(int i=11;i<=20;i++)
    {
      sum+=i;
    }
    cout<<"sum of:"<<sum<<std::endl;

    cout<<"adding:";
    for (int i = 21; i <= 30; i++)
    {
        cout<<(i+10)<<" ";
    }
    return 0;
 }

