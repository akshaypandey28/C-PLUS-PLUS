#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int> > graph;
unordered_set<int> visited;
int v; //no. of vertices 
void add_edge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
bool dfs(int curr,int end){
    if(curr==end) return true; //means after traversing through the graph curr and end both poiting to the 
    //same destination 
    visited.insert(curr); //mark visited
    for(auto neighbour : graph[curr]){ //traversing for all the neighbours for current node
        if(not visited.count(neighbour)){ // if 0 then not of 0 is true
            bool result=dfs(neighbour,end);
            if(result==true) return true;
        }
    }
    return false;
}
bool anyPath(int src ,int dest){
    return dfs(src,dest);
}
int main(){
    cin>>v;
    graph.resize( v,list<int> () );
    int e; cin>>e;
    visited.clear();
    while(e--){
        int s,d; cin>>s>>d;
        add_edge(s,d,false);
    }
    int x,y;
    cout<<"Source ";       cin>>x; cout<<endl;
    cout<<"Destination ";  cin>>y; cout<<endl;
    
    cout<<"Path existence between x and y in the terms of 0 and 1 answer is "<<anyPath(x,y)<<endl;
return 0;
}