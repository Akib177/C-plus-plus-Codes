#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    cout<<"Enter the elements of the array:"<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin>>arr[row][col];
        }
    }
    cout<<"Inputted Elements:"<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
                if(arr[row][col]%2==0){
                    cout<<arr[row][col]<<" is an even number"<<endl;
                }
                else{
                    cout<<arr[row][col]<<" is an odd number"<<endl;
                }
        }

    }

}
