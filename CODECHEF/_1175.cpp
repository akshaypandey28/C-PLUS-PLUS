/* #include<iostream> //correct code but TLE
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<numeric>
using namespace std;
int main(){
	long long t; cin>>t;
	while(t--){
		long long n; cin>>n;
		vector<long long> v(n);
		for(long long i=0; i<n; i++){
		    cin>>v[i];
		}
        long long maxi=v[n-1];

		vector<long long> freq(maxi+1,0);
		for(long long i=0; i<n; i++){
		    freq[v[i]]++;
		}
        vector<long long> b(n,0);
        for(long long i=0; i<n; i++){
            b[i]=accumulate(freq.begin()+(v[i]+1) ,freq.end(),0);
        }
        for(long long i=0; i<n; i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
		
	}
	
return 0;
} */

#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<numeric>
using namespace std;
int main(){
	long long t; cin>>t;
	while(t--){
		long long n; cin>>n;
		vector<long long> v(n);
		for(long long i=0; i<n; i++){
		    cin>>v[i];
		}
        vector<long long> b(n,0);
        for(long long i=0; i<n-1; i++){
            int count=0;
            for(long long j=i+1; j<n; j++){
                if(v[i]!=v[j]){
                    count=count+(n-j);
                    break;
                }
            }
            b[i]=count;
        }
        for(long long i=0; i<n; i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
	}
	
return 0;
}