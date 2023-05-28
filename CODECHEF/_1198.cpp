#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<vector<int>> v(n,vector<int> (n));
	    for(int i=0; i<n; i++){
	        for(int j=0; j<n; j++){
	            cin>>v[i][j];
	        }
	    }
		vector<int> a;
		for(int i=0; i<n; i++){
			int ith=i; 
			int count=0;
			for(int j=0; j<n; j++){
				ith=i;
				int k=0;
				int sum=0;
				while(ith<n-count){
					sum=sum+v[ith][k];
					k++; ith++;
				}
				count++;
				a.push_back(sum);
		    }
			count=0;
			for(int j=0; j<n; j++){
				ith=i;
				int k=j;
				int sum=0;
				while(ith<n-count){
					sum=sum+v[ith][k];
					k++; ith++;
				}
				count++;
				a.push_back(sum);
		    }
	    }
		//cout<<a.size()<<endl;
		sort(a.begin(),a.end());
		cout<<a[a.size()-1]<<endl;
	}
	return 0;
}
