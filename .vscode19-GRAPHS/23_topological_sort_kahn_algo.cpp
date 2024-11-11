#include <bits/stdc++.h>
using namespace std;
//also used for cycle detection in directed graph
/* 
8
11
0 2
1 2
1 3
2 3
2 4
2 6
2 5
3 5
4 6
5 6
6 7
answer
starting bfs
0 1 2 3 4 5 6 7
 */
vector<list<int> > graph;
int v; // no of vertices
void add_edge(int a, int b, bool bidir = true) {
    graph[a].push_back(b); // a->b
    if(bidir) {
        graph[b].push_back(a);
    }

}

void topoBFS() {
    // Kahn algo
    vector<int> indegree(v, 0);
    for(int i = 0 ; i < v; i++) {
        for(auto neighbour : graph[i]) {
            // i ---> neighbour (i to neighbour edge)
            indegree[neighbour]++;
        }
    }
    queue<int> qu;
    unordered_set<int> vis;
    //here i can remove visited because in both, insertion happens only when indegree[i]==0 so any one of them can
    //take care of this checking without having an extra checking whether it is counted or not by visited
    for(int i = 0; i < v; i++) {
        if(indegree[i] == 0) {
            qu.push(i);
            vis.insert(i);
        }
    }
    cout<<"starting bfs\n";
    while(not qu.empty()) {
        int node = qu.front();
        cout<<node<<" ";
        qu.pop();
        for(auto neighbour : graph[node]) {
            if(not vis.count(neighbour)) {
                indegree[neighbour]--;
                if(indegree[neighbour] == 0) {
                    qu.push(neighbour);
                    vis.insert(neighbour);
                }
            }
        }
    }

} 

int main() {
    cin>>v;
    int e; cin>>e;
    graph.resize(v, list<int> ());
    while(e--) {
        int x, y;
        cin>>x>>y;
        add_edge(x, y, false);
    }
    topoBFS();
    return 0;
}