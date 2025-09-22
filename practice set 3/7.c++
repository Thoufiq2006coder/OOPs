#include<iostream>
#define PI 3.14 

using namespace std;

class Circle{
    private:
        float radius;
    public:
        void setRadius(float c_radius){
            if(c_radius > 0){
                radius = c_radius;
            }
            else{
                cout << "Radius must be positive." << endl;
            }
        }

        float getRadius() const {
            return radius;
        }

        float getArea() const {
            return PI * radius * radius;
        }
};

int main(){
    Circle circle;
    circle.setRadius(5.0);
    cout << "Radius: " << circle.getRadius() << endl;
    cout << "Area: " << circle.getArea() << endl;
    return 0;
}