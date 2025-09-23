#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        float marks;
    public:

        //Default construtor
        Student(){
            name = "Default constructor";
            age = 12;
            marks = 23.0;
        }

        //paramatized constructor
        Student(string n, int a, float m){
            name = n;
            age = a;
            marks = m;
        }

        void display() {
            cout << "Name: " << name << ", Age: " << age << ", Marks: " << marks << endl;
        }
};

int main(){
    Student s1, s2("Thoufiq",19,99.9);

    cout << "Student 1 details:" << endl;
    s1.display();

    cout << "Student 2 details:" << endl;
    s2.display();

    return 0;
}