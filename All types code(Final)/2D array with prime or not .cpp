
#include<iostream>
using namespace std;
int main(){
    int arr[2][5];
    cout<<"Enter the elements of the array:"<<endl;
    for(int row=0; row<2; row++){
        for(int col=0; col<5; col++){
            cin>>arr[row][col];
        }
    }
    cout<<"Inputted Elements:"<<endl;
    for(int row=0; row<2; row++){
        for(int col=0; col<5; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
 int prime[2][5];
 cout<<"Prime numbers are: ";
    for(int row=0; row<2; row++){
        for(int col=0; col<5; col++){
        bool is_prime = true;
        if (arr[row][col] <= 1) {
            is_prime = false;
    }
         else {
            for (int m = 2; m * m <= arr[row][col]; m++) {
                if (arr[row][col] % m == 0) {
                    is_prime = false;
                    break;
                }
            }
        }
        if (is_prime) {
            prime[row][col] = arr[row][col] ;
            cout << prime[row][col] << " " ;

        }

      }

   }

}
