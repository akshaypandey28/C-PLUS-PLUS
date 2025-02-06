#include <bits/stdc++.h>
#define ll long long int
using namespace std;
/* https://www.hackerrank.com/challenges/kruskalmstrsub/problem */
/* 
4 6
1 2 5
1 3 3
4 1 6
2 4 7
3 2 4
3 4 5
ans => 12
 */
//3 main points
//Connect all vertices in the graph.
//Has no cycles.
//Minimizes the total edge weight.
int find(vector<int> &parent,int x){
    // TX:(log*n);
    // This method returns which group/cluster x belongs to
    if(parent[x]==x) return x;
    return parent[x]=find(parent,parent[x]);
}

void Union(vector<int> &par, vector<int> &rank, int a, int b) {
    a = find(par, a);
    b = find(par, b);
    if(a == b) return;
    if(rank[a] >= rank[b]) {
        rank[a]++;
        par[b] = a;
    } else {
        rank[b]++;
        par[a] = b;
    }
}

struct Edge {
    int src;
    int dest;
    int wt;
};

bool cmp(Edge e1, Edge e2) {
    return e1.wt < e2.wt;
}

ll kruskals(vector<Edge> &input, int n, int e) { // O(V + ElogE)
    sort(input.begin(), input.end(), cmp); // ElogE
    vector<int> parent(n+1);
    vector<int> rank(n+1, 1);
    for(int i = 0; i <= n; i++) {
        parent[i] = i;
    }
    int edgeCount = 0; // n-1 edges exist in a tree for n nodes
    int i = 0;
    ll ans = 0;
    while(edgeCount < n-1 and i < input.size()) { // V-1 -> O(Vlog*V)
        Edge curr = input[i]; // because input is sorted so we will get min wt edge
        int srcPar = find(parent, curr.src); //log*V
        int destpar = find(parent, curr.dest); //log*V
        if(srcPar != destpar) {
            // include edge as this will not make cycle
            Union(parent, rank, srcPar, destpar);
            ans += curr.wt;
            edgeCount++;
        }

        i++; // doesnt matter i picked the last edge or not, we still need to go to next edge
    }

    return ans;

}

int main()
{   
    int n, e;
    cin>>n>>e;
    vector<Edge> v(e);
    for(int i = 0; i < e; i++) {
        cin>>v[i].src>>v[i].dest>>v[i].wt;
    }
    cout<<kruskals(v, n, e)<<"\n";
    return 0;
}