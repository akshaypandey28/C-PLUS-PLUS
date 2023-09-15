#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	ll n,m; cin>>n>>m;
	while(m--){
	    ll q; cin>>q;
	    if(q<(n+2)){
	        cout<<0<<endl;
	    }
	    else {
	        ll l=n+2,r=3*n;
	        //middle element freq is == n
	        ll mid=l + (r-l)/2;
	        ll freq_q=abs(mid-q);
	        cout<<(n-freq_q)<<endl;
	    }
	}
return 0;
}