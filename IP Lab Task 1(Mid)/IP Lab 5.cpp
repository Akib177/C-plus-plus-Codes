#include<iostream>

using namespace std;

int main () {
   int base , hight , Area ;
   cout <<"Base:";
   cin >> base;
   cout << "Hight:";
  cin >> hight;
  int area = 0.5*base*hight;
  cout <<"Area:"<<area<<endl;

   if ( area%2==0){
    cout<<"This is even"<<endl;
   }
   else{
    cout <<"This is odd"<<endl;
   }

return 0;

}

