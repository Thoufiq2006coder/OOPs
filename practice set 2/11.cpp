//Write a program to calculate the power of a number (a^b) using a while loop.
#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter base (a): ";
    cin>>a;
    cout<<"Enter exponent (b): ";
    cin>>b;

    int result = 1;
    while(b > 0){
        result *= a;
        b--;
    }

    cout<<"Result: "<<result<<endl;
    return 0;
}
