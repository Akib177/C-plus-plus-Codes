#include<iostream>

using namespace std;

int main () {
  char ch;
  cin >> ch;

  if (ch=='M' || ch=='m'){
    cout << "Male"<<endl;
  }
 else if ( ch=='F' || ch=='f'){
    cout << "Female"<<endl;
 }
 else {
    cout << "Undefined"<<endl;
 }

return 0;

}

