#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int> a(n);
	    vector<int> b(n);
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    for(int i=0; i<n; i++){
	        cin>>b[i];
	    }
	    int idx=1;
	    int maxi=a[0];
	    bool flag=true;
	   if(flag==true) {
	       for(int i=1; i<n; i++){
	       if(a[i]!=maxi && maxi<a[i]) {
	           maxi=a[i];
	           idx=i+1;                 }
	       else if((maxi==a[i]) || (maxi==a[i] &&  idx==1)){
	           flag=false;
	           break; }
	                                }
	                }
	  if(flag==false){
	      int maxi1=b[0];
	      int idx2=1;
	      for(int i=1; i<n; i++){
	       if(maxi1<b[i]) {
	           maxi1=b[i];
	           idx2=i+1;  }
	                              }
	       idx=idx2;
	     }
	    
	     cout<<idx<<endl;
	}
	return 0;
}
