#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<pair<pair<int, int>,int> >G;

  G.push_back (make_pair(make_pair(1,2),1));
  G.push_back (make_pair(make_pair(1,4),2));
  G.push_back (make_pair(make_pair(2,1),2));
  G.push_back (make_pair(make_pair(2,3),3));
  G.push_back (make_pair(make_pair(3,3),4));
  G.push_back (make_pair(make_pair(4,3),6));
  G.push_back (make_pair(make_pair(4,5),3));
  G.push_back (make_pair(make_pair(5,4),3));

for (int i=0; i<G.size(); i++){
    cout<<"("<<G[i].first.first<<" "<<G[i].first.second<<")--"<<G[i].second<<endl;
}


return 0;
}
