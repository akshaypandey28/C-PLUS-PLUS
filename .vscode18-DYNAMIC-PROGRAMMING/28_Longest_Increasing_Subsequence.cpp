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

/* 

        for(int i=0; i<n; i++){ //LIS from forward 
            for(int j=0; j<=i-1;j++){
                if(nums[j]<nums[i] and dp[i]<1+dp[j]) dp[i]=1+dp[j];
            }
        }

        for(int i=n-1; i>=0; i--){ //LIS from backward
            for(int j=n-1; j>i; j--){
                if(nums[j]<nums[i] and dp1[i]<1+dp1[j]) dp1[i]=1+dp1[j];
            }
        }

*/

class Solution {
  public:
    vector<int> longestIncreasingSubsequence(int n, vector<int>& arr) {
        vector<int> dp(n,1);
        vector<int> hash(n);
    
        for(int i=0; i<=n-1; i++){
            hash[i] = i;
            for(int prev_index = 0; prev_index <=i-1; prev_index ++){
                if(arr[prev_index]<arr[i] && 1 + dp[prev_index] > dp[i]){
                    dp[i] = 1 + dp[prev_index];
                    hash[i] = prev_index;
                }
            }
        }
    
        int ans = -1;
        int lastIndex =-1;
        
        for(int i=0; i<=n-1; i++){
            if(dp[i]> ans){
                ans = dp[i];
                lastIndex = i;
            }
        }
        
        vector<int> temp;
        temp.push_back(arr[lastIndex]);
        
        while(hash[lastIndex] != lastIndex){ // till not reach the initialization value
            lastIndex = hash[lastIndex];
            temp.push_back(arr[lastIndex]);    
        }
        
        // reverse the array 
        reverse(temp.begin(),temp.end());
        return temp;
    }
};



class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int arr[])
    {
       // your code here
        vector<int> temp;
        temp.push_back(arr[0]);
    
        int len = 1;
    
        for (int i = 1; i < n; i++) {
            if (arr[i] > temp.back()) {
                // If arr[i] is greater than the last element of temp, extend the subsequence
                temp.push_back(arr[i]);
                len++;
            } else {
                // If arr[i] is not greater, replace the element in temp with arr[i]
                int ind = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
                temp[ind] = arr[i];
            }
        }
    
        return len;
    }
};

class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,1);
        vector<int> count(n,1);
        int ans=INT_MIN;
        for(int i=0; i<n; i++){
            for(int j=0; j<=i-1;j++){
                if(nums[j]<nums[i] and dp[i]<1+dp[j]) {
                    dp[i]=1+dp[j];
                    count[i]=count[j];
                }
                else if(nums[j]<nums[i] and dp[i]==1+dp[j]) count[i]+=count[j];
            }
            ans=max(ans,dp[i]);
        }
        int result=0;
        for(int i=0; i<n; i++){
            if(dp[i]==ans) result+=count[i];
        }
        return result;
    }
};
int main(){
return 0;
}