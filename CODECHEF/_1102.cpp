#include <iostream>
#include<vector>
#include<bits/stdc++.h>
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
	    vector<int> win(n);
	    for(int i=0; i<n; i++){
	        win[i]=(a[i]*20) - (b[i]*10);
            //cout<<win[i]<<" ";
	        if(win[i]<0){
	            win[i]=0;
	        }
	    }
	    sort(win.begin(),win.end());
        //for(auto ele:win){
          //  cout<<ele<<" ";
        //}cout<<endl;
	    cout<<win[win.size()-1]<<endl;
	}
	return 0;
}
