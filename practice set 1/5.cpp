#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter an integer: ";
    cin>>a;
    if (a == 0) {
        cout<<a<<" is zero."<<endl;
    } else if (a > 0) {
        cout<<a<<" is positive."<<endl;
    } else {
        cout<<a<<" is negative."<<endl;
    }
    return 0;
}
