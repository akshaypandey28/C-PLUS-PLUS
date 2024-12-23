#include<bits/stdc++.h>
using namespace std;
//1st step => do topo sort using dfs 
//2nd step => take out nodes from stack one by one and relax the edges
class Solution {
public:
    vector<list<pair<int, int>>> graph;

    void topoSort(int node, int vis[], stack<int> &st) {
        // This is the function to implement Topological sort.
        vis[node] = 1;
        for (auto it : graph[node]) {
            int v = it.first;
            if (!vis[v]) {
                topoSort(v, vis, st);
            }
        }
        st.push(node);
    }

    vector<int> shortestPath(int V, int E, vector<vector<int>> &edges) {
        // Construct the adjacency list for the graph
        graph.resize(V);
        for (int i = 0; i < E; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            graph[u].push_back({v, wt});
        }

        int vis[V] = {0};

        // Now, we perform topo sort using DFS technique and store the result in the stack
        stack<int> st;
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                topoSort(i, vis, st);
            }
        }

        vector<int> dist(V);
        for (int i = 0; i < V; i++) {
            dist[i] = 1e9;
        }

        dist[0] = 0;
        while (!st.empty()) {
            int node = st.top();
            st.pop();

            for (auto it : graph[node]) {
                int v = it.first;
                int wt = it.second;

                if (dist[node] + wt < dist[v]) {
                    dist[v] = wt + dist[node];
                }
            }
        }

        for (int i = 0; i < V; i++) {
            if (dist[i] == 1e9) dist[i] = -1;
        }
        return dist;
    }
};

int main(){
return 0;
}