
#include<iostream>
using namespace std;
int main(){
    int first=0,second=1,x,n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        if(i<=1){
            cout<<i<<" ";
        }
        else{
            x=first+second;
            first=second;
            second=x;
            cout<<x<<" ";
        }
        }
        return 0;
    }
