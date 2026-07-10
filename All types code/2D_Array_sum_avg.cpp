
#include <iostream>
#include<conio.h>
using namespace std;
int main(){

float arr [8];
double sum=0,avg, mult=1;
cout<<"Enter 8 numbers"<<endl;

for(int i=0;  i<8;  i++){
    cout<<"Enter number "<<i+1<<endl;
    cin>>arr[i];
    sum=sum+arr[i];
    mult=mult*arr[i];
}
cout<<"Summation : "<<sum<<endl;
   avg=sum/8;
cout<<"Average  :"<<avg<<endl;

  cout<<"Multiplication : "<<mult<<endl;
getch();
return 0;
}
