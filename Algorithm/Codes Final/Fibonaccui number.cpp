#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int first=0, second=1;
    cout<<"First "<<num<<" Fibonacci numbers are: ";

    cout<<first<<" "<<second<<" ";
    for (int i=3; i<=num; i++) {
        int next=first+second;
        cout<<next<<" ";
        first=second;
        second=next;
    }
    cout<<endl;
    return 0;
}

