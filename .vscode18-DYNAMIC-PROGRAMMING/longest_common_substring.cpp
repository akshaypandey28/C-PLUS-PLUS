#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestCommonSubstr(string str1, string str2) {
        int n=str1.size();
        int m=str2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0)); 
        //solution is based on 0 based indexing
        //i can remove the condition str1[i-1]==str2[j-1] because either dp[i][j]=0 or some value
        //value represents common substring and 0 represents no common
        //so if dp[i-1][j-1] gets added with 1 , if it is 0 then no effect , if not then also no effect
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(str1[i]==str2[j]){ // Characters match, increment substring length
                    if(i-1>=0 and j-1>=0) dp[i][j]=1+dp[i-1][j-1];//if(i-1>=0 and j-1>=0 and str1[i-1]==str2[j-1])
                    else dp[i][j]=1;
                }
                else dp[i][j]=0; // Characters don't match, substring length becomes 0
                ans=max(ans,dp[i][j]);
            }
        }
        return ans;
    }
};

// 1 based indexing that's why there is no check for index less than 0
// vector> dp(n+1, vector(m+1, 0));

//     int ans = 0; // Initialize the answer variable
//     int endIndex = 0; // To store the end index of the longest common substring

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= m; j++){
//             if(s1[i-1] == s2[j-1]){
//                 int val = 1 + dp[i-1][j-1]; // Characters match, increment substring length
//                 dp[i][j] = val; // Update the DP table
//                 // If this is the longest substring found so far
                    // if (val > ans) {
                    //     ans = val; // Update the maximum substring length
                    //     endIndex = i - 1; // Mark the end index of this substring in `s1`
                    // }
//             }
//             else
//                 dp[i][j] = 0; // Characters don't match, substring length becomes 0
//         }
//     }

//      return ans; // Return the length of the Longest Common Substring
//      The actual longest common substring
//      string longestCommonSubstring = s1.substr(endIndex - ans + 1, ans);
int main(){
return 0;
}