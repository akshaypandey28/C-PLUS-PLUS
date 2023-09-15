#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	int t; cin>>t;
    while(t--){
       // your code goes here
       int n; cin>>n;
       string s; cin>>s;
       string t; cin>>t;
       string u;  cin>>u;
      int x=s[0],y=t[0];
         int b=abs(x-y);
      // cout<<b<<endl;
       for(int i=0; i<n; i++){
         
           int a=abs(u[i]+b);
           //cout<<a<<endl;
           if(a>122){
            a=a%122;
            char d=97+(a)-1;
           u[i]=d;
           }
           else{
            char d=u[i]+(b);
           u[i]=d;
           }
       }
       cout<<u<<endl;
        
   }
return 0;
}