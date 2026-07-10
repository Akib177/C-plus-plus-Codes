#include<iostream >
using namespace std;
void leap_year(int a){

   if (a%400==0 || a%4==0 && a%100!=0){
    cout<<a<<" is a leap year."<<endl;
   }
   else{
    cout<<a<<" is not a leap year."<<endl;
   }
}

int main (){
    int a;
 cout<<"Enter a year: ";
 cin>>a;
 leap_year(a);

return 0;

}
