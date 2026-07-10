#include<iostream>
using namespace std;
int main(){

int arr[5]={10,20,15,5,3};
int *ptr = & arr[0];
  cout<<"Elements of the array: ";
  for (int i=0; i<5; i++){
    cout<<ptr[i]<<" ";

    //cout<<*(ptr+i)<<" ";
}


int *ptr = & arr[4];
  cout<<"Elements of the array: ";
  for (int i=0; i<5; i--){
    //cout<<ptr[i]<<" ";

    cout<<*(ptr-i)<<" ";

   }
 }
