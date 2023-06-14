#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        string a="";
        
        for(int i=0; i<n; i++){
            char x=s[i];
            a.push_back(s[i]);
            //i++;
            while(s[++i]!=x){
                continue;
            }
        }
        cout<<a<<endl;
    }
return 0;
}