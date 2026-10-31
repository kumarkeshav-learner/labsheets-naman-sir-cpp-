#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() { balance = 0.0; }
    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }
    
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }
    
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.deposit(1000);
    acc.withdraw(400);
    acc.displayBalance();
    return 0;
}