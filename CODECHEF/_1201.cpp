#include <iostream>
#include<vector>
#include<bitset>
using namespace std;

int main() {
	// your code goes here
	long long t; cin>>t;
	while(t--){
	    long long n,y; cin>>n>>y;
        long long c=0;
	    vector<long long> a(n);
	    for(int i=0; i<n; i++){
	        cin>>a[i];
            c=c|a[i];
	    }
        for(int i=0; i<=INT64_MAX; i++){
            int b=c|i;
            if(b==y){
                cout<<i<<endl;
                break;
            }
            else if(b>y){
                cout<<-1<<endl;
                break;
            }
        }

	    
	}
	return 0;
}
