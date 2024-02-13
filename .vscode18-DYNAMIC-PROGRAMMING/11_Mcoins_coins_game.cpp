#include<bits/stdc++.h>
using namespace std;
/* https://www.spoj.com/problems/MCOINS/#:~:text=MCOINS%20%2D%20Coins%20Game&text=They%20choose%20two%20different%20positive,L%20coins%20from%20the%20tower. */
vector<bool> dp;
int main(){
    int k,l;cin>>k>>l;
    int m; cin>>m; //m is number of games
    dp.resize(1000005,0);
    dp[1]=dp[k]=dp[l]=1; //base case
    for(int i=2;i<1000000; i++){ //here i is treated as n
        if(i==k || i==l) continue;
        dp[i]=!(dp[i-1] and ( (i-k >=1) ? dp[i-k] : 1  ) and ( (i-l >=1) ? dp[i-l] : 1  ));  //here 1 because 0 always 0 with and but 1
        //can give 0 or 1 both
        //mujhe bs piche ke 3 index ka access chahiye aur jaise i=2 hoga i=1 se
        //compute kr lega and same goes further
    }

    for(int i=0; i<m; i++){
        int n; cin>>n;
        if(dp[n]==1) { //if 1 then n is a winning state
            cout<<"A";
        }
        else{ //if 0 then n is a loosing state
            cout<<"B";
        }
    }
    cout<<endl;

return 0;
}