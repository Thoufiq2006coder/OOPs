#include <iostream>
using namespace std;

class Calculator {
    public:
        int add(int a, int b) {
            return a + b;
        }

        float add(float a, float b) {
            return a + b;
        }

        virtual void showType() {
            cout << "Base Calculator\n";
        }
    };

    class ScientificCalculator : public Calculator {
    public:
        void showType() override {
            cout << "Scientific Calculator\n";
        }
};

int main() {
    Calculator basic;
    ScientificCalculator sci;
    cout << "Int Add: " << basic.add(5, 3) << endl;
    cout << "Float Add: " << basic.add(2.5f, 3.5f) << endl;
    Calculator* ptr;
    ptr = &sci;
    ptr->showType(); 

    return 0;
}