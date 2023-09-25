//CSES Problem Set
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
using namespace std;
vector<ll> dp(1000006,-1);
void f(int n,int sum,int &count){ // TLE 
    if(sum>n) return ;
    if(sum==n) {
        count++;
        return ;
    }
    f(n,sum+1,count);
    f(n,sum+2,count);
    f(n,sum+3,count);
    f(n,sum+4,count);
    f(n,sum+5,count);
    f(n,sum+6,count);
}
ll ftd(int n){
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    ll sum=0;
    for(int i=1; i<=6; i++){
        if( n-i < 0 ) break; // break because the value of i is increasing
        sum=( sum % mod + ftd(n-i)%mod )%mod;
    }
    return dp[n]=sum;
}
ll fbu(int n){
    dp[0]=1;
    for(int k=1; k<=n; k++){
        ll sum = 0;
        for(int i=1; i<=6; i++){
            if(k - i < 0) break;
            sum = (sum % mod + dp[k-i] % mod)%mod;
        }
        dp[k] = sum%mod;
    }
    return dp[n];
}
int main(){
    int n; cin>>n;
    //int count=0;
    //f(n,0,count);
    //cout<<count<<endl;
    cout<<ftd(n)<<"....."<<fbu(n)<<endl;
return 0;
}