#include <iostream>
using namespace std;

double balance = 0;

void Deposit() {
    double amount;
    cout << "Enter deposit amount: ";
    cin >> amount;

    if (amount > 0) {
        balance = balance + amount;
        cout << "Deposited $" << amount << " . New balance: " << balance << endl;
    }

     else {
       cout << "Invalid amount." << endl;
    }
}

void Withdraw() {
    double amount;
    cout << "Enter withdrawal amount: ";
    cin >> amount;

    if (amount > 0 && amount <= balance) {
        balance =balance - amount;
        cout << "Withdrawn $" << amount << ". New balance: " << balance << endl;
    }
    else {
        cout << "Invalid amount " << endl;
    }
}

void CheckBalance() {
    cout << "Current balance: " << balance << endl;
}

int main() {
    CheckBalance();

    Deposit();
    CheckBalance();

    Withdraw();
    CheckBalance();

 return 0;


}
