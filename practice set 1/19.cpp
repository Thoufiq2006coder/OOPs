#include <iostream>
using namespace std;

int main() {
    float p, r, t, SI;
    cout << "Enter Principal amount (P): ";
    cin >> p;
    cout << "Enter Rate of interest (R): ";
    cin >> r;
    cout << "Enter Time in years (T): ";
    cin >> t;
    cin >> t;  
    SI = (p * r * t) / 100; 
    cout << "Simple Interest = " << SI << endl;
    return 0;
}