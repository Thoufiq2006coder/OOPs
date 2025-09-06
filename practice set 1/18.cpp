#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int d,rev=0;
    while(num!=0){
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    cout<<"The Reverse of the number: "<<rev<<endl;
    if (num==rev)
        cout<<"The number is Pallindrome"<<endl;
    else
        cout<<"The number is Not a Pallindrome"<<endl;
    return 0;
}