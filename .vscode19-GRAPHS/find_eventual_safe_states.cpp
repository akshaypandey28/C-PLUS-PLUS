#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/find-eventual-safe-states/description/ */

//DFS using cycle detection in directed graph 
class Solution {
public:
    bool dfsCheck(int node, vector<vector<int>>& adj, vector<int>& vis, vector<int>& pathVis, vector<int>& check) {
        vis[node] = 1;
        pathVis[node] = 1;
        check[node] = 0;

        // traverse for adjacent nodes
        for (auto it : adj[node]) {
            // when the node is not visited
            if (!vis[it]) {
                if (dfsCheck(it, adj, vis, pathVis, check) == true) {
                    check[node] = 0;  //contain cycle on iteration through this node
                    return true;
                }
            }
            // if the node has been previously visited
            // but it has to be visited on the same path
            else if (pathVis[it]) {
                check[node] = 0;  //contain cycle on iteration through this node
                return true;
            }
        }

        check[node] = 1; //part of the answer because this node doesn't contain any cycle throughout the iteration through this node
        pathVis[node] = 0; //baktracking of marking the node path untracked
        return false; //cycle not detected
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int> vis(V, 0), pathVis(V, 0), check(V, 0);

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfsCheck(i, adj, vis, pathVis, check); 
            }
        }

        vector<int> ans;
        for (int i = 0; i < V; i++) {
            if (check[i] == 1) ans.push_back(i);
        }

        return ans;
    }
};


//BFS using cycle detection in directed graph kahn algorithm
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& adj) {
        int v=adj.size();

        //reverse the edges as in the question ask for outdegree then it converts into indegree
        vector<vector<int>> graph(v);
        vector<int> indegree(v,0);
        for(int i=0; i<v; i++){
            for(auto neighbour:adj[i]){
                graph[neighbour].push_back(i);
                indegree[i]++;
            }
        }
        vector<int> ans;
        queue<int> qu;
        for(int i=0; i<v; i++){
            if(indegree[i]==0) qu.push(i);
        }

        while(not qu.empty()) {
            int node = qu.front();
            ans.push_back(node);
            qu.pop();
            for(auto neighbour : graph[node]) {
                indegree[neighbour]--;
                if(indegree[neighbour] == 0)  qu.push(neighbour);
            }
        }

        sort(ans.begin(),ans.end());
        return ans;
    }
};
int main(){
return 0;
}