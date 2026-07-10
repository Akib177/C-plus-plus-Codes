#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<pair<int, pair<int,int>>> G;
vector<pair<int, pair<int,int>>> MST;

int vertex, edge;
int *parent;

void Make_set(){
  parent= new int [vertex+1];
  for(int i=0; i<=vertex; i++){
    parent[i]=i;
  }
}

void Print_parent(){

 cout<<endl;
 for(int i=1; i<=vertex; i++){
    cout<<parent[i]<<"\t";
 }
}

  int find_set(int u){
  if(u==parent[u]){
    return u;
  }
  else{
    return find_set(parent[u]);
  }

  }

  void union_set(int u, int v){
  parent[u]=parent[v];
  }

int main(){

cout<<"No of vertex: ";
cin>>vertex;

cout<<"No of edge: ";

cin>>edge;

int u,v,w;
cout<<"Enter each edge with weight: ";

for(int e=1; e<=edge; e++ ){
    cin>>u>>v>>w;
    G.push_back(make_pair(w,make_pair(u,v)));
    }

 sort(G.begin(), G.end());

 cout<<"Print sorted edge: "<<endl;
 for(int i=0; i<G.size(); i++){
    cout<<"("<<G[i].second.first<<","<<G[i].second.second<<"): "<<G[i].first<<endl;

 }

 Make_set();
 Print_parent();

 int u_loc, v_loc;
 for(int i=0; i<edge; i++){
    u_loc=find_set(G[i].second.first);
    v_loc=find_set(G[i].second.second);

    if(u_loc!=v_loc){
        MST.push_back(G[i]);
        union_set(u_loc, v_loc);
        cout<<"\nParent array after taking edge:(" <<G[i].second.first<<","<<G[i].second.second<<endl;
        Print_parent();
    }
 }
 cout<<endl;
 cout<<endl;
 cout<<"Print MST: ";

 for(int i=0; i<G.size(); i++){
    cout<<"("<<MST[i].second.first<<","<<MST[i].second.second<<"):" <<MST[i].first<<endl;

 }

}
