# include <iostream>
# include<vector>
using namespace std;

int main(){

    vector <int> G[30];
    int vertex,edge,u,v;
    cout<<"Enter the number of vertex and edge " <<endl;

    cin>> vertex>>edge;

    cout<<"enter each"<<endl;
    for( int e=1;e<=edge;e++){

        cin>>u>>v;
        G[u].push_back(v);
    }
    cout<<"output graph"<<endl;
    for(int u=0; u<vertex ; u++){

        cout<<u<<"-----"<<endl;
        for(int v=0; v<G[u].size(); v++){
            cout<<G[u][v]<<" ";
        }
        cout<<endl;
    }
}
