#include <iostream>
#define long long int ll
#include<vector>
using namespace std;

int main() {
	// your code goes here
	ll t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int> v;
	    for(int i=0; i<n; i++){
	        int x; cin>>x;
            v.push_back(x);
	    } 
	    for(int i=0; i<v.size()-1; i++){
	        if(v[i]==v[i+1]){
	            v.erase(v.begin()+i);
	            i--;
	        }
	    }

	   cout<<v.size()<<endl;
	}
	return 0;
}
