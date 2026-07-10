#include<iostream>
using namespace std;

void zero_small(int &a,int &b){

if (a<b){
    a=0;
}
else{
    b=0;
}
}


int main(){

cout<<"Enter the 2 numbers :"<<endl;
int a,b;
cin>>a>>b;

zero_small(a,b);
cout<<"num1 = "<<a<<endl;
cout<<"num2 = "<<b<<endl;

return 0;

}
