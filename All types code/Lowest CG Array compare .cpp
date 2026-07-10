#include<iostream>
#include<conio.h>
using namespace std;
int main(){


double arr[3];
cout<<"Enter 3 students cg "<<endl;
for(int i=0;i<3;i++){
    cout<<"Enter Thee Student cg "<<i+1<<endl;
    cin>>arr[i];
}
double lowest=arr[0];

for(int i=0;i<3;i++){
    if(arr[i]<lowest){
        lowest=arr[i];
    }
}

cout<<"Lowest cg is "<<lowest<<endl;

getch();
}
