#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

    int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

public:
    Fraction() {
        numerator = 0;
        denominator = 1;
    }

    Fraction(int n) {
        numerator = n;
        denominator = 1;
    }

    Fraction(int n, int d) {
        numerator = n;
        denominator = d == 0 ? 1 : d; //Using ternary operator
    }

    void reduce() {
        int divisor = gcd(abs(numerator), abs(denominator));
        numerator /= divisor;
        denominator /= divisor;
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

    void display() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1;
    cout << "Default constructor (0/1): ";
    f1.display();

    Fraction f2(5);
    cout << "Numerator only (5/1): ";
    f2.display();

    Fraction f3(8, 12);
    cout << "Before reduction (8/12): ";
    f3.display();
    f3.reduce();
    cout << "After reduction: ";
    f3.display();

    return 0;
}