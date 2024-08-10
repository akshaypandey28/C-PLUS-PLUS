#include<bits/stdc++.h>
using namespace std;
/* 
10
10
0 1 No Cycle detected
0 2 No Cycle detected
0 3 No Cycle detected
3 4 No Cycle detected
4 5 No Cycle detected
5 6 No Cycle detected
3 6 Cycle detected
 */
int find(vector<int> &parent,int x){
    // TX:(log*n);
    // This method returns which group/cluster x belongs to
    if(parent[x]==x) return x;
    return parent[x]=find(parent,parent[x]);
}
bool Union(vector<int> &parent, vector<int> &rank, int a, int b) {
    // TX:(log*n);
    a = find(parent, a);
    b = find(parent, b);
    if(a == b) return true;
    if(rank[a] >= rank[b]) {
        rank[a]++;
        parent[b] = a;
    } else {
        rank[b]++;
        parent[a] = b;
    }
    return false;
}

int main(){
    

    int n, m;
    cin>>n>>m;
    // n-> elements, m -> no of queries
    vector<int> parent(n+1);
    vector<int> rank(n+1, 0);
    for(int i = 0; i <= n; i++) {
        parent[i] = i;
    }

    while(m--) {
        int x, y;
        cin>>x>>y;
        bool cycle=Union(parent, rank, x, y);
        if(cycle==true) {
            cout<<"Cycle detected\n";
            break;
        }
        else cout<<"No Cycle detected\n";
    }
    return 0;
}