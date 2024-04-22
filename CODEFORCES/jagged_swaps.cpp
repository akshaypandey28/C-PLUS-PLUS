#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n+1);
        for(int i=1; i<n+1; i++) cin>>v[i];
        if(v[1]!=1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
return 0;
}