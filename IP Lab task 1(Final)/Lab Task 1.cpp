#include <iostream>
 using namespace std;
 int main(){
 cout<<"Enter the elements of the array: ";
 int arr[4][5];
 for(int row=0;row<4;row++){
    for(int col=0;col<5;col++){
        cin>>arr[row][col];
    }
 }
cout<<endl;
cout<<"Inputted array is: ";
 for(int row=0;row<4;row++){
    for(int col=0;col<5;col++){
     cout<<arr[row][col]<<" ";
    }
    cout<<endl;
 }

int max=arr[0][0];
for(int col=0; col<5; col++){
    if(arr[0][col]>max){
       max=arr[0][col];
    }
}
     cout << endl;
    cout << "Maximum number from row 1: " << max << endl;


int min=arr[1][0];
for(int col=0;col<5;col++){
    if(arr[1][col]<min){
       min=arr[1][col];
    }
}
     cout << endl;
    cout << "Minimum number from row 2: " << min << endl;


cout<<"Even numbers from row 3: ";
  for(int col=0; col<5; col++){
     if(arr[2][col]%2==0){
       cout<<arr[2][col]<<" ";
     }
 }
       cout << endl;

cout << "Prime numbers from row 4: " << endl;

  for(int col = 0; col<5; col++) {
        int num = arr[3][col];
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
