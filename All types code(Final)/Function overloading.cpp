#include<iostream>
using namespace std;
//Function Overloading
void Sum(int a, int b){
    int add=a+b;
    cout<<"Addition of two numbers:"<<add<<endl;
}
void Sum(int a, int b, int c){
    int add=a+b+c;
    cout<<"Addition of three numbers:"<<add<<endl;
}
int main(){
    Sum(3,5);
    Sum(10,5,3);
}
