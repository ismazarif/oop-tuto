#include <iostream>

using namespace std;

class BankAccount {

private:
    double balance;

public:
    BankAccount() { 
    balance = 0.0; 
    }
    void Deposit(double amount);
    void Withdraw(double amount);
    double GetBalance();
};

void BankAccount :: Deposit(double amount) {
    balance = balance + amount;
}

void BankAccount :: Withdraw(double amount) {
    if (amount <= balance){
        balance = balance - amount;
    }
    else {
        cout << "Insuffecient funds" << endl;
    }
}

double BankAccount :: GetBalance(){
    return balance;
}

int main() {

 BankAccount account;

    account.Deposit(1000);
    cout << "Current balance: " << account.GetBalance() << endl;

    account.Withdraw(500);
    cout << "Current balance: " << account.GetBalance() << endl;

    account.Withdraw(600);
    cout << "Current balance: " << account.GetBalance() << endl;

return 0;
}