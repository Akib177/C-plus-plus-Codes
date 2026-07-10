#include<iostream>
using namespace std;
class Student {
   private:
       string Name;
       string StudentID;
       int age;
       float cgpa;
   public:
    void Set_StudentInfo(){
        cout<<"Enter  name: ";
        cin>>Name;
        cout<<"Enter Student ID: ";
        cin>>StudentID;
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter CGPA: ";
        cin>>cgpa;

    }
    void Get_StudentInfo(){
     cout<<"Name; "<<Name<<endl;
     cout<<"student ID: "<<StudentID<<endl;
     cout<<"Age: "<<age<<endl;
     cout<<"CGPA: "<<cgpa<<endl;
    }
};
class Instructor:public Student{
   string InstructorID;
   string lab;
 public:
     void Set_InstructorInfo(){
     cout<<"Enter Instructor ID: ";
     cin>> InstructorID;
     cout<<"Enter assigned lab: ";
     cin>> lab;
     }
    void Get_InstructorInfo(){
    cout<<"Instructor ID: "<<InstructorID<<endl;
    cout<<"Assigned lab: "<<lab<<endl;
    }
};
int main(){
Instructor I1;
I1.Set_StudentInfo();

I1.Set_InstructorInfo();
I1.Get_StudentInfo();
I1.Get_InstructorInfo();
}
