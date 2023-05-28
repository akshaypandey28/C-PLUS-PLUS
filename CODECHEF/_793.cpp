#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	for(int i=1;i<=t; i++){
	    int n; cin>>n;
	    vector<int> v(n);
	    for(int j=0; j<n; j++){
	        cin>>v[j];
	    }
	    //int maxi=v[0];
	    int degree=0;
	    for(int j=0; j<n; j++ ){
	        if(v[j]!=0){
	            //maxi=v[j];
	            degree=j;   }
	    }
	    cout<<degree<<endl;
	}
	return 0;
}
