#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/alien-dictionary/   lock */
/* https://www.geeksforgeeks.org/problems/alien-dictionary/1 */
class Solution{
    public:
    vector<list<int>> graph;
    int v;
    vector<int> topo(){
        vector<int> indegree(v,0);
        for(int i=0; i<v; i++){
            for(auto neighbour:graph[i]){
                // i ---> neighbour (i to neighbour edge)
                indegree[neighbour]++;
            }
        }
        queue<int> qu;
        unordered_set<int> vis;
        for(int i = 0; i < v; i++) {
            if(indegree[i] == 0) {
                qu.push(i);
                vis.insert(i);
            }
        }
        vector<int> ans;
        while(not qu.empty()) {
            int node = qu.front();
            ans.push_back(node);
            qu.pop();
            for(auto neighbour : graph[node]) {
                if(not vis.count(neighbour)) {
                    indegree[neighbour]--;
                    if(indegree[neighbour] == 0) {
                        qu.push(neighbour);
                        vis.insert(neighbour);
                    }
                }
            }
        }
        return ans;
    }
    string findOrder(string dict[], int N, int K) {
        v=K;
        graph.clear();
        graph.resize(K);
        for(int i=0; i<N-1; i++){
            string s1=dict[i];
            string s2=dict[i+1];
            int len=min(s1.size(),s2.size());
            for(int j=0; j<len; j++){
                if(s1[j]!=s2[j]){
                    graph[s1[j]-'a'].push_back(s2[j]-'a');
                    break;
                }
            }
        }
        vector<int> ans=topo();
        string result="";
        
        for(auto ele:ans) result=result+char(ele+'a');
        return result;
    }
};
int main(){
return 0;
}