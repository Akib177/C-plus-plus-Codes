#include <iostream>
using namespace std;

 double price, total, totalamount, totalTax;
 float taxRate;
  double arr[5];

  void totalAmount (){


  cout<<"Enter the prices of product:";

  for(int i=0; i<5; i++){
  cin>>arr[i];

  }
  cout<<endl;
  for(int i=0; i<5; i++){
  cout<<arr[i]<<endl;
  total+=arr[i];

  }

cout<<"Total amout without tax: "<<total<<" Tk"<<endl;
  }

void totalWithTax(){
cout<<"Enter the tax rate:";
      cin>>taxRate;
 taxRate=taxRate/100;
 totalTax= total*taxRate;
 totalamount= total + totalTax;

   cout<<"Total tax is : "<<totalTax<<" TK"<<endl;
   cout<<"Total amout of your product: "<<totalamount<<" TK"<<endl;

}

int main(){

   totalAmount();
   totalWithTax();




}
