#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        int a=0,b=1;
        if(!is_sorted(v.begin(),v.end())) cout<<0<<endl;
        else{
            int val=v[b]-v[a];
            for(int i=2; i<n; i++){
                if(v[i]-v[i-1]<val){
                    val=v[i]-v[i-1];
                    a=i-1;
                    b=i;
                }
            }
            int mid=(v[b]+v[a])/2;
            cout<<mid-v[a]+1<<endl;
        }
    }
return 0;
}