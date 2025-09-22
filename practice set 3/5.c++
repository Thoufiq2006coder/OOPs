#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        float salary;
    public:
        void setId(int empId){
            id = empId;
        }
        int getId() const{
            return id;
        }

        void setSalary(float empSalary){
            salary = empSalary;
        }

        float getSalary() const{
            return salary;
        }
};

int main(){
    Employee emp1, emp2, emp3;

    emp1.setId(101);
    emp1.setSalary(50000.0);

    emp2.setId(102);
    emp2.setSalary(60000.0);

    emp3.setId(103);
    emp3.setSalary(55000.0);

    // Display employee details
    cout << "Employee 1: ID = " << emp1.getId() << ", Salary = $" << emp1.getSalary() << endl;
    cout << "Employee 2: ID = " << emp2.getId() << ", Salary = $" << emp2.getSalary() << endl;
    cout << "Employee 3: ID = " << emp3.getId() << ", Salary = $" << emp3.getSalary() << endl;

    return 0;
}