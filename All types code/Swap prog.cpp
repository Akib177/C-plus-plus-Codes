#include<iostream>
using namespace std;
int main(){
    int water, tea;
    cout<<"Enter two numbers:";
    cin>>water>>tea;
    cout<<"Before Swap water:"<<water<<" "<<"Tea:"<<tea<<endl;
    int Empty;
    Empty=water;
    water=tea;
    tea=Empty;
    cout<<"After Swap water:"<<water<<" "<<"Tea:"<<tea<<endl;
}
