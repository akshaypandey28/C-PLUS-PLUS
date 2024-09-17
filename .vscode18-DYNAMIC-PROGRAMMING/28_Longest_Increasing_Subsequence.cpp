#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/longest-increasing-subsequence/description/ */
class Solution {  //Striver approach 
public:
    //int ans;
    vector<vector<int>> dp;
    int f(vector<int> &nums,int i,int pi){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[i][pi+1]!=-1) return dp[i][pi+1];
        int take=0,nottake=0;
        if(pi==-1 || nums[i]>nums[pi]){
            take=1+f(nums,i+1,i);
        }
        nottake=0+f(nums,i+1,pi);
        return dp[i][pi+1]=max(take,nottake);
    }
    int lengthOfLIS(vector<int>& nums) {
        dp.clear();
        int n=nums.size();
        dp.resize(n, vector<int>(n+1, -1));
        //int temp=1;
        int res=f(nums,0,-1);
        return res;
    }
};


class Solution { //Sanket sir approach
public:
        
    vector<int> dp;
    vector<int> arr;
    int f(int i){
        if(dp[i]!=-1) return dp[i];
        int maxi=INT_MIN;
        for(int j=0; j<=i-1; j++){
            if(arr[j]<arr[i]) maxi=max(maxi,f(j));
        }
        if(maxi==INT_MIN) return dp[i]=1;
        return dp[i]=1+maxi;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        arr=nums;
        dp.clear();
        dp.resize(n+1,-1);
        dp[0]=1;
        int ans=1;
        for(int i=1; i<n; i++){
            ans=max(ans,f(i));
        }
        return ans;

        
        //bottom up solution 
        int result=INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = 0; j <= i-1; j++) {
                if(arr[j] < arr[i]) {
                    dp[i] = max(dp[i], 1 + dp[j]);
                }
            }
            if(dp[i] == -1) dp[i] = 1;
            result = max(result, dp[i]);
        }
        return result;
    }
};
int main(){
return 0;
}