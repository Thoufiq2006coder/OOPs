//Check whether a number is prime or not using a for loop.
#include<iostream>
using namespace std;

int Prime(int n){
    for(int i = 2; i <= n/2; i++){
        if(n%i == 0){
            cout<<n<<" is not a prime number."<<endl;
            return 0;
        }
    }
    cout<<n<<" is a prime number."<<endl;
    return 1;
}

int Not_Prime(int n){
    if(n<=1){
        cout<<n<<" is not a prime number."<<endl;
        return 0;
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n > 1) Prime(n);
    else Not_Prime(n);
    return 0;
}