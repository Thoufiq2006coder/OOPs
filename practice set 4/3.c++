#include <iostream>
using namespace std;

class Complex {
    private:
        double real;
        double imag;

    public:
        Complex() {
            real = 0;
            imag = 0;
        }

        Complex(double r) {
            real = r;
            imag = 0;
        }

        Complex(double r, double i) {
            real = r;
            imag = i;
        }

        void display() {
            cout << real;
            if (imag >= 0) {
                cout << " + " << imag << "i" << endl;
            } else {
                cout << " - " << -imag << "i" << endl;
            }
        }
};

int main() {
    Complex c1;
    cout << "Default constructor: ";
    c1.display();

    Complex c2(5);
    cout << "Constructor with real part only: ";
    c2.display();

    Complex c3(3, 4);
    cout << "Constructor with real and imaginary parts: ";
    c3.display();

    return 0;
}