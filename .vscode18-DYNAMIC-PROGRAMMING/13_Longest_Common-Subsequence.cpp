#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/longest-common-subsequence/description/ */
//IMPORTANT
class Solution {
public:
    /* top to down */
    vector<vector<int>> dp,dp1;
    int lcs(string &text1, string &text2, int i, int j, int m, int n) {
        if (i >= m || j >= n)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        if (text1[i] == text2[j])
            return dp[i][j] = 1 + lcs(text1, text2, i + 1, j + 1, m, n);

        else
            return dp[i][j]= max(lcs(text1, text2, i, j + 1, m, n), 
                   lcs(text1, text2, i + 1, j, m, n));  // lcs(select , not select) , lcs(not select , select)
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        dp.resize(1005, vector<int>(1005, -1));
        return lcs(text1, text2, 0, 0, m, n);


        /* bottom to up
        dp1.resize(1005, vector<int>(1005, 0));
        for(int i=text1.size()-1; i>=0; i--){
            for(int j=text2.size()-1; j>=0; j--){
                if (text1[i] == text2[j])  dp1[i][j] = 1 + dp1[i+1][j+1];

                else dp1[i][j]= max(dp1[i+1][j], dp1[i][j+1]);  // lcs(select , not select) , lcs(not select , select)
            }
        }
        return dp1[0][0]; */

        /* 
        int lcs(string text1, string text2) {
            int n = text1.size(), m = text2.size();
            
            vector<int> curr(m + 1, 0), next(m + 1, 0);

            for (int i = n - 1; i >= 0; i--) {
                for (int j = m - 1; j >= 0; j--) {
                    if (text1[i] == text2[j])
                        curr[j] = 1 + next[j + 1]; // Match case
                    else
                        curr[j] = max(next[j], curr[j + 1]); // Max between not selecting the current character in one of the strings
                }
                next = curr; // Move current row to next
            }
            return curr[0];
        }
         */
    }
};
int main(){
return 0;
}