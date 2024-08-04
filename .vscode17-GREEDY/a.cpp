#include <iostream>
#include <vector>

using namespace std;

int countWays(int n, int k) {
    // Create a dp array
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(k + 1, vector<int>(n + 1, 0)));
    
    // Base case: There's one way to partition 0 into 0 parts
    dp[0][0][0] = 1;
    
    // Fill the dp array
    for (int sum = 1; sum <= n; sum++) {
        for (int parts = 1; parts <= k; parts++) {
            for (int last = 1; last <= sum; last++) {
                for (int prev = 0; prev <= last; prev++) {
                    dp[sum][parts][last] += dp[sum - last][parts - 1][prev];
                }
            }
        }
    }
    
    // Sum up all ways to partition n into k parts
    int result = 0;
    for (int last = 1; last <= n; last++) {
        result += dp[n][k][last];
    }
    
    return result;
}

int main() {
    int N = 9;
    int K = 5;
    cout << "Number of ways to divide " << N << " into " << K 
         << " groups: " << countWays(N, K) << endl;
    return 0;
}
