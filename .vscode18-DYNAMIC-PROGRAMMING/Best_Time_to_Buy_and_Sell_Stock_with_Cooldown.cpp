#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/description/ */
//top down 
class Solution {
public:
    vector<vector<int>> dp;
    int f(int i,int buy,vector<int> &prices){
        if (i >= prices.size()) return 0;
        if (dp[i][buy] != -1) return dp[i][buy];
        int ans=INT_MIN;
        ans=f(i+1,buy,prices); //avoid case no sell and no buy both included that's why buy has no effect
        if(buy==0) ans=max(-prices[i]+f(i+1,1,prices),ans ); //on ith day buy
        else      ans=max(prices[i]+f(i+2,0,prices) , ans) ; //on ith day sell
        return dp[i][buy]=ans;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        dp.clear();
        dp.resize(n, vector<int>(2, -1));
        return f(0,0,prices);
    }
};

//bottom up solution
class Solution1 {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> d(n+2,vector<int>(2,0)); //n+2 because of i+2 in else condition if n=5 , i=4 , i+2=6 that's why
        //d contains at least 6th row
        for(int i=n-1; i>=0; i--){
            for(int buy=1; buy>=0; buy--){
                int ans=INT_MIN;
                ans=d[i+1][buy]; //avoid case no sell and no buy both included that's why but has no effect
                if(buy==0) ans=max(-prices[i]+d[i+1][1],ans ); //on ith day buy
                else      ans=max(prices[i]+d[i+2][0] , ans) ; //on ith day sell
                d[i][buy]=ans;
            }
        }
        return d[0][0];
    }
};
int main(){
    Solution s;
    Solution1 s1;
    int n; cin>>n;
    vector<int> prices(n);
    for(int i=0; i<n; i++) cin>>prices[i];
    cout<<"max profit is "<<s.maxProfit(prices)<<endl;
    cout<<"max profit is "<<s1.maxProfit(prices)<<endl;
return 0;
}