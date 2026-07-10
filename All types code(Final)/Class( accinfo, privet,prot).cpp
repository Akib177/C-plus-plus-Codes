#include<iostream>
using namespace std;
class Account{
public:
    string AccNo;
    string AccName;
private:
    double Balance;
public:
    void Set_AccountInfo(){
    cout<<"Enter Account Number:";
    cin>>AccNo;
    cout<<"Enter Account Holder Name:";
    cin>>AccName;
    cout<<"Enter Account Balance:";
    cin>>Balance;
    }
    void Get_AccountInfo(){
    cout<<"Account No."<<AccNo<<endl;
    cout<<"Account Holder Name:"<<AccName<<endl;
    cout<<"Account Balance:"<<Balance<<endl;
    }
 double Deposit(){
        double amount;
        cout<<"Enter the deposit amount:";
        cin>>amount;
        Balance=Balance+amount;
        return Balance;
    }
    double Withdraw(){
        double amount;
        cout<<"Enter the withdraw amount:";
        cin>>amount;
        if(amount>Balance){
            cout<<"Insufficient Balance!"<<endl;
        }
        else{
            Balance=Balance-amount;
        }
        return Balance;
    }
};
int main(){
    Account A1;
    A1.Set_AccountInfo();
    A1.Get_AccountInfo();
    A1.Deposit();
    A1.Withdraw();
    cout<<"Account Information after deposit and withdraw operation"<<endl;
    A1.Get_AccountInfo();
}
