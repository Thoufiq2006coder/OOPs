#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    void setLength(float len) {
        if (len > 0) {
            length = len;
        } else {
            cout << "Length must be positive." << endl;
        }
    }

    float getLength() const {
        return length;
    }

    void setWidth(float wid) {
        if (wid > 0) {
            width = wid;
        } else {
            cout << "Width must be positive." << endl;
        }
    }

    float getWidth() const {
        return width;
    }

    float Area() const {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    rect.setLength(5.0);
    rect.setWidth(3.0);

    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Area: " << rect.Area() << endl;

    return 0;
}