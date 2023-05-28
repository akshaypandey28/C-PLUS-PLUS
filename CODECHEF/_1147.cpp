#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	long long t; cin>>t;
	while(t--){
		long long n,k; cin>>n>>k;
		long long cost=0;
		while(n--){
		    long long T,D; cin>>T>>D;
		    if(T<=k){
		        k=k-T;
		    }
		    else{
		        T=T-k;
		        cost=(T*D) + cost;
		    }
		}
        cout<<cost<<endl;
	}
return 0;
}