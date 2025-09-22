#include <iostream>
using namespace std;
#include <string>

class Student {
private:
    string name;
    int age;

public:
    // Setting for name
    void setName(const string& studentName) {
        name = studentName;
    }

    // Getting for name
    string getName() const {
        return name;
    }

    // Setting for age
    void setAge(int studentAge) {
        age = studentAge;
    }

    // Getting for age
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