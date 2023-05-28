#include<iostream>
#include<cmath>
#include<vector>
#include<numeric>
using namespace std;
int main(){
	long long t; cin>>t;
	while(t--){
		long long n; cin>>n;
		vector<long long> b(n);
        for(long long i=0; i<n; i++){
            cin>>b[i];
        }
        long long sum=(accumulate(b.begin(),b.end(),0))/(n+1);
        vector<long long> a(n);
        for(long long i=0; i<n; i++){
            a[i]=abs(sum-b[i]);
        }
        for(long long i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
	}
	
return 0;
}