#include <iostream>
using namespace std;

// Base class Shape encapsulates width and length
class Shape {
    private:
        float width;
        float length;

    public:
        // Constructor to initialize dimensions
        Shape(float width, float length) {
            this->width = width;
            this->length = length;
        }

        void setDimensions(float width, float length) {
            this->width = width;
            this->length = length;
        }

        void setsize(float width, float length) {
            setDimensions(width, length);
        }

        float getWidth() const {
            return width;
        }

        float getLength() const {
            return length;
        }
};

// Derived class Rectangle inherits from Shape
class Rectangle : public Shape {
    public:
        // Constructor passes dimensions to base class
        Rectangle(float width, float length) : Shape(width, length) {}

        float area() {
            return getWidth() * getLength();
        }

        float perimeter() {
            return 2 * (getWidth() + getLength());
        }

        void display() {
            cout << "Rectangle dimensions: " << getLength() << " x " << getWidth() << endl;
            cout << "Area: " << area() << endl;
            cout << "Perimeter: " << perimeter() << endl;
        }
};

int main() {
    Rectangle r(10, 5);
    r.display();
    r.setDimensions(7, 3);
    cout << "\nAfter changing dimensions:" << endl;
    r.display();

    return 0;
}