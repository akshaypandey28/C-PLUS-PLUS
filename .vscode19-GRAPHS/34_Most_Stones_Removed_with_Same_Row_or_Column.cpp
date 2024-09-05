#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/description/ */
//1st solution both 1st and 2nd are almost same
class Solution {
public:
    // DSU to find the number of connected component
    // ans = number of nodes - number of connected component
    // as in every connected component every node gets destroyed except one node which is not part of the answer
    // so basically after these steps every connected component has 1 node if 5 connected component then every has 1, total 5 nodes remain undestroyed

    int find(vector<int> &parent, int x) {
        // TX:(log*n);
        // This method returns which group/cluster x belongs to
        if (parent[x] == x) return x;
        return parent[x] = find(parent, parent[x]);
    }

    void Union(vector<int> &parent, int a, int b) {
        // TX:(log*n);
        a = find(parent, a);
        b = find(parent, b);
        if (a != b) {
            parent[b] = a;
        }
    }

    int removeStones(vector<vector<int>>& stones) {
        int maxR = 0, maxC = 0;
        for (auto ele : stones) {
            maxR = max(maxR, ele[0]);
            maxC = max(maxC, ele[1]);
        }
        int n = maxR + maxC + 2; // Ensure enough space for all rows and columns
        vector<int> parent(n);
        for (int i = 0; i < n; ++i) parent[i] = i;

        for (auto ele : stones) {
            int nodeR = ele[0];
            int nodeC = ele[1] + maxR + 1; // for nodeColumn=row+1+col and col is ele[1]
            Union(parent, nodeR, nodeC);
        }

        unordered_set<int> uniqueRoots;
        for (auto ele : stones) {
            uniqueRoots.insert(find(parent, ele[0]));
            uniqueRoots.insert(find(parent, ele[1] + maxR + 1));
        }

        return stones.size() - uniqueRoots.size();
    }
};

//2nd solution using rank
class Solution {
public:
    // DSU to find the number of connected component
    // ans = number of nodes - number of connected component
    // as in every connected component every node gets destroyed except one node which is not part of the answer
    // so basically after these steps every connected component has 1 node if 5 connected component then every has 1, total 5 nodes remain undestroyed

    int find(vector<int> &parent, vector<int> &rank, int x) {
        // TX:(log*n);
        // This method returns which group/cluster x belongs to
        if (parent[x] == x) return x;
        return parent[x] = find(parent, rank, parent[x]);
    }

    void Union(vector<int> &parent, vector<int> &rank, int a, int b) {
        // TX:(log*n);
        a = find(parent, rank, a);
        b = find(parent, rank, b);
        if (a == b) return;
        if (rank[a] >= rank[b]) {
            rank[a]++;
            parent[b] = a;
        } else {
            rank[b]++;
            parent[a] = b;
        }
    }

    int removeStones(vector<vector<int>>& stones) {
        int maxR = 0, maxC = 0;
        for (auto ele : stones) {
            maxR = max(maxR, ele[0]);
            maxC = max(maxC, ele[1]);
        }
        int n = maxR + maxC + 2; // Ensure enough space for all rows and columns
        vector<int> parent(n);
        vector<int> rank(n, 0);
        for (int i = 0; i < n; ++i) parent[i] = i;

        for (auto ele : stones) {
            int nodeR = ele[0];
            int nodeC = ele[1] + maxR + 1; // for nodeColumn=row+1+col and col is ele[1]
            Union(parent, rank, nodeR, nodeC);
        }

        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (parent[i] == i and rank[i]>0) { //this ensures that at any ith node if rank is zero then it not part of our answer and rank[i]>0 means at least one node has a parent[i]==i which helps for answer
                count++;
            }
        }
        return stones.size() - count;
    }
};

int main(){
return 0;
}