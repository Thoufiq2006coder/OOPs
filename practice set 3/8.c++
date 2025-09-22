#include<iostream>
using namespace std;

class Account{
    private:
        int accountNumber;
        float balance;
    public:
        void setAccountNumber(int accNum){
            accountNumber = accNum;
        }
        int getAccountNumber() const {
            return accountNumber;
        }
        void setBalance(float bal){
            if(bal >= 0){
                balance = bal;
            }
            else{
                cout << "Balance cannot be negative." << endl;
            }
        }
        float getBalance() const {
            return balance;
        }
};

int main(){
    Account acc1, acc2, acc3;

    acc1.setAccountNumber(1001);
    acc1.setBalance(1500.75);

    acc2.setAccountNumber(1002);
    acc2.setBalance(2500.50);

    acc3.setAccountNumber(1003);
    acc3.setBalance(3000.00);

    cout << "Account 1: Number = " << acc1.getAccountNumber() << ", Balance = $" << acc1.getBalance() << endl;
    cout << "Account 2: Number = " << acc2.getAccountNumber() << ", Balance = $" << acc2.getBalance() << endl;
    cout << "Account 3: Number = " << acc3.getAccountNumber() << ", Balance = $" << acc3.getBalance() << endl;

    return 0;
}