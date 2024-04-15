#include<bits/stdc++.h>
#define ll long long int
using namespace std;
/* https://www.spoj.com/problems/MPILOT/ */
ll dp[10005][5005];


vector<ll> cap(10005,0);
vector<ll> as(10005,0);
// x = assistant - captain
ll calc(int i, int x,int n) {
	if(dp[i][x] != -1) return dp[i][x];
	if(i == n) {
		return 0;
	}
	if(x == 0) {
		return dp[i][x] = calc(i+1, x+1,n) + as[i];
	} else if(x == n-i) {
		return dp[i][x] = calc(i+1, x-1,n) + cap[i];
	} else {
		return dp[i][x] = min(calc(i+1, x+1,n) + as[i], calc(i+1, x-1,n)+cap[i]);
	}
}
int main(){
    int n; cin>>n;
    cap.clear(); cap.resize(n);
    as.clear(); as.resize(n);
    for(int i=0; i<n; i++) cin>>as[i];
    for(int i=0; i<n; i++) cin>>cap[i];
    dp[0][0]=as[0]+calc(1,1,n); //because assistant is already taken that's why i == 1 and no of assistant ==1 so x=assistant-captain and captain is 0 initially
    //sort(dp.rbegin(),dp.rend());
    cout<<dp[0][0]<<endl;
return 0;
}