#include<bits/stdc++.h>
using namespace std;
int main(){
	// int t; cin>>t;
    // while(t--){
        
    // }
    int n; cin>>n;
    vector<int> a(n);
    int maxi=INT32_MIN;
    int mini=INT32_MAX;
    int k=0;
  //  int main_max_index=-1;
    int j=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(maxi<a[i]){
            maxi=a[i];
            j=i;
        }
        if(mini>=a[i]){
            mini=a[i];
            k=i;
        }
    }
  //cout<<k<<"  "<<j<<endl;
    int count=0;
    if(j<k){
        cout<<j+(n-k-1)<<endl;
    }
    else{
        while(k<j){
            k++;
            count++;
        }
        cout<<count+(j-1)+(n-1-k)<<endl;
    }

return 0;
}