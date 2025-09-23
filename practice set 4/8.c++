#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    double price;

public:
    Car(string b) {
        brand = b;
        model = "Unknown";
        price = 0.0;
    }

    Car(string b, string m) {
        brand = b;
        model = m;
        price = 0.0;
    }

    Car(string b, string m, double p) {
        brand = b;
        model = m;
        price = p;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Car c1("Toyota");
    cout << "Car with brand only:" << endl;
    c1.display();

    Car c2("Honda", "Civic");
    cout << "\nCar with brand and model:" << endl;
    c2.display();

    Car c3("Tesla", "Model S", 79999.99);
    cout << "\nCar with brand, model, and price:" << endl;
    c3.display();

    return 0;
}