#include<iostream>
using namespace std;
//Structure
struct StudentInfo{
    string Name; //Data Member
    string ID;
    float cgpa;
    int age;

void Set_StudentInfo(string id, int ag){ //Member Function
    cout<<"Enter student Name: ";
    getline(cin,Name);
    ID=id;
    cout<<"Enter student CGPA: ";
    cin>>cgpa;
    age=ag;
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
        cout<<"Probation Student"<<endl;
    }
    else{
        cout<<"Regular Student"<<endl;
    }
}
} ;
int main(){
  StudentInfo S1;
  //To take student information
  S1.Set_StudentInfo("23-456-3",22);
  StudentInfo S2;
  S2.Set_StudentInfo("23-6789-3",24);
  //To print student information
  cout<<"Student Information"<<endl;
  S1.Check_Student();
  S1.Print_StudentInfo();
  S2.Check_Student();
  S2.Print_StudentInfo();
}
