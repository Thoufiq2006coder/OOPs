#include<iostream>
using namespace std;
int main()
{
    int num,fac=1,i;
    cout<<"Enter a number:";
    cin>>num;
    if(num<=0)
    {
        cout<<"Enter a number greater than Zero";
    }
    for(i=1;i<=num;i++)
    {
        fac=fac*i;
    }
    cout<<"Factorial of "<<num<<" is "<<fac;
}