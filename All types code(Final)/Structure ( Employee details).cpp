#include<iostream>
#include<string>

using namespace std;

// Structure Definition
struct Employee {
    // Data Members
    string EmployeeName;
    string EmployeeID;
    string Designation;
    double MonthlySalary;
    double YearOfService;
    double yearlysalary;

    // Member Functions
    // Set Employee Information
    void SetEmployeeInfo(string name, int id) {
        EmployeeName = name;
        EmployeeID = id;

        // Taking other information through user input
        cout << "Enter Designation: ";
        getline(cin,Designation);

        cout << "Enter Monthly Salary: ";
        cin >> MonthlySalary;

        cout << "Enter Years of Service: ";
        cin >> YearOfService;
        cin.ignore() ;
        }

    // Get and Print Employee Information
    void GetEmployeeInfo() {
        cout << "Employee Name: " << EmployeeName << endl;
        cout << "Employee ID: " << EmployeeID << endl;
        cout << "Designation: " << Designation << endl;
        cout << "Monthly Salary: " << MonthlySalary << endl;
        cout << "Years of Service: " << YearOfService << endl;
        yearlysalary = 12* MonthlySalary;
        cout<< "Yearly Salary: "<<yearlysalary<<endl;
    }

    // Calculate and Assign Bonus
    void EmployeeBonus() {
        if (Designation == "collection agent" && YearOfService > 4) {
            // 10% bonus on annual salary
            cout << "Bonus: " << 0.1 *yearlysalary << endl;
        } else if (Designation == "account executive" && YearOfService > 3) {
            // 25% bonus on annual salary
            cout << "Bonus: " << 0.25 *yearlysalary << endl;
        } else if (Designation == "account manager" && YearOfService > 2.5) {
            // 27.34% bonus on annual salary
            cout << "Bonus: " << 0.2734 * yearlysalary << endl;
        } else {
            cout << "No Bonus applicable." << endl;
        }
    }
};

int main() {
    // Creating an instance of Employee structure
    Employee emp;

    // Set Employee Information
    emp.SetEmployeeInfo("Adnan Akib", 12345);
      //cin.ignore() ;
    // Get and Print Employee Information
    emp.GetEmployeeInfo();

    // Calculate and Assign Bonus
    emp.EmployeeBonus();
    Employee emp1;

    // Set Employee Information
    emp1.SetEmployeeInfo("ab cd", 12345);

    // Get and Print Employee Information
    emp1.GetEmployeeInfo();

    // Calculate and Assign Bonus
    emp1.EmployeeBonus();

    return 0;
}
