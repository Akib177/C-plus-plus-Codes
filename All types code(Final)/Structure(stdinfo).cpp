#include<iostream>
using namespace std;
//Structure
struct StudentInfo{
    string Name; //Data Member
    string ID;
    float cgpa;
    int age;
} ;
int main(){
   StudentInfo S1; //Structure variable
   cout<<"Enter student 1 name:";
   getline(cin,S1.Name);
   cout<<"Enter student 1 ID:";
   cin>>S1.ID;
   cout<<"Enter student 1 CGPA:";
   cin>>S1.cgpa;
   cout<<"Enter student 1 age:";
   cin>>S1.age;
   cin.ignore();

   StudentInfo S2;
   cout<<"Enter student 2 name:";
   getline(cin,S2.Name);
   cout<<"Enter student 2 ID:";
   cin>>S2.ID;
   cout<<"Enter student 2 CGPA:";
   cin>>S2.cgpa;
   cout<<"Enter student 2 age:";
   cin>>S2.age;

   cout<<"Student 1 Information"<<endl;
   cout<<"Student Name: "<<S1.Name<<endl;
   cout<<"Student ID: "<<S1.ID<<endl;
   cout<<"Student CGPA: "<<S1.cgpa<<endl;
   cout<<"Student Age: "<<S1.age<<endl;

   cout<<"Student 2 Information"<<endl;
   cout<<"Student Name: "<<S2.Name<<endl;
   cout<<"Student ID: "<<S2.ID<<endl;
   cout<<"Student CGPA: "<<S2.cgpa<<endl;
   cout<<"Student Age: "<<S2.age<<endl;

}
