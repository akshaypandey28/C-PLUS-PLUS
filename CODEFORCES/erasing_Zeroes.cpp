#include<bits/stdc++.h>
using namespace std;
int main(){
   int t; cin>>t;
   while(t--){
     string s; cin>>s;
    int count =0;
    int a=0;
    bool flag=true;
    int j=0;
    while(s[j]!='1'){
        j++;
    }
    for(int i=j; i<s.size(); i++){
        if(s[i]=='0'){
            a++;
            flag=false;
        }
        else{
            flag=true;
            count=count+a;
            a=0;
        }
    }
    cout<<count<<endl;
   }
return 0;
}