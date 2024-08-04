#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/best-time-to-buy-and-sell-stock/ */
//1st question
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //actually i have to pick minimum buy price and maximum buy price on traversing the array
        int profit=0;
        int buy=prices[0];
        for(int i=1; i<prices.size(); i++){
            int sell=prices[i]-buy;
            if(sell<0){
                buy=prices[i];
            }
            else profit=max(profit,sell);
        }
        return profit;
    }
};
int main(){
return 0;
}


/* 

class Solution {
public:
    int dp[100005][2]; 
    int profit(vector<int> &prices,int i,int k,bool on){
        if(i>=prices.size() || k<=0) return 0;
        if(dp[i][on]!=-1) return dp[i][on];

        int ans=INT_MIN;
        ans=profit(prices,i+1,k,on); //avoid case 
        if(on==true){  //first buy and then sell
            ans=max(ans,profit(prices,i+1,k,false)-prices[i]); //not avoid 
        }
        else{ //on==false
            //if(k>0){
                ans=max(ans,profit(prices,i+1,k-1,true)+prices[i]); //not avoid and there is previous txn which is ongoing
            //}
        }

        return dp[i][on]=ans;
    }
    int maxProfit(int k, vector<int>& prices) {
        memset(dp,-1,sizeof dp);
        return profit(prices,0,1,true);
    }
};
 */