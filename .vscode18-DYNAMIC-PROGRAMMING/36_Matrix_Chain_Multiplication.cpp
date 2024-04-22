#include<bits/stdc++.h>
using namespace std;
/* https://www.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1 */
class Solution{
public:
    vector<vector<int> > dp;
    int f(int i,int j,int arr[]){
        if(i==j or i+1==j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int ans=INT_MAX;
        for(int k=i+1; k<=j-1; k++){
            ans=min(ans,f(i,k,arr)+f(k,j,arr)+arr[i]*arr[k]*arr[j]);
        }
        return dp[i][j] = ans;
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        dp.clear();
        dp.resize(1005, vector<int> (1000, -1));
        return f(0,N-1,arr);
        
    }
};

//Bottom up solution
class Solution{
public:
    vector<vector<int> > dp;
    int matrixMultiplication(int n, int arr[])
    {
        dp.clear();
        dp.resize(1005, vector<int> (1000, 0));
        for(int len = 3; len <= n; len++) {
            for(int i = 0; i + len - 1 < n; i++) {  //for finding the starting point of every length
                int j = i + len - 1; //for finding the ending point of every length
                dp[i][j] = INT_MAX;
                for(int k = i+1; k < j; k++) {
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + arr[i]*arr[k]*arr[j]);
                }
            }
        }
        return dp[0][n-1];
    }
};
int main(){
return 0;
}