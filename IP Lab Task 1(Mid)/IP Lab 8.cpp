#include<iostream>

using namespace std;

int main () {

int  pages;
float amount;
cout << "Per page charge is 2.35 TK"<<endl;
cout << "How many pages you want to photocopy:";
cin >>  pages;
amount = (2.35* pages);
cout << "Total cost: "<<amount<<endl;
if (amount> 100){
    cout << "After discount your total cost is :"<< (amount-(amount*0.04))<<endl;

}
else {
    cout<<"Sorry your cost is less then 100 TK so you have to pay :"<<amount<<endl;
}


return 0;

}

