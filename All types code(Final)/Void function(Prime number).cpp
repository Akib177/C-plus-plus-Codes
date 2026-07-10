#include <iostream>
using namespace std;

void  primenumber(int num){

int prime=1;
for(int i=2; i<num; i++){
    if(num%i==0){
        prime=0;
        break;
    }
}
if(prime==0){
    cout<<num<<" is not a prime number"<<endl;
}
else{
    cout<<num<<" is a prime number"<<endl;
  }
}
int main(){
int num;
cout<<"Enter a number you want to check is prime or not: ";
cin>>num;
primenumber(num);
}
