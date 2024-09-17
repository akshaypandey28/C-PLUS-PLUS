#include<bits/stdc++.h>
using namespace std;
/* https://www.geeksforgeeks.org/problems/rod-cutting0840/1 */
class Solution{
  public:
    vector<vector<int>> dp;
    
    int f(int i, int n, int price[], int N) {
        // Base case: if no more length or we've processed all pieces
        if (n == 0) return 0;
        if (i == N) return 0; // No more items to process

        // If the result for this index and remaining length is already calculated, return it
        if (dp[i][n] != -1)
            return dp[i][n];

        // Calculate the maximum value without taking the current piece
        int notTaken = f(i + 1, n, price, N);

        // Calculate the maximum value by taking the current piece
        int taken = INT_MIN;
        if (i + 1 <= n) { // i+1 is the length of the piece, check if it can be taken
            taken = price[i] + f(i, n - (i + 1), price, N); // Use current piece (1-based indexing)
        }

        // Store the maximum value in the DP table and return it
        return dp[i][n] = max(notTaken, taken);
    }

    int cutRod(int price[], int n) {
        //treat n as a target value and create a 2d dp , with pick and not pick case
        //but in pick case idx is not passed in the function with idx+1 , it is still idx
        //because supply is unlimited
        dp.clear();
        dp.resize(n, vector<int>(n + 1, -1));
        
        // Start from the first piece (index 0) and the full length of the rod
        return f(0, n, price, n);
    }
};
int main(){
return 0;
}