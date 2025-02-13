#include <iostream>
using namespace std;

/*int main()
{
    int i=0;
    int numbers[4]={10,20,90,5};
    int large=numbers[0];
    int small=numbers[0];
    for(i=0;i<=3;i++)
    {
        if(numbers[i]>large)
        {
            large=numbers[i];
        }
        if(numbers[i]<small)
        {
            small=numbers[i];
        }
    }
    cout<<"largest number "<<large<<endl;
    cout<<"smallest number "<<small<<endl;
}*/

/*int main()
{
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    int lastdigit=0;
    int result=0;
    int largernumber=0;
    int smallernumber=9;

    while(num!=0)
    {
        lastdigit=num%10;
        result=lastdigit+(result*10);
        num=num/10;
        if(lastdigit>largernumber)
        {
            largernumber=lastdigit;
        }
        if(lastdigit<smallernumber)
        {
            smallernumber=lastdigit;
        }
    }
    cout<<"Reversed number is "<<result<<endl;
    cout<<"larger number "<<largernumber<<endl;
    cout<<"smaller number "<<smallernumber<<endl;
    return 0;
}*/

/*#include <map>
int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;

    map<char,int>count;

    for(char ch:input)
    {
        count[ch]++;
    }

    for (char ch : input)
    {
        if (count[ch] != 0)
        {
            cout << ch << "-" <<count[ch] << " ";
            count[ch] = 0;

        }
    }

    return 0;
}*/


#include <algorithm>
int arraysize=4;

int main()
{
    int array[]={10,200,5,300};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array,array+arraysize);

    cout<<"output array:"<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<array[i]<<" "<<endl;
    }
    return 0;
}
