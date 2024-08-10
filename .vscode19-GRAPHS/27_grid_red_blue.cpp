#include<bits/stdc++.h>
using namespace std;
/*Question 
You are given an undirected and undirected graph with source and destination node.Every edge has a color 
either red or blue.Find the shortest path between source and destination such that 
(i) the path always starts from a red and ends at a blue edge
(ii) you can shift from red edge to blue only once
(iii) there are no self loops or multiple edges

approach 
approach go from each source whose edges are red till blue achieved and count the steps on moving and store them for
each source the node which are blocked assign them infinity and from destination go to each node whose edges are 
blue till red achieved and count steps and store them and finally travel each node add both steps and return 
minimum of it
 */
vector<int> bfs(int n, vector<vector<pair<int, int>>>& graph, int start, int edgeColor) {
    vector<int> dist(n, INT_MAX);
    queue<pair<int, int>> q;
    
    q.push({start, 0});
    dist[start] = 0;
    
    while (!q.empty()) {
        int vertex = q.front().first;
        int currentDist = q.front().second;
        q.pop();
        
        for (auto& neighbor : graph[vertex]) {
            int nextVertex = neighbor.first;
            int nextColor = neighbor.second;
            
            if (nextColor == edgeColor && dist[nextVertex] == INT_MAX) {
                dist[nextVertex] = currentDist + 1;
                q.push({nextVertex, currentDist + 1});
                
                // Terminate path if the next edge is of the target color (red for source, blue for destination)
                if ((edgeColor == 0 && nextColor == 1) || (edgeColor == 1 && nextColor == 0)) {
                    break;
                }
            }
        }
    }
    
    return dist;
}
int main(){
     int n = 5;
    vector<vector<pair<int, int>>> graph(n);
    
    // Example graph setup
    graph[0].push_back({1, 0}); // 0 -> 1 (red)
    graph[1].push_back({2, 1}); // 1 -> 2 (blue)
    graph[2].push_back({3, 0}); // 2 -> 3 (red)
    graph[3].push_back({4, 1}); // 3 -> 4 (blue)
    
    int source = 0;
    int destination = 4;
    
    // BFS from source following red edges
    vector<int> distFromSource = bfs(n, graph, source, 0);
    
    // BFS from destination following blue edges
    vector<int> distFromDestination = bfs(n, graph, destination, 1);
    
    // Combine results
    int minDist = INT_MAX;
    for (int i = 0; i < n; ++i) {
        if (distFromSource[i] != INT_MAX && distFromDestination[i] != INT_MAX) {
            minDist = min(minDist, distFromSource[i] + distFromDestination[i]);
        }
    }
    
    cout << "Shortest path length: " << (minDist == INT_MAX ? -1 : minDist) << endl;
return 0;
}