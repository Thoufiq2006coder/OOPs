#include <iostream>
using namespace std;

class BankAccount {
    private:
        string accHolder;   
        int accNumber;
        double balance;

    public:
        // Constructor to initialize account details
        BankAccount(string name, int accNo, double initialBalance) {
            accHolder = name;
            accNumber = accNo;
            balance = initialBalance;
        }

        // Method to deposit money into the account
        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposited: " << amount << endl;
            } else {
                cout << "Invalid input\n";  // Reject negative or zero deposits
            }
        }

        // Method to withdraw money from the account
        void withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            } else {
                cout << "insufficient amount\n";  // Reject overdrafts or invalid input
            }
        }

        // Method to display account details
        void display() {
            cout << "Account Holder: " << accHolder << endl;
            cout << "Account Number: " << accNumber << endl;
            cout << "Current Balance: " << balance << endl;
        }
};

int main() {
    BankAccount acc("THOUFIQ", 123456, 1000.0);
    acc.display();
    acc.deposit(500);
    acc.withdraw(300);
    acc.withdraw(1500);
    acc.display();

    return 0;
}