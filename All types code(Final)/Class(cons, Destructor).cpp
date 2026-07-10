#include<iostream>
using namespace std;
class Student{
private:
    string Name;
    float cgpa;
public:
    Student(){
    cout<<"Enter student Name:";
    cin>>Name;
    cout<<"Enter student cgpa:";
    cin>>cgpa;
    }
    ~Student(){
    cout<<"Student Name:"<<Name<<endl;
    cout<<"Student cgpa:"<<cgpa<<endl;
    }
};
int main(){
    Student S1;
    Student S2;
}
