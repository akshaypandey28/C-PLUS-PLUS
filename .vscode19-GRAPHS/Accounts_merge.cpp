#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<numeric>
using namespace std;
class Solution {
public:
    vector<int> parent;
    int find(int x){
        if(parent[x]==x) return x;
        return parent[x]=find(parent[x]);
    }
    void Union(int a,int b){
        a=find(a);
        b=find(b);
        parent[b]=a;
    }
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n=accounts.size();
        unordered_map<string,int> m;
        parent.clear();
        parent.resize(n);
        iota(parent.begin(),parent.end(),0);

        for(int i=0; i<n; i++){
            for(int j=1; j<accounts[i].size(); j++){
                string mail=accounts[i][j];
                if(m.find(mail)==m.end()) m[mail]=i; // i will be the parent node of the mail
                else Union(i,m[mail]);
            }
        }

        vector<vector<string>> ans(n);
        for(auto ele:m){
            int parent_node=find(ele.second);
            string mail=ele.first;
            ans[parent_node].push_back(mail);
        }

        vector<vector<string>> result;

        for(int i=0; i<n; i++){
            if(ans[i].size()==0) continue;

            string name=accounts[i][0];

            vector<string> v;
            v.push_back(name);
            for(string mail:ans[i]) v.push_back(mail);

            sort(v.begin()+1,v.end());

            result.push_back(v);
        }
        return result;
    }
};
int main(){
return 0;
}