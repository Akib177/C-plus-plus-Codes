#include<iostream>
using namespace std;
//Ambiguous Function Overloading
void Sum(int a, int b){
    int add=a+b;
    cout<<"Integer Addition:"<<add<<endl;
}
void Sum(string a, char b){
    cout<<"String parameter function"<<endl;
}
void Sum(float a, float b){
    float add=a+b;
    cout<<"Float Addition:"<<add<<endl;
}
int main(){
    Sum(12.2,5.6);
   Sum("hi".'z');
}
