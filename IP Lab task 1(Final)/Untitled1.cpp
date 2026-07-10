
#include<iostream>
using namespace std;
int main(){
    int a[4][5];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Elements are: "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    float large[1];
    large[1]=a[0][0];
    for(int i=0;i<1;i++){
        for(int j=1;j<5;j++){
            if(large[1]<a[i][j]){
                large[1]=a[i][j];
            }
        }
    }
    cout<<endl;
    cout<<"The large number from row 1 is: "<<large[1]<<endl;
    cout<<endl;
    float small[1];
    small[1]=a[1][1];
    for(int i=1;i<2;i++){
        for(int j=0;j<5;j++){
            if(small[1]>a[i][j]){
                small[1]=a[i][j];
            }
        }
    }
    cout<<"Small number from row 2 : "<<small[1]<<endl;
cout<<endl;
cout<<"Even numbers from row 3 are: ";
for(int i=2;i<3;i++){
    for(int j=0;j<5;j++){
            if(a[i][j]%2==0){
                cout<<a[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    cout<<"Prime numbers from row 4 are: ";
    for(int i=3;i<4;i++){
        for(int j=0;j<5;j++){
                bool isprime=true;
            if(a[i][j]<=1){
               continue;
            }
            if(a[i][j]>1){
                for(int k=2;k<a[i][j];k++){
                    if(a[i][j]%k==0){
                        isprime=false;
                        break;
                    }
                }
                if(isprime==true){
                    cout<<a[i][j]<<" ";
                }
            }
        }
    }
    return 0;
}
