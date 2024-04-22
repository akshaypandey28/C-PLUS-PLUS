#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        string x,s; cin>>x>>s;
        //if(x.find(s)!=1) cout<<1<<endl;
        int ans=0;
        int found=x.find(s);
        while(found<0){
            x+=x;
            ans++;
            found=x.find(s);
            if(found<0 and x.size() > s.size()){
                x+=x;
                found=x.find(s);
                if(found>=0) ans++;
                else {
                    ans=-1;
                    break;
                }
            } 
        }
        cout<<ans<<endl;
    }
return 0;
}