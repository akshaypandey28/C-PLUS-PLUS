#include<bits/stdc++.h>
using namespace std;
vector<list<int> > graph;
unordered_set<int> visited;
int v; //no. of vertices 
vector<vector<int>> result;
void add_edge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
void bfs(int src,int dest,vector<int> &dist){ // in unweighted graph shortest
//path can be counted between src and destination
    queue <int> qu ;
    visited.clear();
    dist.resize(v,INT_MAX);
    dist[src]=0;
    visited.insert(src);
    qu.push(src);
    while(qu.empty()!=1){
        int curr=qu.front();
        qu.pop();
        for(auto neighbour: graph[curr]){
            if(not visited.count(neighbour)){ //only to that neighbour which is not counted till now
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour]=dist[curr]+1; //source se curr se distance and + 1
            }
        }
    }
}
int main(){
    cin>>v;
    graph.resize( v,list<int> () );
    int e; cin>>e;
    visited.clear();
    while(e--){
        int s,d; cin>>s>>d;
        add_edge(s,d,false); //for other path remove false
    }
    int x,y;
    cout<<"Source ";       cin>>x; cout<<endl;
    cout<<"Destination ";  cin>>y; cout<<endl;
    vector<int> dist;
    bfs(x,y,dist);
    for(int i=0; i<dist.size(); i++){
        cout<<dist[i]<<" ";
    }
return 0;
}