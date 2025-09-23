#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Default constructor
    Complex() {
        real = 0;
        imag = 0;
    }

    // Constructor to initialize real part only
    Complex(double r) {
        real = r;
        imag = 0;
    }

    // Constructor to initialize both real and imaginary parts
    Complex(double r, double i) {
        real = r;
        imag = i;
    }

    // Function to display the complex number
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
    // Using default constructor
    Complex c1;
    cout << "Default constructor: ";
    c1.display();

    // Using constructor with one argument
    Complex c2(5);
    cout << "Constructor with real part only: ";
    c2.display();

    // Using constructor with two arguments
    Complex c3(3, 4);
    cout << "Constructor with real and imaginary parts: ";
    c3.display();

    return 0;
}