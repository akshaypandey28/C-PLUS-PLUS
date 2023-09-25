//CSES Problem Set
#include<bits/stdc++.h>
using namespace std;
vector<int> coins;
vector<int> dp(1000006,-2);
int ftd(int x){
    if(x==0) return 0;
    if(dp[x]!=-2) return dp[x];
    // if(dp[x]==INT_MAX) {
    //     //state x was having an answer -1
    // }
    int result=INT_MAX;
    for(int i=0; i<coins.size(); i++){
        if(x-coins[i] < 0) continue;
        result= min (result, ftd( x-coins[i] ) );
    }
    if(result==INT_MAX) return dp[x]=INT_MAX;
    return dp[x]=1+result;
}
int main(){
    int n,x; cin>>n>>x;
    for(int i=0; i<n; i++){
        int value; cin>>value;
        coins.push_back(value);
    }
    int ans=ftd(x);
    if(ans==INT_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;
return 0;
}