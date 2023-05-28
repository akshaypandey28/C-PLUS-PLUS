#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int> a(n);
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    vector<int> b;
	    
	    for(int i=0; i<n-1; i++){
	        int count=0;
	        if(a[i+1]-a[i]<=2){
	            while( i<n && a[i+1]-a[i]<=2 ){
	                count++;
	                i++;      }
	        }
	        if(a[i+1]-a[i]>2){
	                count++;
	        }
	        b.push_back(count);
	    }
	    sort(b.begin(),b.end());
        // for(auto ele:b){
        //     cout<<ele<<" ";
        // }
        // cout<<endl;
	    cout<<b[0]<<" "<<b[b.size()-1]<<endl;
	}
	return 0;
}
