#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
	for(int i=1; i<=t; i++){
	    int n; cin>>n;
	    int array[n];
	    for(int j=0; j<n; j++){
	        cin>>array[j];     }
	    int max=array[0];    
	    for(int idx=1;idx<n;idx++){
	        if(max<array[idx]){
	            max=array[idx];  }    }
	    vector<int> freq(max+1,0);
	    for(int j=0; j<n; j++){
	        freq[array[j]]++;    }
	    int maxi=freq[0];
        int location=0;   
	    for(int k=1; k<freq.size(); k++){
	        if(maxi<=freq[k]){
	            maxi=freq[k];
                location=k;
}}
freq[location]=0;
        int ans=0;
        for( int l=1;l<max+1;l++){
                ans+=freq[l];
        }
        cout<<ans<<"\n";
	}
return 0;
}