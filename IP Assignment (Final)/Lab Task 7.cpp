#include<iostream>
using namespace std;
int main() {

  int arr[3][3];
    cout<<"Enter the years of the array:"<<endl;
     for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }
    cout<<"Inputted years:"<<endl;
     for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

   int max=arr[0][0];

  for(int row=0; row<3; row++){
   for(int col=0; col<3; col++){
     if(arr[row][col]>max){
       max=arr[row][col];
    }
   }
 }
     cout << endl;
    cout << "Recent Year: " << max << endl;

int min=arr[0][0];
  for (int row=0; row<3; row++){
    for(int col=0;col<3;col++){
     if(arr[row][col]<min){
       min=arr[row][col];
     }
   }
 }
     cout << endl;
    cout << "Oldest Year: " << min << endl;

  cout<<"Leap years: ";
    for( int row=0; row<3; row++){
      for ( int col=0; col<3; col++){
        if ((arr[row][col] % 4 == 0 && arr[row][col] % 100 != 0) || (arr[row][col]% 400 == 0)){
         cout<<arr[row][col]<<" , ";
      }
    }
  }
}
