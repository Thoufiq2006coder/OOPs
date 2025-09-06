//Print the multiplication table of a given number using a do-while loop.

#include <iostream>
using namespace std;
int main() {
    int num, i = 1;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Multiplication table of " << num << ":\n";
    do {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    } while (i <= 10);
    return 0;
}