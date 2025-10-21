#include <iostream>
using namespace std;

// Base class
class Calculator {
    public:
        // Overload
        int add(int a, int b) {
            return a + b;
        }

        float add(float a, float b) {
            return a + b;
        }

        // Virtual function 
        virtual void showType() {
            cout << "Base Calculator\n";
        }
};

// Derived class
class ScientificCalculator : public Calculator {
    public:
        // Overrides 
        void showType() override {
            cout << "Scientific Calculator\n";
        }
};

int main() {
    Calculator basic;              
    ScientificCalculator sci;

    //Demonstrate Overloading
    cout << "Int Add: " << basic.add(5, 3) << endl;         
    cout << "Float Add: " << basic.add(2.5f, 3.5f) << endl; 

    // Demonstrate Overriding
    Calculator* ptr; // Base class pointer
    ptr = &sci;      // Base class pointer to derived class object
    ptr->showType();   

    return 0;
}