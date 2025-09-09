//Write a program to find the factorial of a number using a while loop.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (n < 1){
        cout<<"Factorial lesser than 1 is not valid";
    }
    int fac = 1;
    int i = 1;
    while(i <= n){
        fac *= i;
        i++;
    }
    cout<<"Factorial of "<<n<<" number is "<<fac;
    return 0;
}