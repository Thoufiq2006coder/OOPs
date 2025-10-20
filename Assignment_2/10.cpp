#include <iostream>
#include <cmath>
using namespace std;

class Shape {
    public:
        virtual double area() const = 0;
        virtual ~Shape() {}
};

class Circle : public Shape {
    private:
        double radius;
    public:
        Circle(double r) : radius(r) {}
        double area() const override {
            return 3.14 * radius * radius;
        }
};

class Square : public Shape {
    private:
        double side;
    public:
        Square(double s) : side(s) {}
        double area() const override {
            return side * side;
        }
};

int main() {
    Shape* s1 = new Circle(5.0);
    Shape* s2 = new Square(4.0);
    cout << "Circle Area: " << s1->area() << endl;
    cout << "Square Area: " << s2->area() << endl;
    delete s1;
    delete s2;

    return 0;
}