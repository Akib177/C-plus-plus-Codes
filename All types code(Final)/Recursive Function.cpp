#include<iostream>
using namespace std;
//Function Recursion/Recursive Function
//Factorial 5!=5*4*3*2*1=120
//Factorial 0!=1
int Factorial(int num){
    if(num==0 || num==1){
        return 1;
    }
    else{
        return num*Factorial(num-1);
    //num=5 5*Factorial(5-1) 5*4*Factorial(4-1) 5*4*3*Factorial(3-1) 5*4*3*2*Factorial(2-1) 5*4*3*2*1
    }
}
int main(){
   int number;
   cout<<"Enter a number:";
   cin>>number;
   cout<<"Factorial:"<<Factorial(number);

}
