#include<iostream>

using namespace std;
int main () {
int year;
cout<<"Enter the year:";
cin>> year;
if (year>=1800 && year<=2023){

    if ((year%400==0) || (year%4==0 && year%100!=0)){
        cout << "This is leap year"<<endl;

    }
    else {
        cout << "This is not a leap year"<<endl;
    }
}

    else {
        cout << " Invaild Year"<<endl;
    }


return 0;

}

