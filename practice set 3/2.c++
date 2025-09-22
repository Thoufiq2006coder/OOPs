#include<iostream>
using namespace std;

class BankAccount{
    private:
        double balance;
    public:

    // Constructor to initialize balance
        BankAccount() : balance(0.0) {}
        
        void setBalance(double newBalance){
            if(newBalance >= 0){
                balance = newBalance;
            }
            else{
                cout << "Error: Balance cannot be negative." << endl;
            }
        }
        double getBalance()const{
            return balance;
        }
};

int main(){
    BankAccount account;
    account.setBalance(1000.50);
    cout << "Balance: " << account.getBalance() << endl;
    account.setBalance(-500);
    cout << "Balance: " << account.getBalance() << endl;
}