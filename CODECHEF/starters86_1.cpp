#include <iostream>
#include<vector> 
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int> v(n);
	    bool flag=false;
	    int count=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
	    for(int i=0; i<n-1; i++){
	        for(int j=i+1; j<n; j++){
	            if(v[i]>v[j]){
	                count=count+1;
	                flag=true;
                    cout<<count<<" ";
	            }
	        }
	    }
        cout<<endl;
	    if(flag==true){
	        cout<<count-1<<endl;
	    }
	    else{
	        cout<<pow(2,n)-1<<endl;
	    }
	}
	return 0;
}
