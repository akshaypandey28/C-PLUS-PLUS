#include<bits/stdc++.h>
using namespace std;
vector<int> dp;
int f(int n){
    if(n==0 || n==1) return n;

    if(dp[n]!=-1) return dp[n];

    return dp[n]=f(n-1)+f(n-2);
}

int main(){
    int n; cin>>n;
    dp.clear();
    dp.resize(n+3,-1);
    f(n+2);
    cout<<dp[n+2]<<endl;
return 0;
}