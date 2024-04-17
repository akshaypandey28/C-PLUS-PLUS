#include<bits/stdc++.h>
using namespace std;
/* https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article */
//top down solution 
class Solution{    
public:
    vector<vector<int> > dp;
    bool f(vector<int> &arr,int i,int sum){
        if(sum==0) return true; //agr sum 0 ho gya to elements bache ho ya na bache ho answer true hoga
        if(i==arr.size()) return false; //agr sum 0 nhi hua aur i arr.size() ke equal ho gya to answer false hoga
        if(dp[i][sum]!=-1) return dp[i][sum];
        if(arr[i]<=sum){
            //we can include or exclude
            return dp[i][sum] = f(arr,i+1,sum-arr[i]) or f(arr,i+1,sum);
        }
        else{
            //always exclude
            return dp[i][sum] = f(arr,i+1,sum);
        }
    }
    bool isSubsetSum(vector<int>nums, int sum){
        // code here
        int n=nums.size();
        dp.clear();
        dp.resize(205, vector<int> (10005, -1));
        return f(nums,0,sum);
    }
};
int main(){
return 0;
}