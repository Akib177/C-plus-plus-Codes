#include<iostream>
using namespace std;
//Access Modifier/Access Specifier-> public, protected, private
class Student{
public:
    string Name;
private:
    string ID;
protected:
    float cgpa;
public:
    void Set_StudentInfo(string nm, string id, float cg){//Method
        Name=nm;
        ID=id;
        cgpa=cg;
    }
    void Get_StudentInfo(){
        cout<<"Student Name:"<<Name<<endl;
        cout<<"Student ID:"<<ID<<endl;
        cout<<"CGPA:"<<cgpa<<endl;
    }
    void Check_Student(){
        if(cgpa<2.50){
            cout<<"Probation Student"<<endl;
        }
        else{
            cout<<"Regular Student"<<endl;
        }
    }
};
int main(){
Student S1;
S1.Set_StudentInfo("ABC","23-45",3.77);
Student S2;
S2.Set_StudentInfo("DEF","23-90",2.44);
cout<<"Student Information"<<endl<<endl;
S1.Check_Student();
S1.Get_StudentInfo();
S2.Check_Student();
S2.Get_StudentInfo();
}
