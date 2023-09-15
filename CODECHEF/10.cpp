#include<bits/stdc++.h>
using namespace std;
int bit(int a,int b){
    int c=a&b;
    return c;
}
void biti(vector<int> &a,int b,int n,int i,vector<int> c,string &s){
    if(i==n){
       int ans=c[i];
       if(c.size()>1){for(int i=1; i<c.size(); i++){
            ans=ans&c[i];
        }}
        if(ans==b){
        s="YES";}
        return ;
    }
    if(i>n){
        return ;
    }
    //int digit=a[i];
    c.push_back(a[i]);
    biti(a,b,n,i+1,c,s);
    c.pop_back();
    //biti(s,b,n,i+1,sum&digit);
    biti(a,b,n,i+1,c,s);
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,b; cin>>n>>b;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        string s="NO";
        sort(a.rbegin(),a.rend());
        // for(int i=0; i<n-1; i++){
        //     for(int j=i; j<n; j++){
        //     if(bit(a[i],a[j])==b){
        //        // cout<<"YES"<<endl;
        //        s="YES";
        //         break;
        //     }
        //     }
        //     if(s=="YES"){
        //         break;
        //     }
        // }
        vector<int> c;
        biti(a,b,n,0,c,s);
        cout<<s<<endl;
        
        
    }
return 0;
}