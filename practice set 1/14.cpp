#include <iostream>
using namespace std;

int main() {
    for (int num = 2; num <= 100; ++num) {
        bool prime = true;

        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}