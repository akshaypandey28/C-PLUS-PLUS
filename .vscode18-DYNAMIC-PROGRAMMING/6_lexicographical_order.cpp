//leetcode -386 lexicographical order
#include<bits/stdc++.h>
using namespace std;
void f(int i,int n,vector<int> &v){ 
        if(i > n) return ; //don't do anything
        if(i<=n and i!=0) v.push_back(i);
        if(i!=0) { 
            for(int j=0; j<=9; j++){
                f( 10*i + j ,n, v); 
            }
        }
        else {
            for(int j=1; j<=9; j++){
                f( 10*i + j ,n, v); 
            }
        }
    }
int main(){
    int n; cin>>n;
    vector<int> v;
    vector<string> a;
    for(int i=0; i<n; i++){
        string s=to_string(i+1);
        a.push_back(s);
    } 
    sort( a.begin(),a.end() );
    for(int i=0; i<n; i++){
        int s=stoi(a[i]);
        v.push_back(s);
    }

    vector<int> ans;
    f(0,n,ans);
    for(int i=0; i<n; i++) cout<<ans[i]<<" ";
return 0;
}