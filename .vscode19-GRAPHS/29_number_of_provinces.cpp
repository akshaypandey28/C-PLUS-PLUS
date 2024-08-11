#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/number-of-provinces/ */
//1st approach DSU
class Solution {
public:
//it also finds number of connected component
    int find(vector<int> &parent,int x){
        // TX:(log*n);
        // This method returns which group/cluster x belongs to
        if(parent[x]==x) return x;
        return parent[x]=find(parent,parent[x]);
    }
    void Union(vector<int> &parent,int a, int b) {
    // TX:(log*n);
        a = find(parent, a);
        b = find(parent, b);
        if(a!=b) parent[b]=a;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> parent(n);
        iota(parent.begin(),parent.end(),0);

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){ 
                //1 means there is an edge between i and j
                if(isConnected[i][j]==1) Union(parent,i,j);
            }
        }
        int count=0;
        for(int i=0; i<n; i++){
            if(parent[i]==i) count++;
        }
        return count;
    }
};

//2nd approach Connected component
class Solution {
  private: 
    // dfs traversal function 
    void dfs(int node, vector<int> adjLs[], int vis[]) {
        // mark the more as visited
        vis[node] = 1; 
        for(auto it: adjLs[node]) {
            if(!vis[it]) {
                dfs(it, adjLs, vis); 
            }
        }
    }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<int> adjLs[V]; 
        
        // to change adjacency matrix to list 
        for(int i = 0;i<V;i++) {
            for(int j = 0;j<V;j++) {
                // self nodes are not considered
                if(adj[i][j] == 1 && i != j) {
                    adjLs[i].push_back(j); 
                    adjLs[j].push_back(i); 
                }
            }
        }
        int vis[V] = {0}; 
        int cnt = 0; 
        for(int i = 0;i<V;i++) {
            // if the node is not visited
            if(!vis[i]) {
                // counter to count the number of provinces 
                cnt++;
               dfs(i, adjLs, vis); 
            }
        }
        return cnt; 
        
    }
};
int main(){
return 0;
}