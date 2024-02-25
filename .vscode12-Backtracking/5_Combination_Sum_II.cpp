#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/combination-sum-ii/ */
class Solution {
public:
    vector<vector<int>> ans;
    void f(vector<int>& candidates,vector<int> v,int target,int i,int sum){
        if(sum==target){
            ans.push_back(v);
            return ;
        }

        if(i==candidates.size()) return ;

        if(sum>target) return ;

        if(candidates[i] <= target) {
            v.push_back(candidates[i]);
            sum+=candidates[i];
            f(candidates,v,target,i+1,sum); //pick case when candidates[i] <= target
            sum-=candidates[i];
            v.pop_back();
        }
        //avoid
        int j=i+1;
        while(j<candidates.size() and candidates[j]==candidates[j-1] ) j++; //j points to the new element means when i reach to a new element j points 
        //to that element
        f(candidates,v,target,j,sum); //not pick case when candidates[i] <= target and for greater value than candidates[i]
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> v;
        ans.clear();
        sort(candidates.begin(),candidates.end());
        f(candidates,v,target,0,0);
        
        return ans;
    }
};
int main(){
    Solution obj;
    int n,target; cin>>n>>target;
    vector<int> candidates(n);
    for(int i=0; i<n; i++) cin>>candidates[i];

    vector<vector<int>> result=obj.combinationSum2(candidates,target);

    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}