#include<iostream>
using namespace std;
int main(){
   int arr[]={2,3,15};



   for(int i=0; i<(sizeof(arr)/4); i++){
     cout<<arr[i]<<" ";
   }



}
