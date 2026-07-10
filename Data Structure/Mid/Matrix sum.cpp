#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter the size:";
cin>>a>>b;

  int arr1[a][b],arr2[a][b],arr3[a][b];

   cout<<"Enter the element of 1st array:";
   for (int i=0; i<a; i++){
        for(int j=0; j<b; j++){
    cin>>arr1[i][j];

  //  cout<<arr1[i][j];
   }
   }
   cout<<"Enter the element of 2nd array:";
   for (int i=0; i<a; i++){
        for(int j=0; j<b; j++){
    cin>>arr2[i][j];

   // cout<<arr2[i][j];
   }

}
cout<<"Elements of 1st arrays:"<<endl;
for (int i=0; i<a; i++){
        for(int j=0; j<b; j++){
    cout<<arr1[i][j]<<"     ";
        }
    cout<<endl;

}
cout<<"Elements of 2nd arrays:"<<endl;
   for (int i=0; i<a; i++){
        for(int j=0; j<b; j++){
    cout<<arr2[i][j]<<"     ";


   }
   cout<<endl;
   }

cout<<"sum of two matrix:"<<endl;
   for (int i=0; i<a; i++){
        for(int j=0; j<b; j++){

        arr3[i][j]=arr1[i][j]+arr2[i][j];

        cout<<arr3[i][j]<<"     ";
   }
   cout<<endl;
   }



int min=arr3[0][0];
  for (int i=0; i<a; i++){
    for(int j=0;j<b;j++){
     if(arr3[i][j]<min){
       min=arr3[i][j];
     }
   }
 }
     cout << endl;
    cout << "Minimum number: " << min << endl;













}
