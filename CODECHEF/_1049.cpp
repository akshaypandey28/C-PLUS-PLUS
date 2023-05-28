#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	//int t; cin>>t;
	//while(t--){
	    int n; cin>>n;
	    vector<int> v(n);
	    for(int i=0; i<n; i++){
	        cin>>v[i];
	    }
	    int idx_1=0;
	    int idx_n=0;
	    for(int i=0; i<n; i++){
	        if(v[i]==1){
	            idx_1=i;
	        }
	        if(v[i]==n){
	            idx_n=i;
	        }
	    }
        cout<<idx_1<<" "<<idx_n<<endl;
	    int count=0;
	    if(v[0]==1 && v[n-1]==n){
	        cout<<0<<endl;
	    }
	    else if(idx_1<idx_n){
	        count=idx_1+n-1-idx_n+count;
	        cout<<count<<endl;
	    }
	    else{
	        while(idx_n<idx_1){
	            swap(v[idx_1],v[idx_1 -1]);
                for(int i=0; i<n;i++){
                    cout<<v[i]<<" ";
                }
                cout<<endl;
	            idx_1--;
	            count++;
	        }
            idx_n=idx_n+1;
	        count=count+idx_1+n-1-idx_n;
	        cout<<count<<endl;
	    }
	    
	//}
	return 0;
}
