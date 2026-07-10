#include<iostream>
using namespace std;
int main(){
//Dynamic memory allocation & deallocation
int num1,num2,sum=0;
cout<<"Enter two numbers:";
cin>>num1>>num2;
cout<<"Do you want to add more numbers?"<<endl;
string reply;
cin>>reply;
if(reply=="YES"||reply=="yes"){
cout<<"How many numbers do you want to add?"<<endl;
int extra;
cin>>extra;
int *ptr= new int [extra+2]; //Dynamic memory allocation
ptr[0]=num1, ptr[1]=num2;
cout<<"Enter "<<extra<<" more numbers:";
for(int i=2; i<extra+2; i++){
cin>>ptr[i];
}
cout<<"Entered "<<extra+2<<" numbers are:";
for(int i=0; i<extra+2; i++){
cout<<ptr[i]<<" ";
sum=sum+ptr[i];
}
delete [] ptr; //Memory Deallocation
}
else{
sum=num1+num2;
}
cout<<endl;
cout<<"Sum:"<<sum<<endl;

}

