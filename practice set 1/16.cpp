#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int add, rev=0;
    while(num!=0){
        add=num%10;
        rev=add+rev;
        num=num/10;
    }
    cout<<"The Sum of the digits: "<<rev;
    return 0;
}