#include <iostream>
using namespace std;

class BankAccount{
    private:
        string acc_num;
        float balance;
    public:
        BankAccount(){
            acc_num = "ICD29001";
            balance = 50000;
        }

        BankAccount(string ac){
            acc_num = ac;
            balance = 0;
        }

        BankAccount(string ac, float bal){
            acc_num = ac;
            balance = bal;
        }

        void display(){
            cout << "Account Number: " << acc_num << "\nBalance: " << balance << endl;
            if (balance < 0) {
                cout << "Warning: Balance is negative!" << endl;
            }
        }
};

int main(){
    BankAccount a1;
    cout<<"Default constructor"<<endl;
    a1.display();

    BankAccount a2("ICD24002");
    cout<<"Initialization with account number only."<<endl;
    a2.display(); 

    BankAccount a3("ICD29002",23000.0);
    cout<<"Initialize with two values (real and imaginary parts)."<<endl;
    a3.display(); 

    return 0;
}