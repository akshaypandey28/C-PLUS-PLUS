#include<bits/stdc++.h> //BU code
using namespace std;
int f(vector<int> &coin,int x,int n){
    vector<int> dp(1000005,0);
    int mod=1000000007;
    dp[0]=1; //because on making a empty set it also contributes as 1 choice
    for(int j=0; j<n; j++){
        //go to each coin
        for(int i=1; i<=x; i++){
            if( i-coin[j] < 0) continue;
            dp[i]=( dp[i]%mod + dp[i-coin[j]]%mod )%mod;
        }
    }
    return dp[x];
}
int main(){
    int n,x; cin>>n>>x; //x denotes the value of money to find number of ways 
    // from the coins to calculate the sum equal to x
    vector<int> coin(n);
    for(int i=0; i<n; i++){
        cin>>coin[i];    }
    int result=f(coin,x,n);
    cout<<"The number of ways for making the coins "<<result<<endl;
return 0;
}