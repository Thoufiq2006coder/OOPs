#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int div,rev=0;
    while (num!=0)
    {
        div=num%10;
        rev=div+rev*10;
        num=num/10;
    }
    cout<<"The Reverse of the number: "<<rev;
    return 0;
}