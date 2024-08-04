#include<bits/stdc++.h>
#define ll long long int
using namespace std;
/* https://www.spoj.com/problems/ACODE/ */


// string decode(string &input) {  decoding of a string and the string is in the number form
//     string res = "";
//     if(input.size() == 1) {
//         res += (char)(64 + input[0] - '0');
//     } else {
//         int num = (input[0] - '0')*10 + (input[1] - '0');
//         res += (char)(64 + num);
//     }
//     return res;
// }


vector<ll> dp;
ll f(string &str, int i) {
    if(i <= 0) return 1;
    if(dp[i] != -1) return dp[i];
    ll ans = 0;
    if(str[i] - '0' > 0) {
        ans+=f(str, i-1);
    } 
    if(str[i-1]-'0' > 0 and (str[i-1] - '0')*10 + (str[i] - '0') <= 26) {
        ans += f(str, i-2);
    }

    return dp[i] = ans;
}

ll fbu(string &str) {
    dp.clear();
    dp.resize(5005, 0);

    dp[0] = (str[0] != '0');
    if(str.size() > 1) {
        if(str[1] != '0') dp[1] += dp[0];
        if(str[1-1] - '0' > 0 and (str[0] - '0')*10 + (str[1] - '0') <= 26) dp[1]++;
    }
    for(int i = 2; i < str.size(); i++) {
        ll ans = 0;
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
int main(){
    string str;
    cin>>str;
    while(str[0] != '0') {
        dp.clear();
        dp.resize(5005, -1);
        cout<<f(str, str.size() - 1)<<"\n";
        //cout<<fbu(str)<<"\n";
        cin>>str;
    } 
return 0;
}