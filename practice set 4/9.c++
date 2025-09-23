#include<iostream>
using namespace std;

class Employee{
    private:
        string name;
        string id;
        float salary;
    public:
        Employee(string n, string i){
            name = n;
            id = i;
            salary = 0;
        }

        Employee(string n, string i, float s){
            name = n;
            id = i;
            salary = s;
        }

        void display(){
            cout<<"Employee name: "<<name<<endl;
            cout<<"Employee ID: "<<id<<endl;
            cout<<"Employee salary: "<<salary<<endl;
        }
};

int main(){
    Employee e1("Elon musk", "ID2300");
    cout<<"A constructor that initialized Name and ID";
    e1.display();

    Employee e2("Elon musk", "ID2401", 38000.0);
    cout<<"\nA constructor that initialized all three values";
    e2.display();

    return 0;
}