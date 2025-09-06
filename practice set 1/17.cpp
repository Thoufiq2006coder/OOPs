#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a n:";
    cin>>num;
    int num1=0,num2=1,i=0,fib=0;
    cout<<"Fibonnaci series: ";
    while (i<num)
    {
        cout<<num1;
        fib=num1+num2;
        num1=num2;
        num2=fib;
        i++;
    }
    return 0;
}