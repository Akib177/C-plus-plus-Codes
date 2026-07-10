#include<iostream>

using namespace std;

int main () {
float num;
cout << "Enter the number:";

  cin>> num;
if(num / (int)num==1){
    cout << "This is a integer"<<endl;

}
  else {
    cout << "This is a float"<<endl;
  }


return 0;

}

