#include<bits/stdc++.h>
using namespace std;
/* https://www.geeksforgeeks.org/problems/shortest-uncommon-subsequence5746/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab */
class Solution {
  public:
    int shortestUnSub(string s, string t) {
        // code here
        //try to code it
        if(s==t) return 0;
        for(int i=0; i<s.size(); i++){
            if(t.find(s[i])==-1) return 1;
        }
        
    }   
};
int main(){
    Solution sol;
    string s,t; cin>>s>>t;
    int result=sol.shortestUnSub(s,t);
    cout<<result<<endl;
    
return 0;
}