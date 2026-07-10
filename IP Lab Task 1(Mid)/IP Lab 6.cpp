#include<iostream>

using namespace std;

int main () {
int num;
cout << "Enter the num:";
cin>> num;
if ((num%2==0) && (num % 5 ==0)  && (num % 11 == 0)){

    cout << "The number is divided by 2,5 and 11"<<endl;

}
   else {
    cout <<"This is not that number "<<endl;

   }


return 0;

}

