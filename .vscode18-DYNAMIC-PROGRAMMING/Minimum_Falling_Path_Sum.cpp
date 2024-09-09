#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/minimum-falling-path-sum/description/ */
//bottom up accepted
class Solution {
public:
    vector<vector<int>> dp;
    int minFallingPathSum(vector<vector<int>>& m) {
        int n = m.size();
        dp.clear();
        dp.resize(n, vector<int>(n, INT_MAX)); 

        int mini = INT_MAX;
        for (int j = 0; j < n; j++) dp[0][j]=m[0][j];

        for(int i=1; i<n; i++){
            for(int j=0; j<n; j++){
                int up=m[i][j]+dp[i-1][j];
                int left=m[i][j];
                if(j-1>=0) left+=dp[i-1][j-1];
                else left=INT_MAX;
                int right=m[i][j];
                if(j+1<n) right+=dp[i-1][j+1];
                else right=INT_MAX;
                dp[i][j]=min({up,left,right});
            }
        }
        for(int j=0; j<n; j++) mini=min(mini,dp[n-1][j]);
        return mini;
    }
};

//TLE top to down
class Solution {
public:
    vector<vector<int>> dp;

    int f(vector<vector<int>>& mat, int r, int c, int n) {
        if (r == n) return 0; // No more rows left, base case
        if (c < 0 || c >= n) return INT_MAX; // Out of bounds

        if (dp[r][c] != -1) return dp[r][c];

        // Recursive calls for the next row, and storing the minimum result
        return dp[r][c] = mat[r][c] + min({f(mat, r + 1, c, n), 
                                           f(mat, r + 1, c - 1, n), 
                                           f(mat, r + 1, c + 1, n)});
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        dp.clear();
        dp.resize(n, vector<int>(n, -1)); // Resize dp to match the matrix size

        int mini = INT_MAX;
        for (int j = 0; j < n; j++) 
            mini = min(mini, f(matrix, 0, j, n));
        
        return mini;
    }
};
int main(){
return 0;
}