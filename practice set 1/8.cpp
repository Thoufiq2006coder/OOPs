#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = n * (n + 1) / 2;
    cout << "The sum of first "<<n<<"natural numbers "<<sum << endl;
    return 0;
}