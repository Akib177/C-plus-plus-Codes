#include<iostream>
using namespace std;
int main(){
  int num;
  cout<<"enter a number:";
  cin>>num;
  switch(num%2){
   case 6:
   cout<<"even"<<endl;
   break;
   case 5:
   cout<<"odd"<<endl;
break;

  }
}
