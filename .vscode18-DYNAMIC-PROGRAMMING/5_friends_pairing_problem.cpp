#include<bits/stdc++.h>
using namespace std;
vector<int> dp;
int f(int n){
    if(n==1 || n==2) return n;

    if(dp[n]!=-1) return dp[n];

    return dp[n]=f(n-1) + (n-1)*f(n-2);
}
int main(){
    int n;  cin>>n;
    dp.clear();
    dp.resize(n+1,-1);
    int result=f(n);
    cout<<"number of ways for making pairs is "<<result<<endl;
return 0;
}