#include<iostream>
using namespace std;
  int main () {
    float a , b , c , d , e;
    cin >>a>>b>>c>>d>>e;
    float sum = a+b+c+d+e;
    int avg= sum/5;
    cout <<"Sum:"<<sum<<endl;
    cout <<"Avg:"<<avg<<endl;

    if (avg%2==0) {
        cout << avg<< " Which is even"<<endl;

    }
  else {
    cout <<avg<<" Which is odd"<<endl;
  }


return 0;

}
