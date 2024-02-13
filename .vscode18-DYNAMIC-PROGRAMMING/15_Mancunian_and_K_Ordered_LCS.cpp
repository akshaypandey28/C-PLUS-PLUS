#include<bits/stdc++.h>
#define ll long long
using namespace std;
/* https://www.hackerearth.com/problem/algorithm/mancunian-and-k-ordered-lcs-e6a4b8c6/ */
ll dp[2008][2008][8];

ll korderedLCS(int *a,int *b,int n,int m,int i,int j,int k){
    if(i>=n or j>=m) return 0;

    if(dp[i][j][k]!=-1) return dp[i][j][k];

    if(a[i]==a[j])
    return dp[i][j][k]=1+korderedLCS(a,b,n,m,i+1,j+1,k);

    else{
        if(k>0)
        return dp[i][j][k]=1+korderedLCS(a,b,n,m,i+1,j+1,k-1); //agr changes kiye to equal ho jayenge in that case is k=k-1

//agr changes possible hai phir bhi kiya gya or changes possible hi nhi hai (k<=0) in both case same below line is used 
//that's why both condition is combined and written collectively
        return dp[i][j][k]=max(korderedLCS(a,b,n,m,i+1,j,k) , korderedLCS(a,b,n,m,i,j+1,k));
    }
}
int main(){
    int n,m,k; cin>>n>>m>>k;
    int arr1[n],arr2[m];
    //initialise the dp array with -1
return 0;
}