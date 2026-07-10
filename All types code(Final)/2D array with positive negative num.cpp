
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

    for(int row=0; row<2; row++){
        for(int col=0; col<5; col++){
                if(arr[row][col]>=0){
                    cout<<arr[row][col]<<" is an positive number"<<endl;
                }
                else{
                    cout<<arr[row][col]<<" is an negative number"<<endl;
                }
        }

    }

}
