#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<pair<int, pair<int,int> > > G; // w, (u,v);
vector<pair<int, pair<int,int> > > MST; // w, (u,v);
int vertex, edge;
int *parent;

void make_set()
{
    parent= new int [vertex];
    for(int i=0; i<vertex; i++)
        parent[i]=i;
}

void print_parent()
{
    cout<<endl;
    for(int i=0; i<vertex; i++)
        cout<<parent[i]<<"\t";
}

int find_set(int u)
{
    if(u==parent[u])
        return u;
    else
        return find_set(parent[u]);
}

void union_set(int u, int v)
{
    parent[u]= parent[v];
}


int main()
{
    cout<<"no of vertex: ";
    cin>>vertex;
    cout<<"no of edges: :";
    cin>>edge;

    int u,v,w;
    cout<<"enter each edge with weight:"<<endl;
    for(int e=1; e<=edge; e++)
    {
        cin>> u>>v>>w;
        G.push_back(make_pair(w,make_pair(u,v)));
    }

    //Kruskal
    //sort w.r.t weight
    sort(G.begin(),G.end());
    cout<<"\nPrint the input graph"<<endl;
    for(int i=0; i<G.size();i++)
        cout<<"("<<G[i].second.first<<","<<G[i].second.second<<"): "<<G[i].first<<endl;

    make_set();
    print_parent();

    int u_loc, v_loc;
    for(int i =0; i<edge; i++)
    {
       u_loc =find_set(G[i].second.first);
       v_loc= find_set(G[i].second.second);
       if(u_loc!=v_loc)
       {
           MST.push_back(G[i]);
           union_set(u_loc, v_loc);
           cout<<"\nAfter taking edge("<<G[i].second.first<<","<<G[i].second.second<<"): "<<G[i].first<<endl;
          print_parent();
         }
       }


    cout<<"\nMST"<<endl;
    for(int i=0; i<MST.size();i++)
        cout<<"("<<MST[i].second.first<<","<<MST[i].second.second<<"): "<<MST[i].first<<endl;


}//end on main
