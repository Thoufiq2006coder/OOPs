#include<iostream>
using namespace std;
int main()
{
    int num,i;
    int prime=0;
    cout<<"Enter a Number:";
    cin>>num;
    if(num<=1)
        prime=1;
    else
    {
        for(i=2;i<=num/2;i++)
        {
            if (num%i==0)
                prime=1;
                break;
        }
    }
    if(prime==0)
        cout<<num<<" is prime";
    else
        cout<<num<<" not a prime";
}