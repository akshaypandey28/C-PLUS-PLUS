#include<iostream> //code is specially for bidirectional graph
#include<vector>
#include<list>
#include<unordered_set>
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
void dfs(int curr,int end,vector<int> &path){
    if(curr==end) {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return ;
    } //means after traversing through the graph curr and end both pointing to the 
    //same destination 
    visited.insert(curr); //mark visited
    path.push_back(curr);
    for(auto neighbour : graph[curr]){ //traversing for all the neighbours for current node
        if(not visited.count(neighbour)){ // if 0 then not of 0 is true
            dfs(neighbour,end,path);
        }
    }
    path.pop_back(); //removing because there may be a chance that curr can become the part of any other path
    //after the for loop, i get all the path that can be formed with the curr source and that's why i remove the 
    //curr from the visited set i.e marking unvisited
    visited.erase(curr); 
    return ;
}
void allPath(int src ,int dest){
    vector<int> v;
    dfs(src,dest,v);
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
    allPath(x,y);
    cout<<"Path existence between x and y are "<<endl;
    for(auto path:result){
        for(auto ele:path){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
return 0;
}