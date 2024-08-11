#include<bits/stdc++.h>
using namespace std;
/* 
4
4
0 1     0 is must because travesing in has_cycle starts from 0 to v-1(included)
1 2
2 3
3 0
Cycle detected
 */
vector<list<int> > graph;
int v; //no. of vertices 
void add_edge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
void display(){
    for(int i=0; i<graph.size(); i++){
        cout<<i<<" -> ";
        for(auto ele:graph[i]){
            cout<<ele<<" , ";
        }
        cout<<endl;
    }
}
bool dfs(int src,int parent,unordered_set<int> &vis){
    vis.insert(src);
    for(auto neighbour : graph[src]){
        //concept => if the neighbour of the source is visited (that is visited node) and the neighbour is not the parent of src node 
        //then cycle detected
        if(vis.count(neighbour) and neighbour!=parent){
            //cycle detected
            return true;
        }
        if(!vis.count(neighbour)){
            bool res = dfs(neighbour, src, vis);
            if(res == true) return true;
        }
    }
    return false;
}
bool has_cycle(){
    unordered_set<int> vis;
    for(int i=0; i<v; i++){
        if(!vis.count(i)){
            bool result = dfs(i,-1,vis);
            if(result==true) return true;
        }
    }
    return false;
}
int main(){
    cin>>v;
    graph.resize( v,list<int> () );
    int e; cin>>e;
    while(e--){
        int s,d; cin>>s>>d;
        add_edge(s,d,false); 
    }
    display();
    bool cycle=has_cycle();
    if(cycle==true) cout<<"Cycle detected\n";
    else cout<<"No Cycle detected\n";
return 0;
}