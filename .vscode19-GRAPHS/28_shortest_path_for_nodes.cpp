#include<bits/stdc++.h>
using namespace std;
/*Question 
Given an undirected and unweighted graph a source and destination find all nodes which come in at least one shortest
path from source and destination.

approach 
calculate steps of shortest path between source and destination
and do traversal from source to each node and store the steps to reach that node
and same from destination
after that go for all nodes and add the two values if it is equal to steps of shortest path then this node is part
of our answer and store it in vector
 */
// Function to perform BFS and return distances from the start node
vector<int> bfs(int start, const vector<vector<int>>& adjList) {
    vector<int> distance(adjList.size(), INT_MAX);
    queue<int> q;
    distance[start] = 0;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adjList[node]) {
            if (distance[neighbor] == INT_MAX) { // Not visited
                distance[neighbor] = distance[node] + 1;
                q.push(neighbor);
            }
        }
    }

    return distance;
}

// Function to find nodes that are part of any shortest path from source to destination
vector<int> findNodesInShortestPath(int n, const vector<vector<int>>& adjList, int source, int destination) {
    // Step 1: BFS from source and destination
    vector<int> distFromSource = bfs(source, adjList);
    vector<int> distFromDestination = bfs(destination, adjList);
    
    // Step 2: Determine shortest path length
    int shortestPathLength = distFromSource[destination];
    
    // Step 3: Collect nodes that are part of at least one shortest path
    vector<int> result;
    for (int node = 0; node < n; ++node) {
        // Check if this node is part of a shortest path
        if (distFromSource[node] + distFromDestination[node] == shortestPathLength) {
            result.push_back(node);
        }
    }

    return result;
}

int main() {
    int n; // Number of nodes
    int e; // Number of edges
    cin >> n >> e;

    vector<vector<int>> adjList(n);
    
    // Example graph input
    for (int i = 0; i < e; ++i) {
        int u, v;
        cin >> u >> v; // Input edges
        adjList[u].push_back(v);
        adjList[v].push_back(u); // Undirected graph
    }

    int source, destination;
    cout << "Enter source and destination: ";
    cin >> source >> destination;

    vector<int> result = findNodesInShortestPath(n, adjList, source, destination);
    
    cout << "Nodes in at least one shortest path from " << source << " to " << destination << ": ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}