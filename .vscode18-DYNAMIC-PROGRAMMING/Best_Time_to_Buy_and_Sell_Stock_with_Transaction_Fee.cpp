#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/  */
//top down
class Solution {
public:
    vector<vector<int>> dp;  
    int txn;
    int f(int i,int buy,vector<int> &prices,int n){
        if(i>=n) return 0;
        if(dp[i][buy]!=-1) return dp[i][buy];
        int ans=INT_MIN;
        ans=f(i+1,buy,prices,n); //avoid case;
        if(buy==0) ans=max(-prices[i]+f(i+1,1,prices,n),ans ); //on ith day buy
        else      ans=max(prices[i]-txn+f(i+1,0,prices,n) , ans) ; //on ith day sell
        return dp[i][buy]=ans;
    }
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        txn=fee;
        dp.clear();
        dp.resize(n,vector<int>(2,-1));
        return f(0,0,prices,n);
    }
};
//bottom up
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<vector<int>> d(n+1,vector<int>(2,0)); 
        for(int i=n-1; i>=0; i--){
            for(int buy=1; buy>=0; buy--){
                int ans=INT_MIN;
                ans=d[i+1][buy]; //avoid case no sell and no buy both included that's why but has no effect
                if(buy==0) ans=max(-prices[i]+d[i+1][1],ans ); //on ith day buy
                else      ans=max(prices[i]-fee+d[i+1][0] , ans) ; //on ith day sell
                d[i][buy]=ans;
            }
        }
        return d[0][0];
    }
};
int main(){
return 0;
}