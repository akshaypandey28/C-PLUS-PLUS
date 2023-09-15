#include<bits/stdc++.h> //BU is used here
using namespace std;
vector<int> dp;
int f(vector<int> &height,int k){
    int n=height.size();
    dp[n-1]=0;
    for(int i=n-2; i>=0; i--){
        for(int j=1; j<=k; j++){
            if(i+j>=n) break;
            dp[i]=min(dp[i],  abs(height[i]-height[i+j])+dp[i+j] );
        }
    }
    return dp[0];
}
int main(){
    dp.clear();
    dp.resize(100005,INT_MAX);
    int n,k; cin>>n>>k;
    vector<int> v(n,0);
    for(int i=0; i<n; i++){
        cin>>v[i];    }
    int result =f(v,k);
    cout<<"The minimum cost of jump is "<<result<<endl;
return 0;  }