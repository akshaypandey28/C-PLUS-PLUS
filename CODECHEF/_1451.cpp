#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	int t; cin>>t;
    while(t--){
       // your code goes here
       int n,m; cin>>n>>m;
       int count=0;
       int maxi_1=0;
       int maxi_2=0;
       while(n--){
        maxi_1=0;
        maxi_2=0;
           string str; cin>>str;
           string s=string(str.rbegin(),str.rend());
           if(s==str){
               continue;
           }
           else{
               string s=""; //for RGRG...
               string a=""; //for GRGR...
               for(int i=0; i<m; i++){
                   if(i%2==0){
                       s.push_back('R');  }
                   else{
                       s.push_back('G'); }
                   if(i%2==0){
                       a.push_back('G'); }
                   else{
                       a.push_back('R');  }
               }
             // cout<<s<<"   "<<a<<endl;
               for(int i=0; i<m; i++){
                   if(str[i]!=s[i]){
                       if(s[i]=='G'){
                           maxi_1+=5;  }
                       else{
                           maxi_1+=3; }  }
                   if(str[i]!=a[i]){
                       if(a[i]=='G'){
                           maxi_2+=5; }
                       else{
                           maxi_2+=3;  }  }
               }
             // cout<<maxi_1<<"   "<<maxi_2<<endl;
               maxi_1=min(maxi_1,maxi_2);
           }
           count=count+maxi_1;
       }
       cout<<count<<endl;
        
    }
return 0;
}