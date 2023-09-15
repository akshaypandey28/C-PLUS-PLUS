#include<bits/stdc++.h>
using namespace std;
#define ll long long 
long repeatedString(string s,long n){
    ll x=s.size();
    ll count=0;
    for(ll i=0; i<x; i++){
        if(s[i]=='a'){
            count++;
        }
    }
    ll a=n/x;
    ll b=n%x;
    count=count*a;
    for(ll i=0; i<b; i++){
        if(s[i]=='a'){
            count++;
        }
    }
    return count;
}
int main(){
    string s; cin>>s;
    ll n; cin>>n;
    
    //cout<<count<<endl;
    cout<<repeatedString(s,n)<<endl;
    
return 0;
}