#include<bits/stdc++.h>
#include<climits> //for INT_MIN and INT_MAX
#define ll long long int
using namespace std;
/* https://atcoder.jp/contests/dp/tasks/dp_d */
/* 
6 15
6 5
5 6
6 4
6 6
3 5
7 2
The knapsack can be with maximum value is 17
 */
vector<vector<ll>> dp(105,vector<ll>(100005,-1));
ll f(vector<int> &wts,vector<int> &val,int idx,int W){
    if(idx==wts.size()) return 0;

    if(dp[idx][W]!=-1) return dp[idx][W];

    ll ans=INT_MIN;
    //not pick
    ans=max(ans,f(wts,val,idx+1,W));

    //pick
    if(wts[idx]<=W) ans=max(ans,val[idx]+f(wts,val,idx+1,W-wts[idx]));

    return dp[idx][W]=ans;
}

ll fbu(vector<int> &wts, vector<int> &val, int W) {
    dp.clear();
    dp.resize(105, vector<ll> (100005, 0));
    int n = wts.size();
    for(int idx = n-1; idx>= 0; idx--) {
        for(int j = 0; j <= W; j++) {
            ll ans = INT_MIN;
            // not pick
            ans = max(ans, dp[idx+1][j]);
            // pick
            if(wts[idx] <= j) {
                ans = max(ans, val[idx] + dp[idx+1][j-wts[idx]]);
            }

            dp[idx][j] = ans;
        }
    }

    return dp[0][W];
}

int main(){
    int n,W;
    cin>>n>>W;
    vector<int> wts,val;
    for(int i=0; i<n;i++) {
        int w,v;
        cin>>w>>v;
        wts.push_back(w);
        val.push_back(v);
    }
    cout<<"The knapsack can be with maximum value is "<<f(wts,val,0,W)<<endl;
    cout<<fbu(wts, val, W)<<"\n"; //Bottom Up solution
return 0;
}