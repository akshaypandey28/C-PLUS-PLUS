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
        
    vector<int> arr;
    vector<int> dp;
    int f(int i) {
        if(i == 0) return 1;
        int mx = INT_MIN;
        if(dp[i] != -1) return dp[i];
        for(int j = 0; j <= i-1; j++) {
            if(arr[j] < arr[i]) {
                mx = max(mx, f(j));
            }
        }
        if(mx == INT_MIN) return dp[i] = 1;
        return dp[i] = 1 + mx;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        arr = nums;
        dp.resize(2505, -1);
        dp[0] = 1;
        int ans = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            ans = max(ans, f(i));
        }
        

        //bottom up solution 
        for(int i = 0; i < nums.size(); i++) {
            for(int j = 0; j <= i-1; j++) {
                if(arr[j] < arr[i]) {
                    dp[i] = max(dp[i], 1 + dp[j]);
                }
            }
            if(dp[i] == -1) dp[i] = 1;
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};
int main(){
return 0;
}