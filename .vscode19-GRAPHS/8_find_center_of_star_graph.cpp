#include<bits/stdc++.h> //leetcode 1791 Find Center of Star Graph
using namespace std;
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) { 
        /*  1st solution 
        O(V+E)
        map<int,int> m;
        for(int i=0; i<edges.size(); i++){
            for(int j=0; j<edges[i].size(); j++){
                m[ edges[i][j] ]++;
            }
        }
        for(auto ele: m){
            // if(ele.second == edges.size() ){
            //     int x=ele.first;
            //     return x;
            // }
            if(ele.second == edges.size() ) return ele.first;
        }
        return -1;
        */

        /* 2nd solution
        int x=edges[0][0];
        int y=edges[0][1];
        if(x==edges[1][0] || x==edges[1][1]) return x;
        if(y==edges[1][0] || y==edges[1][1]) return y;
        return -1;
        */


    }
};
int main(){
    Solution s;
    int n,m; cin>>n>>m;
    vector<vector<int> > edges(n,vector<int> (m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>edges[i][j];
        }
    }  
    cout<<s.findCenter(edges);
return 0;
}