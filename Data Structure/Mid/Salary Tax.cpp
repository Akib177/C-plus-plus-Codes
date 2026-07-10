#include <iostream>
using namespace std;

float tax;
double salary;

void Tax(){
    cout << "Enter the salary: $";
    cin >> salary;

    if (salary < 0) {
        cout << "Salary cannot be negative!!" << endl;
    }
     else if (salary <= 200) {
        tax = 0.0;
    }
     else if (salary <= 600) {
        tax = 0.10;
    }
     else if (salary <= 1200) {
        tax = 0.15;
    }
     else if (salary <= 2000) {
        tax = 0.20;
    }

     else {
        tax = 0.30;
    }
}

void Salary(){
    if (salary < 0) {
        cout << "Salary cannot be negative!!" << endl;
    }
    else {
        double taxamount = salary * tax;
        double salary = salary - taxamount;

        cout << "Your tax rate is " << tax * 100 << "%." << endl;
        cout << "Your salary after tax deduction is: $" << salary << endl;
    }
}

int main() {
    Tax();
    Salary();
    return 0;
}
