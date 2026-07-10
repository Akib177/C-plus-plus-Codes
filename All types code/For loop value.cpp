#include<iostream>
using namespace std;
int main(){
    int value;
    cout<<"How many numbers do you want to check?"<<endl;
    cin>>value;
    for(int i=0; i<value; i++){
        int num;
        cout<<"Enter a number:";
        cin>>num;
        if(num%2==0){
            cout<<num<<" an even number"<<endl;
        }
        else{
            cout<<num<<" an odd number"<<endl;
        }

}
}
