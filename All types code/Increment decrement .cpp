#include <iostream>
using namespace std;
int main () {
 char p='A';
 float q=5.55;
 char r=p++;
 int s=q;
 cout<<"p;"<<p<<endl;
 cout<<"q;"<<q<<endl;
 cout<<"r;"<<r<<endl;
 cout<<"s;"<<s<<endl;
 cout<<"p;"<<++p<<endl;
 cout<<"q;"<<p--<<endl;
 cout<<"q;"<<(int)q<<endl;
 ++r;
 s++;
 cout<<"r;"<<r<<endl;
 cout<<"s;"<<s<<endl;
 cout<<(r==q)<<endl;
 cout<<(r!=q)<<endl;
 cout<<"The end"<<endl;

 return 11;
}
