// Print the digits of a number in reverse order using a do-while loop.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Digits in reverse order: ";
    do{
        cout<<n%10<<" ";
        n /= 10;
    }while(n > 0);
    return 0;
}