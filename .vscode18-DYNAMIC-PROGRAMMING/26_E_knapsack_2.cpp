#include<bits/stdc++.h>
#include<climits> //for INT_MIN and INT_MAX
#define ll long long int
using namespace std;
/* https://atcoder.jp/contests/dp/tasks/dp_e */

vector<vector<ll>> dp(105,vector<ll>(100005,-1));
ll f(vector<int> &wts,vector<int> &val,int idx,int tv){  //tv is target value
    if(tv==0) return 0;
    if(idx==wts.size()) return INT_MAX;

    if(dp[idx][tv]!=-1) return dp[idx][tv];

    ll ans=INT_MAX;
    //not pick
    ans=min(ans,f(wts,val,idx+1,tv));

    //pick
    if(val[idx]<=tv) ans=min(ans,wts[idx]+f(wts,val,idx+1,tv-val[idx]));

    return dp[idx][tv]=ans;
}
ll fbu(vector<int> &wts, vector<int> &val, int tv, int W) {
    dp.clear();
    dp.resize(105, vector<ll> (100005, INT_MAX));
    int n = wts.size();

    for(int i = 0; i < dp.size(); i++) { //i denotes which item and columns denotes the target value
        dp[i][0] = 0;
    }

    for(int idx = n-1; idx>= 0; idx--) {
        for(int j = 0; j <= tv; j++) {
            ll ans = INT_MAX;
            // not pick
            ans = min(ans, dp[idx+1][j]);
            // pick
            if(val[idx] <= j) {
                ans = min(ans, wts[idx] + dp[idx+1][j-val[idx]]);
            }

            dp[idx][j] = ans;
        }
    }

    int result = -1;
    for(int i = 0; i <= n*1000; i++) {
        if(dp[0][i] <= W) {
            result = i;
        }
    }
    return result;
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
    int result=-1; //maximum profit for the value in the range [0,n*1000]
    for(int i=0; i<=n*1000; i++){
        if(f(wts,val,0,i) <=W){
            result=i;
        }
    }
    cout<<"The knapsack can be with maximum value is "<<result<<endl;
    cout<<fbu(wts, val, n*1000, W); //Bottom Up solution
return 0;
}