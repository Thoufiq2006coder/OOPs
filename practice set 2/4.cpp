// Find the sum of the first N natural numbers (input N) using a for
// loop.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<1){
        cout<<"Please enter a valid natural number."<<endl;
        return 0;
    }
    int sum = 0;
    for (int i = 1; i <= n; ++i){
        sum += i;
    }
    cout<<"The sum of the first "<<n<<" natural numbers is: "<<sum<<endl;
    return 0;
}