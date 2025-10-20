#include <iostream>
using namespace std;

class Shape{
    private:
        float width;
        float length;
    public:
        Shape(float width, float length){
            this->width = width;
            this->length = length;
        }
        void setDimensions(float width, float length){
            this->width = width;
            this->length = length;
        }
        void setsize(float width, float length){ setDimensions(width, length); } // backward compatibility
        float getWidth() const { return width; }
        float getLength() const { return length; }
};

class Rectangle : public Shape{
    public:
        Rectangle(float width, float length) : Shape(width, length) {}
        float area(){
            return getWidth() * getLength();
        }
        float perimeter(){
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
