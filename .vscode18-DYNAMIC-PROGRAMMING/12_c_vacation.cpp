#include<bits/stdc++.h>
using namespace std;
/* https://atcoder.jp/contests/dp/tasks/dp_c */

/* 

3
10 40 70
20 50 80
30 60 90
ans is 210

7
6 7 8
8 8 3
2 5 2
7 8 6
4 6 8
2 3 4
7 5 1
ans is 46

 */
int main(){
    int n; cin>>n;
    vector<vector<int>> dp(n,vector<int> (3,0));
    //bottom up solution

    //base case if only a single day
    int a,b,c; cin>>a>>b>>c; // a->0 , b->1 , c->2
    dp[0][0]=a;
    dp[0][1]=b;
    dp[0][2]=c;
    for(int i=1; i<n; i++){
        cin>>a>>b>>c; //for every day there is three input

        dp[i][0]=a+max(dp[i-1][1],dp[i-1][2]); //if on the ith day activity is a then a is add with max of prev day of b and c
        dp[i][1]=b+max(dp[i-1][0],dp[i-1][2]);
        dp[i][2]=c+max(dp[i-1][0],dp[i-1][1]);
    }

    cout<<max({dp[n-1][0],dp[n-1][1],dp[n-1][2]})<<endl;
return 0;
}