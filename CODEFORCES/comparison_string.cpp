#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        set<int> s;
        int count=0;
        int ans=2;
        for(int i=0; i<n; i++){
            if(s[i]=='>'){
                count++;
            }
            else{
                ans=max(ans,count);
                count=0;
            }
        }
        ans=max(ans,count);
        cout<<ans+1<<endl;
    }
return 0;
}