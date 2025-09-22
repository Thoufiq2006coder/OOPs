#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;

public:
    void setBrand(const string& carBrand) {
        brand = carBrand;
    }
    string getBrand() const {
        return brand;
    }

    // Setter for model
    void setModel(const string& carModel) {
        model = carModel;
    }

    // Getter for model
    string getModel() const {
        return model;
    }
};

int main() {
    const int numCars = 3;
    Car cars[numCars];

    cars[0].setBrand("Toyota");
    cars[0].setModel("Corolla");

    cars[1].setBrand("Honda");
    cars[1].setModel("Civic");

    cars[2].setBrand("Ford");
    cars[2].setModel("Focus");

    for (int i = 0; i < numCars; i++) {
        cout << "Car " << i + 1 << ": " << cars[i].getBrand() << " " << cars[i].getModel() << endl;
    }

    return 0;
}