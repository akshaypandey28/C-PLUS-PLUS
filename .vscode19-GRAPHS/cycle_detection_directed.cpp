#include<bits/stdc++.h>
using namespace std;
/* https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1 */

//DFS
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfsCheck(int node, vector<vector<int>>& adj, int vis[], int pathVis[]) {
    vis[node] = 1;
    pathVis[node] = 1;

    // traverse for adjacent nodes
    for (auto it : adj[node]) {
        // when the node is not visited
        if (!vis[it]) {
            if (dfsCheck(it, adj, vis, pathVis) == true) return true;
        }
        // if the node has been previously visited
        // but it has to be visited on the same path
        else if (pathVis[it]) {
            return true;
        }
    }

    pathVis[node] = 0;
    return false;
 }

    bool isCyclic(int V, vector<vector<int>> adj) {
        int vis[V] = {0};
		int pathVis[V] = {0};

		for (int i = 0; i < V; i++) {
			if (!vis[i]) {
				if (dfsCheck(i, adj, vis, pathVis) == true) return true;
			}
		}
		return false;
    }
};


/* https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1 */
//BFS
//BFS is kahn's algorithm that is topological sort
int main(){
return 0;
}