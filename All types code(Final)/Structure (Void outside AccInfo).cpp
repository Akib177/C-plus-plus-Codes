#include <iostream>
using namespace std;
struct account {
    string AccNo;
    string AccName;
    double balance;
    void set_accinfo();
    void print_accinfo();
    double deposit();
    double withdraw();
};
void account:: set_accinfo() {
    cout << "Enter Account number: ";
    cin >> AccNo;
    cout << "Enter Account holder name: ";
    cin >> AccName;
    cout << "Enter current balance: ";
    cin >> balance;
}
void account::print_accinfo() {
    cout << "Account number: " << AccNo << endl;
    cout << "Holder name: " << AccName << endl;
    cout << "Balance: " << balance << endl;
}
double account::deposit() {
    double amount;
    cout << "Enter deposit amount: ";
    cin >> amount;
    balance = balance + amount;
    return balance;
}
double account::withdraw() {
double amount;
    cout << "Enter withdrawal amount: ";
    cin >> amount;

    if (amount > 0 && amount <= balance) {
        balance = balance - amount;
        cout << "Withdrawn " <<amount << endl;
    }
    else {
        cout << "Invalid amount " << endl;
    }
}

int main() {
    account a[3];
    for(int i = 0; i<3; i++) {
    a[i].set_accinfo();
    a[i].print_accinfo();
    char op;
    cout<<"if you want to deposit?  yes or no "<<endl;
    cin>>op;
   if (op=='yes' || op=='Yes'){
     a[i].deposit();
    }
    else{
        cout<<"Thank you"<<endl;
    }
    char op2;
    cout<<"if you want to withdraw?  yes or no "<<endl;
    cin>>op2;
    if (op2=='yes' || op2=='Yes'){
     a[i].withdraw();
    }
    else{
        cout<<"Thank you"<<endl;
    }

    cout << "After the operation: "<<endl;
    a[i].print_accinfo();
    }
}
