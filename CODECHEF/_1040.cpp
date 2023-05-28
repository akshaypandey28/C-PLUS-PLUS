#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n,m; cin>>n>>m;
	    int result=__gcd(n,m);
	    cout<<result<<endl;
	}
	return 0;
}
