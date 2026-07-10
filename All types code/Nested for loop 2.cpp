#include<iostream>
using namespace std;

int main () {

int line;
  cout << "Enter the number of lines:";
  cin >> line;
  for (int i=0; i<line; i++){

    for (int j=line-1; j>0; j--){

        cout<<"*";
    }
cout<<endl;
}
}
