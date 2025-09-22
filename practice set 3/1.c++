#include <iostream>
using namespace std;
#include <string>

class Student {
private:
    string name;
    int age;

public:
    // Setter for name
    void setName(const string& studentName) {
        name = studentName;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Setter for age
    void setAge(int studentAge) {
        age = studentAge;
    }

    // Getter for age
    int getAge() const {
        return age;
    }
};

int main() {
    Student student;

    student.setName("Srinath");
    student.setAge(20);

    cout << "Name: " << student.getName() << endl;
    cout << "Age: " << student.getAge() << endl;

    return 0;
}