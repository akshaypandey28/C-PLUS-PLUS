/* https://www.hackerrank.com/challenges/primsmstsub/problem */
#include <bits/stdc++.h>
#define ll long long int
#define pp pair<int, int>
using namespace std;
/* 
5 6
1 2 3
1 3 4
4 2 6
5 2 2
2 3 5
3 5 7
1
ans => 15
 */
vector<list<pp>> gr;
void add_edge(int u, int v, int wt, bool bidir=true) {
    gr[u].push_back({v, wt});
    if(bidir) {
        gr[v].push_back({u, wt});
    }
}

ll prims(int src, int n) {
    priority_queue<pp, vector<pp> , greater<pp> > pq; // {wt, node}
    unordered_set<int> vis;
    vector<int> par(n+1,-1);
    unordered_map<int, int> mp;
    for(int i = 1; i <= n; i++) {
        mp[i] = INT_MAX; //to denote infinity
    }
    pq.push({0, src});
    mp[src] = 0;
    int total_count = 0; //keeps track of no. of vertices have been added to the MST
    int result = 0; //it gives the total weight of the MST
    while(total_count < n && !pq.empty()) {
        pp curr = pq.top();
        pq.pop();
        int node = curr.second;
        int wt = curr.first;
        if(vis.count(node)) { //if node is already visited that is curr.second
            continue;
        }
        result+=wt;
        total_count++;
        vis.insert(node);

        for(auto neighbour : gr[node]) {
            int v = neighbour.first;
            int weight = neighbour.second;
            if(!vis.count(v) and mp[v] > weight) { // found a better weight
                pq.push({weight, v});
                par[v] = node;
                mp[v] = weight;
            }
        }
    }
    return result;
}

int main() {
    int n, m;
    cin>>n>>m;
    gr.resize(n+1, list<pp > ());
    while(m--) {
        int u, v, wt;
        cin>>u>>v>>wt;
        add_edge(u, v, wt);
    }

    int src;
    cin>>src;
    cout<<prims(src, n)<<"\n";
    return 0;
}