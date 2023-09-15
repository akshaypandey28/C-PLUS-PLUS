#include<bits/stdc++.h>
using namespace std;
vector<int> dp;
int f(int n){ //top to down (TD)
    if( n==0 || n==1 ){
        return n;
    }
    if( dp[n]!=-1 ){
        return dp[n];
    }
    return dp[n]= f(n-1) + f(n-2);
}
int fbu(int n){ //bottom to up (BU)
    if( n==0 || n==1 ){
        return n;
    }
    dp.resize(n+1,-1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2; i<n+1; i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    int n; cin>>n;
    dp.resize(n+1,-1);  // n+1 size denotes the states of the subproblems 
    cout<<f(n)<<" **** "<<fbu(n)<<endl;
return 0;
}