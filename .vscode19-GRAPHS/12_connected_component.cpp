#include<bits/stdc++.h>
using namespace std;
/* 
7 vertices
8 edges
0 1
0 3
1 3
3 4
1 4
2 5
5 6
2 6
*/
vector<list<int> > graph;
int v; //no. of vertices 
//Time : O(V+E)
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
void dfs(int node,unordered_set<int> &visited){
    visited.insert(node); //jaise hi kisi node pr jayenge usko visited mark kr denge
    for(auto neighbour:graph[node]){
        if(!visited.count(neighbour)){ // 0 to 1 that's why if gets executed
        dfs(neighbour,visited);
        }
    }
}
int connected_components(){
    int result=0;
    unordered_set<int> visited;
    for(int i=0; i<v; i++){ // O(v)
        //go to every vertex
        //if from a vertex we can initialise a dfs , we got one more connected component
        if(visited.count(i)==0){ 
            result++;
            dfs(i,visited);
        }
    }
    return result;
}
int main(){
    cin>>v;
    graph.resize( v,list<int> () );
    int e; cin>>e;
    while(e--){
        int s,d; cin>>s>>d;
        add_edge(s,d,false);
    }
    //display();
    cout<<connected_components()<<endl;
return 0;
}