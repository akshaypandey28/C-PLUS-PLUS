#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/decode-ways/ */
#define ll long long int
class Solution {
public:
    vector<ll> dp;
    int f(string &str, int i) {
    if(i <= 0) return 1;
    if(dp[i] != -1) return dp[i];
    int ans = 0;
    if(str[i] - '0' > 0) {
        ans+=f(str, i-1);
    } 
    if(str[i-1]-'0' > 0 and (str[i-1] - '0')*10 + (str[i] - '0') <= 26) {
        ans += f(str, i-2);
    }

    return dp[i] = ans;
}
    int numDecodings(string s) {
        if(s[0]=='0') return 0;
        dp.clear();
        dp.resize(105, -1);
        return f(s,s.size()-1);
    }
};

class Solution {  //bottom up solution 
public:
    vector<int> dp;
    int fbu(string &str) {
        dp.clear();
        dp.resize(5005, 0);
        dp[0] = (str[0] != '0');
        if(str.size() > 1) {
            if(str[1] != '0') dp[1] += dp[0];
            if(str[1-1] - '0' > 0 and (str[0] - '0')*10 + (str[1] - '0') <= 26) dp[1]++;
        }
        for(int i = 2; i < str.size(); i++) {
            int ans = 0;
            if(str[i] - '0' > 0) {
                ans+=dp[i-1];
            } 
            if(str[i-1]-'0' > 0 and (str[i-1] - '0')*10 + (str[i] - '0') <= 26) {
                ans += dp[i-2];
            }
            dp[i] = ans;
        }
        return dp[str.size() - 1];

}
    int numDecodings(string s) {
        return fbu(s);
    }
};
int main(){
return 0;
}