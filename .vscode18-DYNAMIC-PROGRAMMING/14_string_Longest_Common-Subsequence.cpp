#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/longest-common-subsequence/description/ */
//IMPORTANT
    /* top to down */
    string ans="";
    vector<vector<int>> dp,dp1;
    int lcs(string &text1, string &text2, int i, int j, int m, int n,string output) {
        if(output.size() > ans.size()) ans=output;
        if (i >= m || j >= n)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        if (text1[i] == text2[j])
            return dp[i][j] = 1 + lcs(text1, text2, i + 1, j + 1, m, n,output+text1[i]);

        else{
            return dp[i][j]= max(lcs(text1, text2, i, j + 1, m, n,output), 
                   lcs(text1, text2, i + 1, j, m, n,output));  // lcs(select , not select) , lcs(not select , select)
        }  
    }
int main(){
    dp.clear();
    dp.resize(1005, vector<int>(1005, -1));
    string s1,s2; cin>>s1>>s2;
    int result=lcs(s1,s2,0,0,s1.size(),s2.size(),"");
    cout<<ans<<endl;
return 0;
}