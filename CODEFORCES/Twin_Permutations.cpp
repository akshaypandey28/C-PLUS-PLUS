#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++) {
            cin>>nums[i];
            nums[i]=n+1 - nums[i];
        }
        for(int i=0; i<n; i++) cout<<nums[i]<<" ";
        cout<<endl;
    }
return 0;
}