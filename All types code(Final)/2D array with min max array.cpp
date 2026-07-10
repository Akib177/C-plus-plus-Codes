#include<iostream>
using namespace std;
int main() {

  int arr[3][3];
    cout<<"Enter the elements of the array:"<<endl;
     for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }
    cout<<"Inputted Elements:"<<endl;
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
    cout << "Maximum number: " << max << endl;

int min=arr[0][0];
  for (int row=0; row<3; row++){
    for(int col=0;col<3;col++){
     if(arr[row][col]<min){
       min=arr[row][col];
     }
   }
 }
     cout << endl;
    cout << "Minimum number: " << min << endl;


    cout << "Prime numbers : ";
   for(int col = 0; col<3; col++) {
      for(int row=0;row<3;row++){
        int num = arr[row][col];
        bool prime = true;

        if(num <= 1) {
            prime = false;
        }
        else {
            for(int j=2; j*j<=num; j++) {
                if(num%j==0) {
                    prime = false;
                    break;
                }
            }
        }
        if(prime) {
            cout << num << " ";
        }
    }

 }

 return 0;
}
