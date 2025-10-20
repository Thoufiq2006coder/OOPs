#include <iostream>
#include <string>
using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        void setPerson(string name, int age){
            this->name = name;
            this->age = age;
        }
        void display() const {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};

class Employee : public Person{
    private:
        string empID;
        string dept;
    public:
        void setEmployee(string empID, string dept) {
            this->empID = empID;
            this->dept = dept;
        }
        void display() const {
            Person::display();
            cout << "Employee ID: " << empID << ", Department: " << dept << endl;
        }
};

class Manager : public Employee {
    private:
        int teamSize;

    public:
        void setManager(int size) {
            teamSize = size;
        }
        void display() const {
            Employee::display();
            cout << "Team size: " << teamSize << endl;
        }
};

int main() {
    Manager mgr;
    mgr.setPerson("Alice", 35);
    mgr.setEmployee("E123", "Sales");
    mgr.setManager(10);
    mgr.display();

    return 0;
}