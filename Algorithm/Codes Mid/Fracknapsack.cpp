#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

int no_item= 6;
int price[no_item]={6,2,1,8,3,5};
int weight[no_item]={6,10,3,5,1,3};
int capacity=16, w=0;
float prifit=0,remain;


vector<pair<float, pair<int, int>>> itemTable;  //b/w  , w, b

for(int i=0; i<no_item; i++){


   float Ratio= (float)price[i] / (float) weight[i];
   itemTable.push_back(make_pair(Ratio,make_pair(price[i],weight[i])));
   sort(itemTable.begin(),itemTable.end());
}
for(int i=no_item-1; i>=0; i--){
    cout<<itemTable[i].first<<"       "<<itemTable[i].second.first<<"  "<<itemTable[i].second.second<<endl;
}


}
