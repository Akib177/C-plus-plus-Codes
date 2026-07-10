#include <iostream>
using namespace std;
int main (){
    int type;
    float quantity;
    float total_amount;
    char x;
    cout<<"Which type of gold do you want to purchase?"<<endl;
    cout<<"Press 1 for 22 carat gold."<<endl;
    cout<<"Press 2 for 24 carat gold."<<endl;
    cin>>type;
    switch (type){
    case 1:
        cout<<"Enter the quantity (gram) of gold you want to purchase:";
        cin>>quantity;
        cout<<"Price of 1 gram of 22 carat gold is 6,529.4 Taka."<<endl;
        total_amount=quantity*6529.4;
        cout<<"Your total cost is: "<<total_amount<<" BDT."<<endl;
        break;
    case 2:
        cout<<"Enter the quantity (gram) of gold you want to purchase:";
        cin>>quantity;
        cout<<"Price of 1 gram of 24 carat gold is 7,126.6 Taka."<<endl;
        total_amount=quantity*7126.6;
        cout<<"Your total cost is: "<<total_amount<<" BDT."<<endl;
        break;
    }
    cout<<"Do you want to convert the amount to US Dollars? Press Y for yes and N for no."<<endl;
    cin>>x;
    switch (x){
    case 'Y':
        total_amount=total_amount/110.24;
        cout<<"Total Cost: $"<<total_amount<<endl;
        break;
    case 'y':
        total_amount=total_amount/110.24;
        cout<<"Total Cost: $"<<total_amount<<endl;
        break;
    case 'N':
        cout<<"Thank you"<<endl;
        break;
    case 'n':
        cout<<"Thank you"<<endl;
        break;
    }
return 0;
}
