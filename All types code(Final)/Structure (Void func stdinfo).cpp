#include<iostream>
using namespace std;
//Structure
struct StudentInfo{
    string Name; //Data Member
    string ID;
    float cgpa;
    int age;

void Set_StudentInfo(){ //Member Function
    cout<<"Enter student Name:";
    getline(cin,Name);
    cout<<"Enter student ID:";
    cin>>ID;
    cout<<"Enter student CGPA:";
    cin>>cgpa;
    cout<<"Enter student Age:";
    cin>>age;
    cin.ignore();
}
void Print_StudentInfo(){
    cout<<"Student Name: "<<Name<<endl;
    cout<<"Student ID: "<<ID<<endl;
    cout<<"Student CGPA: "<<cgpa<<endl;
    cout<<"Student Age: "<<age<<endl;
}
void Check_Student(){
    if(cgpa<2.50){
        cout<<"He/She is a probation Student"<<endl;
    }
    else{
        cout<<"He/She is a regular Student"<<endl;
    }
  }
}  ;
int main(){
  StudentInfo S1;
  //To take student information
  S1.Set_StudentInfo();
  StudentInfo S2;
  S2.Set_StudentInfo();
  //To print student information
  cout<<endl;
  cout<<"Student Information"<<endl;
  cout<<endl;
  S1.Check_Student();
  S1.Print_StudentInfo();
  cout<<endl;
  S2.Check_Student();
  S2.Print_StudentInfo();
}
