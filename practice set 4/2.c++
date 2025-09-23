#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    float marks;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
        marks = 0.0;
    }

    // Parameterized constructor
    Student(string n, int a, float m) {
        name = n;
        age = a;
        marks = m;
    }

    // Function to display student details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Using default constructor
    Student student1;
    cout << "Student 1 details (default constructor):" << endl;
    student1.display();

    // Using parameterized constructor
    Student student2("John", 20, 85.5);
    cout << "\nStudent 2 details (parameterized constructor):" << endl;
    student2.display();

    return 0;
}
