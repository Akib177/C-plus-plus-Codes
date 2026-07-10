#include<iostream>
using namespace std;
//Function Overloading
void Sum(int a, int b){
    int add=a+b;
    cout<<"Addition of two numbers:"<<add<<endl;
}
void Sum(string a, char b){
    cout<<"String parameter function"<<endl;
}
int main(){
    Sum("Hello",'Z');
    Sum(2,3);
}
