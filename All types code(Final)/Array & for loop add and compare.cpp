#include<iostream>
using namespace std;
int main(){
  float arr_2022[6];
  float arr_2023[6];
  float total_2022=0;
  float total_2023=0;

  cout<<"Enter water bill, electricity bill, gas bill, internet service provider bill, phone bill and garbage disposal bill of 2022:";
  for(int i=0; i<6; i++){
    cin>>arr_2022[i];
    total_2022=total_2022+arr_2022[i];
  }
  cout<<"Total utility bill of 2022:"<<total_2022<<endl;
  cout<<"Enter water bill, electricity bill, gas bill, internet service provider bill, phone bill and garbage disposal bill of 2023:";
  for(int j=0; j<6; j++){
    cin>>arr_2023[j];
    total_2023=total_2023+arr_2023[j];
  }
  cout<<"Total utility bill of 2023:"<<total_2023<<endl;
  if(total_2023>total_2022){
    cout<<"The living cost is rising"<<endl;
  }
  else{
    cout<<"The living cost is reducing"<<endl;
  }

}
