#include<bits/stdc++.h>
using namespace std;
/* https://www.geeksforgeeks.org/problems/chocolates-pickup/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=chocolates-pickup */
class Solution {
  public:
    int solve(int n, int m, vector<vector<int>>& grid) {
        // code here
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, 0)));
        
        //i cannot initialize dp for the 0th row because it is the starting point
                
        for(int j1=0; j1<m; j1++){
            for(int j2=0; j2<m; j2++){
                if(j1==j2) dp[n-1][j1][j2]=grid[n-1][j1];
                else dp[n - 1][j1][j2] = grid[n - 1][j1] + grid[n - 1][j2];
            }
        }   
        
        for(int i=n-2; i>=0; i--){
            for(int j1=0; j1<m; j1++){
                for(int j2=0; j2<m; j2++){
                    int maxi = INT_MIN;
                    //9 options available for moving and picking 
                    for(int d1=-1; d1<=1; d1++){
                        for(int d2=-1; d2<=1; d2++){
                            int ans;

                        if (j1 == j2)
                            ans = grid[i][j1];
                        else
                            ans = grid[i][j1] + grid[i][j2];

                        // Check if the move is valid (within the grid boundaries)
                        if ((j1 + d1 < 0 || j1 + d1 >= m) || (j2 + d2 < 0 || j2 + d2 >= m))
                            ans += -1e9; // A very large negative value to represent an invalid move
                        else
                            ans += dp[i + 1][j1 + d1][j2 + d2]; // Include the DP result from the next row

                        maxi = max(ans, maxi); // Update the maximum result
                        }
                    }
                    dp[i][j1][j2] = maxi; // Store the maximum result for this state in the DP array
                }
            }
        }
        return dp[0][0][m - 1];
    }
};
int main(){
return 0;
}