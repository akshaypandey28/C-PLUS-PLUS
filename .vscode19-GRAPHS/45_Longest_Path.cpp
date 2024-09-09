/* https://atcoder.jp/contests/dp/tasks/dp_g */
#include<bits/stdc++.h>
using namespace std;

int dp[100005];
vector<int> graph[100005];

int f(int i) {
    if(dp[i] != -1) return dp[i];  // Memoization check (avoiding recomputation)

    int maxVal = 0;
    bool leaf = true;  // Assume node is a leaf

    // Traverse all neighbors of node i
    for(int neighbour : graph[i]) {
        leaf = false;  // If there is any neighbor, it's not a leaf
        maxVal = max(maxVal, f(neighbour));  // Recursively call for neighbors
    }

    // If no neighbors, leaf remains true, and we return 0 as the base case
    return dp[i] = (leaf) ?  0 : 1 + maxVal;
}

int main() {
    int n, m;
    cin >> n >> m;
    memset(dp, -1, sizeof dp);
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }

    int result = INT_MIN;
    for(int i = 1; i <= n; i++) {
        result = max(result, f(i));
    }
    cout << result << "\n";
    
    return 0;
}