#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int stock_size;
    cin >> stock_size;
    
    vector<int> profits(stock_size);
    for (int i = 0; i < stock_size; ++i) {
        cin >> profits[i];
    }
    
    map<int, int> profitCount;
    for (int profit : profits) {
        profitCount[profit]++;
    }
    
    vector<int> uniqueProfits;
    for (auto& pair : profitCount) {
        uniqueProfits.push_back(pair.first);
    }
    
    sort(uniqueProfits.begin(), uniqueProfits.end());
    
    int n = uniqueProfits.size();
    vector<int> dp(n);
    
    dp[0] = uniqueProfits[0] * profitCount[uniqueProfits[0]];
    
    for (int i = 1; i < n; ++i) {
        int currentProfit = uniqueProfits[i] * profitCount[uniqueProfits[i]];
        if (uniqueProfits[i] - uniqueProfits[i - 1] == 1) {
            dp[i] = max(dp[i - 1], (i >= 2 ? dp[i - 2] : 0) + currentProfit);
        } else {
            dp[i] = dp[i - 1] + currentProfit;
        }
    }
    
    cout << dp[n - 1] << endl;
    
    return 0;
}