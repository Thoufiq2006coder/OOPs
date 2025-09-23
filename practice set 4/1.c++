#include<iostream>
using namespace std;

class Rectangle{
    private:   
        float length, breadth;
    public:
        void setsize(float l, float b){
                length = l;
                breadth = b;
        }

        float getsize() const{
            return (length * breadth);
        }
};

int main(){
    Rectangle s1;
    s1.setsize(20,12);
    cout<<"Area of the rectangle: "<<s1.getsize()<<endl;
    return 0;
}