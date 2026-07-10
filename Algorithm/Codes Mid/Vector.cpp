#include<iostream>
#include<vector>
using namespace std;

int main(){

  int vectex=5;
  //int G[vectex+1][vectex+1];
  vector<int> G[vectex+1];
  G[1].push_back (2);
  G[1].push_back (4);
  G[2].push_back (1);
  G[2].push_back (3);
  G[3].push_back (3);
  G[4].push_back (3);
  G[4].push_back (5);
  G[5].push_back (4);

for(int i=1; i<=vectex; i++){
    cout<<i<<"<-->";
    for(int j=0; j<G[i].size(); j++){
        cout<<"  "<<G[i][j]<<"  ";
    }
    cout<<endl;
}




}
