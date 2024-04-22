#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/minimum-path-sum/ */
class Solution {
public:
    vector<vector<int>> dp;
    
    int f(vector<vector<int>>& grid, int i, int j, int m, int n) {
        // Base case if reached bottom-right cell, return its value
        if (i == m - 1 && j == n - 1) return grid[i][j];
        
        // Boundary condition check
        if (i >= m || j >= n) return INT_MAX;
        
        if (dp[i][j] != -1) return dp[i][j];
        
        int down = f(grid, i + 1, j, m, n); // downwards
        int right = f(grid, i, j + 1, m, n); // right
        
        return dp[i][j] = grid[i][j] + min(down, right);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        dp.resize(m, vector<int>(n, -1));
        
        return f(grid, 0, 0, m, n);
    }
};
class Solution {
public:
    vector<vector<int>> arr, dp;
    int n, m;
    int minPathSum(vector<vector<int>>& grid) {
        arr = grid;
        n = arr.size();
        m = arr[0].size();
        dp.clear();
        dp.resize(205, vector<int> (205, 0));
        dp[n-1][m-1] = arr[n-1][m-1];
        for(int i = n-2; i>= 0; i--) {
            dp[i][m-1] = arr[i][m-1] + dp[i+1][m-1];
        }
        for(int i = m-2; i >= 0; i--) {
            dp[n-1][i] = arr[n-1][i] + dp[n-1][i+1];
        }
        for(int i = n-2; i >= 0; i--) {
            for(int j = m-2; j >= 0; j--) {
                dp[i][j] = arr[i][j] + min(dp[i+1][j], dp[i][j+1]);
            }
        }
        return dp[0][0];
    }
};
int main(){
return 0;
}