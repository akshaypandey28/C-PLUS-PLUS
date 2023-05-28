#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	   long long int maxi=-1;
	    while(n--){
	       long long int x; cin>>x;
	       maxi=max(maxi,x);
	        
	    }
	    cout<<maxi<<endl;
    }
	return 0;
}
