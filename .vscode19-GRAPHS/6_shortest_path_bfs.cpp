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
void bfs(int src,int dest,vector<int> &dist){ // in unweighted graph shortest path can be counted between src and destination
    queue <int> qu ;
    visited.clear();
    dist.resize(v,INT_MAX);
    dist[src]=0;
    visited.insert(src);
    qu.push(src);
    while(qu.empty()!=1){
        int curr=qu.front();
        cout<<curr<<" "; // traversal via bfs
        qu.pop();
        for(auto neighbour: graph[curr]){
            if(not visited.count(neighbour)){ //only to that neighbour which is not counted till now
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour]=dist[curr]+1; //source se curr ka distance and + 1
//means kisi bhi curr ke neighbour ko traverse krenge to curr se har ek neighbour ka distance 1 hi hoga and source to
//curr ka distance curr ke index pr hai to dist[curr]+1
            }
        }
    }
    cout<<endl;
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
    for(int i=0; i<dist.size(); i++) cout<<dist[i]<<" ";
return 0;
}

/* 
#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int shortestPathBFS(int n, vector<vector<int>>& adjList, int source, int destination) {
    vector<int> distance(n, INT_MAX);
    queue<int> q;

    // Initialize BFS
    q.push(source);
    distance[source] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        // Traverse all adjacent nodes
        for (int neighbor : adjList[node]) {
            if (distance[neighbor] == INT_MAX) {
                distance[neighbor] = distance[node] + 1;
                q.push(neighbor);

                // If the destination is reached
                if (neighbor == destination) {
                    return distance[neighbor];
                }
            }
        }
    }

    // Return -1 if no path exists between source and destination
    return -1;
}

int main() {
    int n = 6;
    vector<vector<int>> adjList(n);

    // Example graph setup (undirected graph)
    adjList[0].push_back(1);
    adjList[1].push_back(0);
    
    adjList[0].push_back(2);
    adjList[2].push_back(0);
    
    adjList[1].push_back(3);
    adjList[3].push_back(1);
    
    adjList[2].push_back(4);
    adjList[4].push_back(2);
    
    adjList[3].push_back(5);
    adjList[5].push_back(3);
    
    adjList[4].push_back(5);
    adjList[5].push_back(4);

    int source = 0;
    int destination = 5;

    int shortestPathLength = shortestPathBFS(n, adjList, source, destination);

    cout << "Shortest path length from " << source << " to " << destination << ": " 
         << (shortestPathLength == -1 ? "No path exists" : to_string(shortestPathLength)) << endl;

    return 0;
}

Space Efficiency:
The distance vector uses an array of size n (number of nodes) to track the distances, which inherently serves as a
marker for visited nodes. If a node's distance remains INT_MAX, it means that the node has not been visited.
Using a set would require additional memory to store each visited node, which can be avoided by using the distance 
array.
 */