#include<iostream>
using namespace std;
struct Employee{
string EmployeeName;
string EmployeeID;
float EmployeeSalary;
int JoiningYear;

void SetEmployeeInfo(string name, string id, float sal, int year){

  EmployeeName=name;
  EmployeeID=id;
  EmployeeSalary=sal;
  JoiningYear=year;
 }
void SetBonus(){
    float bonus;
 if (EmployeeSalary>25000 && JoiningYear<2016){
     bonus=EmployeeSalary*0.3;
    cout<<"Employee Bonus: "<<bonus<<endl;
 }
 else if (EmployeeSalary>20000 && JoiningYear<2018){
    bonus=EmployeeSalary*0.2;
    cout<<"Employee Bonus: "<<bonus<<endl;
 }
 else {
     bonus = EmployeeSalary*0.05;
    cout<<"Employee bonus: "<<bonus<<endl;
 }
 cout<<"After bonus salary is: "<<EmployeeSalary+bonus<<endl;

  }
void DisplayInfo (){
  cout<<"Employee Name: "<<EmployeeName<<endl;
  cout<<"Employee ID: "<<EmployeeID <<endl;
  cout<<"Employee Salary: "<<EmployeeSalary<<endl;
  cout<<"Employee joining year: "<<JoiningYear<<endl;
  }
};

 int main(){
 Employee E1;
E1.SetEmployeeInfo("Adnan Akib","23-53177-3", 50000, 2015);

E1.DisplayInfo();
E1.SetBonus();

 }
