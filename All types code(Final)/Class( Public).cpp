#include<iostream>
using namespace std;
//Access Modifier/Access Specifier-> public, protected, private
class Student{
public:
    string Name;
    string ID;
    float cgpa;
};
int main(){
Student S1; //Object
S1.Name="Abc";
S1.ID="23-45";
S1.cgpa=3.44;

}
