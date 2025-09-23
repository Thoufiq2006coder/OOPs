#include <iostream>
using namespace std;

class Distance {
    private:
        int feet;
        int inches;

    public:
        Distance() {
            feet = 0;
            inches = 0;
        }

        Distance(int f) {
            feet = f;
            inches = 0;
        }

        Distance(int f, int i) {
            feet = f;
            inches = i;
        }

        void display() {
            cout << feet << " feet " << inches << " inches" << endl;
        }
};

int main() {
    Distance d1;
    cout << "Default constructor: ";
    d1.display();

    Distance d2(5);
    cout << "Constructor with feet only: ";
    d2.display();

    Distance d3(6, 9);
    cout << "Constructor with feet and inches: ";
    d3.display();

    return 0;
}