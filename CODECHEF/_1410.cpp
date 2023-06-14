#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        long long n,m; cin>>n>>m;
        long long x=(n/2)*((m%2)+(m/2));
        long long y=(m/2)*((n%2)+(n/2));
        long long pairs=(x)+(y);
        long long gcdi=__gcd(pairs,(n*m));
        cout<<x<<"  "<<y<<"  "<<gcdi<<"   "<<pairs<<endl;
        
    }
return 0;
}