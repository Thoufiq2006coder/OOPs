//Check whether a number is prime or not using a for loop.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<=1){
        cout<<n<<" is not a prime number."<<endl;
        return 0;
    }
}