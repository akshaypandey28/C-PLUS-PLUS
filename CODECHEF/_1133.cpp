#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	        int n,x; cin>>n>>x;
	        vector<int> a(n);
	        for(int i=0; i<n; i++){
	            cin>>a[i];
	        }
        int sum=0;
        sum=accumulate(a.begin(), a.end(),sum);
        //cout<<sum<<endl;
        sort(a.begin(),a.end());
        int count_1=sum/x;
        int value_at_0=a[0];
        int count_2=(sum-value_at_0)/x;
        //cout<<count_1<<" "<<count_2<<endl;
        if(count_1==count_2){
            cout<<-1<<endl;
        }
        else{
            cout<<count_1<<endl;
        }

	        
	}
	return 0;
}
