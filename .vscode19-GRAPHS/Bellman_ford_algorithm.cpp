#include<bits/stdc++.h>
using namespace std;
//helps to detect the negative cycles
//N-1 relaxation has to be done 
//why N-1 iteration ??  here N means V vertex
//because  on N-1 iteration it updates the distance from source node to all nodes with minimum possible distance

//how to detect negative cycles?
//on Nth iteration,the relaxation will be done and if the distance array gets reduced , then it means negative cycles
//exist

class Solution {
  public:
    /*  Function to implement Bellman Ford
     *   edges: vector of vectors which represents the graph
     *   src: source vertex
     *   V: number of vertices
     */
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        vector<int> dist(V, 1e8);
		dist[src] = 0;
		for (int i = 0; i < V - 1; i++) {
			for (auto it : edges) {
				int u = it[0];
				int v = it[1];
				int wt = it[2];
				
				if (dist[u] != 1e8 && dist[u] + wt < dist[v]) 	dist[v] = dist[u] + wt;
			}
		}
		// Nth relaxation to check negative cycle
		for (auto it : edges) {
			int u = it[0];
			int v = it[1];
			int wt = it[2];
			if (dist[u] != 1e8 && dist[u] + wt < dist[v]) 	return { -1};
		}

		return dist;
    }
};
int main(){
return 0;
}